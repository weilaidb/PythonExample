static PyObject *ErrorObject;
static NavEventUPP my_eventProcUPP;
static NavPreviewUPP my_previewProcUPP;
static NavObjectFilterUPP my_filterProcUPP;
static pascal void
my_eventProc(NavEventCallbackMessage callBackSelector,
NavCBRecPtr callBackParms,
NavCallBackUserData callbackUD)
static pascal Boolean
my_previewProc(NavCBRecPtr callBackParms,
NavCallBackUserData callbackUD)
static pascal Boolean
my_filterProc(AEDesc *theItem, void *info,
NavCallBackUserData callbackUD,
NavFilterModes filterMode)
static int
filldialogoptions(PyObject *d,
AEDesc **defaultLocationP,
NavDialogOptions *opt,
NavEventUPP *eventProcP,
NavPreviewUPP *previewProcP,
NavObjectFilterUPP *filterProcP,
NavTypeListHandle *typeListP,
OSType *fileTypeP,
OSType *fileCreatorP)
typedef struct  navrrobject;
static PyTypeObject Navrrtype;
static char nav_NavTranslateFile__doc__[] =
;
static PyObject *
nav_NavTranslateFile(navrrobject *self, PyObject *args)
static char nav_NavCompleteSave__doc__[] =
;
static PyObject *
nav_NavCompleteSave(navrrobject *self, PyObject *args)
static struct PyMethodDef navrr_methods[] = ;
static navrrobject *
newnavrrobject(NavReplyRecord *itself)
static void
navrr_dealloc(navrrobject *self)
static PyObject *
navrr_getattr(navrrobject *self, char *name)
static int
navrr_setattr(navrrobject *self, char *name, PyObject *v)
static char Navrrtype__doc__[] =
;
static PyTypeObject Navrrtype = ;
static char nav_NavGetFile__doc__[] =
;
static PyObject *
nav_NavGetFile(PyObject *self, PyObject *args, PyObject *kw)
static char nav_NavPutFile__doc__[] =
;
static PyObject *
nav_NavPutFile(PyObject *self, PyObject *args, PyObject *kw)
static char nav_NavAskSaveChanges__doc__[] =
;
static PyObject *
nav_NavAskSaveChanges(PyObject *self, PyObject *args, PyObject *kw)
static char nav_NavCustomAskSaveChanges__doc__[] =
;
static PyObject *
nav_NavCustomAskSaveChanges(PyObject *self, PyObject *args, PyObject *kw)
static char nav_NavAskDiscardChanges__doc__[] =
;
static PyObject *
nav_NavAskDiscardChanges(PyObject *self, PyObject *args, PyObject *kw)
static char nav_NavChooseFile__doc__[] =
;
static PyObject *
nav_NavChooseFile(PyObject *self, PyObject *args, PyObject *kw)
static char nav_NavChooseFolder__doc__[] =
;
static PyObject *
nav_NavChooseFolder(PyObject *self, PyObject *args, PyObject *kw)
static char nav_NavChooseVolume__doc__[] =
;
static PyObject *
nav_NavChooseVolume(PyObject *self, PyObject *args, PyObject *kw)
static char nav_NavChooseObject__doc__[] =
;
static PyObject *
nav_NavChooseObject(PyObject *self, PyObject *args, PyObject *kw)
static char nav_NavNewFolder__doc__[] =
;
static PyObject *
nav_NavNewFolder(PyObject *self, PyObject *args, PyObject *kw)
static char nav_NavServicesCanRun__doc__[] =
;
static PyObject *
nav_NavServicesCanRun(PyObject *self, PyObject *args)
static char nav_NavServicesAvailable__doc__[] =
;
static PyObject *
nav_NavServicesAvailable(PyObject *self, PyObject *args)
static char nav_NavLoad__doc__[] =
;
static PyObject *
nav_NavLoad(PyObject *self, PyObject *args)
static char nav_NavUnload__doc__[] =
;
static PyObject *
nav_NavUnload(PyObject *self, PyObject *args)
static char nav_NavLibraryVersion__doc__[] =
;
static PyObject *
nav_NavLibraryVersion(PyObject *self, PyObject *args)
static char nav_NavGetDefaultDialogOptions__doc__[] =
;
static PyObject *
nav_NavGetDefaultDialogOptions(PyObject *self, PyObject *args)
static struct PyMethodDef nav_methods[] = ;
static char Nav_module_documentation[] =
;
void
initNav(void)
