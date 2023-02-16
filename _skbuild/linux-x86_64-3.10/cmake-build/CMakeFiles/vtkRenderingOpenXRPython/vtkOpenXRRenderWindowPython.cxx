// python wrapper for vtkOpenXRRenderWindow
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkEventData.h"
#include "vtkOpenXRRenderWindow.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOpenXRRenderWindow(PyObject *dict); }
extern "C" { PyObject *PyvtkOpenXRRenderWindow_ClassNew(); }


static PyObject *
PyvtkOpenXRRenderWindow_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOpenXRRenderWindow::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenXRRenderWindow_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenXRRenderWindow *op = static_cast<vtkOpenXRRenderWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenXRRenderWindow::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenXRRenderWindow_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOpenXRRenderWindow *tempr = vtkOpenXRRenderWindow::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenXRRenderWindow_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenXRRenderWindow *op = static_cast<vtkOpenXRRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenXRRenderWindow *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenXRRenderWindow::NewInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
      if (result && PyVTKObject_Check(result))
      {
        PyVTKObject_GetObject(result)->UnRegister(nullptr);
        PyVTKObject_SetFlag(result, VTK_PYTHON_IGNORE_UNREGISTER, 1);
      }
    }
    else if (tempr != nullptr)
    {
      ap.DeleteVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenXRRenderWindow_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkOpenXRRenderWindow::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenXRRenderWindow_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenXRRenderWindow *op = static_cast<vtkOpenXRRenderWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkOpenXRRenderWindow::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenXRRenderWindow_MakeRenderWindowInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeRenderWindowInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenXRRenderWindow *op = static_cast<vtkOpenXRRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindowInteractor *tempr = (ap.IsBound() ?
      op->MakeRenderWindowInteractor() :
      op->vtkOpenXRRenderWindow::MakeRenderWindowInteractor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
      if (result && PyVTKObject_Check(result))
      {
        PyVTKObject_GetObject(result)->UnRegister(nullptr);
        PyVTKObject_SetFlag(result, VTK_PYTHON_IGNORE_UNREGISTER, 1);
      }
    }
    else if (tempr != nullptr)
    {
      ap.DeleteVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenXRRenderWindow_AddRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenXRRenderWindow *op = static_cast<vtkOpenXRRenderWindow *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->AddRenderer(temp0);
    }
    else
    {
      op->vtkOpenXRRenderWindow::AddRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenXRRenderWindow_StereoUpdate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StereoUpdate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenXRRenderWindow *op = static_cast<vtkOpenXRRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StereoUpdate();
    }
    else
    {
      op->vtkOpenXRRenderWindow::StereoUpdate();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenXRRenderWindow_StereoMidpoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StereoMidpoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenXRRenderWindow *op = static_cast<vtkOpenXRRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StereoMidpoint();
    }
    else
    {
      op->vtkOpenXRRenderWindow::StereoMidpoint();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenXRRenderWindow_StereoRenderComplete(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StereoRenderComplete");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenXRRenderWindow *op = static_cast<vtkOpenXRRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StereoRenderComplete();
    }
    else
    {
      op->vtkOpenXRRenderWindow::StereoRenderComplete();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenXRRenderWindow_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenXRRenderWindow *op = static_cast<vtkOpenXRRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Render();
    }
    else
    {
      op->vtkOpenXRRenderWindow::Render();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenXRRenderWindow_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenXRRenderWindow *op = static_cast<vtkOpenXRRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkOpenXRRenderWindow::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenXRRenderWindow_Finalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenXRRenderWindow *op = static_cast<vtkOpenXRRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Finalize();
    }
    else
    {
      op->vtkOpenXRRenderWindow::Finalize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenXRRenderWindow_ReportCapabilities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReportCapabilities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenXRRenderWindow *op = static_cast<vtkOpenXRRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->ReportCapabilities() :
      op->vtkOpenXRRenderWindow::ReportCapabilities());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenXRRenderWindow_GetSizeFromAPI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSizeFromAPI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenXRRenderWindow *op = static_cast<vtkOpenXRRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSizeFromAPI() :
      op->vtkOpenXRRenderWindow::GetSizeFromAPI());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenXRRenderWindow_GetEventPending(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEventPending");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenXRRenderWindow *op = static_cast<vtkOpenXRRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEventPending() :
      op->vtkOpenXRRenderWindow::GetEventPending());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenXRRenderWindow_SetModelActiveState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelActiveState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenXRRenderWindow *op = static_cast<vtkOpenXRRenderWindow *>(vp);

  int temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetModelActiveState(temp0, temp1);
    }
    else
    {
      op->vtkOpenXRRenderWindow::SetModelActiveState(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenXRRenderWindow_UpdateHMDMatrixPose(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateHMDMatrixPose");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenXRRenderWindow *op = static_cast<vtkOpenXRRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateHMDMatrixPose();
    }
    else
    {
      op->vtkOpenXRRenderWindow::UpdateHMDMatrixPose();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenXRRenderWindow_Methods[] = {
  {"IsTypeOf", PyvtkOpenXRRenderWindow_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOpenXRRenderWindow_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOpenXRRenderWindow_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkOpenXRRenderWindow\nC++: static vtkOpenXRRenderWindow *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOpenXRRenderWindow_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkOpenXRRenderWindow\nC++: vtkOpenXRRenderWindow *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkOpenXRRenderWindow_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkOpenXRRenderWindow_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"MakeRenderWindowInteractor", PyvtkOpenXRRenderWindow_MakeRenderWindowInteractor, METH_VARARGS,
   "MakeRenderWindowInteractor(self) -> vtkRenderWindowInteractor\nC++: vtkRenderWindowInteractor *MakeRenderWindowInteractor()\n    override;\n\nCreate an interactor to control renderers in this window.\n"},
  {"AddRenderer", PyvtkOpenXRRenderWindow_AddRenderer, METH_VARARGS,
   "AddRenderer(self, __a:vtkRenderer) -> None\nC++: void AddRenderer(vtkRenderer *) override;\n\nAdd a renderer to the list of renderers.\n"},
  {"StereoUpdate", PyvtkOpenXRRenderWindow_StereoUpdate, METH_VARARGS,
   "StereoUpdate(self) -> None\nC++: void StereoUpdate() override;\n\nUpdate the system, if needed, due to stereo rendering. For some\nstereo methods, subclasses might need to switch some hardware\nsettings here.\n"},
  {"StereoMidpoint", PyvtkOpenXRRenderWindow_StereoMidpoint, METH_VARARGS,
   "StereoMidpoint(self) -> None\nC++: void StereoMidpoint() override;\n\nIntermediate method performs operations required between the\nrendering of the left and right eye.\n"},
  {"StereoRenderComplete", PyvtkOpenXRRenderWindow_StereoRenderComplete, METH_VARARGS,
   "StereoRenderComplete(self) -> None\nC++: void StereoRenderComplete() override;\n\nHandles work required once both views have been rendered when\nusing stereo rendering.\n"},
  {"Render", PyvtkOpenXRRenderWindow_Render, METH_VARARGS,
   "Render(self) -> None\nC++: void Render() override;\n\nOverridden to not release resources that would interfere with an\nexternal application's rendering. Avoiding round trip.\n"},
  {"Initialize", PyvtkOpenXRRenderWindow_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: void Initialize() override;\n\nInitialize the rendering window.  This will setup all\nsystem-specific resources.  This method and Finalize() must be\nsymmetric and it should be possible to call them multiple times,\neven changing WindowId in-between.  This is what WindowRemap\ndoes.\n"},
  {"Finalize", PyvtkOpenXRRenderWindow_Finalize, METH_VARARGS,
   "Finalize(self) -> None\nC++: void Finalize() override;\n\nFinalize the rendering window.  This will shutdown all\nsystem-specific resources.  After having called this, it should\nbe possible to destroy a window that was used for a SetWindowId()\ncall without any ill effects.\n"},
  {"ReportCapabilities", PyvtkOpenXRRenderWindow_ReportCapabilities, METH_VARARGS,
   "ReportCapabilities(self) -> str\nC++: const char *ReportCapabilities() override;\n\nGet report of capabilities for the render window\n"},
  {"GetSizeFromAPI", PyvtkOpenXRRenderWindow_GetSizeFromAPI, METH_VARARGS,
   "GetSizeFromAPI(self) -> bool\nC++: bool GetSizeFromAPI() override;\n\nGet size of render window from OpenXR.\n"},
  {"GetEventPending", PyvtkOpenXRRenderWindow_GetEventPending, METH_VARARGS,
   "GetEventPending(self) -> int\nC++: vtkTypeBool GetEventPending() override;\n\nCheck to see if a mouse button has been pressed or mouse wheel\nactivated. All other events are ignored by this method. Maybe\nshould return 1 always?\n"},
  {"SetModelActiveState", PyvtkOpenXRRenderWindow_SetModelActiveState, METH_VARARGS,
   "SetModelActiveState(self, hand:int, state:bool) -> None\nC++: void SetModelActiveState(const int hand, bool state)\n\nSet the active state (active: true / inactive: false) of the\nspecified hand.\n"},
  {"UpdateHMDMatrixPose", PyvtkOpenXRRenderWindow_UpdateHMDMatrixPose, METH_VARARGS,
   "UpdateHMDMatrixPose(self) -> None\nC++: void UpdateHMDMatrixPose() override;\n\nUpdate the HMD pose based on hardware pose and physical to world\ntransform. VR camera properties are directly modified based on\nphysical to world to simulate \\sa PhysicalTranslation, \\sa\nPhysicalScale, etc.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkOpenXRRenderWindow_Doc =
  "vtkOpenXRRenderWindow - OpenXR rendering window\n\n"
  "Superclass: vtkVRRenderWindow\n\n"
  "vtkOpenXRRenderWindow is a concrete implementation of the abstract\n"
  "class vtkRenderWindow.\n\n"
  "This class and its similar classes are designed to be drop in\n"
  "replacements for VTK. If you link to this module and turn on the\n"
  "CMake option VTK_OPENXR_OBJECT_FACTORY, the object factory mechanism\n"
  "should replace the core rendering classes such as RenderWindow with\n"
  "OpenXR specialized versions. The goal is for VTK programs to be able\n"
  "to use the OpenXR library with little to no changes.\n\n"
  "This class handles the bulk of interfacing to OpenXR. It supports one\n"
  "renderer currently. The renderer is assumed to cover the entire\n"
  "window which is what makes sense to VR. Overlay renderers can\n"
  "probably be made to work with this but consider how overlays will\n"
  "appear in a HMD if they do not track the viewpoint etc.\n\n"
  "OpenXR provides HMD and controller positions in \"Physical\" coordinate\n"
  "system. Origin: user's eye position at the time of calibration. Axis\n"
  "directions: x = user's right; y = user's up; z = user's back. Unit:\n"
  "meter.\n\n"
  "Renderer shows actors in World coordinate system. Transformation\n"
  "between Physical and World coordinate systems is defined by\n"
  "PhysicalToWorldMatrix. This matrix determines the user's position and\n"
  "orientation in the rendered scene and scaling (magnification) of\n"
  "rendered actors.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOpenXRRenderWindow_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenXR.vtkOpenXRRenderWindow", // tp_name
  sizeof(PyVTKObject), // tp_basicsize
  0, // tp_itemsize
  PyVTKObject_Delete, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  PyVTKObject_String, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  PyObject_GenericSetAttr, // tp_setattro
  &PyVTKObject_AsBuffer, // tp_as_buffer
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC|Py_TPFLAGS_BASETYPE, // tp_flags
  PyvtkOpenXRRenderWindow_Doc, // tp_doc
  PyVTKObject_Traverse, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  offsetof(PyVTKObject, vtk_weakreflist), // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  PyVTKObject_GetSet, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  offsetof(PyVTKObject, vtk_dict), // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyVTKObject_New, // tp_new
  PyObject_GC_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static vtkObjectBase *PyvtkOpenXRRenderWindow_StaticNew()
{
  return vtkOpenXRRenderWindow::New();
}

PyObject *PyvtkOpenXRRenderWindow_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkOpenXRRenderWindow_Type, PyvtkOpenXRRenderWindow_Methods,
    "vtkOpenXRRenderWindow",
 &PyvtkOpenXRRenderWindow_StaticNew);

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#ifndef VTK_PY3K
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkVRRenderWindow");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOpenXRRenderWindow(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenXRRenderWindow_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenXRRenderWindow", o) != 0)
  {
    Py_DECREF(o);
  }

}

