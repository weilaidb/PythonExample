#if APPLE_SUPPORTS_QUICKTIME
#define PyMac_PRECHECK(rtn) do  while(0)
extern PyObject *_ListObj_New(ListHandle);
extern int _ListObj_Convert(PyObject *, ListHandle *);
#define ListObj_New _ListObj_New
#define ListObj_Convert _ListObj_Convert
#define as_List(x) ((ListHandle)x)
#define as_Resource(lh) ((Handle)lh)
static ListDefUPP myListDefFunctionUPP;
static PyObject *List_Error;
PyTypeObject List_Type;
#define ListObj_Check(x) ((x)->ob_type == &List_Type || PyObject_TypeCheck((x), &List_Type))
typedef struct ListObject  ListObject;
PyObject *ListObj_New(ListHandle itself)
int ListObj_Convert(PyObject *v, ListHandle *p_itself)
static void ListObj_dealloc(ListObject *self)
static PyObject *ListObj_LAddColumn(ListObject *_self, PyObject *_args)
static PyObject *ListObj_LAddRow(ListObject *_self, PyObject *_args)
static PyObject *ListObj_LDelColumn(ListObject *_self, PyObject *_args)
static PyObject *ListObj_LDelRow(ListObject *_self, PyObject *_args)
static PyObject *ListObj_LGetSelect(ListObject *_self, PyObject *_args)
static PyObject *ListObj_LLastClick(ListObject *_self, PyObject *_args)
static PyObject *ListObj_LNextCell(ListObject *_self, PyObject *_args)
static PyObject *ListObj_LSize(ListObject *_self, PyObject *_args)
static PyObject *ListObj_LSetDrawingMode(ListObject *_self, PyObject *_args)
static PyObject *ListObj_LScroll(ListObject *_self, PyObject *_args)
static PyObject *ListObj_LAutoScroll(ListObject *_self, PyObject *_args)
static PyObject *ListObj_LUpdate(ListObject *_self, PyObject *_args)
static PyObject *ListObj_LActivate(ListObject *_self, PyObject *_args)
static PyObject *ListObj_LCellSize(ListObject *_self, PyObject *_args)
static PyObject *ListObj_LClick(ListObject *_self, PyObject *_args)
static PyObject *ListObj_LAddToCell(ListObject *_self, PyObject *_args)
static PyObject *ListObj_LClrCell(ListObject *_self, PyObject *_args)
static PyObject *ListObj_LGetCell(ListObject *_self, PyObject *_args)
static PyObject *ListObj_LRect(ListObject *_self, PyObject *_args)
static PyObject *ListObj_LSetCell(ListObject *_self, PyObject *_args)
static PyObject *ListObj_LSetSelect(ListObject *_self, PyObject *_args)
static PyObject *ListObj_LDraw(ListObject *_self, PyObject *_args)
static PyObject *ListObj_LGetCellDataLocation(ListObject *_self, PyObject *_args)
static PyObject *ListObj_GetListPort(ListObject *_self, PyObject *_args)
static PyObject *ListObj_GetListVerticalScrollBar(ListObject *_self, PyObject *_args)
static PyObject *ListObj_GetListHorizontalScrollBar(ListObject *_self, PyObject *_args)
static PyObject *ListObj_GetListActive(ListObject *_self, PyObject *_args)
static PyObject *ListObj_GetListClickTime(ListObject *_self, PyObject *_args)
static PyObject *ListObj_GetListRefCon(ListObject *_self, PyObject *_args)
static PyObject *ListObj_GetListDefinition(ListObject *_self, PyObject *_args)
static PyObject *ListObj_GetListUserHandle(ListObject *_self, PyObject *_args)
static PyObject *ListObj_GetListDataHandle(ListObject *_self, PyObject *_args)
static PyObject *ListObj_GetListFlags(ListObject *_self, PyObject *_args)
static PyObject *ListObj_GetListSelectionFlags(ListObject *_self, PyObject *_args)
static PyObject *ListObj_as_Resource(ListObject *_self, PyObject *_args)
static PyMethodDef ListObj_methods[] = ;
static PyObject *ListObj_get_listFlags(ListObject *self, void *closure)
static int ListObj_set_listFlags(ListObject *self, PyObject *v, void *closure)
static PyObject *ListObj_get_selFlags(ListObject *self, void *closure)
static int ListObj_set_selFlags(ListObject *self, PyObject *v, void *closure)
static PyObject *ListObj_get_cellSize(ListObject *self, void *closure)
static int ListObj_set_cellSize(ListObject *self, PyObject *v, void *closure)
static PyGetSetDef ListObj_getsetlist[] = ;
#define ListObj_compare NULL
#define ListObj_repr NULL
#define ListObj_hash NULL
#define ListObj_tp_init 0
#define ListObj_tp_alloc PyType_GenericAlloc
static PyObject *ListObj_tp_new(PyTypeObject *type, PyObject *_args, PyObject *_kwds)
#define ListObj_tp_free PyObject_Del
PyTypeObject List_Type = ;
static PyObject *List_CreateCustomList(PyObject *_self, PyObject *_args)
static PyObject *List_LNew(PyObject *_self, PyObject *_args)
static PyObject *List_SetListViewBounds(PyObject *_self, PyObject *_args)
static PyObject *List_SetListPort(PyObject *_self, PyObject *_args)
static PyObject *List_SetListCellIndent(PyObject *_self, PyObject *_args)
static PyObject *List_SetListClickTime(PyObject *_self, PyObject *_args)
static PyObject *List_SetListRefCon(PyObject *_self, PyObject *_args)
static PyObject *List_SetListUserHandle(PyObject *_self, PyObject *_args)
static PyObject *List_SetListFlags(PyObject *_self, PyObject *_args)
static PyObject *List_SetListSelectionFlags(PyObject *_self, PyObject *_args)
static PyObject *List_as_List(PyObject *_self, PyObject *_args)
static PyMethodDef List_methods[] = ;
#if APPLE_SUPPORTS_QUICKTIME
static void myListDefFunction(SInt16 message,
Boolean selected,
Rect *cellRect,
Cell theCell,
SInt16 dataOffset,
SInt16 dataLen,
ListHandle theList)
void init_List(void)
