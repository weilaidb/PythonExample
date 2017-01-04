#define __CAPSULETHUNK_H
#if (    (PY_VERSION_HEX <  0x02070000) \
|| ((PY_VERSION_HEX >= 0x03000000) \
&& (PY_VERSION_HEX <  0x03010000)) )
#define __PyCapsule_GetField(capsule, field, default_value) \
( PyCapsule_CheckExact(capsule) \
? (((PyCObject *)capsule)->field) \
: (default_value) \
) \
#define __PyCapsule_SetField(capsule, field, value) \
( PyCapsule_CheckExact(capsule) \
? (((PyCObject *)capsule)->field = value), 1 \
: 0 \
) \
#define PyCapsule_Type PyCObject_Type
#define PyCapsule_CheckExact(capsule) (PyCObject_Check(capsule))
#define PyCapsule_IsValid(capsule, name) (PyCObject_Check(capsule))
#define PyCapsule_New(pointer, name, destructor) \
(PyCObject_FromVoidPtr(pointer, destructor))
#define PyCapsule_GetPointer(capsule, name) \
(PyCObject_AsVoidPtr(capsule))
#define PyCapsule_SetPointer(capsule, pointer) \
__PyCapsule_SetField(capsule, cobject, pointer)
#define PyCapsule_GetDestructor(capsule) \
__PyCapsule_GetField(capsule, destructor)
#define PyCapsule_SetDestructor(capsule, dtor) \
__PyCapsule_SetField(capsule, destructor, dtor)
#define PyCapsule_GetName(capsule) NULL
static int
PyCapsule_SetName(PyObject *capsule, const char *unused)
#define PyCapsule_GetContext(capsule) \
__PyCapsule_GetField(capsule, descr)
#define PyCapsule_SetContext(capsule, context) \
__PyCapsule_SetField(capsule, descr, context)
static void *
PyCapsule_Import(const char *name, int no_block)
