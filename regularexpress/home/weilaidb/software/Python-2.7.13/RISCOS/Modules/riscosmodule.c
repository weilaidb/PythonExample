static os_error *e;
static PyObject *riscos_error(char *s)
static PyObject *riscos_oserror(void)
static PyObject *
riscos_remove(PyObject *self, PyObject *args)
static PyObject *
riscos_rename(PyObject *self, PyObject *args)
static PyObject *
riscos_system(PyObject *self, PyObject *args)
static PyObject *
riscos_chdir(PyObject *self, PyObject *args)
static PyObject *
canon(char *path)
static PyObject *
riscos_getcwd(PyObject *self, PyObject *unused)
static PyObject *
riscos_expand(PyObject *self, PyObject *args)
static PyObject *
riscos_mkdir(PyObject *self, PyObject *args)
static PyObject *
riscos_listdir(PyObject *self, PyObject *args)
PyDoc_STRVAR(stat_result__doc__,
"stat_result: Result from stat or lstat.\n\n\
This object may be accessed either as a tuple of\n\
(mode,ino,dev,nlink,uid,gid,size,atime,mtime,ctime)\n\
or via the attributes st_mode, st_ino, st_dev, st_nlink, st_uid, and so on.\n\
\n\
RiscOS: The fields st_ftype, st_attrs, and st_obtype are also available.\n\
\n\
See os.stat for more information.");
static PyStructSequence_Field stat_result_fields[] = ;
static PyStructSequence_Desc stat_result_desc = ;
static PyTypeObject StatResultType;
static PyObject *
riscos_stat(PyObject *self, PyObject *args)
static PyObject *
riscos_chmod(PyObject *self,PyObject *args)
static PyObject *
riscos_utime(PyObject *self, PyObject *args)
static PyObject *
riscos_settype(PyObject *self, PyObject *args)
static PyObject *
riscos_getenv(PyObject *self, PyObject *args)
static PyObject *
riscos_putenv(PyObject *self, PyObject *args)
static PyObject *
riscos_delenv(PyObject *self, PyObject *args)
static PyObject *
riscos_getenvdict(PyObject *self, PyObject *args)
static PyMethodDef riscos_methods[] = ;
static int
ins(PyObject *module, char *symbol, long value)
static int
all_ins(PyObject *d)
void
initriscos()
