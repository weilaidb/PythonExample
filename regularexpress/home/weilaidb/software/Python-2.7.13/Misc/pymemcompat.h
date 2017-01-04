#define Py_PYMEMCOMPAT_H
#if PY_VERSION_HEX < 0x01060000
#define PyObject_Malloc		PyMem_Malloc
#define PyObject_Realloc	PyMem_Realloc
#define PyObject_Free		PyMem_Free
#define PyObject_New		PyObject_NEW
#define PyObject_NewVar		PyObject_NEW_VAR
#define PyObject_Del		PyMem_Free
#if PY_VERSION_HEX < 0x020200B1
#define PyObject_GC_New         PyObject_New
#define PyObject_GC_NewVar      PyObject_NewVar
#define PyObject_GC_Del         PyObject_Del
#define PyObject_GC_Track(op)
#define PyObject_GC_UnTrack(op)
