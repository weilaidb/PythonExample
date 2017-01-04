#define Py_PYTHON_H
#define WITH_CYCLE_GC 1
#error "Something's broken.  UCHAR_MAX should be defined in limits.h."
#if UCHAR_MAX != 255
#error "Python's source code assumes C's unsigned char is an 8-bit type."
#if defined(__sgi) && defined(WITH_THREAD) && !defined(_SGI_MP_SOURCE)
#define _SGI_MP_SOURCE
#   error "Python.h requires that stdio.h define NULL."
#define DL_IMPORT(RTYPE) RTYPE
#define DL_EXPORT(RTYPE) RTYPE
#if defined(Py_DEBUG) && defined(WITH_PYMALLOC) && !defined(PYMALLOC_DEBUG)
#define PYMALLOC_DEBUG
#if defined(PYMALLOC_DEBUG) && !defined(WITH_PYMALLOC)
#error "PYMALLOC_DEBUG requires WITH_PYMALLOC"
PyAPI_FUNC(PyObject*) _Py_Mangle(PyObject *p, PyObject *name);
#define PyArg_GetInt(v, a)	PyArg_Parse((v), "i", (a))
#define PyArg_NoArgs(v)		PyArg_Parse(v, "")
#define Py_CHARMASK(c)		((unsigned char)((c) & 0xff))
#define Py_single_input 256
#define Py_file_input 257
#define Py_eval_input 258
#define PyDoc_VAR(name) static char name[]
#define PyDoc_STRVAR(name,str) PyDoc_VAR(name) = PyDoc_STR(str)
#define PyDoc_STR(str) str
#define PyDoc_STR(str) ""
