static PyObject *MSIError;
static PyObject*
uuidcreate(PyObject* obj, PyObject*args)
static FNFCIALLOC(cb_alloc)
static FNFCIFREE(cb_free)
static FNFCIOPEN(cb_open)
static FNFCIREAD(cb_read)
static FNFCIWRITE(cb_write)
static FNFCICLOSE(cb_close)
static FNFCISEEK(cb_seek)
static FNFCIDELETE(cb_delete)
static FNFCIFILEPLACED(cb_fileplaced)
static FNFCIGETTEMPFILE(cb_gettempfile)
static FNFCISTATUS(cb_status)
static FNFCIGETNEXTCABINET(cb_getnextcabinet)
static FNFCIGETOPENINFO(cb_getopeninfo)
static PyObject* fcicreate(PyObject* obj, PyObject* args)
typedef struct msiobjmsiobj;
static void
msiobj_dealloc(msiobj* msidb)
static PyObject*
msiobj_close(msiobj* msidb, PyObject *args)
static PyObject*
msierror(int status)
static PyObject*
record_getfieldcount(msiobj* record, PyObject* args)
static PyObject*
record_getinteger(msiobj* record, PyObject* args)
static PyObject*
record_getstring(msiobj* record, PyObject* args)
static PyObject*
record_cleardata(msiobj* record, PyObject *args)
static PyObject*
record_setstring(msiobj* record, PyObject *args)
static PyObject*
record_setstream(msiobj* record, PyObject *args)
static PyObject*
record_setinteger(msiobj* record, PyObject *args)
static PyMethodDef record_methods[] = ;
static PyTypeObject record_Type = ;
static PyObject*
record_new(MSIHANDLE h)
static PyObject*
summary_getproperty(msiobj* si, PyObject *args)
static PyObject*
summary_getpropertycount(msiobj* si, PyObject *args)
static PyObject*
summary_setproperty(msiobj* si, PyObject *args)
static PyObject*
summary_persist(msiobj* si, PyObject *args)
static PyMethodDef summary_methods[] = ;
static PyTypeObject summary_Type = ;
static PyObject*
view_execute(msiobj *view, PyObject*args)
static PyObject*
view_fetch(msiobj *view, PyObject*args)
static PyObject*
view_getcolumninfo(msiobj *view, PyObject *args)
static PyObject*
view_modify(msiobj *view, PyObject *args)
static PyObject*
view_close(msiobj *view, PyObject*args)
static PyMethodDef view_methods[] = ;
static PyTypeObject msiview_Type = ;
static PyObject*
msidb_openview(msiobj *msidb, PyObject *args)
static PyObject*
msidb_commit(msiobj *msidb, PyObject *args)
static PyObject*
msidb_getsummaryinformation(msiobj *db, PyObject *args)
static PyMethodDef db_methods[] = ;
static PyTypeObject msidb_Type = ;
#define Py_NOT_PERSIST(x, flag)                        \
(x != (int)(flag) &&                      \
x != ((int)(flag) | MSIDBOPEN_PATCHFILE))
#define Py_INVALID_PERSIST(x)                \
(Py_NOT_PERSIST(x, MSIDBOPEN_READONLY) &&  \
Py_NOT_PERSIST(x, MSIDBOPEN_TRANSACT) &&   \
Py_NOT_PERSIST(x, MSIDBOPEN_DIRECT) &&     \
Py_NOT_PERSIST(x, MSIDBOPEN_CREATE) &&     \
Py_NOT_PERSIST(x, MSIDBOPEN_CREATEDIRECT))
static PyObject* msiopendb(PyObject *obj, PyObject *args)
static PyObject*
createrecord(PyObject *o, PyObject *args)
static PyMethodDef msi_methods[] = ;
static char msi_doc[] = ;
PyMODINIT_FUNC
init_msi(void)
