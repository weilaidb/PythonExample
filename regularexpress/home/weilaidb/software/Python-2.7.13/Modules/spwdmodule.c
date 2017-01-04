PyDoc_STRVAR(spwd_getspnam__doc__,
"getspnam(name) -> (sp_namp, sp_pwdp, sp_lstchg, sp_min, sp_max,\n\
sp_warn, sp_inact, sp_expire, sp_flag)\n\
Return the shadow password database entry for the given user name.\n\
See spwd.__doc__ for more on shadow password database entries.");
static PyObject* spwd_getspnam(PyObject *self, PyObject *args)
PyDoc_STRVAR(spwd_getspall__doc__,
"getspall() -> list_of_entries\n\
Return a list of all available shadow password database entries, \
in arbitrary order.\n\
See spwd.__doc__ for more on shadow password database entries.");
static PyObject *
spwd_getspall(PyObject *self, PyObject *args)
static PyMethodDef spwd_methods[] = ;
PyMODINIT_FUNC
initspwd(void)
