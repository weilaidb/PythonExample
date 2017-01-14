#if defined(HAVE_NDBM_H)
#if defined(PYOS_OS2) && !defined(PYCC_GCC)
static char *which_dbm = ;
static char *which_dbm = ;
#elif defined(HAVE_GDBM_NDBM_H)
static char *which_dbm = ;
#elif defined(HAVE_GDBM_DASH_NDBM_H)
static char *which_dbm = ;
#elif defined(HAVE_BERKDB_H)
static char *which_dbm = ;
#error
typedef struct  dbmobject;
static PyTypeObject Dbmtype;
#define is_dbmobject(v) (Py_TYPE(v) == &Dbmtype)
#define check_dbmobject_open(v) if ((v)->di_dbm == NULL) \
static PyObject *DbmError;
static PyObject *
newdbmobject(char *file, int flags, int mode)
static void
dbm_dealloc(register dbmobject *dp)
static Py_ssize_t
dbm_length(dbmobject *dp)
static PyObject *
dbm_subscript(dbmobject *dp, register PyObject *key)
static int
dbm_ass_sub(dbmobject *dp, PyObject *v, PyObject *w)
static int
dbm_contains(register dbmobject *dp, PyObject *v)
static PySequenceMethods dbm_as_sequence = ;
static PyMappingMethods dbm_as_mapping = ;
static PyObject *
dbm__close(register dbmobject *dp, PyObject *unused)
static PyObject *
dbm_keys(register dbmobject *dp, PyObject *unused)
static PyObject *
dbm_has_key(register dbmobject *dp, PyObject *args)
static PyObject *
dbm_get(register dbmobject *dp, PyObject *args)
static PyObject *
dbm_setdefault(register dbmobject *dp, PyObject *args)
static PyMethodDef dbm_methods[] = ;
static PyObject *
dbm_getattr(dbmobject *dp, char *name)
static PyTypeObject Dbmtype = ;
static PyObject *
dbmopen(PyObject *self, PyObject *args)
static PyMethodDef dbmmodule_methods[] = ;
PyMODINIT_FUNC
initdbm(void)
