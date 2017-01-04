#undef Yield
typedef unsigned short mode_t;
#define MAGIC (62211 | ((long)'\r'<<16) | ((long)'\n'<<24))
static long pyc_magic = MAGIC;
static PyObject *extensions = NULL;
extern struct _inittab _PyImport_Inittab[];
struct _inittab *PyImport_Inittab = _PyImport_Inittab;
struct filedescr * _PyImport_Filetab = NULL;
static const struct filedescr _PyImport_StandardFiletab[] = ;
static const struct filedescr _PyImport_StandardFiletab[] = ;
static int isdir(char *path)
static int isdir(char *path)
int isdir(char *path)
void
_PyImport_Init(void)
void
_PyImportHooks_Init(void)
void
_PyImport_Fini(void)
static PyThread_type_lock import_lock = 0;
static long import_lock_thread = -1;
static int import_lock_level = 0;
void
_PyImport_AcquireLock(void)
int
_PyImport_ReleaseLock(void)
void
_PyImport_ReInitLock(void)
static PyObject *
imp_lock_held(PyObject *self, PyObject *noargs)
static PyObject *
imp_acquire_lock(PyObject *self, PyObject *noargs)
static PyObject *
imp_release_lock(PyObject *self, PyObject *noargs)
static void
imp_modules_reloading_clear(void)
PyObject *
PyImport_GetModuleDict(void)
static char* sys_deletes[] = ;
static char* sys_files[] = ;
void
PyImport_Cleanup(void)
long
PyImport_GetMagicNumber(void)
PyObject *
_PyImport_FixupExtension(char *name, char *filename)
PyObject *
_PyImport_FindExtension(char *name, char *filename)
static PyObject *
_PyImport_AddModuleObject(PyObject *name)
PyObject *
PyImport_AddModule(const char *name)
static void
remove_module(const char *name)
PyObject *
PyImport_ExecCodeModule(char *name, PyObject *co)
PyObject *
PyImport_ExecCodeModuleEx(char *name, PyObject *co, char *pathname)
static char *
make_compiled_pathname(char *pathname, char *buf, size_t buflen)
static FILE *
check_compiled_module(char *pathname, time_t mtime, char *cpathname)
static PyCodeObject *
read_compiled_module(char *cpathname, FILE *fp)
static PyObject *
load_compiled_module(char *name, char *cpathname, FILE *fp)
static PyCodeObject *
parse_source_module(const char *pathname, FILE *fp)
static FILE *
open_exclusive(char *filename, mode_t mode)
static void
write_compiled_module(PyCodeObject *co, char *cpathname, struct stat *srcstat, time_t mtime)
static void
update_code_filenames(PyCodeObject *co, PyObject *oldname, PyObject *newname)
static int
update_compiled_module(PyCodeObject *co, char *pathname)
static __int64 secs_between_epochs = 11644473600;
static time_t
win32_mtime(FILE *fp, char *pathname)
static PyObject *
load_source_module(char *name, char *pathname, FILE *fp)
static PyObject *load_module(char *, FILE *, char *, int, PyObject *);
static struct filedescr *find_module(char *, char *, PyObject *,
char *, size_t, FILE **, PyObject **);
static struct _frozen *find_frozen(char *name);
static PyObject *
load_package(char *name, char *pathname)
static int
is_builtin(char *name)
static PyObject *
get_path_importer(PyObject *path_importer_cache, PyObject *path_hooks,
PyObject *p)
PyAPI_FUNC(PyObject *)
PyImport_GetImporter(PyObject *path)
extern FILE *PyWin_FindRegisteredModule(const char *, struct filedescr **,
char *, Py_ssize_t);
static int case_ok(char *, Py_ssize_t, Py_ssize_t, char *);
static int find_init_module(char *);
static struct filedescr importhookdescr = ;
static struct filedescr *
find_module(char *fullname, char *subname, PyObject *path, char *buf,
size_t buflen, FILE **p_fp, PyObject **p_loader)
struct filedescr *
_PyImport_FindModule(const char *name, PyObject *path, char *buf,
size_t buflen, FILE **p_fp, PyObject **p_loader)
PyAPI_FUNC(int) _PyImport_IsScript(struct filedescr * fd)
#if defined(MS_WINDOWS)
#elif defined(DJGPP)
#elif (defined(__MACH__) && defined(__APPLE__) || defined(__CYGWIN__)) && defined(HAVE_DIRENT_H)
#elif defined(PYOS_OS2)
#define INCL_DOS
#define INCL_DOSERRORS
#define INCL_NOPMAPI
#elif defined(RISCOS)
static int
case_ok(char *buf, Py_ssize_t len, Py_ssize_t namelen, char *name)
static int
find_init_module(char *buf)
static int
find_init_module(buf)
char *buf;
static int init_builtin(char *);
static PyObject *
load_module(char *name, FILE *fp, char *pathname, int type, PyObject *loader)
static int
init_builtin(char *name)
static struct _frozen *
find_frozen(char *name)
static PyObject *
get_frozen_object(char *name)
int
PyImport_ImportFrozenModule(char *name)
PyObject *
PyImport_ImportModule(const char *name)
PyObject *
PyImport_ImportModuleNoBlock(const char *name)
static PyObject *get_parent(PyObject *globals, char *buf,
Py_ssize_t *p_buflen, int level);
static PyObject *load_next(PyObject *mod, PyObject *altmod,
char **p_name, char *buf, Py_ssize_t *p_buflen);
static int mark_miss(char *name);
static int ensure_fromlist(PyObject *mod, PyObject *fromlist,
char *buf, Py_ssize_t buflen, int recursive);
static PyObject * import_submodule(PyObject *mod, char *name, char *fullname);
static PyObject *
import_module_level(char *name, PyObject *globals, PyObject *locals,
PyObject *fromlist, int level)
PyObject *
PyImport_ImportModuleLevel(char *name, PyObject *globals, PyObject *locals,
PyObject *fromlist, int level)
static PyObject *
get_parent(PyObject *globals, char *buf, Py_ssize_t *p_buflen, int level)
static PyObject *
load_next(PyObject *mod, PyObject *altmod, char **p_name, char *buf,
Py_ssize_t *p_buflen)
static int
mark_miss(char *name)
static int
ensure_fromlist(PyObject *mod, PyObject *fromlist, char *buf, Py_ssize_t buflen,
int recursive)
static int
add_submodule(PyObject *mod, PyObject *submod, char *fullname, char *subname,
PyObject *modules)
static PyObject *
import_submodule(PyObject *mod, char *subname, char *fullname)
PyObject *
PyImport_ReloadModule(PyObject *m)
PyObject *
PyImport_Import(PyObject *module_name)
static PyObject *
imp_get_magic(PyObject *self, PyObject *noargs)
static PyObject *
imp_get_suffixes(PyObject *self, PyObject *noargs)
static PyObject *
call_find_module(char *name, PyObject *path)
static PyObject *
imp_find_module(PyObject *self, PyObject *args)
static PyObject *
imp_init_builtin(PyObject *self, PyObject *args)
static PyObject *
imp_init_frozen(PyObject *self, PyObject *args)
static PyObject *
imp_get_frozen_object(PyObject *self, PyObject *args)
static PyObject *
imp_is_builtin(PyObject *self, PyObject *args)
static PyObject *
imp_is_frozen(PyObject *self, PyObject *args)
static FILE *
get_file(char *pathname, PyObject *fob, char *mode)
static PyObject *
imp_load_compiled(PyObject *self, PyObject *args)
static PyObject *
imp_load_dynamic(PyObject *self, PyObject *args)
static PyObject *
imp_load_source(PyObject *self, PyObject *args)
static PyObject *
imp_load_module(PyObject *self, PyObject *args)
static PyObject *
imp_load_package(PyObject *self, PyObject *args)
static PyObject *
imp_new_module(PyObject *self, PyObject *args)
static PyObject *
imp_reload(PyObject *self, PyObject *v)
PyDoc_STRVAR(doc_imp,
"This module provides the components needed to build your own\n\
__import__ function.  Undocumented functions are obsolete.");
PyDoc_STRVAR(doc_reload,
"reload(module) -> module\n\
\n\
Reload the module.  The module must have been successfully imported before.");
PyDoc_STRVAR(doc_find_module,
"find_module(name, [path]) -> (file, filename, (suffix, mode, type))\n\
Search for a module.  If path is omitted or None, search for a\n\
built-in, frozen or special module and continue search in sys.path.\n\
The module name cannot contain '.'; to search for a submodule of a\n\
package, pass the submodule name and the package's __path__.");
PyDoc_STRVAR(doc_load_module,
"load_module(name, file, filename, (suffix, mode, type)) -> module\n\
Load a module, given information returned by find_module().\n\
The module name must include the full package name, if any.");
PyDoc_STRVAR(doc_get_magic,
"get_magic() -> string\n\
Return the magic number for .pyc or .pyo files.");
PyDoc_STRVAR(doc_get_suffixes,
"get_suffixes() -> [(suffix, mode, type), ...]\n\
Return a list of (suffix, mode, type) tuples describing the files\n\
that find_module() looks for.");
PyDoc_STRVAR(doc_new_module,
"new_module(name) -> module\n\
Create a new module.  Do not enter it in sys.modules.\n\
The module name must include the full package name, if any.");
PyDoc_STRVAR(doc_lock_held,
"lock_held() -> boolean\n\
Return True if the import lock is currently held, else False.\n\
On platforms without threads, return False.");
PyDoc_STRVAR(doc_acquire_lock,
"acquire_lock() -> None\n\
Acquires the interpreter's import lock for the current thread.\n\
This lock should be used by import hooks to ensure thread-safety\n\
when importing modules.\n\
On platforms without threads, this function does nothing.");
PyDoc_STRVAR(doc_release_lock,
"release_lock() -> None\n\
Release the interpreter's import lock.\n\
On platforms without threads, this function does nothing.");
static PyMethodDef imp_methods[] = ;
static int
setint(PyObject *d, char *name, int value)
typedef struct  NullImporter;
static int
NullImporter_init(NullImporter *self, PyObject *args, PyObject *kwds)
static PyObject *
NullImporter_find_module(NullImporter *self, PyObject *args)
static PyMethodDef NullImporter_methods[] = ;
PyTypeObject PyNullImporter_Type = ;
PyMODINIT_FUNC
initimp(void)
int
PyImport_ExtendInittab(struct _inittab *newtab)
int
PyImport_AppendInittab(const char *name, void (*initfunc)(void))
