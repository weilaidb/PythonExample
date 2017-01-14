#define Py_COMPILE_H
struct _node;
PyAPI_FUNC(PyCodeObject *) PyNode_Compile(struct _node *, const char *);
typedef struct  PyFutureFeatures;
#define FUTURE_NESTED_SCOPES
#define FUTURE_GENERATORS
#define FUTURE_DIVISION
#define FUTURE_ABSOLUTE_IMPORT
#define FUTURE_WITH_STATEMENT
#define FUTURE_PRINT_FUNCTION
#define FUTURE_UNICODE_LITERALS
struct _mod;
PyAPI_FUNC(PyCodeObject *) PyAST_Compile(struct _mod *, const char *,
PyCompilerFlags *, PyArena *);
PyAPI_FUNC(PyFutureFeatures *) PyFuture_FromAST(struct _mod *, const char *);
