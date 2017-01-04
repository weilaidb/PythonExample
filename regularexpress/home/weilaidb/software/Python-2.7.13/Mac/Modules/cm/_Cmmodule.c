#define PyMac_PRECHECK(rtn) do  while(0)
extern PyObject *_CmpObj_New(Component);
extern int _CmpObj_Convert(PyObject *, Component *);
extern PyObject *_CmpInstObj_New(ComponentInstance);
extern int _CmpInstObj_Convert(PyObject *, ComponentInstance *);
#define CmpObj_New _CmpObj_New
#define CmpObj_Convert _CmpObj_Convert
#define CmpInstObj_New _CmpInstObj_New
#define CmpInstObj_Convert _CmpInstObj_Convert
static PyObject *
CmpDesc_New(ComponentDescription *itself)
static int
CmpDesc_Convert(PyObject *v, ComponentDescription *p_itself)
static PyObject *Cm_Error;
PyTypeObject ComponentInstance_Type;
#define CmpInstObj_Check(x) ((x)->ob_type == &ComponentInstance_Type || PyObject_TypeCheck((x), &ComponentInstance_Type))
typedef struct ComponentInstanceObject  ComponentInstanceObject;
PyObject *CmpInstObj_New(ComponentInstance itself)
int CmpInstObj_Convert(PyObject *v, ComponentInstance *p_itself)
static void CmpInstObj_dealloc(ComponentInstanceObject *self)
static PyObject *CmpInstObj_CloseComponent(ComponentInstanceObject *_self, PyObject *_args)
static PyObject *CmpInstObj_GetComponentInstanceError(ComponentInstanceObject *_self, PyObject *_args)
static PyObject *CmpInstObj_SetComponentInstanceError(ComponentInstanceObject *_self, PyObject *_args)
static PyObject *CmpInstObj_GetComponentInstanceStorage(ComponentInstanceObject *_self, PyObject *_args)
static PyObject *CmpInstObj_SetComponentInstanceStorage(ComponentInstanceObject *_self, PyObject *_args)
static PyObject *CmpInstObj_ComponentFunctionImplemented(ComponentInstanceObject *_self, PyObject *_args)
static PyObject *CmpInstObj_GetComponentVersion(ComponentInstanceObject *_self, PyObject *_args)
static PyObject *CmpInstObj_ComponentSetTarget(ComponentInstanceObject *_self, PyObject *_args)
static PyMethodDef CmpInstObj_methods[] = ;
#define CmpInstObj_getsetlist NULL
#define CmpInstObj_compare NULL
#define CmpInstObj_repr NULL
#define CmpInstObj_hash NULL
#define CmpInstObj_tp_init 0
#define CmpInstObj_tp_alloc PyType_GenericAlloc
static PyObject *CmpInstObj_tp_new(PyTypeObject *type, PyObject *_args, PyObject *_kwds)
#define CmpInstObj_tp_free PyObject_Del
PyTypeObject ComponentInstance_Type = ;
PyTypeObject Component_Type;
#define CmpObj_Check(x) ((x)->ob_type == &Component_Type || PyObject_TypeCheck((x), &Component_Type))
typedef struct ComponentObject  ComponentObject;
PyObject *CmpObj_New(Component itself)
int CmpObj_Convert(PyObject *v, Component *p_itself)
static void CmpObj_dealloc(ComponentObject *self)
static PyObject *CmpObj_UnregisterComponent(ComponentObject *_self, PyObject *_args)
static PyObject *CmpObj_GetComponentInfo(ComponentObject *_self, PyObject *_args)
static PyObject *CmpObj_OpenComponent(ComponentObject *_self, PyObject *_args)
static PyObject *CmpObj_ResolveComponentAlias(ComponentObject *_self, PyObject *_args)
static PyObject *CmpObj_GetComponentPublicIndString(ComponentObject *_self, PyObject *_args)
static PyObject *CmpObj_GetComponentRefcon(ComponentObject *_self, PyObject *_args)
static PyObject *CmpObj_SetComponentRefcon(ComponentObject *_self, PyObject *_args)
static PyObject *CmpObj_OpenComponentResFile(ComponentObject *_self, PyObject *_args)
static PyObject *CmpObj_GetComponentResource(ComponentObject *_self, PyObject *_args)
static PyObject *CmpObj_GetComponentIndString(ComponentObject *_self, PyObject *_args)
static PyObject *CmpObj_CountComponentInstances(ComponentObject *_self, PyObject *_args)
static PyObject *CmpObj_SetDefaultComponent(ComponentObject *_self, PyObject *_args)
static PyObject *CmpObj_CaptureComponent(ComponentObject *_self, PyObject *_args)
static PyObject *CmpObj_UncaptureComponent(ComponentObject *_self, PyObject *_args)
static PyObject *CmpObj_GetComponentIconSuite(ComponentObject *_self, PyObject *_args)
static PyMethodDef CmpObj_methods[] = ;
#define CmpObj_getsetlist NULL
#define CmpObj_compare NULL
#define CmpObj_repr NULL
#define CmpObj_hash NULL
#define CmpObj_tp_init 0
#define CmpObj_tp_alloc PyType_GenericAlloc
static PyObject *CmpObj_tp_new(PyTypeObject *type, PyObject *_args, PyObject *_kwds)
#define CmpObj_tp_free PyObject_Del
PyTypeObject Component_Type = ;
static PyObject *Cm_RegisterComponentResource(PyObject *_self, PyObject *_args)
static PyObject *Cm_FindNextComponent(PyObject *_self, PyObject *_args)
static PyObject *Cm_CountComponents(PyObject *_self, PyObject *_args)
static PyObject *Cm_GetComponentListModSeed(PyObject *_self, PyObject *_args)
static PyObject *Cm_CloseComponentResFile(PyObject *_self, PyObject *_args)
static PyObject *Cm_OpenDefaultComponent(PyObject *_self, PyObject *_args)
static PyObject *Cm_RegisterComponentResourceFile(PyObject *_self, PyObject *_args)
static PyMethodDef Cm_methods[] = ;
void init_Cm(void)
