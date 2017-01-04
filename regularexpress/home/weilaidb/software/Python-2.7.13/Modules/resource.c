#if defined(HAVE_UNISTD_H)
#define doubletime(TV) ((double)(TV).tv_sec + (TV).tv_usec * 0.000001)
static PyObject *ResourceError;
PyDoc_STRVAR(struct_rusage__doc__,
"struct_rusage: Result from getrusage.\n\n"
"This object may be accessed either as a tuple of\n"
"    (utime,stime,maxrss,ixrss,idrss,isrss,minflt,majflt,\n"
"    nswap,inblock,oublock,msgsnd,msgrcv,nsignals,nvcsw,nivcsw)\n"
"or via the attributes ru_utime, ru_stime, ru_maxrss, and so on.");
static PyStructSequence_Field struct_rusage_fields[] = ;
static PyStructSequence_Desc struct_rusage_desc = ;
static int initialized;
static PyTypeObject StructRUsageType;
static PyObject *
resource_getrusage(PyObject *self, PyObject *args)
static PyObject *
resource_getrlimit(PyObject *self, PyObject *args)
static PyObject *
resource_setrlimit(PyObject *self, PyObject *args)
static PyObject *
resource_getpagesize(PyObject *self, PyObject *unused)
static struct PyMethodDef
resource_methods[] = ;
PyMODINIT_FUNC
initresource(void)
