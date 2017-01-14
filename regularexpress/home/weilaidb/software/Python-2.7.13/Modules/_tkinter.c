#define PyDoc_STRVAR(name,str) static char name[] = str
#define PyMODINIT_FUNC void
#define PyBool_Check(o)       0
#define PyBool_FromLong       PyInt_FromLong
#define CHECK_SIZE(size, elemsize) \
((size_t)(size) <= (size_t)INT_MAX && \
(size_t)(size) <= UINT_MAX / (size_t)(elemsize))
#define USE_COMPAT_CONST
#define TCL_THREADS
#define CONST84_RETURN
#undef CONST
#define CONST
#if TK_HEX_VERSION < 0x08030201
#error
#if TCL_UTF_MAX != 3 && !(defined(Py_UNICODE_WIDE) && TCL_UTF_MAX==6)
#error
#if TK_HEX_VERSION >= 0x08050208 && TK_HEX_VERSION < 0x08060000 || \
TK_HEX_VERSION >= 0x08060200
#define HAVE_LIBTOMMAMTH
#if !(defined(MS_WINDOWS) || defined(__CYGWIN__))
#define HAVE_CREATEFILEHANDLER
#  ifdef TCL_WIN_SOCKET
#    define TCL_UNIX_FD (! TCL_WIN_SOCKET)
#  else
#    define TCL_UNIX_FD 1
#  endif
#define FHANDLETYPE TCL_WIN_SOCKET
#define FHANDLETYPE TCL_UNIX_FD
#if FHANDLETYPE == TCL_UNIX_FD
#define WAIT_FOR_STDIN
#define WAIT_FOR_STDIN
static PyThread_type_lock tcl_lock = 0;
static Tcl_ThreadDataKey state_key;
typedef PyThreadState *ThreadSpecificData;
#define tcl_tstate (*(PyThreadState**)Tcl_GetThreadData(&state_key, sizeof(PyThreadState*)))
static PyThreadState *tcl_tstate = NULL;
#define ENTER_TCL \
#define ENTER_OVERLAP \
Py_END_ALLOW_THREADS
#define LEAVE_OVERLAP_TCL \
tcl_tstate = NULL; if(tcl_lock)PyThread_release_lock(tcl_lock); }
#define ENTER_PYTHON \
#define LEAVE_PYTHON \
#define CHECK_TCL_APPARTMENT \
if (((TkappObject *)self)->threaded && \
((TkappObject *)self)->thread_id != Tcl_GetCurrentThread())
#define ENTER_TCL
#define LEAVE_TCL
#define ENTER_OVERLAP
#define LEAVE_OVERLAP_TCL
#define ENTER_PYTHON
#define LEAVE_PYTHON
#define CHECK_TCL_APPARTMENT
#define FREECAST (char *)
static PyTypeObject Tkapp_Type;
typedef struct  TkappObject;
#define Tkapp_Check(v) (Py_TYPE(v) == &Tkapp_Type)
#define Tkapp_Interp(v) (((TkappObject *) (v))->interp)
#define Tkapp_Result(v) Tcl_GetStringResult(Tkapp_Interp(v))
#define DEBUG_REFCNT(v) (printf(, \
(void *) v, Py_REFCNT(v)))
static PyObject *Tkinter_TclError;
static int quitMainLoop = 0;
static int errorInCmd = 0;
static PyObject *excInCmd;
static PyObject *valInCmd;
static PyObject *trbInCmd;
static int tk_load_failed;
static PyObject *
Tkinter_Error(PyObject *v)
static int Tkinter_busywaitinterval = 20;
static void
Sleep(int milli)
static int
WaitForMainloop(TkappObject* self)
static char *
AsString(PyObject *value, PyObject *tmp)
#define ARGSZ 64
static char *
Merge(PyObject *args)
static PyObject *
unicode_FromTclStringAndSize(const char *s, Py_ssize_t size)
static PyObject *
fromTclStringAndSize(const char *s, Py_ssize_t size)
static PyObject *
fromTclString(const char *s)
static PyObject *
Split(char *list)
static PyObject *
SplitObj(PyObject *arg)
int
Tcl_AppInit(Tcl_Interp *interp)
static void EnableEventHook(void);
static void DisableEventHook(void);
static TkappObject *
Tkapp_New(char *screenName, char *baseName, char *className,
int interactive, int wantobjects, int wantTk, int sync, char *use)
static void
Tkapp_ThreadSend(TkappObject *self, Tcl_Event *ev,
Tcl_Condition *cond, Tcl_Mutex *mutex)
typedef struct  PyTclObject;
staticforward PyTypeObject PyTclObject_Type;
#define PyTclObject_Check(v)    ((v)->ob_type == &PyTclObject_Type)
static PyObject *
newPyTclObject(Tcl_Obj *arg)
static void
PyTclObject_dealloc(PyTclObject *self)
static PyObject *
PyTclObject_str(PyTclObject *self)
static char*
PyTclObject_TclString(PyObject *self)
PyDoc_STRVAR(PyTclObject_string__doc__,
);
static PyObject *
PyTclObject_string(PyTclObject *self, void *ignored)
PyDoc_STRVAR(PyTclObject_unicode__doc__, );
static PyObject *
PyTclObject_unicode(PyTclObject *self, void *ignored)
static PyObject *
PyTclObject_repr(PyTclObject *self)
static int
PyTclObject_cmp(PyTclObject *self, PyTclObject *other)
PyDoc_STRVAR(get_typename__doc__, );
static PyObject*
get_typename(PyTclObject* obj, void* ignored)
static PyGetSetDef PyTclObject_getsetlist[] = ;
static PyMethodDef PyTclObject_methods[] = ;
statichere PyTypeObject PyTclObject_Type = ;
#if PY_SIZE_MAX > INT_MAX
#define CHECK_STRING_LENGTH(s) do  while(0)
#define CHECK_STRING_LENGTH(s)
static Tcl_Obj*
asBignumObj(PyObject *value)
static Tcl_Obj*
AsObj(PyObject *value)
static PyObject *
fromBoolean(PyObject* tkapp, Tcl_Obj *value)
static PyObject*
fromWideIntObj(PyObject* tkapp, Tcl_Obj *value)
static PyObject*
fromBignumObj(PyObject* tkapp, Tcl_Obj *value)
static PyObject*
FromObj(PyObject* tkapp, Tcl_Obj *value)
TCL_DECLARE_MUTEX(call_mutex)
typedef struct Tkapp_CallEvent  Tkapp_CallEvent;
void
Tkapp_CallDeallocArgs(Tcl_Obj** objv, Tcl_Obj** objStore, int objc)
static Tcl_Obj**
Tkapp_CallArgs(PyObject *args, Tcl_Obj** objStore, int *pobjc)
static PyObject*
Tkapp_CallResult(TkappObject *self)
static int
Tkapp_CallProc(Tkapp_CallEvent *e, int flags)
static PyObject *
Tkapp_Call(PyObject *selfptr, PyObject *args)
static PyObject *
Tkapp_GlobalCall(PyObject *self, PyObject *args)
static PyObject *
Tkapp_Eval(PyObject *self, PyObject *args)
static PyObject *
Tkapp_GlobalEval(PyObject *self, PyObject *args)
static PyObject *
Tkapp_EvalFile(PyObject *self, PyObject *args)
static PyObject *
Tkapp_Record(PyObject *self, PyObject *args)
static PyObject *
Tkapp_AddErrorInfo(PyObject *self, PyObject *args)
typedef PyObject* (*EventFunc)(PyObject*, PyObject *args, int flags);
TCL_DECLARE_MUTEX(var_mutex)
typedef struct VarEvent  VarEvent;
static int
varname_converter(PyObject *in, void *_out)
static void
var_perform(VarEvent *ev)
static int
var_proc(VarEvent* ev, int flags)
static PyObject*
var_invoke(EventFunc func, PyObject *selfptr, PyObject *args, int flags)
static PyObject *
SetVar(PyObject *self, PyObject *args, int flags)
static PyObject *
Tkapp_SetVar(PyObject *self, PyObject *args)
static PyObject *
Tkapp_GlobalSetVar(PyObject *self, PyObject *args)
static PyObject *
GetVar(PyObject *self, PyObject *args, int flags)
static PyObject *
Tkapp_GetVar(PyObject *self, PyObject *args)
static PyObject *
Tkapp_GlobalGetVar(PyObject *self, PyObject *args)
static PyObject *
UnsetVar(PyObject *self, PyObject *args, int flags)
static PyObject *
Tkapp_UnsetVar(PyObject *self, PyObject *args)
static PyObject *
Tkapp_GlobalUnsetVar(PyObject *self, PyObject *args)
static PyObject *
Tkapp_GetInt(PyObject *self, PyObject *args)
static PyObject *
Tkapp_GetDouble(PyObject *self, PyObject *args)
static PyObject *
Tkapp_GetBoolean(PyObject *self, PyObject *arg)
static PyObject *
Tkapp_ExprString(PyObject *self, PyObject *args)
static PyObject *
Tkapp_ExprLong(PyObject *self, PyObject *args)
static PyObject *
Tkapp_ExprDouble(PyObject *self, PyObject *args)
static PyObject *
Tkapp_ExprBoolean(PyObject *self, PyObject *args)
static PyObject *
Tkapp_SplitList(PyObject *self, PyObject *args)
static PyObject *
Tkapp_Split(PyObject *self, PyObject *args)
static PyObject *
Tkapp_Merge(PyObject *self, PyObject *args)
typedef struct  PythonCmd_ClientData;
static int
PythonCmd_Error(Tcl_Interp *interp)
static int
PythonCmd(ClientData clientData, Tcl_Interp *interp, int argc, char *argv[])
static void
PythonCmdDelete(ClientData clientData)
TCL_DECLARE_MUTEX(command_mutex)
typedef struct CommandEvent CommandEvent;
static int
Tkapp_CommandProc(CommandEvent *ev, int flags)
static PyObject *
Tkapp_CreateCommand(PyObject *selfptr, PyObject *args)
static PyObject *
Tkapp_DeleteCommand(PyObject *selfptr, PyObject *args)
typedef struct _fhcdata  FileHandler_ClientData;
static FileHandler_ClientData *HeadFHCD;
static FileHandler_ClientData *
NewFHCD(PyObject *func, PyObject *file, int id)
static void
DeleteFHCD(int id)
static void
FileHandler(ClientData clientData, int mask)
static PyObject *
Tkapp_CreateFileHandler(PyObject *self, PyObject *args)
static PyObject *
Tkapp_DeleteFileHandler(PyObject *self, PyObject *args)
static PyTypeObject Tktt_Type;
typedef struct  TkttObject;
static PyObject *
Tktt_DeleteTimerHandler(PyObject *self, PyObject *args)
static PyMethodDef Tktt_methods[] =
;
static TkttObject *
Tktt_New(PyObject *func)
static void
Tktt_Dealloc(PyObject *self)
static PyObject *
Tktt_Repr(PyObject *self)
static PyObject *
Tktt_GetAttr(PyObject *self, char *name)
static PyTypeObject Tktt_Type =
;
static void
TimerHandler(ClientData clientData)
static PyObject *
Tkapp_CreateTimerHandler(PyObject *self, PyObject *args)
static PyObject *
Tkapp_MainLoop(PyObject *selfptr, PyObject *args)
static PyObject *
Tkapp_DoOneEvent(PyObject *self, PyObject *args)
static PyObject *
Tkapp_Quit(PyObject *self, PyObject *args)
static PyObject *
Tkapp_InterpAddr(PyObject *self, PyObject *args)
static PyObject *
Tkapp_TkInit(PyObject *self, PyObject *args)
static PyObject *
Tkapp_WantObjects(PyObject *self, PyObject *args)
static PyObject *
Tkapp_WillDispatch(PyObject *self, PyObject *args)
static PyObject *
Tkapp_CreateByteArray(PyObject *self, PyObject *args)
static PyMethodDef Tkapp_methods[] =
;
static void
Tkapp_Dealloc(PyObject *self)
static PyObject *
Tkapp_GetAttr(PyObject *self, char *name)
static PyTypeObject Tkapp_Type =
;
typedef struct  FlattenContext;
static int
_bump(FlattenContext* context, int size)
static int
_flatten1(FlattenContext* context, PyObject* item, int depth)
static PyObject *
Tkinter_Flatten(PyObject* self, PyObject* args)
static PyObject *
Tkinter_Create(PyObject *self, PyObject *args)
static PyObject *
Tkinter_setbusywaitinterval(PyObject *self, PyObject *args)
static char setbusywaitinterval_doc[] =
"setbusywaitinterval(n) -> None\n\
\n\
Set the busy-wait interval in milliseconds between successive\n\
calls to Tcl_DoOneEvent in a threaded Python interpreter.\n\
It should be set to a divisor of the maximum time between\n\
frames in an animation.";
static PyObject *
Tkinter_getbusywaitinterval(PyObject *self, PyObject *args)
static char getbusywaitinterval_doc[] =
"getbusywaitinterval() -> int\n\
\n\
Return the current busy-wait interval between successive\n\
calls to Tcl_DoOneEvent in a threaded Python interpreter.";
static PyMethodDef moduleMethods[] =
;
static int stdin_ready = 0;
static void
MyFileProc(void *clientData, int mask)
static PyThreadState *event_tstate = NULL;
static int
EventHook(void)
static void
EnableEventHook(void)
static void
DisableEventHook(void)
static void
ins_long(PyObject *d, char *name, long val)
static void
ins_string(PyObject *d, char *name, char *val)
PyMODINIT_FUNC
init_tkinter(void)
