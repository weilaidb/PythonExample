#if APPLE_SUPPORTS_QUICKTIME
extern int _CFStringRefObj_Convert(PyObject *, CFStringRef *);
static PyObject *IBCarbon_Error;
PyTypeObject IBNibRef_Type;
#define IBNibRefObj_Check(x) ((x)->ob_type == &IBNibRef_Type || PyObject_TypeCheck((x), &IBNibRef_Type))
typedef struct IBNibRefObject  IBNibRefObject;
PyObject *IBNibRefObj_New(IBNibRef itself)
int IBNibRefObj_Convert(PyObject *v, IBNibRef *p_itself)
static void IBNibRefObj_dealloc(IBNibRefObject *self)
static PyObject *IBNibRefObj_CreateWindowFromNib(IBNibRefObject *_self, PyObject *_args)
static PyObject *IBNibRefObj_CreateMenuFromNib(IBNibRefObject *_self, PyObject *_args)
static PyObject *IBNibRefObj_CreateMenuBarFromNib(IBNibRefObject *_self, PyObject *_args)
static PyObject *IBNibRefObj_SetMenuBarFromNib(IBNibRefObject *_self, PyObject *_args)
static PyMethodDef IBNibRefObj_methods[] = ;
#define IBNibRefObj_getsetlist NULL
#define IBNibRefObj_compare NULL
#define IBNibRefObj_repr NULL
#define IBNibRefObj_hash NULL
#define IBNibRefObj_tp_init 0
#define IBNibRefObj_tp_alloc PyType_GenericAlloc
static PyObject *IBNibRefObj_tp_new(PyTypeObject *type, PyObject *_args, PyObject *_kwds)
#define IBNibRefObj_tp_free PyObject_Del
PyTypeObject IBNibRef_Type = ;
static PyObject *IBCarbon_CreateNibReference(PyObject *_self, PyObject *_args)
static PyMethodDef IBCarbon_methods[] = ;
void init_IBCarbon(void)
