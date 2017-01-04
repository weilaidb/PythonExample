static int
PyCStgDict_init(StgDictObject *self, PyObject *args, PyObject *kwds)
static int
PyCStgDict_clear(StgDictObject *self)
static void
PyCStgDict_dealloc(StgDictObject *self)
int
PyCStgDict_clone(StgDictObject *dst, StgDictObject *src)
PyTypeObject PyCStgDict_Type = ;
StgDictObject *
PyType_stgdict(PyObject *obj)
StgDictObject *
PyObject_stgdict(PyObject *self)
static int
MakeFields(PyObject *type, CFieldObject *descr,
Py_ssize_t index, Py_ssize_t offset)
static int
MakeAnonFields(PyObject *type)
int
PyCStructUnionType_update_stgdict(PyObject *type, PyObject *fields, int isStruct)
