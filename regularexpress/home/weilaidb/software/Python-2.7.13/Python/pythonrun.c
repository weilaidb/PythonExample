#undef Yield
#undef BYTE
#define PRINT_TOTAL_REFS()
#define PRINT_TOTAL_REFS() fprintf(stderr,                              \
,                   \
_Py_GetRefTotal())
extern char *Py_GetPath(void);
extern grammar _PyParser_Grammar;
static void initmain(void);
static void initsite(void);
static PyObject *run_mod(mod_ty, const char *, PyObject *, PyObject *,
PyCompilerFlags *, PyArena *);
static PyObject *run_pyc_file(FILE *, const char *, PyObject *, PyObject *,
PyCompilerFlags *);
static void err_input(perrdetail *);
static void initsigs(void);
static void wait_for_thread_shutdown(void);
static void call_sys_exitfunc(void);
static void call_ll_exitfuncs(void);
extern void _PyUnicode_Init(void);
extern void _PyUnicode_Fini(void);
extern void _PyGILState_Init(PyInterpreterState *, PyThreadState *);
extern void _PyGILState_Fini(void);
int Py_DebugFlag;
int Py_VerboseFlag;
int Py_InteractiveFlag;
int Py_InspectFlag;
int Py_NoSiteFlag;
int Py_BytesWarningFlag;
int Py_DontWriteBytecodeFlag;
int Py_UseClassExceptionsFlag = 1;
int Py_FrozenFlag;
int Py_UnicodeFlag = 0;
int Py_IgnoreEnvironmentFlag;
int _Py_QnewFlag = 0;
int Py_NoUserSiteDirectory = 0;
int Py_HashRandomizationFlag = 0;
int (*_PyOS_mystrnicmp_hack)(const char *, const char *, Py_ssize_t) = \
PyOS_mystrnicmp;
PyObject *
PyModule_GetWarningsModule(void)
static int initialized = 0;
int
Py_IsInitialized(void)
static int
add_flag(int flag, const char *envs)
static int
isatty_no_error(PyObject *sys_stream)
void
Py_InitializeEx(int install_sigs)
void
Py_Initialize(void)
extern void dump_counts(FILE*);
void
Py_Finalize(void)
PyThreadState *
Py_NewInterpreter(void)
void
Py_EndInterpreter(PyThreadState *tstate)
static char *progname = ;
void
Py_SetProgramName(char *pn)
char *
Py_GetProgramName(void)
static char *default_home = NULL;
void
Py_SetPythonHome(char *home)
char *
Py_GetPythonHome(void)
static void
initmain(void)
static void
initsite(void)
int
PyRun_AnyFileExFlags(FILE *fp, const char *filename, int closeit,
PyCompilerFlags *flags)
int
PyRun_InteractiveLoopFlags(FILE *fp, const char *filename, PyCompilerFlags *flags)
#if 1
#define PARSER_FLAGS(flags) \
((flags) ? ((((flags)->cf_flags & PyCF_DONT_IMPLY_DEDENT) ? \
PyPARSE_DONT_IMPLY_DEDENT : 0) \
| (((flags)->cf_flags & CO_FUTURE_PRINT_FUNCTION) ? \
PyPARSE_PRINT_IS_FUNCTION : 0) \
| (((flags)->cf_flags & CO_FUTURE_UNICODE_LITERALS) ? \
PyPARSE_UNICODE_LITERALS : 0) \
) : 0)
int
PyRun_InteractiveOneFlags(FILE *fp, const char *filename, PyCompilerFlags *flags)
static int
maybe_pyc_file(FILE *fp, const char* filename, const char* ext, int closeit)
int
PyRun_SimpleFileExFlags(FILE *fp, const char *filename, int closeit,
PyCompilerFlags *flags)
int
PyRun_SimpleStringFlags(const char *command, PyCompilerFlags *flags)
static int
parse_syntax_error(PyObject *err, PyObject **message, const char **filename,
int *lineno, int *offset, const char **text)
void
PyErr_Print(void)
static void
print_error_text(PyObject *f, int offset, const char *text)
static void
handle_system_exit(void)
void
PyErr_PrintEx(int set_sys_last_vars)
void
PyErr_Display(PyObject *exception, PyObject *value, PyObject *tb)
PyObject *
PyRun_StringFlags(const char *str, int start, PyObject *globals,
PyObject *locals, PyCompilerFlags *flags)
PyObject *
PyRun_FileExFlags(FILE *fp, const char *filename, int start, PyObject *globals,
PyObject *locals, int closeit, PyCompilerFlags *flags)
static PyObject *
run_mod(mod_ty mod, const char *filename, PyObject *globals, PyObject *locals,
PyCompilerFlags *flags, PyArena *arena)
static PyObject *
run_pyc_file(FILE *fp, const char *filename, PyObject *globals,
PyObject *locals, PyCompilerFlags *flags)
PyObject *
Py_CompileStringFlags(const char *str, const char *filename, int start,
PyCompilerFlags *flags)
struct symtable *
Py_SymtableString(const char *str, const char *filename, int start)
mod_ty
PyParser_ASTFromString(const char *s, const char *filename, int start,
PyCompilerFlags *flags, PyArena *arena)
mod_ty
PyParser_ASTFromFile(FILE *fp, const char *filename, int start, char *ps1,
char *ps2, PyCompilerFlags *flags, int *errcode,
PyArena *arena)
node *
PyParser_SimpleParseFileFlags(FILE *fp, const char *filename, int start, int flags)
node *
PyParser_SimpleParseStringFlags(const char *str, int start, int flags)
node *
PyParser_SimpleParseStringFlagsFilename(const char *str, const char *filename,
int start, int flags)
node *
PyParser_SimpleParseStringFilename(const char *str, const char *filename, int start)
void
PyParser_SetError(perrdetail *err)
static void
err_input(perrdetail *err)
void
Py_FatalError(const char *msg)
static void
wait_for_thread_shutdown(void)
#define NEXITFUNCS 32
static void (*exitfuncs[NEXITFUNCS])(void);
static int nexitfuncs = 0;
int Py_AtExit(void (*func)(void))
static void
call_sys_exitfunc(void)
static void
call_ll_exitfuncs(void)
void
Py_Exit(int sts)
static void
initsigs(void)
int
Py_FdIsInteractive(FILE *fp, const char *filename)
#if defined(USE_STACKCHECK)
#if defined(WIN32) && defined(_MSC_VER)
int
PyOS_CheckStack(void)
PyOS_sighandler_t
PyOS_getsig(int sig)
PyOS_sighandler_t
PyOS_setsig(int sig, PyOS_sighandler_t handler)
#undef PyParser_SimpleParseFile
PyAPI_FUNC(node *)
PyParser_SimpleParseFile(FILE *fp, const char *filename, int start)
#undef PyParser_SimpleParseString
PyAPI_FUNC(node *)
PyParser_SimpleParseString(const char *str, int start)
#undef PyRun_AnyFile
PyAPI_FUNC(int)
PyRun_AnyFile(FILE *fp, const char *name)
#undef PyRun_AnyFileEx
PyAPI_FUNC(int)
PyRun_AnyFileEx(FILE *fp, const char *name, int closeit)
#undef PyRun_AnyFileFlags
PyAPI_FUNC(int)
PyRun_AnyFileFlags(FILE *fp, const char *name, PyCompilerFlags *flags)
#undef PyRun_File
PyAPI_FUNC(PyObject *)
PyRun_File(FILE *fp, const char *p, int s, PyObject *g, PyObject *l)
#undef PyRun_FileEx
PyAPI_FUNC(PyObject *)
PyRun_FileEx(FILE *fp, const char *p, int s, PyObject *g, PyObject *l, int c)
#undef PyRun_FileFlags
PyAPI_FUNC(PyObject *)
PyRun_FileFlags(FILE *fp, const char *p, int s, PyObject *g, PyObject *l,
PyCompilerFlags *flags)
#undef PyRun_SimpleFile
PyAPI_FUNC(int)
PyRun_SimpleFile(FILE *f, const char *p)
#undef PyRun_SimpleFileEx
PyAPI_FUNC(int)
PyRun_SimpleFileEx(FILE *f, const char *p, int c)
#undef PyRun_String
PyAPI_FUNC(PyObject *)
PyRun_String(const char *str, int s, PyObject *g, PyObject *l)
#undef PyRun_SimpleString
PyAPI_FUNC(int)
PyRun_SimpleString(const char *s)
#undef Py_CompileString
PyAPI_FUNC(PyObject *)
Py_CompileString(const char *str, const char *p, int s)
#undef PyRun_InteractiveOne
PyAPI_FUNC(int)
PyRun_InteractiveOne(FILE *f, const char *p)
#undef PyRun_InteractiveLoop
PyAPI_FUNC(int)
PyRun_InteractiveLoop(FILE *f, const char *p)
