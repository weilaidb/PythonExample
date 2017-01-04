#define PyMac_PRECHECK(rtn) do  while(0)
static PyObject *Scrap_Error;
PyTypeObject Scrap_Type;
#define ScrapObj_Check(x) ((x)->ob_type == &Scrap_Type || PyObject_TypeCheck((x), &Scrap_Type))
typedef struct ScrapObject  ScrapObject;
PyObject *ScrapObj_New(ScrapRef itself)
int ScrapObj_Convert(PyObject *v, ScrapRef *p_itself)
static void ScrapObj_dealloc(ScrapObject *self)
static PyObject *ScrapObj_GetScrapFlavorFlags(ScrapObject *_self, PyObject *_args)
static PyObject *ScrapObj_GetScrapFlavorSize(ScrapObject *_self, PyObject *_args)
static PyObject *ScrapObj_GetScrapFlavorData(ScrapObject *_self, PyObject *_args)
static PyObject *ScrapObj_PutScrapFlavor(ScrapObject *_self, PyObject *_args)
static PyObject *ScrapObj_GetScrapFlavorCount(ScrapObject *_self, PyObject *_args)
static PyObject *ScrapObj_GetScrapFlavorInfoList(ScrapObject *_self, PyObject *_args)
static PyMethodDef ScrapObj_methods[] = ;
PyMethodChain ScrapObj_chain = ;
static PyObject *ScrapObj_getattr(ScrapObject *self, char *name)
#define ScrapObj_setattr NULL
#define ScrapObj_compare NULL
#define ScrapObj_repr NULL
#define ScrapObj_hash NULL
PyTypeObject Scrap_Type = ;
static PyObject *Scrap_LoadScrap(PyObject *_self, PyObject *_args)
static PyObject *Scrap_UnloadScrap(PyObject *_self, PyObject *_args)
static PyObject *Scrap_GetCurrentScrap(PyObject *_self, PyObject *_args)
static PyObject *Scrap_ClearCurrentScrap(PyObject *_self, PyObject *_args)
static PyObject *Scrap_CallInScrapPromises(PyObject *_self, PyObject *_args)
static PyMethodDef Scrap_methods[] = ;
void init_Scrap(void)
