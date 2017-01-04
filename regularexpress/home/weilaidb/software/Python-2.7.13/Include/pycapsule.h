#define Py_CAPSULE_H
PyAPI_DATA(PyTypeObject) PyCapsule_Type;
typedef void (*PyCapsule_Destructor)(PyObject *);
#define PyCapsule_CheckExact(op) (Py_TYPE(op) == &PyCapsule_Type)
PyAPI_FUNC(PyObject *) PyCapsule_New(
void *pointer,
const char *name,
PyCapsule_Destructor destructor);
PyAPI_FUNC(void *) PyCapsule_GetPointer(PyObject *capsule, const char *name);
PyAPI_FUNC(PyCapsule_Destructor) PyCapsule_GetDestructor(PyObject *capsule);
PyAPI_FUNC(const char *) PyCapsule_GetName(PyObject *capsule);
PyAPI_FUNC(void *) PyCapsule_GetContext(PyObject *capsule);
PyAPI_FUNC(int) PyCapsule_IsValid(PyObject *capsule, const char *name);
PyAPI_FUNC(int) PyCapsule_SetPointer(PyObject *capsule, void *pointer);
PyAPI_FUNC(int) PyCapsule_SetDestructor(PyObject *capsule, PyCapsule_Destructor destructor);
PyAPI_FUNC(int) PyCapsule_SetName(PyObject *capsule, const char *name);
PyAPI_FUNC(int) PyCapsule_SetContext(PyObject *capsule, void *context);
PyAPI_FUNC(void *) PyCapsule_Import(const char *name, int no_block);
