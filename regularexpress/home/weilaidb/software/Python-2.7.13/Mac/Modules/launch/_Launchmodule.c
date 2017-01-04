#define PyMac_PRECHECK(rtn) do  while(0)
#if PY_VERSION_HEX < 0x02040000
PyObject *PyMac_GetOSErrException(void);
static int
OptCFStringRefObj_Convert(PyObject *v, CFStringRef *spec)
PyObject *
OptCFStringRefObj_New(CFStringRef it)
PyObject *
LSItemInfoRecord_New(LSItemInfoRecord *it)
static PyObject *Launch_Error;
static PyObject *Launch_LSCopyItemInfoForRef(PyObject *_self, PyObject *_args)
static PyObject *Launch_LSCopyItemInfoForURL(PyObject *_self, PyObject *_args)
static PyObject *Launch_LSGetExtensionInfo(PyObject *_self, PyObject *_args)
static PyObject *Launch_LSCopyDisplayNameForRef(PyObject *_self, PyObject *_args)
static PyObject *Launch_LSCopyDisplayNameForURL(PyObject *_self, PyObject *_args)
static PyObject *Launch_LSSetExtensionHiddenForRef(PyObject *_self, PyObject *_args)
static PyObject *Launch_LSSetExtensionHiddenForURL(PyObject *_self, PyObject *_args)
static PyObject *Launch_LSCopyKindStringForRef(PyObject *_self, PyObject *_args)
static PyObject *Launch_LSCopyKindStringForURL(PyObject *_self, PyObject *_args)
static PyObject *Launch_LSGetApplicationForItem(PyObject *_self, PyObject *_args)
static PyObject *Launch_LSGetApplicationForInfo(PyObject *_self, PyObject *_args)
static PyObject *Launch_LSGetApplicationForURL(PyObject *_self, PyObject *_args)
static PyObject *Launch_LSFindApplicationForInfo(PyObject *_self, PyObject *_args)
static PyObject *Launch_LSCanRefAcceptItem(PyObject *_self, PyObject *_args)
static PyObject *Launch_LSCanURLAcceptURL(PyObject *_self, PyObject *_args)
static PyObject *Launch_LSOpenFSRef(PyObject *_self, PyObject *_args)
static PyObject *Launch_LSOpenCFURLRef(PyObject *_self, PyObject *_args)
static PyMethodDef Launch_methods[] = ;
void init_Launch(void)
