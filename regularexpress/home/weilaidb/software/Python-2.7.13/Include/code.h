#define Py_CODE_H
typedef struct  PyCodeObject;
#define CO_OPTIMIZED	0x0001
#define CO_NEWLOCALS	0x0002
#define CO_VARARGS	0x0004
#define CO_VARKEYWORDS	0x0008
#define CO_NESTED       0x0010
#define CO_GENERATOR    0x0020
#define CO_NOFREE       0x0040
#define CO_FUTURE_DIVISION    	0x2000
#define CO_FUTURE_ABSOLUTE_IMPORT 0x4000
#define CO_FUTURE_WITH_STATEMENT  0x8000
#define CO_FUTURE_PRINT_FUNCTION  0x10000
#define CO_FUTURE_UNICODE_LITERALS 0x20000
#if 1
#define PY_PARSER_REQUIRES_FUTURE_KEYWORD
#define CO_MAXBLOCKS 20
PyAPI_DATA(PyTypeObject) PyCode_Type;
#define PyCode_Check(op) (Py_TYPE(op) == &PyCode_Type)
#define PyCode_GetNumFree(op) (PyTuple_GET_SIZE((op)->co_freevars))
PyAPI_FUNC(PyCodeObject *) PyCode_New(
int, int, int, int, PyObject *, PyObject *, PyObject *, PyObject *,
PyObject *, PyObject *, PyObject *, PyObject *, int, PyObject *);
PyAPI_FUNC(PyCodeObject *)
PyCode_NewEmpty(const char *filename, const char *funcname, int firstlineno);
PyAPI_FUNC(int) PyCode_Addr2Line(PyCodeObject *, int);
#define _PyCode_GETCODEPTR(co, pp) \
((*Py_TYPE((co)->co_code)->tp_as_buffer->bf_getreadbuffer) \
((co)->co_code, 0, (void **)(pp)))
typedef struct _addr_pair  PyAddrPair;
PyAPI_FUNC(int) _PyCode_CheckLineNumber(PyCodeObject* co,
int lasti, PyAddrPair *bounds);
PyAPI_FUNC(PyObject*) _PyCode_ConstantKey(PyObject *obj);
PyAPI_FUNC(PyObject*) PyCode_Optimize(PyObject *code, PyObject* consts,
PyObject *names, PyObject *lineno_obj);
