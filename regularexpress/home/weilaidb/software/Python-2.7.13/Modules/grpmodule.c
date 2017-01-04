static PyStructSequence_Field struct_group_type_fields[] = ;
PyDoc_STRVAR(struct_group__doc__,
"grp.struct_group: Results from getgr*() routines.\n\n\
This object may be accessed either as a tuple of\n\
(gr_name,gr_passwd,gr_gid,gr_mem)\n\
or via the object attributes as named in the above tuple.\n");
static PyStructSequence_Desc struct_group_type_desc = ;
static int initialized;
static PyTypeObject StructGrpType;
static PyObject *
mkgrent(struct group *p)
static PyObject *
grp_getgrgid(PyObject *self, PyObject *pyo_id)
static PyObject *
grp_getgrnam(PyObject *self, PyObject *pyo_name)
static PyObject *
grp_getgrall(PyObject *self, PyObject *ignore)
static PyMethodDef grp_methods[] = ;
PyDoc_STRVAR(grp__doc__,
"Access to the Unix group database.\n\
\n\
Group entries are reported as 4-tuples containing the following fields\n\
from the group database, in order:\n\
\n\
gr_name   - name of the group\n\
gr_passwd - group password (encrypted); often empty\n\
gr_gid    - numeric ID of the group\n\
gr_mem    - list of members\n\
\n\
The gid is an integer, name and password are strings.  (Note that most\n\
users are not explicitly listed as members of the groups they are in\n\
according to the password database.  Check both databases to get\n\
complete membership information.)");
PyMODINIT_FUNC
initgrp(void)
