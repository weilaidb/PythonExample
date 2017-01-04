#if !defined(__LP64__) && !defined(MAC_OS_X_VERSION_10_7)
#define PyMac_PRECHECK(rtn) do  while(0)
extern PyObject *_GWorldObj_New(GWorldPtr);
extern int _GWorldObj_Convert(PyObject *, GWorldPtr *);
#define GWorldObj_New _GWorldObj_New
#define GWorldObj_Convert _GWorldObj_Convert
#define as_GrafPtr(gworld) ((GrafPtr)(gworld))
static PyObject *Qdoffs_Error;
PyTypeObject GWorld_Type;
#define GWorldObj_Check(x) ((x)->ob_type == &GWorld_Type || PyObject_TypeCheck((x), &GWorld_Type))
typedef struct GWorldObject  GWorldObject;
PyObject *GWorldObj_New(GWorldPtr itself)
int GWorldObj_Convert(PyObject *v, GWorldPtr *p_itself)
static void GWorldObj_dealloc(GWorldObject *self)
static PyObject *GWorldObj_GetGWorldDevice(GWorldObject *_self, PyObject *_args)
static PyObject *GWorldObj_GetGWorldPixMap(GWorldObject *_self, PyObject *_args)
static PyObject *GWorldObj_as_GrafPtr(GWorldObject *_self, PyObject *_args)
static PyMethodDef GWorldObj_methods[] = ;
#define GWorldObj_getsetlist NULL
#define GWorldObj_compare NULL
#define GWorldObj_repr NULL
#define GWorldObj_hash NULL
#define GWorldObj_tp_init 0
#define GWorldObj_tp_alloc PyType_GenericAlloc
static PyObject *GWorldObj_tp_new(PyTypeObject *type, PyObject *_args, PyObject *_kwds)
#define GWorldObj_tp_free PyObject_Del
PyTypeObject GWorld_Type = ;
static PyObject *Qdoffs_NewGWorld(PyObject *_self, PyObject *_args)
static PyObject *Qdoffs_LockPixels(PyObject *_self, PyObject *_args)
static PyObject *Qdoffs_UnlockPixels(PyObject *_self, PyObject *_args)
static PyObject *Qdoffs_UpdateGWorld(PyObject *_self, PyObject *_args)
static PyObject *Qdoffs_GetGWorld(PyObject *_self, PyObject *_args)
static PyObject *Qdoffs_SetGWorld(PyObject *_self, PyObject *_args)
static PyObject *Qdoffs_CTabChanged(PyObject *_self, PyObject *_args)
static PyObject *Qdoffs_PixPatChanged(PyObject *_self, PyObject *_args)
static PyObject *Qdoffs_PortChanged(PyObject *_self, PyObject *_args)
static PyObject *Qdoffs_GDeviceChanged(PyObject *_self, PyObject *_args)
static PyObject *Qdoffs_AllowPurgePixels(PyObject *_self, PyObject *_args)
static PyObject *Qdoffs_NoPurgePixels(PyObject *_self, PyObject *_args)
static PyObject *Qdoffs_GetPixelsState(PyObject *_self, PyObject *_args)
static PyObject *Qdoffs_SetPixelsState(PyObject *_self, PyObject *_args)
static PyObject *Qdoffs_GetPixRowBytes(PyObject *_self, PyObject *_args)
static PyObject *Qdoffs_NewScreenBuffer(PyObject *_self, PyObject *_args)
static PyObject *Qdoffs_DisposeScreenBuffer(PyObject *_self, PyObject *_args)
static PyObject *Qdoffs_QDDone(PyObject *_self, PyObject *_args)
static PyObject *Qdoffs_OffscreenVersion(PyObject *_self, PyObject *_args)
static PyObject *Qdoffs_NewTempScreenBuffer(PyObject *_self, PyObject *_args)
static PyObject *Qdoffs_PixMap32Bit(PyObject *_self, PyObject *_args)
static PyObject *Qdoffs_GetPixMapBytes(PyObject *_self, PyObject *_args)
static PyObject *Qdoffs_PutPixMapBytes(PyObject *_self, PyObject *_args)
static PyMethodDef Qdoffs_methods[] = ;
void init_Qdoffs(void)
