#if APPLE_SUPPORTS_QUICKTIME
#define PyMac_PRECHECK(rtn) do  while(0)
extern PyObject *_TEObj_New(TEHandle);
extern int _TEObj_Convert(PyObject *, TEHandle *);
#define TEObj_New _TEObj_New
#define TEObj_Convert _TEObj_Convert
#define as_TE(h) ((TEHandle)h)
#define as_Resource(teh) ((Handle)teh)
static PyObject *
TextStyle_New(TextStylePtr itself)
static int
TextStyle_Convert(PyObject *v, TextStylePtr p_itself)
static PyObject *TE_Error;
PyTypeObject TE_Type;
#define TEObj_Check(x) ((x)->ob_type == &TE_Type || PyObject_TypeCheck((x), &TE_Type))
typedef struct TEObject  TEObject;
PyObject *TEObj_New(TEHandle itself)
int TEObj_Convert(PyObject *v, TEHandle *p_itself)
static void TEObj_dealloc(TEObject *self)
static PyObject *TEObj_TESetText(TEObject *_self, PyObject *_args)
static PyObject *TEObj_TEGetText(TEObject *_self, PyObject *_args)
static PyObject *TEObj_TEIdle(TEObject *_self, PyObject *_args)
static PyObject *TEObj_TESetSelect(TEObject *_self, PyObject *_args)
static PyObject *TEObj_TEActivate(TEObject *_self, PyObject *_args)
static PyObject *TEObj_TEDeactivate(TEObject *_self, PyObject *_args)
static PyObject *TEObj_TEKey(TEObject *_self, PyObject *_args)
static PyObject *TEObj_TECut(TEObject *_self, PyObject *_args)
static PyObject *TEObj_TECopy(TEObject *_self, PyObject *_args)
static PyObject *TEObj_TEPaste(TEObject *_self, PyObject *_args)
static PyObject *TEObj_TEDelete(TEObject *_self, PyObject *_args)
static PyObject *TEObj_TEInsert(TEObject *_self, PyObject *_args)
static PyObject *TEObj_TESetAlignment(TEObject *_self, PyObject *_args)
static PyObject *TEObj_TEUpdate(TEObject *_self, PyObject *_args)
static PyObject *TEObj_TEScroll(TEObject *_self, PyObject *_args)
static PyObject *TEObj_TESelView(TEObject *_self, PyObject *_args)
static PyObject *TEObj_TEPinScroll(TEObject *_self, PyObject *_args)
static PyObject *TEObj_TEAutoView(TEObject *_self, PyObject *_args)
static PyObject *TEObj_TECalText(TEObject *_self, PyObject *_args)
static PyObject *TEObj_TEGetOffset(TEObject *_self, PyObject *_args)
static PyObject *TEObj_TEGetPoint(TEObject *_self, PyObject *_args)
static PyObject *TEObj_TEClick(TEObject *_self, PyObject *_args)
static PyObject *TEObj_TESetStyleHandle(TEObject *_self, PyObject *_args)
static PyObject *TEObj_TEGetStyleHandle(TEObject *_self, PyObject *_args)
static PyObject *TEObj_TEGetStyle(TEObject *_self, PyObject *_args)
static PyObject *TEObj_TEStylePaste(TEObject *_self, PyObject *_args)
static PyObject *TEObj_TESetStyle(TEObject *_self, PyObject *_args)
static PyObject *TEObj_TEReplaceStyle(TEObject *_self, PyObject *_args)
static PyObject *TEObj_TEGetStyleScrapHandle(TEObject *_self, PyObject *_args)
static PyObject *TEObj_TEStyleInsert(TEObject *_self, PyObject *_args)
static PyObject *TEObj_TEGetHeight(TEObject *_self, PyObject *_args)
static PyObject *TEObj_TEContinuousStyle(TEObject *_self, PyObject *_args)
static PyObject *TEObj_TEUseStyleScrap(TEObject *_self, PyObject *_args)
static PyObject *TEObj_TENumStyles(TEObject *_self, PyObject *_args)
static PyObject *TEObj_TEFeatureFlag(TEObject *_self, PyObject *_args)
static PyObject *TEObj_TEGetHiliteRgn(TEObject *_self, PyObject *_args)
static PyObject *TEObj_as_Resource(TEObject *_self, PyObject *_args)
static PyMethodDef TEObj_methods[] = ;
static PyObject *TEObj_get_destRect(TEObject *self, void *closure)
#define TEObj_set_destRect NULL
static PyObject *TEObj_get_viewRect(TEObject *self, void *closure)
#define TEObj_set_viewRect NULL
static PyObject *TEObj_get_selRect(TEObject *self, void *closure)
#define TEObj_set_selRect NULL
static PyObject *TEObj_get_lineHeight(TEObject *self, void *closure)
#define TEObj_set_lineHeight NULL
static PyObject *TEObj_get_fontAscent(TEObject *self, void *closure)
#define TEObj_set_fontAscent NULL
static PyObject *TEObj_get_selPoint(TEObject *self, void *closure)
#define TEObj_set_selPoint NULL
static PyObject *TEObj_get_selStart(TEObject *self, void *closure)
#define TEObj_set_selStart NULL
static PyObject *TEObj_get_selEnd(TEObject *self, void *closure)
#define TEObj_set_selEnd NULL
static PyObject *TEObj_get_active(TEObject *self, void *closure)
#define TEObj_set_active NULL
static PyObject *TEObj_get_just(TEObject *self, void *closure)
#define TEObj_set_just NULL
static PyObject *TEObj_get_teLength(TEObject *self, void *closure)
#define TEObj_set_teLength NULL
static PyObject *TEObj_get_txFont(TEObject *self, void *closure)
#define TEObj_set_txFont NULL
static PyObject *TEObj_get_txFace(TEObject *self, void *closure)
#define TEObj_set_txFace NULL
static PyObject *TEObj_get_txMode(TEObject *self, void *closure)
#define TEObj_set_txMode NULL
static PyObject *TEObj_get_txSize(TEObject *self, void *closure)
#define TEObj_set_txSize NULL
static PyObject *TEObj_get_nLines(TEObject *self, void *closure)
#define TEObj_set_nLines NULL
static PyGetSetDef TEObj_getsetlist[] = ;
#define TEObj_compare NULL
#define TEObj_repr NULL
#define TEObj_hash NULL
#define TEObj_tp_init 0
#define TEObj_tp_alloc PyType_GenericAlloc
static PyObject *TEObj_tp_new(PyTypeObject *type, PyObject *_args, PyObject *_kwds)
#define TEObj_tp_free PyObject_Del
PyTypeObject TE_Type = ;
static PyObject *TE_TEScrapHandle(PyObject *_self, PyObject *_args)
static PyObject *TE_TEGetScrapLength(PyObject *_self, PyObject *_args)
static PyObject *TE_TENew(PyObject *_self, PyObject *_args)
static PyObject *TE_TETextBox(PyObject *_self, PyObject *_args)
static PyObject *TE_TEStyleNew(PyObject *_self, PyObject *_args)
static PyObject *TE_TESetScrapLength(PyObject *_self, PyObject *_args)
static PyObject *TE_TEFromScrap(PyObject *_self, PyObject *_args)
static PyObject *TE_TEToScrap(PyObject *_self, PyObject *_args)
static PyObject *TE_TEGetScrapHandle(PyObject *_self, PyObject *_args)
static PyObject *TE_TESetScrapHandle(PyObject *_self, PyObject *_args)
static PyObject *TE_LMGetWordRedraw(PyObject *_self, PyObject *_args)
static PyObject *TE_LMSetWordRedraw(PyObject *_self, PyObject *_args)
static PyObject *TE_as_TE(PyObject *_self, PyObject *_args)
static PyMethodDef TE_methods[] = ;
void init_TE(void)
