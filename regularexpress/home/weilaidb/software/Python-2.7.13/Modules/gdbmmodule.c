#if defined(WIN32) && !defined(__CYGWIN__)
extern const char * gdbm_strerror(gdbm_error);
PyDoc_STRVAR(gdbmmodule__doc__,
"This module provides an interface to the GNU DBM (GDBM) library.\n\
\n\
This module is quite similar to the dbm module, but uses GDBM instead to\n\
provide some additional functionality. Please note that the file formats\n\
created by GDBM and dbm are incompatible. \n\
\n\
GDBM objects behave like mappings (dictionaries), except that keys and\n\
values are always strings. Printing a GDBM object doesn't print the\n\
keys and values, and the items() and values() methods are not\n\
supported.");
typedef struct  dbmobject;
static PyTypeObject Dbmtype;
#define is_dbmobject(v) (Py_TYPE(v) == &Dbmtype)
#define check_dbmobject_open(v) if ((v)->di_dbm == NULL) \
static PyObject *DbmError;
PyDoc_STRVAR(gdbm_object__doc__,
"This object represents a GDBM database.\n\
GDBM objects behave like mappings (dictionaries), except that keys and\n\
values are always strings. Printing a GDBM object doesn't print the\n\
keys and values, and the items() and values() methods are not\n\
supported.\n\
\n\
GDBM objects also support additional operations such as firstkey,\n\
nextkey, reorganize, and sync.");
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
dbm_contains(register dbmobject *dp, PyObject *arg)
static PySequenceMethods dbm_as_sequence = ;
static PyMappingMethods dbm_as_mapping = ;
PyDoc_STRVAR(dbm_close__doc__,
"close() -> None\n\
Closes the database.");
static PyObject *
dbm_close(register dbmobject *dp, PyObject *unused)
PyDoc_STRVAR(dbm_keys__doc__,
"keys() -> list_of_keys\n\
Get a list of all keys in the database.");
static PyObject *
dbm_keys(register dbmobject *dp, PyObject *unused)
PyDoc_STRVAR(dbm_has_key__doc__,
"has_key(key) -> boolean\n\
Find out whether or not the database contains a given key.");
static PyObject *
dbm_has_key(register dbmobject *dp, PyObject *args)
PyDoc_STRVAR(dbm_firstkey__doc__,
"firstkey() -> key\n\
It's possible to loop over every key in the database using this method\n\
and the nextkey() method. The traversal is ordered by GDBM's internal\n\
hash values, and won't be sorted by the key values. This method\n\
returns the starting key.");
static PyObject *
dbm_firstkey(register dbmobject *dp, PyObject *unused)
PyDoc_STRVAR(dbm_nextkey__doc__,
"nextkey(key) -> next_key\n\
Returns the key that follows key in the traversal.\n\
The following code prints every key in the database db, without having\n\
to create a list in memory that contains them all:\n\
\n\
k = db.firstkey()\n\
while k != None:\n\
print k\n\
k = db.nextkey(k)");
static PyObject *
dbm_nextkey(register dbmobject *dp, PyObject *args)
PyDoc_STRVAR(dbm_reorganize__doc__,
"reorganize() -> None\n\
If you have carried out a lot of deletions and would like to shrink\n\
the space used by the GDBM file, this routine will reorganize the\n\
database. GDBM will not shorten the length of a database file except\n\
by using this reorganization; otherwise, deleted file space will be\n\
kept and reused as new (key,value) pairs are added.");
static PyObject *
dbm_reorganize(register dbmobject *dp, PyObject *unused)
PyDoc_STRVAR(dbm_sync__doc__,
"sync() -> None\n\
When the database has been opened in fast mode, this method forces\n\
any unwritten data to be written to the disk.");
static PyObject *
dbm_sync(register dbmobject *dp, PyObject *unused)
static PyMethodDef dbm_methods[] = ;
static PyObject *
dbm_getattr(dbmobject *dp, char *name)
static PyTypeObject Dbmtype = ;
PyDoc_STRVAR(dbmopen__doc__,
"open(filename, [flags, [mode]])  -> dbm_object\n\
Open a dbm database and return a dbm object. The filename argument is\n\
the name of the database file.\n\
\n\
The optional flags argument can be 'r' (to open an existing database\n\
for reading only -- default), 'w' (to open an existing database for\n\
reading and writing), 'c' (which creates the database if it doesn't\n\
exist), or 'n' (which always creates a new empty database).\n\
\n\
Some versions of gdbm support additional flags which must be\n\
appended to one of the flags described above. The module constant\n\
'open_flags' is a string of valid additional flags. The 'f' flag\n\
opens the database in fast mode; altered data will not automatically\n\
be written to the disk after every change. This results in faster\n\
writes to the database, but may result in an inconsistent database\n\
if the program crashes while the database is still open. Use the\n\
sync() method to force any unwritten data to be written to the disk.\n\
The 's' flag causes all database operations to be synchronized to\n\
disk. The 'u' flag disables locking of the database file.\n\
\n\
The optional mode argument is the Unix mode of the file, used only\n\
when the database has to be created. It defaults to octal 0666. ");
static PyObject *
dbmopen(PyObject *self, PyObject *args)
static char dbmmodule_open_flags[] = "rwcn"
"f"
"s"
"u"
;
static PyMethodDef dbmmodule_methods[] = ;
PyMODINIT_FUNC
initgdbm(void)
