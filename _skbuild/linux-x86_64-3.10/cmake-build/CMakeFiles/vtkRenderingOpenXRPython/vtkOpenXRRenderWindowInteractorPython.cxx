// python wrapper for vtkOpenXRRenderWindowInteractor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkOpenXRRenderWindowInteractor.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOpenXRRenderWindowInteractor(PyObject *dict); }
extern "C" { PyObject *PyvtkOpenXRRenderWindowInteractor_ClassNew(); }


static PyObject *
PyvtkOpenXRRenderWindowInteractor_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOpenXRRenderWindowInteractor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenXRRenderWindowInteractor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenXRRenderWindowInteractor *op = static_cast<vtkOpenXRRenderWindowInteractor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenXRRenderWindowInteractor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenXRRenderWindowInteractor_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOpenXRRenderWindowInteractor *tempr = vtkOpenXRRenderWindowInteractor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenXRRenderWindowInteractor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenXRRenderWindowInteractor *op = static_cast<vtkOpenXRRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenXRRenderWindowInteractor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenXRRenderWindowInteractor::NewInstance());

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
PyvtkOpenXRRenderWindowInteractor_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkOpenXRRenderWindowInteractor::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenXRRenderWindowInteractor_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenXRRenderWindowInteractor *op = static_cast<vtkOpenXRRenderWindowInteractor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkOpenXRRenderWindowInteractor::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenXRRenderWindowInteractor_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenXRRenderWindowInteractor *op = static_cast<vtkOpenXRRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkOpenXRRenderWindowInteractor::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenXRRenderWindowInteractor_DoOneEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DoOneEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenXRRenderWindowInteractor *op = static_cast<vtkOpenXRRenderWindowInteractor *>(vp);

  vtkVRRenderWindow *temp0 = nullptr;
  vtkRenderer *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkVRRenderWindow") &&
      ap.GetVTKObject(temp1, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->DoOneEvent(temp0, temp1);
    }
    else
    {
      op->vtkOpenXRRenderWindowInteractor::DoOneEvent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenXRRenderWindowInteractor_AddAction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddAction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenXRRenderWindowInteractor *op = static_cast<vtkOpenXRRenderWindowInteractor *>(vp);

  std::string temp0;
  vtkCommand::EventIds temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetEnumValue(temp1, "vtkCommand.EventIds"))
  {
    if (ap.IsBound())
    {
      op->AddAction(temp0, temp1);
    }
    else
    {
      op->vtkOpenXRRenderWindowInteractor::AddAction(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenXRRenderWindowInteractor_ApplyVibration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyVibration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenXRRenderWindowInteractor *op = static_cast<vtkOpenXRRenderWindowInteractor *>(vp);

  std::string temp0;
  int temp1;
  float temp2 = 0.5f;
  float temp3 = 25000000.0f;
  float temp4 = XR_FREQUENCY_UNSPECIFIED;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    bool tempr = (ap.IsBound() ?
      op->ApplyVibration(temp0, temp1, temp2, temp3, temp4) :
      op->vtkOpenXRRenderWindowInteractor::ApplyVibration(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenXRRenderWindowInteractor_Methods[] = {
  {"IsTypeOf", PyvtkOpenXRRenderWindowInteractor_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOpenXRRenderWindowInteractor_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOpenXRRenderWindowInteractor_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkOpenXRRenderWindowInteractor\nC++: static vtkOpenXRRenderWindowInteractor *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOpenXRRenderWindowInteractor_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkOpenXRRenderWindowInteractor\nC++: vtkOpenXRRenderWindowInteractor *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkOpenXRRenderWindowInteractor_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkOpenXRRenderWindowInteractor_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Initialize", PyvtkOpenXRRenderWindowInteractor_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: void Initialize() override;\n\nInitialize the event handler\n"},
  {"DoOneEvent", PyvtkOpenXRRenderWindowInteractor_DoOneEvent, METH_VARARGS,
   "DoOneEvent(self, renWin:vtkVRRenderWindow, ren:vtkRenderer)\n    -> None\nC++: void DoOneEvent(vtkVRRenderWindow *renWin, vtkRenderer *ren)\n    override;\n\nImplements the event loop.\n"},
  {"AddAction", PyvtkOpenXRRenderWindowInteractor_AddAction, METH_VARARGS,
   "AddAction(self, path:str, __b:vtkCommand.EventIds) -> None\nC++: void AddAction(const std::string &path,\n    const vtkCommand::EventIds &)\n\nAssign an event or std::function to an event path. Called by the\ninteractor style for specific actions\n"},
  {"ApplyVibration", PyvtkOpenXRRenderWindowInteractor_ApplyVibration, METH_VARARGS,
   "ApplyVibration(self, actionName:str, hand:int,\n    amplitude:float=0.5f, duration:float=25000000.0f,\n    frequency:float=...) -> bool\nC++: bool ApplyVibration(const std::string &actionName,\n    const int hand, const float amplitude=0.5f,\n    const float duration=25000000.0f,\n    const float frequency=XR_FREQUENCY_UNSPECIFIED)\n\nApply haptic vibration using the provided actionaction to emit\nvibration on hand to emit on amplitude 0.0 to 1.0.duration\nnanoseconds, default 25ms frequency (hz)\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkOpenXRRenderWindowInteractor_Doc =
  "vtkOpenXRRenderWindowInteractor - implements OpenXR specific\nfunctions required by vtkRenderWindowInteractor.\n\n"
  "Superclass: vtkVRRenderWindowInteractor\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOpenXRRenderWindowInteractor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenXR.vtkOpenXRRenderWindowInteractor", // tp_name
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
  PyvtkOpenXRRenderWindowInteractor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOpenXRRenderWindowInteractor_StaticNew()
{
  return vtkOpenXRRenderWindowInteractor::New();
}

PyObject *PyvtkOpenXRRenderWindowInteractor_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkOpenXRRenderWindowInteractor_Type, PyvtkOpenXRRenderWindowInteractor_Methods,
    "vtkOpenXRRenderWindowInteractor",
 &PyvtkOpenXRRenderWindowInteractor_StaticNew);

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#ifndef VTK_PY3K
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkVRRenderWindowInteractor");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOpenXRRenderWindowInteractor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenXRRenderWindowInteractor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenXRRenderWindowInteractor", o) != 0)
  {
    Py_DECREF(o);
  }

}

