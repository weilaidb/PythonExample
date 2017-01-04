#if APPLE_SUPPORTS_QUICKTIME
#define PyMac_PRECHECK(rtn) do  while(0)
static PyObject *TXNObj_New(TXNObject);
static int TXNObj_Convert(PyObject *, TXNObject *);
static PyObject *TXNFontMenuObj_New(TXNFontMenuObject);
static int TXNFontMenuObj_Convert(PyObject *, TXNFontMenuObject *);
static int
OptFSSpecPtr_Convert(PyObject *v, FSSpec **p_itself)
static int
OptGWorldObj_Convert(PyObject *v, GWorldPtr *p_itself)
static PyObject *Mlte_Error;
PyTypeObject TXNObject_Type;
#define TXNObj_Check(x) ((x)->ob_type == &TXNObject_Type || PyObject_TypeCheck((x), &TXNObject_Type))
typedef struct TXNObjectObject  TXNObjectObject;
PyObject *TXNObj_New(TXNObject itself)
int TXNObj_Convert(PyObject *v, TXNObject *p_itself)
static void TXNObj_dealloc(TXNObjectObject *self)
static PyObject *TXNObj_TXNDeleteObject(TXNObjectObject *_self, PyObject *_args)
static PyObject *TXNObj_TXNResizeFrame(TXNObjectObject *_self, PyObject *_args)
static PyObject *TXNObj_TXNSetFrameBounds(TXNObjectObject *_self, PyObject *_args)
static PyObject *TXNObj_TXNKeyDown(TXNObjectObject *_self, PyObject *_args)
static PyObject *TXNObj_TXNAdjustCursor(TXNObjectObject *_self, PyObject *_args)
static PyObject *TXNObj_TXNClick(TXNObjectObject *_self, PyObject *_args)
static PyObject *TXNObj_TXNSelectAll(TXNObjectObject *_self, PyObject *_args)
static PyObject *TXNObj_TXNFocus(TXNObjectObject *_self, PyObject *_args)
static PyObject *TXNObj_TXNUpdate(TXNObjectObject *_self, PyObject *_args)
static PyObject *TXNObj_TXNDraw(TXNObjectObject *_self, PyObject *_args)
static PyObject *TXNObj_TXNForceUpdate(TXNObjectObject *_self, PyObject *_args)
static PyObject *TXNObj_TXNGetSleepTicks(TXNObjectObject *_self, PyObject *_args)
static PyObject *TXNObj_TXNIdle(TXNObjectObject *_self, PyObject *_args)
static PyObject *TXNObj_TXNGrowWindow(TXNObjectObject *_self, PyObject *_args)
static PyObject *TXNObj_TXNZoomWindow(TXNObjectObject *_self, PyObject *_args)
static PyObject *TXNObj_TXNCanUndo(TXNObjectObject *_self, PyObject *_args)
static PyObject *TXNObj_TXNUndo(TXNObjectObject *_self, PyObject *_args)
static PyObject *TXNObj_TXNCanRedo(TXNObjectObject *_self, PyObject *_args)
static PyObject *TXNObj_TXNRedo(TXNObjectObject *_self, PyObject *_args)
static PyObject *TXNObj_TXNCut(TXNObjectObject *_self, PyObject *_args)
static PyObject *TXNObj_TXNCopy(TXNObjectObject *_self, PyObject *_args)
static PyObject *TXNObj_TXNPaste(TXNObjectObject *_self, PyObject *_args)
static PyObject *TXNObj_TXNClear(TXNObjectObject *_self, PyObject *_args)
static PyObject *TXNObj_TXNGetSelection(TXNObjectObject *_self, PyObject *_args)
static PyObject *TXNObj_TXNShowSelection(TXNObjectObject *_self, PyObject *_args)
static PyObject *TXNObj_TXNIsSelectionEmpty(TXNObjectObject *_self, PyObject *_args)
static PyObject *TXNObj_TXNSetSelection(TXNObjectObject *_self, PyObject *_args)
static PyObject *TXNObj_TXNCountRunsInRange(TXNObjectObject *_self, PyObject *_args)
static PyObject *TXNObj_TXNDataSize(TXNObjectObject *_self, PyObject *_args)
static PyObject *TXNObj_TXNGetData(TXNObjectObject *_self, PyObject *_args)
static PyObject *TXNObj_TXNGetDataEncoded(TXNObjectObject *_self, PyObject *_args)
static PyObject *TXNObj_TXNSetDataFromFile(TXNObjectObject *_self, PyObject *_args)
static PyObject *TXNObj_TXNGetChangeCount(TXNObjectObject *_self, PyObject *_args)
static PyObject *TXNObj_TXNSave(TXNObjectObject *_self, PyObject *_args)
static PyObject *TXNObj_TXNRevert(TXNObjectObject *_self, PyObject *_args)
static PyObject *TXNObj_TXNPageSetup(TXNObjectObject *_self, PyObject *_args)
static PyObject *TXNObj_TXNPrint(TXNObjectObject *_self, PyObject *_args)
static PyObject *TXNObj_TXNGetViewRect(TXNObjectObject *_self, PyObject *_args)
static PyObject *TXNObj_TXNSetViewRect(TXNObjectObject *_self, PyObject *_args)
static PyObject *TXNObj_TXNAttachObjectToWindow(TXNObjectObject *_self, PyObject *_args)
static PyObject *TXNObj_TXNIsObjectAttachedToWindow(TXNObjectObject *_self, PyObject *_args)
static PyObject *TXNObj_TXNDragTracker(TXNObjectObject *_self, PyObject *_args)
static PyObject *TXNObj_TXNDragReceiver(TXNObjectObject *_self, PyObject *_args)
static PyObject *TXNObj_TXNActivate(TXNObjectObject *_self, PyObject *_args)
static PyObject *TXNObj_TXNEchoMode(TXNObjectObject *_self, PyObject *_args)
static PyObject *TXNObj_TXNDoFontMenuSelection(TXNObjectObject *_self, PyObject *_args)
static PyObject *TXNObj_TXNPrepareFontMenu(TXNObjectObject *_self, PyObject *_args)
static PyObject *TXNObj_TXNPointToOffset(TXNObjectObject *_self, PyObject *_args)
static PyObject *TXNObj_TXNOffsetToPoint(TXNObjectObject *_self, PyObject *_args)
static PyObject *TXNObj_TXNGetLineCount(TXNObjectObject *_self, PyObject *_args)
static PyObject *TXNObj_TXNGetLineMetrics(TXNObjectObject *_self, PyObject *_args)
static PyObject *TXNObj_TXNIsObjectAttachedToSpecificWindow(TXNObjectObject *_self, PyObject *_args)
static PyObject *TXNObj_TXNRecalcTextLayout(TXNObjectObject *_self, PyObject *_args)
static PyMethodDef TXNObj_methods[] = ;
#define TXNObj_getsetlist NULL
#define TXNObj_compare NULL
#define TXNObj_repr NULL
#define TXNObj_hash NULL
#define TXNObj_tp_init 0
#define TXNObj_tp_alloc PyType_GenericAlloc
static PyObject *TXNObj_tp_new(PyTypeObject *type, PyObject *_args, PyObject *_kwds)
#define TXNObj_tp_free PyObject_Del
PyTypeObject TXNObject_Type = ;
PyTypeObject TXNFontMenuObject_Type;
#define TXNFontMenuObj_Check(x) ((x)->ob_type == &TXNFontMenuObject_Type || PyObject_TypeCheck((x), &TXNFontMenuObject_Type))
typedef struct TXNFontMenuObjectObject  TXNFontMenuObjectObject;
PyObject *TXNFontMenuObj_New(TXNFontMenuObject itself)
int TXNFontMenuObj_Convert(PyObject *v, TXNFontMenuObject *p_itself)
static void TXNFontMenuObj_dealloc(TXNFontMenuObjectObject *self)
static PyObject *TXNFontMenuObj_TXNGetFontMenuHandle(TXNFontMenuObjectObject *_self, PyObject *_args)
static PyObject *TXNFontMenuObj_TXNDisposeFontMenuObject(TXNFontMenuObjectObject *_self, PyObject *_args)
static PyMethodDef TXNFontMenuObj_methods[] = ;
#define TXNFontMenuObj_getsetlist NULL
#define TXNFontMenuObj_compare NULL
#define TXNFontMenuObj_repr NULL
#define TXNFontMenuObj_hash NULL
#define TXNFontMenuObj_tp_init 0
#define TXNFontMenuObj_tp_alloc PyType_GenericAlloc
static PyObject *TXNFontMenuObj_tp_new(PyTypeObject *type, PyObject *_args, PyObject *_kwds)
#define TXNFontMenuObj_tp_free PyObject_Del
PyTypeObject TXNFontMenuObject_Type = ;
static PyObject *Mlte_TXNNewObject(PyObject *_self, PyObject *_args)
static PyObject *Mlte_TXNTerminateTextension(PyObject *_self, PyObject *_args)
static PyObject *Mlte_TXNIsScrapPastable(PyObject *_self, PyObject *_args)
static PyObject *Mlte_TXNConvertToPublicScrap(PyObject *_self, PyObject *_args)
static PyObject *Mlte_TXNConvertFromPublicScrap(PyObject *_self, PyObject *_args)
static PyObject *Mlte_TXNNewFontMenuObject(PyObject *_self, PyObject *_args)
static PyObject *Mlte_TXNVersionInformation(PyObject *_self, PyObject *_args)
static PyObject *Mlte_TXNInitTextension(PyObject *_self, PyObject *_args)
static PyMethodDef Mlte_methods[] = ;
void init_Mlte(void)
