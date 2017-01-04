#define PYSQLITE_COMPAT_H
#if PY_VERSION_HEX < 0x02050000
typedef int Py_ssize_t;
typedef int (*lenfunc)(PyObject*);
#define PyDict_CheckExact(op) ((op)->ob_type == &PyDict_Type)
#define Py_CLEAR(op)				\
do  while (0)
#define PyVarObject_HEAD_INIT(type, size) \
PyObject_HEAD_INIT(type) size,
#define Py_TYPE(ob) ((ob)->ob_type)
