static PyStructSequence_Field struct_pwd_type_fields[] = ;
PyDoc_STRVAR(struct_passwd__doc__,
"pwd.struct_passwd: Results from getpw*() routines.\n\n\
This object may be accessed either as a tuple of\n\
(pw_name,pw_passwd,pw_uid,pw_gid,pw_gecos,pw_dir,pw_shell)\n\
or via the object attributes as named in the above tuple.");
static PyStructSequence_Desc struct_pwd_type_desc = ;
PyDoc_STRVAR(pwd__doc__,
"This module provides access to the Unix password database.\n\
It is available on all Unix versions.\n\
\n\
Password database entries are reported as 7-tuples containing the following\n\
items from the password database (see `<pwd.h>'), in order:\n\
pw_name, pw_passwd, pw_uid, pw_gid, pw_gecos, pw_dir, pw_shell.\n\
The uid and gid items are integers, all others are strings. An\n\
exception is raised if the entry asked for cannot be found.");
static int initialized;
static PyTypeObject StructPwdType;
static void
sets(PyObject *v, int i, char* val)
static PyObject *
mkpwent(struct passwd *p)
PyDoc_STRVAR(pwd_getpwuid__doc__,
"getpwuid(uid) -> (pw_name,pw_passwd,pw_uid,\n\
pw_gid,pw_gecos,pw_dir,pw_shell)\n\
Return the password database entry for the given numeric user ID.\n\
See help(pwd) for more on password database entries.");
static PyObject *
pwd_getpwuid(PyObject *self, PyObject *args)
PyDoc_STRVAR(pwd_getpwnam__doc__,
"getpwnam(name) -> (pw_name,pw_passwd,pw_uid,\n\
pw_gid,pw_gecos,pw_dir,pw_shell)\n\
Return the password database entry for the given user name.\n\
See help(pwd) for more on password database entries.");
static PyObject *
pwd_getpwnam(PyObject *self, PyObject *args)
PyDoc_STRVAR(pwd_getpwall__doc__,
"getpwall() -> list_of_entries\n\
Return a list of all available password database entries, \
in arbitrary order.\n\
See help(pwd) for more on password database entries.");
static PyObject *
pwd_getpwall(PyObject *self)
{
PyObject *d;
struct passwd *p;
if ((d = PyList_New(0)) == NULL)
return NULL;
#if defined(PYOS_OS2) && defined(PYCC_GCC)
if ((p = getpwuid(0)) != NULL)
static PyMethodDef pwd_methods[] = ;
PyMODINIT_FUNC
initpwd(void)
