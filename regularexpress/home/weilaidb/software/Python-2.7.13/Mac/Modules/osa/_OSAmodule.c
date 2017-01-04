#define PyMac_PRECHECK(rtn) do  while(0)
#if PY_VERSION_HEX < 0x02040000
PyObject *PyMac_GetOSErrException(void);
extern PyObject *_OSAObj_New(ComponentInstance);
extern int _OSAObj_Convert(PyObject *, ComponentInstance *);
#define OSAObj_New _OSAObj_New
#define OSAObj_Convert _OSAObj_Convert
static PyObject *OSA_Error;
PyTypeObject OSAComponentInstance_Type;
#define OSAObj_Check(x) ((x)->ob_type == &OSAComponentInstance_Type || PyObject_TypeCheck((x), &OSAComponentInstance_Type))
typedef struct OSAComponentInstanceObject  OSAComponentInstanceObject;
PyObject *OSAObj_New(ComponentInstance itself)
int OSAObj_Convert(PyObject *v, ComponentInstance *p_itself)
static void OSAObj_dealloc(OSAComponentInstanceObject *self)
static PyObject *OSAObj_OSALoad(OSAComponentInstanceObject *_self, PyObject *_args)
static PyObject *OSAObj_OSAStore(OSAComponentInstanceObject *_self, PyObject *_args)
static PyObject *OSAObj_OSAExecute(OSAComponentInstanceObject *_self, PyObject *_args)
static PyObject *OSAObj_OSADisplay(OSAComponentInstanceObject *_self, PyObject *_args)
static PyObject *OSAObj_OSAScriptError(OSAComponentInstanceObject *_self, PyObject *_args)
static PyObject *OSAObj_OSADispose(OSAComponentInstanceObject *_self, PyObject *_args)
static PyObject *OSAObj_OSASetScriptInfo(OSAComponentInstanceObject *_self, PyObject *_args)
static PyObject *OSAObj_OSAGetScriptInfo(OSAComponentInstanceObject *_self, PyObject *_args)
static PyObject *OSAObj_OSAScriptingComponentName(OSAComponentInstanceObject *_self, PyObject *_args)
static PyObject *OSAObj_OSACompile(OSAComponentInstanceObject *_self, PyObject *_args)
static PyObject *OSAObj_OSACopyID(OSAComponentInstanceObject *_self, PyObject *_args)
static PyObject *OSAObj_OSAGetSource(OSAComponentInstanceObject *_self, PyObject *_args)
static PyObject *OSAObj_OSACoerceFromDesc(OSAComponentInstanceObject *_self, PyObject *_args)
static PyObject *OSAObj_OSACoerceToDesc(OSAComponentInstanceObject *_self, PyObject *_args)
static PyObject *OSAObj_OSASetDefaultTarget(OSAComponentInstanceObject *_self, PyObject *_args)
static PyObject *OSAObj_OSAStartRecording(OSAComponentInstanceObject *_self, PyObject *_args)
static PyObject *OSAObj_OSAStopRecording(OSAComponentInstanceObject *_self, PyObject *_args)
static PyObject *OSAObj_OSALoadExecute(OSAComponentInstanceObject *_self, PyObject *_args)
static PyObject *OSAObj_OSACompileExecute(OSAComponentInstanceObject *_self, PyObject *_args)
static PyObject *OSAObj_OSADoScript(OSAComponentInstanceObject *_self, PyObject *_args)
static PyObject *OSAObj_OSASetCurrentDialect(OSAComponentInstanceObject *_self, PyObject *_args)
static PyObject *OSAObj_OSAGetCurrentDialect(OSAComponentInstanceObject *_self, PyObject *_args)
static PyObject *OSAObj_OSAAvailableDialects(OSAComponentInstanceObject *_self, PyObject *_args)
static PyObject *OSAObj_OSAGetDialectInfo(OSAComponentInstanceObject *_self, PyObject *_args)
static PyObject *OSAObj_OSAAvailableDialectCodeList(OSAComponentInstanceObject *_self, PyObject *_args)
static PyObject *OSAObj_OSAExecuteEvent(OSAComponentInstanceObject *_self, PyObject *_args)
static PyObject *OSAObj_OSADoEvent(OSAComponentInstanceObject *_self, PyObject *_args)
static PyObject *OSAObj_OSAMakeContext(OSAComponentInstanceObject *_self, PyObject *_args)
static PyMethodDef OSAObj_methods[] = ;
#define OSAObj_getsetlist NULL
#define OSAObj_compare NULL
#define OSAObj_repr NULL
#define OSAObj_hash NULL
#define OSAObj_tp_init 0
#define OSAObj_tp_alloc PyType_GenericAlloc
static PyObject *OSAObj_tp_new(PyTypeObject *type, PyObject *_args, PyObject *_kwds)
#define OSAObj_tp_free PyObject_Del
PyTypeObject OSAComponentInstance_Type = ;
static PyMethodDef OSA_methods[] = ;
void init_OSA(void)
