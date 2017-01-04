typedef SInt32 SRefCon;
#define PyMac_PRECHECK(rtn) do  while(0)
extern PyObject *_AEDesc_New(AEDesc *);
extern int _AEDesc_Convert(PyObject *, AEDesc *);
#define AEDesc_New _AEDesc_New
#define AEDesc_NewBorrowed _AEDesc_NewBorrowed
#define AEDesc_Convert _AEDesc_Convert
typedef long refcontype;
static pascal OSErr GenericEventHandler(const AppleEvent *request, AppleEvent *reply, refcontype refcon);
AEEventHandlerUPP upp_GenericEventHandler;
static pascal Boolean AEIdleProc(EventRecord *theEvent, long *sleepTime, RgnHandle *mouseRgn)
AEIdleUPP upp_AEIdleProc;
static PyObject *AE_Error;
PyTypeObject AEDesc_Type;
#define AEDesc_Check(x) ((x)->ob_type == &AEDesc_Type || PyObject_TypeCheck((x), &AEDesc_Type))
typedef struct AEDescObject  AEDescObject;
PyObject *AEDesc_New(AEDesc *itself)
int AEDesc_Convert(PyObject *v, AEDesc *p_itself)
static void AEDesc_dealloc(AEDescObject *self)
static PyObject *AEDesc_AECoerceDesc(AEDescObject *_self, PyObject *_args)
static PyObject *AEDesc_AEDuplicateDesc(AEDescObject *_self, PyObject *_args)
static PyObject *AEDesc_AECountItems(AEDescObject *_self, PyObject *_args)
static PyObject *AEDesc_AEPutPtr(AEDescObject *_self, PyObject *_args)
static PyObject *AEDesc_AEPutDesc(AEDescObject *_self, PyObject *_args)
static PyObject *AEDesc_AEGetNthPtr(AEDescObject *_self, PyObject *_args)
static PyObject *AEDesc_AEGetNthDesc(AEDescObject *_self, PyObject *_args)
static PyObject *AEDesc_AESizeOfNthItem(AEDescObject *_self, PyObject *_args)
static PyObject *AEDesc_AEDeleteItem(AEDescObject *_self, PyObject *_args)
static PyObject *AEDesc_AEPutParamPtr(AEDescObject *_self, PyObject *_args)
static PyObject *AEDesc_AEPutParamDesc(AEDescObject *_self, PyObject *_args)
static PyObject *AEDesc_AEGetParamPtr(AEDescObject *_self, PyObject *_args)
static PyObject *AEDesc_AEGetParamDesc(AEDescObject *_self, PyObject *_args)
static PyObject *AEDesc_AESizeOfParam(AEDescObject *_self, PyObject *_args)
static PyObject *AEDesc_AEDeleteParam(AEDescObject *_self, PyObject *_args)
static PyObject *AEDesc_AEGetAttributePtr(AEDescObject *_self, PyObject *_args)
static PyObject *AEDesc_AEGetAttributeDesc(AEDescObject *_self, PyObject *_args)
static PyObject *AEDesc_AESizeOfAttribute(AEDescObject *_self, PyObject *_args)
static PyObject *AEDesc_AEPutAttributePtr(AEDescObject *_self, PyObject *_args)
static PyObject *AEDesc_AEPutAttributeDesc(AEDescObject *_self, PyObject *_args)
static PyObject *AEDesc_AEGetDescDataSize(AEDescObject *_self, PyObject *_args)
static PyObject *AEDesc_AESend(AEDescObject *_self, PyObject *_args)
static PyObject *AEDesc_AEResetTimer(AEDescObject *_self, PyObject *_args)
static PyObject *AEDesc_AESuspendTheCurrentEvent(AEDescObject *_self, PyObject *_args)
static PyObject *AEDesc_AEResumeTheCurrentEvent(AEDescObject *_self, PyObject *_args)
static PyObject *AEDesc_AEGetTheCurrentEvent(AEDescObject *_self, PyObject *_args)
static PyObject *AEDesc_AESetTheCurrentEvent(AEDescObject *_self, PyObject *_args)
static PyObject *AEDesc_AEResolve(AEDescObject *_self, PyObject *_args)
static PyObject *AEDesc_AutoDispose(AEDescObject *_self, PyObject *_args)
static PyMethodDef AEDesc_methods[] = ;
static PyObject *AEDesc_get_type(AEDescObject *self, void *closure)
#define AEDesc_set_type NULL
static PyObject *AEDesc_get_data(AEDescObject *self, void *closure)
#define AEDesc_set_data NULL
static PyGetSetDef AEDesc_getsetlist[] = ;
#define AEDesc_compare NULL
#define AEDesc_repr NULL
#define AEDesc_hash NULL
#define AEDesc_tp_init 0
#define AEDesc_tp_alloc PyType_GenericAlloc
static PyObject *AEDesc_tp_new(PyTypeObject *type, PyObject *_args, PyObject *_kwds)
#define AEDesc_tp_free PyObject_Del
PyTypeObject AEDesc_Type = ;
static PyObject *AE_AECoercePtr(PyObject *_self, PyObject *_args)
static PyObject *AE_AECreateDesc(PyObject *_self, PyObject *_args)
static PyObject *AE_AECreateList(PyObject *_self, PyObject *_args)
static PyObject *AE_AECreateAppleEvent(PyObject *_self, PyObject *_args)
static PyObject *AE_AEReplaceDescData(PyObject *_self, PyObject *_args)
static PyObject *AE_AEProcessAppleEvent(PyObject *_self, PyObject *_args)
static PyObject *AE_AEGetInteractionAllowed(PyObject *_self, PyObject *_args)
static PyObject *AE_AESetInteractionAllowed(PyObject *_self, PyObject *_args)
static PyObject *AE_AEInteractWithUser(PyObject *_self, PyObject *_args)
static PyObject *AE_AEInstallEventHandler(PyObject *_self, PyObject *_args)
static PyObject *AE_AERemoveEventHandler(PyObject *_self, PyObject *_args)
static PyObject *AE_AEGetEventHandler(PyObject *_self, PyObject *_args)
static PyObject *AE_AEInstallSpecialHandler(PyObject *_self, PyObject *_args)
static PyObject *AE_AERemoveSpecialHandler(PyObject *_self, PyObject *_args)
static PyObject *AE_AEManagerInfo(PyObject *_self, PyObject *_args)
static PyObject *AE_AEObjectInit(PyObject *_self, PyObject *_args)
static PyObject *AE_AEDisposeToken(PyObject *_self, PyObject *_args)
static PyObject *AE_AECallObjectAccessor(PyObject *_self, PyObject *_args)
static PyMethodDef AE_methods[] = ;
static pascal OSErr
GenericEventHandler(const AppleEvent *request, AppleEvent *reply, refcontype refcon)
PyObject *AEDesc_NewBorrowed(AEDesc *itself)
void init_AE(void)
