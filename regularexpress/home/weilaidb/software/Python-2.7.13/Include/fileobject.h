#define Py_FILEOBJECT_H
typedef struct  PyFileObject;
PyAPI_DATA(PyTypeObject) PyFile_Type;
#define PyFile_Check(op) PyObject_TypeCheck(op, &PyFile_Type)
#define PyFile_CheckExact(op) (Py_TYPE(op) == &PyFile_Type)
PyAPI_FUNC(PyObject *) PyFile_FromString(char *, char *);
PyAPI_FUNC(void) PyFile_SetBufSize(PyObject *, int);
PyAPI_FUNC(int) PyFile_SetEncoding(PyObject *, const char *);
PyAPI_FUNC(int) PyFile_SetEncodingAndErrors(PyObject *, const char *, char *errors);
PyAPI_FUNC(PyObject *) PyFile_FromFile(FILE *, char *, char *,
int (*)(FILE *));
PyAPI_FUNC(FILE *) PyFile_AsFile(PyObject *);
PyAPI_FUNC(void) PyFile_IncUseCount(PyFileObject *);
PyAPI_FUNC(void) PyFile_DecUseCount(PyFileObject *);
PyAPI_FUNC(PyObject *) PyFile_Name(PyObject *);
PyAPI_FUNC(PyObject *) PyFile_GetLine(PyObject *, int);
PyAPI_FUNC(int) PyFile_WriteObject(PyObject *, PyObject *, int);
PyAPI_FUNC(int) PyFile_SoftSpace(PyObject *, int);
PyAPI_FUNC(int) PyFile_WriteString(const char *, PyObject *);
PyAPI_FUNC(int) PyObject_AsFileDescriptor(PyObject *);
PyAPI_DATA(const char *) Py_FileSystemDefaultEncoding;
#define PY_STDIOTEXTMODE "b"
char *Py_UniversalNewlineFgets(char *, int, FILE*, PyObject *);
size_t Py_UniversalNewlineFread(char *, size_t, FILE *, PyObject *);
int _PyFile_SanitizeMode(char *mode);
#if defined _MSC_VER && _MSC_VER >= 1400
int _PyVerify_fd(int fd);
#elif defined _MSC_VER && _MSC_VER >= 1200
#define _PyVerify_fd(fd) (_get_osfhandle(fd) >= 0)
#define _PyVerify_fd(A) (1)
#define _PyIsSelectable_fd(FD) (((FD) >= 0) && ((FD) < FD_SETSIZE))
#define _PyIsSelectable_fd(FD) (1)
