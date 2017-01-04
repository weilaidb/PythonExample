typedef SInt16  FSIORefNum;
static PyObject *MacOS_Error;
#define PATHNAMELEN 1024
typedef struct  rfobject;
static PyTypeObject Rftype;
static void
do_close(rfobject *self)
static char rf_read__doc__[] =
"Read data from resource fork"
;
static PyObject *
rf_read(rfobject *self, PyObject *args)
static char rf_write__doc__[] =
"Write to resource fork"
;
static PyObject *
rf_write(rfobject *self, PyObject *args)
static char rf_seek__doc__[] =
"Set file position"
;
static PyObject *
rf_seek(rfobject *self, PyObject *args)
static char rf_tell__doc__[] =
"Get file position"
;
static PyObject *
rf_tell(rfobject *self, PyObject *args)
static char rf_close__doc__[] =
"Close resource fork"
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
"Resource fork file object"
;
static PyTypeObject Rftype = ;
static char getcrtp_doc[] = "Get MacOS 4-char creator and type for a file";
static PyObject *
MacOS_GetCreatorAndType(PyObject *self, PyObject *args)
static char setcrtp_doc[] = "Set MacOS 4-char creator and type for a file";
static PyObject *
MacOS_SetCreatorAndType(PyObject *self, PyObject *args)
static char geterr_doc[] = "Convert OSErr number to string";
static PyObject *
MacOS_GetErrorString(PyObject *self, PyObject *args)
static char splash_doc[] = "Open a splash-screen dialog by resource-id (0=close)";
static PyObject *
MacOS_splash(PyObject *self, PyObject *args)
static char DebugStr_doc[] = "Switch to low-level debugger with a message";
static PyObject *
MacOS_DebugStr(PyObject *self, PyObject *args)
static char SysBeep_doc[] = "BEEEEEP!!!";
static PyObject *
MacOS_SysBeep(PyObject *self, PyObject *args)
static char WMAvailable_doc[] =
"True if this process can interact with the display."
"Will foreground the application on the first call as a side-effect."
;
static PyObject *
MacOS_WMAvailable(PyObject *self, PyObject *args)
{
static PyObject *rv = NULL;
if (!PyArg_ParseTuple(args, ""))
return NULL;
if (!rv)
static char GetTicks_doc[] = "Return number of ticks since bootup";
static PyObject *
MacOS_GetTicks(PyObject *self, PyObject *args)
static char openrf_doc[] = "Open resource fork of a file";
static PyObject *
MacOS_openrf(PyObject *self, PyObject *args)
static PyMethodDef MacOS_Methods[] = ;
void
initMacOS(void)
