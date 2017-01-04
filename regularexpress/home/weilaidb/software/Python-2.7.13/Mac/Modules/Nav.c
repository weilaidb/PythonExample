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
"(NavTranslationOptions)->None"
;
static PyObject *
nav_NavTranslateFile(navrrobject *self, PyObject *args)
static char nav_NavCompleteSave__doc__[] =
"(NavTranslationOptions)->None"
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
"Record containing result of a Nav file selection call. Use dir() for member names."
;
static PyTypeObject Navrrtype = ;
static char nav_NavGetFile__doc__[] =
"(DialogOptions dict or kwargs+defaultLocation,eventProc,previewProc,filterProc,typeList) -> NavReplyRecord"
;
static PyObject *
nav_NavGetFile(PyObject *self, PyObject *args, PyObject *kw)
static char nav_NavPutFile__doc__[] =
"(DialogOptions dict or kwargs+defaultLocation,eventProc,fileCreator,fileType) -> NavReplyRecord"
;
static PyObject *
nav_NavPutFile(PyObject *self, PyObject *args, PyObject *kw)
static char nav_NavAskSaveChanges__doc__[] =
"(NavAskSaveChangesAction, DialogOptions dict or kwargs+eventProc) -> NavAskSaveChangesResult"
;
static PyObject *
nav_NavAskSaveChanges(PyObject *self, PyObject *args, PyObject *kw)
static char nav_NavCustomAskSaveChanges__doc__[] =
"(DialogOptions dict or kwargs+eventProc) -> NavAskSaveChangesResult"
;
static PyObject *
nav_NavCustomAskSaveChanges(PyObject *self, PyObject *args, PyObject *kw)
static char nav_NavAskDiscardChanges__doc__[] =
"(DialogOptions dict or kwargs+eventProc) -> NavAskSaveChangesResult"
;
static PyObject *
nav_NavAskDiscardChanges(PyObject *self, PyObject *args, PyObject *kw)
static char nav_NavChooseFile__doc__[] =
"(DialogOptions dict or kwargs+defaultLocation,eventProc,previewProc,filterProc,typeList) -> NavReplyRecord"
;
static PyObject *
nav_NavChooseFile(PyObject *self, PyObject *args, PyObject *kw)
static char nav_NavChooseFolder__doc__[] =
"(DialogOptions dict or kwargs+defaultLocation,eventProc,filterProc) -> NavReplyRecord"
;
static PyObject *
nav_NavChooseFolder(PyObject *self, PyObject *args, PyObject *kw)
static char nav_NavChooseVolume__doc__[] =
"(DialogOptions dict or kwargs+defaultLocation,eventProc,filterProc) -> NavReplyRecord"
;
static PyObject *
nav_NavChooseVolume(PyObject *self, PyObject *args, PyObject *kw)
static char nav_NavChooseObject__doc__[] =
"(DialogOptions dict or kwargs+defaultLocation,eventProc,filterProc) -> NavReplyRecord"
;
static PyObject *
nav_NavChooseObject(PyObject *self, PyObject *args, PyObject *kw)
static char nav_NavNewFolder__doc__[] =
"(DialogOptions dict or kwargs+defaultLocation,eventProc) -> NavReplyRecord"
;
static PyObject *
nav_NavNewFolder(PyObject *self, PyObject *args, PyObject *kw)
static char nav_NavServicesCanRun__doc__[] =
"()->int"
;
static PyObject *
nav_NavServicesCanRun(PyObject *self, PyObject *args)
static char nav_NavServicesAvailable__doc__[] =
"()->int"
;
static PyObject *
nav_NavServicesAvailable(PyObject *self, PyObject *args)
static char nav_NavLoad__doc__[] =
"()->None"
;
static PyObject *
nav_NavLoad(PyObject *self, PyObject *args)
static char nav_NavUnload__doc__[] =
"()->None"
;
static PyObject *
nav_NavUnload(PyObject *self, PyObject *args)
static char nav_NavLibraryVersion__doc__[] =
"()->int"
;
static PyObject *
nav_NavLibraryVersion(PyObject *self, PyObject *args)
static char nav_NavGetDefaultDialogOptions__doc__[] =
"()->dict\nPass dict or keyword args with same names to other calls."
;
static PyObject *
nav_NavGetDefaultDialogOptions(PyObject *self, PyObject *args)
static struct PyMethodDef nav_methods[] = ;
static char Nav_module_documentation[] =
"Interface to Navigation Services\n"
"Most calls accept a NavDialogOptions dictionary or keywords with the same names, pass \n"
"if you want the default options.\n"
"Use NavGetDefaultDialogOptions() to find out common option names.\n"
"See individual docstrings for additional keyword args/dictentries supported by each call.\n"
"Pass None as eventProc to get movable-modal dialogs that process updates through the standard Python mechanism."
;
void
initNav(void)
