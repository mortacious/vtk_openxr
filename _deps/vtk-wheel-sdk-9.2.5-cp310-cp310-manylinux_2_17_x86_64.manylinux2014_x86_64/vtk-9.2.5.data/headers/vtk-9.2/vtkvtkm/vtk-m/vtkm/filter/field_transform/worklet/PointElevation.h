//============================================================================
//  Copyright (c) Kitware, Inc.
//  All rights reserved.
//  See LICENSE.txt for details.
//
//  This software is distributed WITHOUT ANY WARRANTY; without even
//  the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
//  PURPOSE.  See the above copyright notice for more information.
//============================================================================

#ifndef vtk_m_worklet_PointElevation_h
#define vtk_m_worklet_PointElevation_h

#include <vtkm/worklet/WorkletMapField.h>

#include <vtkm/Math.h>

namespace vtkm
{
namespace worklet
{

namespace internal
{

template <typename T>
VTKM_EXEC T clamp(const T& val, const T& min, const T& max)
{
  return vtkm::Min(max, vtkm::Max(min, val));
}
}

class PointElevation : public vtkm::worklet::WorkletMapField
{
public:
  using ControlSignature = void(FieldIn, FieldOut);
  using ExecutionSignature = _2(_1);

  VTKM_CONT
  PointElevation(const vtkm::Vec3f_64& lp,
                 const vtkm::Vec3f_64& hp,
                 vtkm::Float64 low,
                 vtkm::Float64 hi)
    : LowPoint(lp)
    , HighPoint(hp)
    , RangeLow(low)
    , RangeHigh(hi)
  {
  }

  VTKM_EXEC
  vtkm::Float64 operator()(const vtkm::Vec3f_64& vec) const
  {
    vtkm::Vec3f_64 direction = this->HighPoint - this->LowPoint;
    vtkm::Float64 lengthSqr = vtkm::Dot(direction, direction);
    vtkm::Float64 rangeLength = this->RangeHigh - this->RangeLow;
    vtkm::Float64 s = vtkm::Dot(vec - this->LowPoint, direction) / lengthSqr;
    s = internal::clamp(s, 0.0, 1.0);
    return this->RangeLow + (s * rangeLength);
  }

  template <typename T>
  VTKM_EXEC vtkm::Float64 operator()(const vtkm::Vec<T, 3>& vec) const
  {
    return (*this)(vtkm::make_Vec(static_cast<vtkm::Float64>(vec[0]),
                                  static_cast<vtkm::Float64>(vec[1]),
                                  static_cast<vtkm::Float64>(vec[2])));
  }

private:
  const vtkm::Vec3f_64 LowPoint, HighPoint;
  const vtkm::Float64 RangeLow, RangeHigh;
};
}
} // namespace vtkm::worklet

#endif // vtk_m_worklet_PointElevation_h
