typedef SInt16  FSIORefNum;
static PyObject *MacOS_Error;
#define PATHNAMELEN 1024
typedef struct  rfobject;
static PyTypeObject Rftype;
static void
do_close(rfobject *self)
static char rf_read__doc__[] =
;
static PyObject *
rf_read(rfobject *self, PyObject *args)
static char rf_write__doc__[] =
;
static PyObject *
rf_write(rfobject *self, PyObject *args)
static char rf_seek__doc__[] =
;
static PyObject *
rf_seek(rfobject *self, PyObject *args)
static char rf_tell__doc__[] =
;
static PyObject *
rf_tell(rfobject *self, PyObject *args)
static char rf_close__doc__[] =
;
static PyObject *
rf_close(rfobject *self, PyObject *args)
static struct PyMethodDef rf_methods[] = ;
static rfobject *
newrfobject(void)
static void
rf_dealloc(rfobject *self)
static PyObject *
rf_getattr(rfobject *self, char *name)
static char Rftype__doc__[] =
;
static PyTypeObject Rftype = ;
static char getcrtp_doc[] = ;
static PyObject *
MacOS_GetCreatorAndType(PyObject *self, PyObject *args)
static char setcrtp_doc[] = ;
static PyObject *
MacOS_SetCreatorAndType(PyObject *self, PyObject *args)
static char geterr_doc[] = ;
static PyObject *
MacOS_GetErrorString(PyObject *self, PyObject *args)
static char splash_doc[] = ;
static PyObject *
MacOS_splash(PyObject *self, PyObject *args)
static char DebugStr_doc[] = ;
static PyObject *
MacOS_DebugStr(PyObject *self, PyObject *args)
static char SysBeep_doc[] = ;
static PyObject *
MacOS_SysBeep(PyObject *self, PyObject *args)
static char WMAvailable_doc[] =
;
static PyObject *
MacOS_WMAvailable(PyObject *self, PyObject *args)
{
static PyObject *rv = NULL;
if (!PyArg_ParseTuple(args, ))
return NULL;
if (!rv)
static char GetTicks_doc[] = ;
static PyObject *
MacOS_GetTicks(PyObject *self, PyObject *args)
static char openrf_doc[] = ;
static PyObject *
MacOS_openrf(PyObject *self, PyObject *args)
static PyMethodDef MacOS_Methods[] = ;
void
initMacOS(void)
