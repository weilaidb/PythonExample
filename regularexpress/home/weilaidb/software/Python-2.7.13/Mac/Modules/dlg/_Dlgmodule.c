#if APPLE_SUPPORTS_QUICKTIME
#define PyMac_PRECHECK(rtn) do  while(0)
extern PyObject *_DlgObj_New(DialogRef);
extern PyObject *_DlgObj_WhichDialog(DialogRef);
extern int _DlgObj_Convert(PyObject *, DialogRef *);
#define DlgObj_New _DlgObj_New
#define DlgObj_WhichDialog _DlgObj_WhichDialog
#define DlgObj_Convert _DlgObj_Convert
static PyObject *Dlg_FilterProc_callback = NULL;
static pascal Boolean Dlg_UnivFilterProc(DialogPtr dialog,
EventRecord *event,
short *itemHit)
static ModalFilterUPP
Dlg_PassFilterProc(PyObject *callback)
static PyObject *Dlg_UserItemProc_callback = NULL;
static pascal void Dlg_UnivUserItemProc(DialogPtr dialog,
short item)
static PyObject *Dlg_Error;
PyTypeObject Dialog_Type;
#define DlgObj_Check(x) ((x)->ob_type == &Dialog_Type || PyObject_TypeCheck((x), &Dialog_Type))
typedef struct DialogObject  DialogObject;
PyObject *DlgObj_New(DialogPtr itself)
int DlgObj_Convert(PyObject *v, DialogPtr *p_itself)
static void DlgObj_dealloc(DialogObject *self)
static PyObject *DlgObj_DrawDialog(DialogObject *_self, PyObject *_args)
static PyObject *DlgObj_UpdateDialog(DialogObject *_self, PyObject *_args)
static PyObject *DlgObj_HideDialogItem(DialogObject *_self, PyObject *_args)
static PyObject *DlgObj_ShowDialogItem(DialogObject *_self, PyObject *_args)
static PyObject *DlgObj_FindDialogItem(DialogObject *_self, PyObject *_args)
static PyObject *DlgObj_DialogCut(DialogObject *_self, PyObject *_args)
static PyObject *DlgObj_DialogPaste(DialogObject *_self, PyObject *_args)
static PyObject *DlgObj_DialogCopy(DialogObject *_self, PyObject *_args)
static PyObject *DlgObj_DialogDelete(DialogObject *_self, PyObject *_args)
static PyObject *DlgObj_GetDialogItem(DialogObject *_self, PyObject *_args)
static PyObject *DlgObj_SetDialogItem(DialogObject *_self, PyObject *_args)
static PyObject *DlgObj_SelectDialogItemText(DialogObject *_self, PyObject *_args)
static PyObject *DlgObj_AppendDITL(DialogObject *_self, PyObject *_args)
static PyObject *DlgObj_CountDITL(DialogObject *_self, PyObject *_args)
static PyObject *DlgObj_ShortenDITL(DialogObject *_self, PyObject *_args)
static PyObject *DlgObj_InsertDialogItem(DialogObject *_self, PyObject *_args)
static PyObject *DlgObj_RemoveDialogItems(DialogObject *_self, PyObject *_args)
static PyObject *DlgObj_StdFilterProc(DialogObject *_self, PyObject *_args)
static PyObject *DlgObj_SetDialogDefaultItem(DialogObject *_self, PyObject *_args)
static PyObject *DlgObj_SetDialogCancelItem(DialogObject *_self, PyObject *_args)
static PyObject *DlgObj_SetDialogTracksCursor(DialogObject *_self, PyObject *_args)
static PyObject *DlgObj_AutoSizeDialog(DialogObject *_self, PyObject *_args)
static PyObject *DlgObj_GetDialogItemAsControl(DialogObject *_self, PyObject *_args)
static PyObject *DlgObj_MoveDialogItem(DialogObject *_self, PyObject *_args)
static PyObject *DlgObj_SizeDialogItem(DialogObject *_self, PyObject *_args)
static PyObject *DlgObj_AppendDialogItemList(DialogObject *_self, PyObject *_args)
static PyObject *DlgObj_SetDialogTimeout(DialogObject *_self, PyObject *_args)
static PyObject *DlgObj_GetDialogTimeout(DialogObject *_self, PyObject *_args)
static PyObject *DlgObj_SetModalDialogEventMask(DialogObject *_self, PyObject *_args)
static PyObject *DlgObj_GetModalDialogEventMask(DialogObject *_self, PyObject *_args)
static PyObject *DlgObj_GetDialogWindow(DialogObject *_self, PyObject *_args)
static PyObject *DlgObj_GetDialogTextEditHandle(DialogObject *_self, PyObject *_args)
static PyObject *DlgObj_GetDialogDefaultItem(DialogObject *_self, PyObject *_args)
static PyObject *DlgObj_GetDialogCancelItem(DialogObject *_self, PyObject *_args)
static PyObject *DlgObj_GetDialogKeyboardFocusItem(DialogObject *_self, PyObject *_args)
static PyObject *DlgObj_SetPortDialogPort(DialogObject *_self, PyObject *_args)
static PyObject *DlgObj_GetDialogPort(DialogObject *_self, PyObject *_args)
static PyMethodDef DlgObj_methods[] = ;
#define DlgObj_getsetlist NULL
static int DlgObj_compare(DialogObject *self, DialogObject *other)
#define DlgObj_repr NULL
static int DlgObj_hash(DialogObject *self)
#define DlgObj_tp_init 0
#define DlgObj_tp_alloc PyType_GenericAlloc
static PyObject *DlgObj_tp_new(PyTypeObject *type, PyObject *_args, PyObject *_kwds)
#define DlgObj_tp_free PyObject_Del
PyTypeObject Dialog_Type = ;
static PyObject *Dlg_NewDialog(PyObject *_self, PyObject *_args)
static PyObject *Dlg_GetNewDialog(PyObject *_self, PyObject *_args)
static PyObject *Dlg_NewColorDialog(PyObject *_self, PyObject *_args)
static PyObject *Dlg_ModalDialog(PyObject *_self, PyObject *_args)
static PyObject *Dlg_IsDialogEvent(PyObject *_self, PyObject *_args)
static PyObject *Dlg_DialogSelect(PyObject *_self, PyObject *_args)
static PyObject *Dlg_Alert(PyObject *_self, PyObject *_args)
static PyObject *Dlg_StopAlert(PyObject *_self, PyObject *_args)
static PyObject *Dlg_NoteAlert(PyObject *_self, PyObject *_args)
static PyObject *Dlg_CautionAlert(PyObject *_self, PyObject *_args)
static PyObject *Dlg_ParamText(PyObject *_self, PyObject *_args)
static PyObject *Dlg_GetDialogItemText(PyObject *_self, PyObject *_args)
static PyObject *Dlg_SetDialogItemText(PyObject *_self, PyObject *_args)
static PyObject *Dlg_GetAlertStage(PyObject *_self, PyObject *_args)
static PyObject *Dlg_SetDialogFont(PyObject *_self, PyObject *_args)
static PyObject *Dlg_ResetAlertStage(PyObject *_self, PyObject *_args)
static PyObject *Dlg_GetParamText(PyObject *_self, PyObject *_args)
static PyObject *Dlg_NewFeaturesDialog(PyObject *_self, PyObject *_args)
static PyObject *Dlg_GetDialogFromWindow(PyObject *_self, PyObject *_args)
static PyObject *Dlg_SetUserItemHandler(PyObject *_self, PyObject *_args)
static PyMethodDef Dlg_methods[] = ;
PyObject *
DlgObj_WhichDialog(DialogPtr d)
static PyMethodDef Dlg_methods[] = ;
void init_Dlg(void)
