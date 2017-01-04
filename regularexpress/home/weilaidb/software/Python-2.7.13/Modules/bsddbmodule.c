typedef struct  bsddbobject;
static PyTypeObject Bsddbtype;
#define is_bsddbobject(v) ((v)->ob_type == &Bsddbtype)
#define check_bsddbobject_open(v, r) if ((v)->di_bsddb == NULL) \
static PyObject *BsddbError;
static PyObject *
newdbhashobject(char *file, int flags, int mode,
int bsize, int ffactor, int nelem, int cachesize,
int hash, int lorder)
static PyObject *
newdbbtobject(char *file, int flags, int mode,
int btflags, int cachesize, int maxkeypage,
int minkeypage, int psize, int lorder)
static PyObject *
newdbrnobject(char *file, int flags, int mode,
int rnflags, int cachesize, int psize, int lorder,
size_t reclen, u_char bval, char *bfname)
static void
bsddb_dealloc(bsddbobject *dp)
#define BSDDB_BGN_SAVE(_dp) \
Py_BEGIN_ALLOW_THREADS PyThread_acquire_lock(_dp->di_lock,1);
#define BSDDB_END_SAVE(_dp) \
PyThread_release_lock(_dp->di_lock); Py_END_ALLOW_THREADS
#define BSDDB_BGN_SAVE(_dp) Py_BEGIN_ALLOW_THREADS
#define BSDDB_END_SAVE(_dp) Py_END_ALLOW_THREADS
static Py_ssize_t
bsddb_length(bsddbobject *dp)
static PyObject *
bsddb_subscript(bsddbobject *dp, PyObject *key)
static int
bsddb_ass_sub(bsddbobject *dp, PyObject *key, PyObject *value)
static PyMappingMethods bsddb_as_mapping = ;
static PyObject *
bsddb_close(bsddbobject *dp)
static PyObject *
bsddb_keys(bsddbobject *dp)
static PyObject *
bsddb_has_key(bsddbobject *dp, PyObject *args)
static PyObject *
bsddb_set_location(bsddbobject *dp, PyObject *key)
static PyObject *
bsddb_seq(bsddbobject *dp, int sequence_request)
static PyObject *
bsddb_next(bsddbobject *dp)
static PyObject *
bsddb_previous(bsddbobject *dp)
static PyObject *
bsddb_first(bsddbobject *dp)
static PyObject *
bsddb_last(bsddbobject *dp)
static PyObject *
bsddb_sync(bsddbobject *dp)
static PyMethodDef bsddb_methods[] = ;
static PyObject *
bsddb_getattr(PyObject *dp, char *name)
static PyTypeObject Bsddbtype = ;
static PyObject *
bsdhashopen(PyObject *self, PyObject *args)
static PyObject *
bsdbtopen(PyObject *self, PyObject *args)
static PyObject *
bsdrnopen(PyObject *self, PyObject *args)
static PyMethodDef bsddbmodule_methods[] = ;
PyMODINIT_FUNC
initbsddb185(void)
