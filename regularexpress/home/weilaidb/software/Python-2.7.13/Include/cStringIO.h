#define Py_CSTRINGIO_H
#define PycStringIO_CAPSULE_NAME
#define PycString_IMPORT \
PycStringIO = ((struct PycStringIO_CAPI*)PyCapsule_Import(\
PycStringIO_CAPSULE_NAME, 0))
static struct PycStringIO_CAPI  *PycStringIO;
#define PycStringIO_InputCheck(O) \
(Py_TYPE(O)==PycStringIO->InputType)
#define PycStringIO_OutputCheck(O) \
(Py_TYPE(O)==PycStringIO->OutputType)
