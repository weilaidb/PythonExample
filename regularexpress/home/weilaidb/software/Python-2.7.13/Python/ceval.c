#define PY_LOCAL_AGGRESSIVE
#define READ_TIMESTAMP(var)
typedef unsigned long long uint64;
#if defined(__ppc__) || defined (__powerpc__)
#define READ_TIMESTAMP(var) ppc_getcounter(&var)
static void
ppc_getcounter(uint64 *v)
#elif defined(__i386__)
#define READ_TIMESTAMP(val) \
__asm__ __volatile__( (val))
#elif defined(__x86_64__)
#define READ_TIMESTAMP(val) do  while(0)
#error
void dump_tsc(int opcode, int ticked, uint64 inst0, uint64 inst1,
uint64 loop0, uint64 loop1, uint64 intr0, uint64 intr1)
#define LLTRACE  1
#define CHECKEXC 1
typedef PyObject *(*callproc)(PyObject *, PyObject *, PyObject *);
static PyObject * call_function(PyObject ***, int, uint64*, uint64*);
static PyObject * call_function(PyObject ***, int);
static PyObject * fast_function(PyObject *, PyObject ***, int, int, int);
static PyObject * do_call(PyObject *, PyObject ***, int, int);
static PyObject * ext_do_call(PyObject *, PyObject ***, int, int, int);
static PyObject * update_keyword_args(PyObject *, int, PyObject ***,
PyObject *);
static PyObject * update_star_args(int, int, PyObject *, PyObject ***);
static PyObject * load_args(PyObject ***, int);
#define CALL_FLAG_VAR 1
#define CALL_FLAG_KW 2
static int lltrace;
static int prtrace(PyObject *, char *);
static int call_trace(Py_tracefunc, PyObject *, PyFrameObject *,
int, PyObject *);
static int call_trace_protected(Py_tracefunc, PyObject *,
PyFrameObject *, int, PyObject *);
static void call_exc_trace(Py_tracefunc, PyObject *, PyFrameObject *);
static int maybe_call_line_trace(Py_tracefunc, PyObject *,
PyFrameObject *, int *, int *, int *);
static PyObject * apply_slice(PyObject *, PyObject *, PyObject *);
static int assign_slice(PyObject *, PyObject *,
PyObject *, PyObject *);
static PyObject * cmp_outcome(int, PyObject *, PyObject *);
static PyObject * import_from(PyObject *, PyObject *);
static int import_all_from(PyObject *, PyObject *);
static PyObject * build_class(PyObject *, PyObject *, PyObject *);
static int exec_statement(PyFrameObject *,
PyObject *, PyObject *, PyObject *);
static void set_exc_info(PyThreadState *, PyObject *, PyObject *, PyObject *);
static void reset_exc_info(PyThreadState *);
static void format_exc_check_arg(PyObject *, char *, PyObject *);
static PyObject * string_concatenate(PyObject *, PyObject *,
PyFrameObject *, unsigned char *);
static PyObject * kwd_as_string(PyObject *);
static PyObject * special_lookup(PyObject *, char *, PyObject **);
#define NAME_ERROR_MSG \
#define GLOBAL_NAME_ERROR_MSG \
#define UNBOUNDLOCAL_ERROR_MSG \
#define UNBOUNDFREE_ERROR_MSG \
\
static long dxpairs[257][256];
#define dxp dxpairs[256]
static long dxp[256];
#define PCALL_NUM 11
static int pcall[PCALL_NUM];
#define PCALL_ALL 0
#define PCALL_FUNCTION 1
#define PCALL_FAST_FUNCTION 2
#define PCALL_FASTER_FUNCTION 3
#define PCALL_METHOD 4
#define PCALL_BOUND_METHOD 5
#define PCALL_CFUNCTION 6
#define PCALL_TYPE 7
#define PCALL_GENERATOR 8
#define PCALL_OTHER 9
#define PCALL_POP 10
#define PCALL(POS) pcall[POS]++
PyObject *
PyEval_GetCallStats(PyObject *self)
#define PCALL(O)
PyObject *
PyEval_GetCallStats(PyObject *self)
static PyThread_type_lock interpreter_lock = 0;
static PyThread_type_lock pending_lock = 0;
static long main_thread = 0;
int
PyEval_ThreadsInitialized(void)
void
PyEval_InitThreads(void)
void
PyEval_AcquireLock(void)
void
PyEval_ReleaseLock(void)
void
PyEval_AcquireThread(PyThreadState *tstate)
void
PyEval_ReleaseThread(PyThreadState *tstate)
void
PyEval_ReInitThreads(void)
PyThreadState *
PyEval_SaveThread(void)
void
PyEval_RestoreThread(PyThreadState *tstate)
#define NPENDINGCALLS 32
static struct  pendingcalls[NPENDINGCALLS];
static int pendingfirst = 0;
static int pendinglast = 0;
static volatile int pendingcalls_to_do = 1;
static char pendingbusy = 0;
int
Py_AddPendingCall(int (*func)(void *), void *arg)
int
Py_MakePendingCalls(void)
#define NPENDINGCALLS 32
static struct  pendingcalls[NPENDINGCALLS];
static volatile int pendingfirst = 0;
static volatile int pendinglast = 0;
static volatile int pendingcalls_to_do = 0;
int
Py_AddPendingCall(int (*func)(void *), void *arg)
int
Py_MakePendingCalls(void)
#define Py_DEFAULT_RECURSION_LIMIT 1000
static int recursion_limit = Py_DEFAULT_RECURSION_LIMIT;
int _Py_CheckRecursionLimit = Py_DEFAULT_RECURSION_LIMIT;
int
Py_GetRecursionLimit(void)
void
Py_SetRecursionLimit(int new_limit)
int
_Py_CheckRecursiveCall(const char *where)
enum why_code ;
static enum why_code do_raise(PyObject *, PyObject *, PyObject *);
static int unpack_iterable(PyObject *, int, PyObject **);
static int _Py_TracingPossible = 0;
int _Py_CheckInterval = 100;
volatile int _Py_Ticker = 0;
PyObject *
PyEval_EvalCode(PyCodeObject *co, PyObject *globals, PyObject *locals)
PyObject *
PyEval_EvalFrame(PyFrameObject *f)
PyObject *
PyEval_EvalFrameEx(PyFrameObject *f, int throwflag)
PyObject *
PyEval_EvalCodeEx(PyCodeObject *co, PyObject *globals, PyObject *locals,
PyObject **args, int argcount, PyObject **kws, int kwcount,
PyObject **defs, int defcount, PyObject *closure)
static PyObject *
special_lookup(PyObject *o, char *meth, PyObject **cache)
static PyObject *
kwd_as_string(PyObject *kwd)
static void
set_exc_info(PyThreadState *tstate,
PyObject *type, PyObject *value, PyObject *tb)
static void
reset_exc_info(PyThreadState *tstate)
static enum why_code
do_raise(PyObject *type, PyObject *value, PyObject *tb)
static int
unpack_iterable(PyObject *v, int argcnt, PyObject **sp)
static int
prtrace(PyObject *v, char *str)
static void
call_exc_trace(Py_tracefunc func, PyObject *self, PyFrameObject *f)
static int
call_trace_protected(Py_tracefunc func, PyObject *obj, PyFrameObject *frame,
int what, PyObject *arg)
static int
call_trace(Py_tracefunc func, PyObject *obj, PyFrameObject *frame,
int what, PyObject *arg)
PyObject *
_PyEval_CallTracing(PyObject *func, PyObject *args)
static int
maybe_call_line_trace(Py_tracefunc func, PyObject *obj,
PyFrameObject *frame, int *instr_lb, int *instr_ub,
int *instr_prev)
void
PyEval_SetProfile(Py_tracefunc func, PyObject *arg)
void
PyEval_SetTrace(Py_tracefunc func, PyObject *arg)
PyObject *
PyEval_GetBuiltins(void)
PyObject *
PyEval_GetLocals(void)
PyObject *
PyEval_GetGlobals(void)
PyFrameObject *
PyEval_GetFrame(void)
int
PyEval_GetRestricted(void)
int
PyEval_MergeCompilerFlags(PyCompilerFlags *cf)
int
Py_FlushLine(void)
PyObject *
PyEval_CallObjectWithKeywords(PyObject *func, PyObject *arg, PyObject *kw)
const char *
PyEval_GetFuncName(PyObject *func)
const char *
PyEval_GetFuncDesc(PyObject *func)
static void
err_args(PyObject *func, int flags, int nargs)
#define C_TRACE(x, call) \
if (tstate->use_tracing && tstate->c_profilefunc)  else
static PyObject *
call_function(PyObject ***pp_stack, int oparg
, uint64* pintr0, uint64* pintr1
)
static PyObject *
fast_function(PyObject *func, PyObject ***pp_stack, int n, int na, int nk)
static PyObject *
update_keyword_args(PyObject *orig_kwdict, int nk, PyObject ***pp_stack,
PyObject *func)
static PyObject *
update_star_args(int nstack, int nstar, PyObject *stararg,
PyObject ***pp_stack)
static PyObject *
load_args(PyObject ***pp_stack, int na)
static PyObject *
do_call(PyObject *func, PyObject ***pp_stack, int na, int nk)
static PyObject *
ext_do_call(PyObject *func, PyObject ***pp_stack, int flags, int na, int nk)
int
_PyEval_SliceIndex(PyObject *v, Py_ssize_t *pi)
#undef ISINDEX
#define ISINDEX(x) ((x) == NULL || \
PyInt_Check(x) || PyLong_Check(x) || PyIndex_Check(x))
static PyObject *
apply_slice(PyObject *u, PyObject *v, PyObject *w)
static int
assign_slice(PyObject *u, PyObject *v, PyObject *w, PyObject *x)
#define Py3kExceptionClass_Check(x)     \
(PyType_Check((x)) &&               \
PyType_FastSubclass((PyTypeObject*)(x), Py_TPFLAGS_BASE_EXC_SUBCLASS))
#define CANNOT_CATCH_MSG  \
static PyObject *
cmp_outcome(int op, register PyObject *v, register PyObject *w)
static PyObject *
import_from(PyObject *v, PyObject *name)
static int
import_all_from(PyObject *locals, PyObject *v)
static PyObject *
build_class(PyObject *methods, PyObject *bases, PyObject *name)
static int
exec_statement(PyFrameObject *f, PyObject *prog, PyObject *globals,
PyObject *locals)
static void
format_exc_check_arg(PyObject *exc, char *format_str, PyObject *obj)
static PyObject *
string_concatenate(PyObject *v, PyObject *w,
PyFrameObject *f, unsigned char *next_instr)
static PyObject *
getarray(long a[256])
PyObject *
_Py_GetDXProfile(PyObject *self, PyObject *args)
