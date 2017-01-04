#if APPLE_SUPPORTS_QUICKTIME
#define PyMac_PRECHECK(rtn) do  while(0)
DragTrackingHandlerUPP dragglue_TrackingHandlerUPP;
DragReceiveHandlerUPP dragglue_ReceiveHandlerUPP;
DragSendDataUPP dragglue_SendDataUPP;
extern PyObject *_DragObj_New(DragRef);
extern int _DragObj_Convert(PyObject *, DragRef *);
#define DragObj_New _DragObj_New
#define DragObj_Convert _DragObj_Convert
static PyObject *Drag_Error;
PyTypeObject DragObj_Type;
#define DragObj_Check(x) ((x)->ob_type == &DragObj_Type || PyObject_TypeCheck((x), &DragObj_Type))
typedef struct DragObjObject  DragObjObject;
PyObject *DragObj_New(DragRef itself)
int DragObj_Convert(PyObject *v, DragRef *p_itself)
static void DragObj_dealloc(DragObjObject *self)
static PyObject *DragObj_DisposeDrag(DragObjObject *_self, PyObject *_args)
static PyObject *DragObj_AddDragItemFlavor(DragObjObject *_self, PyObject *_args)
static PyObject *DragObj_SetDragItemFlavorData(DragObjObject *_self, PyObject *_args)
static PyObject *DragObj_SetDragImage(DragObjObject *_self, PyObject *_args)
static PyObject *DragObj_ChangeDragBehaviors(DragObjObject *_self, PyObject *_args)
static PyObject *DragObj_TrackDrag(DragObjObject *_self, PyObject *_args)
static PyObject *DragObj_CountDragItems(DragObjObject *_self, PyObject *_args)
static PyObject *DragObj_GetDragItemReferenceNumber(DragObjObject *_self, PyObject *_args)
static PyObject *DragObj_CountDragItemFlavors(DragObjObject *_self, PyObject *_args)
static PyObject *DragObj_GetFlavorType(DragObjObject *_self, PyObject *_args)
static PyObject *DragObj_GetFlavorFlags(DragObjObject *_self, PyObject *_args)
static PyObject *DragObj_GetFlavorDataSize(DragObjObject *_self, PyObject *_args)
static PyObject *DragObj_GetFlavorData(DragObjObject *_self, PyObject *_args)
static PyObject *DragObj_GetDragItemBounds(DragObjObject *_self, PyObject *_args)
static PyObject *DragObj_SetDragItemBounds(DragObjObject *_self, PyObject *_args)
static PyObject *DragObj_GetDropLocation(DragObjObject *_self, PyObject *_args)
static PyObject *DragObj_SetDropLocation(DragObjObject *_self, PyObject *_args)
static PyObject *DragObj_GetDragAttributes(DragObjObject *_self, PyObject *_args)
static PyObject *DragObj_GetDragMouse(DragObjObject *_self, PyObject *_args)
static PyObject *DragObj_SetDragMouse(DragObjObject *_self, PyObject *_args)
static PyObject *DragObj_GetDragOrigin(DragObjObject *_self, PyObject *_args)
static PyObject *DragObj_GetDragModifiers(DragObjObject *_self, PyObject *_args)
static PyObject *DragObj_ShowDragHilite(DragObjObject *_self, PyObject *_args)
static PyObject *DragObj_HideDragHilite(DragObjObject *_self, PyObject *_args)
static PyObject *DragObj_DragPreScroll(DragObjObject *_self, PyObject *_args)
static PyObject *DragObj_DragPostScroll(DragObjObject *_self, PyObject *_args)
static PyObject *DragObj_UpdateDragHilite(DragObjObject *_self, PyObject *_args)
static PyMethodDef DragObj_methods[] = ;
#define DragObj_getsetlist NULL
#define DragObj_compare NULL
#define DragObj_repr NULL
#define DragObj_hash NULL
#define DragObj_tp_init 0
#define DragObj_tp_alloc PyType_GenericAlloc
static PyObject *DragObj_tp_new(PyTypeObject *type, PyObject *_args, PyObject *_kwds)
#define DragObj_tp_free PyObject_Del
PyTypeObject DragObj_Type = ;
static PyObject *Drag_NewDrag(PyObject *_self, PyObject *_args)
static PyObject *Drag_GetDragHiliteColor(PyObject *_self, PyObject *_args)
static PyObject *Drag_WaitMouseMoved(PyObject *_self, PyObject *_args)
static PyObject *Drag_ZoomRects(PyObject *_self, PyObject *_args)
static PyObject *Drag_ZoomRegion(PyObject *_self, PyObject *_args)
static PyObject *Drag_InstallTrackingHandler(PyObject *_self, PyObject *_args)
static PyObject *Drag_InstallReceiveHandler(PyObject *_self, PyObject *_args)
static PyObject *Drag_RemoveTrackingHandler(PyObject *_self, PyObject *_args)
static PyObject *Drag_RemoveReceiveHandler(PyObject *_self, PyObject *_args)
static PyMethodDef Drag_methods[] = ;
static pascal OSErr
dragglue_TrackingHandler(DragTrackingMessage theMessage, WindowPtr theWindow,
void *handlerRefCon, DragReference theDrag)
static pascal OSErr
dragglue_ReceiveHandler(WindowPtr theWindow, void *handlerRefCon,
DragReference theDrag)
static pascal OSErr
dragglue_SendData(FlavorType theType, void *dragSendRefCon,
ItemReference theItem, DragReference theDrag)
static PyMethodDef Drag_methods[] = ;
void init_Drag(void)
