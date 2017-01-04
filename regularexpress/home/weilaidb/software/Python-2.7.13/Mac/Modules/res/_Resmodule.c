#define PyMac_PRECHECK(rtn) do  while(0)
extern PyObject *_ResObj_New(Handle);
extern int _ResObj_Convert(PyObject *, Handle *);
extern PyObject *_OptResObj_New(Handle);
extern int _OptResObj_Convert(PyObject *, Handle *);
#define ResObj_New _ResObj_New
#define ResObj_Convert _ResObj_Convert
#define OptResObj_New _OptResObj_New
#define OptResObj_Convert _OptResObj_Convert
static void
PyMac_AutoDisposeHandle(Handle h)
static PyObject *Res_Error;
PyTypeObject Resource_Type;
#define ResObj_Check(x) ((x)->ob_type == &Resource_Type || PyObject_TypeCheck((x), &Resource_Type))
typedef struct ResourceObject  ResourceObject;
PyObject *ResObj_New(Handle itself)
int ResObj_Convert(PyObject *v, Handle *p_itself)
static void ResObj_dealloc(ResourceObject *self)
static PyObject *ResObj_HomeResFile(ResourceObject *_self, PyObject *_args)
static PyObject *ResObj_MacLoadResource(ResourceObject *_self, PyObject *_args)
static PyObject *ResObj_ReleaseResource(ResourceObject *_self, PyObject *_args)
static PyObject *ResObj_DetachResource(ResourceObject *_self, PyObject *_args)
static PyObject *ResObj_GetResAttrs(ResourceObject *_self, PyObject *_args)
static PyObject *ResObj_GetResInfo(ResourceObject *_self, PyObject *_args)
static PyObject *ResObj_SetResInfo(ResourceObject *_self, PyObject *_args)
static PyObject *ResObj_AddResource(ResourceObject *_self, PyObject *_args)
static PyObject *ResObj_GetResourceSizeOnDisk(ResourceObject *_self, PyObject *_args)
static PyObject *ResObj_GetMaxResourceSize(ResourceObject *_self, PyObject *_args)
static PyObject *ResObj_SetResAttrs(ResourceObject *_self, PyObject *_args)
static PyObject *ResObj_ChangedResource(ResourceObject *_self, PyObject *_args)
static PyObject *ResObj_RemoveResource(ResourceObject *_self, PyObject *_args)
static PyObject *ResObj_WriteResource(ResourceObject *_self, PyObject *_args)
static PyObject *ResObj_SetResourceSize(ResourceObject *_self, PyObject *_args)
static PyObject *ResObj_GetNextFOND(ResourceObject *_self, PyObject *_args)
static PyObject *ResObj_as_Control(ResourceObject *_self, PyObject *_args)
static PyObject *ResObj_as_Menu(ResourceObject *_self, PyObject *_args)
static PyObject *ResObj_LoadResource(ResourceObject *_self, PyObject *_args)
static PyObject *ResObj_AutoDispose(ResourceObject *_self, PyObject *_args)
static PyMethodDef ResObj_methods[] = ;
static PyObject *ResObj_get_data(ResourceObject *self, void *closure)
static int ResObj_set_data(ResourceObject *self, PyObject *v, void *closure)
static PyObject *ResObj_get_size(ResourceObject *self, void *closure)
#define ResObj_set_size NULL
static PyGetSetDef ResObj_getsetlist[] = ;
#define ResObj_compare NULL
#define ResObj_repr NULL
#define ResObj_hash NULL
static int ResObj_tp_init(PyObject *_self, PyObject *_args, PyObject *_kwds)
#define ResObj_tp_alloc PyType_GenericAlloc
static PyObject *ResObj_tp_new(PyTypeObject *type, PyObject *_args, PyObject *_kwds)
#define ResObj_tp_free PyObject_Del
PyTypeObject Resource_Type = ;
static PyObject *Res_CloseResFile(PyObject *_self, PyObject *_args)
static PyObject *Res_ResError(PyObject *_self, PyObject *_args)
static PyObject *Res_CurResFile(PyObject *_self, PyObject *_args)
static PyObject *Res_UseResFile(PyObject *_self, PyObject *_args)
static PyObject *Res_CountTypes(PyObject *_self, PyObject *_args)
static PyObject *Res_Count1Types(PyObject *_self, PyObject *_args)
static PyObject *Res_GetIndType(PyObject *_self, PyObject *_args)
static PyObject *Res_Get1IndType(PyObject *_self, PyObject *_args)
static PyObject *Res_SetResLoad(PyObject *_self, PyObject *_args)
static PyObject *Res_CountResources(PyObject *_self, PyObject *_args)
static PyObject *Res_Count1Resources(PyObject *_self, PyObject *_args)
static PyObject *Res_GetIndResource(PyObject *_self, PyObject *_args)
static PyObject *Res_Get1IndResource(PyObject *_self, PyObject *_args)
static PyObject *Res_GetResource(PyObject *_self, PyObject *_args)
static PyObject *Res_Get1Resource(PyObject *_self, PyObject *_args)
static PyObject *Res_GetNamedResource(PyObject *_self, PyObject *_args)
static PyObject *Res_Get1NamedResource(PyObject *_self, PyObject *_args)
static PyObject *Res_UniqueID(PyObject *_self, PyObject *_args)
static PyObject *Res_Unique1ID(PyObject *_self, PyObject *_args)
static PyObject *Res_UpdateResFile(PyObject *_self, PyObject *_args)
static PyObject *Res_SetResPurge(PyObject *_self, PyObject *_args)
static PyObject *Res_GetResFileAttrs(PyObject *_self, PyObject *_args)
static PyObject *Res_SetResFileAttrs(PyObject *_self, PyObject *_args)
static PyObject *Res_OpenRFPerm(PyObject *_self, PyObject *_args)
static PyObject *Res_HOpenResFile(PyObject *_self, PyObject *_args)
static PyObject *Res_HCreateResFile(PyObject *_self, PyObject *_args)
static PyObject *Res_FSpOpenResFile(PyObject *_self, PyObject *_args)
static PyObject *Res_FSpCreateResFile(PyObject *_self, PyObject *_args)
static PyObject *Res_InsertResourceFile(PyObject *_self, PyObject *_args)
static PyObject *Res_DetachResourceFile(PyObject *_self, PyObject *_args)
static PyObject *Res_FSpResourceFileAlreadyOpen(PyObject *_self, PyObject *_args)
static PyObject *Res_FSpOpenOrphanResFile(PyObject *_self, PyObject *_args)
static PyObject *Res_GetTopResourceFile(PyObject *_self, PyObject *_args)
static PyObject *Res_GetNextResourceFile(PyObject *_self, PyObject *_args)
static PyObject *Res_FSOpenResFile(PyObject *_self, PyObject *_args)
static PyObject *Res_FSCreateResFile(PyObject *_self, PyObject *_args)
static PyObject *Res_FSResourceFileAlreadyOpen(PyObject *_self, PyObject *_args)
static PyObject *Res_FSCreateResourceFile(PyObject *_self, PyObject *_args)
static PyObject *Res_FSOpenResourceFile(PyObject *_self, PyObject *_args)
static PyObject *Res_Handle(PyObject *_self, PyObject *_args)
static PyMethodDef Res_methods[] = ;
PyObject *OptResObj_New(Handle itself)
int OptResObj_Convert(PyObject *v, Handle *p_itself)
void init_Res(void)
