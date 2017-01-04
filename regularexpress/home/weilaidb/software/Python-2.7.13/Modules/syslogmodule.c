static PyObject *S_ident_o = NULL;
static char S_log_open = 0;
static PyObject *
syslog_get_argv(void)
static PyObject *
syslog_openlog(PyObject * self, PyObject * args, PyObject *kwds)
static PyObject *
syslog_syslog(PyObject * self, PyObject * args)
static PyObject *
syslog_closelog(PyObject *self, PyObject *unused)
static PyObject *
syslog_setlogmask(PyObject *self, PyObject *args)
static PyObject *
syslog_log_mask(PyObject *self, PyObject *args)
static PyObject *
syslog_log_upto(PyObject *self, PyObject *args)
static PyMethodDef syslog_methods[] = ;
PyMODINIT_FUNC
initsyslog(void)
