#define WIN32_LEAN_AND_MEAN
extern void *PyWin_DLLhModule;
extern const char *PyWin_DLLVersionString;
PyObject *
PySys_GetObject(char *name)
FILE *
PySys_GetFile(char *name, FILE *def)
int
PySys_SetObject(char *name, PyObject *v)
static PyObject *
sys_displayhook(PyObject *self, PyObject *o)
PyDoc_STRVAR(displayhook_doc,
"displayhook(object) -> None\n"
"\n"
"Print an object to sys.stdout and also save it in __builtin__._\n"
);
static PyObject *
sys_excepthook(PyObject* self, PyObject* args)
PyDoc_STRVAR(excepthook_doc,
"excepthook(exctype, value, traceback) -> None\n"
"\n"
"Handle an exception by displaying it with a traceback on sys.stderr.\n"
);
static PyObject *
sys_exc_info(PyObject *self, PyObject *noargs)
PyDoc_STRVAR(exc_info_doc,
"exc_info() -> (type, value, traceback)\n\
\n\
Return information about the most recent exception caught by an except\n\
clause in the current stack frame or in an older stack frame."
);
static PyObject *
sys_exc_clear(PyObject *self, PyObject *noargs)
PyDoc_STRVAR(exc_clear_doc,
"exc_clear() -> None\n\
\n\
Clear global information on the current exception.  Subsequent calls to\n\
exc_info() will return (None,None,None) until another exception is raised\n\
in the current thread or the execution stack returns to a frame where\n\
another exception is being handled."
);
static PyObject *
sys_exit(PyObject *self, PyObject *args)
PyDoc_STRVAR(exit_doc,
"exit([status])\n\
\n\
Exit the interpreter by raising SystemExit(status).\n\
If the status is omitted or None, it defaults to zero (i.e., success).\n\
If the status is an integer, it will be used as the system exit status.\n\
If it is another kind of object, it will be printed and the system\n\
exit status will be one (i.e., failure)."
);
static PyObject *
sys_getdefaultencoding(PyObject *self)
PyDoc_STRVAR(getdefaultencoding_doc,
"getdefaultencoding() -> string\n\
\n\
Return the current default string encoding used by the Unicode \n\
implementation."
);
static PyObject *
sys_setdefaultencoding(PyObject *self, PyObject *args)
PyDoc_STRVAR(setdefaultencoding_doc,
"setdefaultencoding(encoding)\n\
\n\
Set the current default string encoding used by the Unicode implementation."
);
static PyObject *
sys_getfilesystemencoding(PyObject *self)
PyDoc_STRVAR(getfilesystemencoding_doc,
"getfilesystemencoding() -> string\n\
\n\
Return the encoding used to convert Unicode filenames in\n\
operating system filenames."
);
static PyObject *whatstrings[7] = ;
static int
trace_init(void)
static PyObject *
call_trampoline(PyThreadState *tstate, PyObject* callback,
PyFrameObject *frame, int what, PyObject *arg)
static int
profile_trampoline(PyObject *self, PyFrameObject *frame,
int what, PyObject *arg)
static int
trace_trampoline(PyObject *self, PyFrameObject *frame,
int what, PyObject *arg)
static PyObject *
sys_settrace(PyObject *self, PyObject *args)
PyDoc_STRVAR(settrace_doc,
"settrace(function)\n\
\n\
Set the global debug tracing function.  It will be called on each\n\
function call.  See the debugger chapter in the library manual."
);
static PyObject *
sys_gettrace(PyObject *self, PyObject *args)
PyDoc_STRVAR(gettrace_doc,
"gettrace()\n\
\n\
Return the global debug tracing function set with sys.settrace.\n\
See the debugger chapter in the library manual."
);
static PyObject *
sys_setprofile(PyObject *self, PyObject *args)
PyDoc_STRVAR(setprofile_doc,
"setprofile(function)\n\
\n\
Set the profiling function.  It will be called on each function call\n\
and return.  See the profiler chapter in the library manual."
);
static PyObject *
sys_getprofile(PyObject *self, PyObject *args)
PyDoc_STRVAR(getprofile_doc,
"getprofile()\n\
\n\
Return the profiling function set with sys.setprofile.\n\
See the profiler chapter in the library manual."
);
static PyObject *
sys_setcheckinterval(PyObject *self, PyObject *args)
PyDoc_STRVAR(setcheckinterval_doc,
"setcheckinterval(n)\n\
\n\
Tell the Python interpreter to check for asynchronous events every\n\
n instructions.  This also affects how often thread switches occur."
);
static PyObject *
sys_getcheckinterval(PyObject *self, PyObject *args)
PyDoc_STRVAR(getcheckinterval_doc,
"getcheckinterval() -> current check interval; see setcheckinterval()."
);
static PyObject *
sys_settscdump(PyObject *self, PyObject *args)
PyDoc_STRVAR(settscdump_doc,
"settscdump(bool)\n\
\n\
If true, tell the Python interpreter to dump VM measurements to\n\
stderr.  If false, turn off dump.  The measurements are based on the\n\
processor's time-stamp counter."
);
static PyObject *
sys_setrecursionlimit(PyObject *self, PyObject *args)
PyDoc_STRVAR(setrecursionlimit_doc,
"setrecursionlimit(n)\n\
\n\
Set the maximum depth of the Python interpreter stack to n.  This\n\
limit prevents infinite recursion from causing an overflow of the C\n\
stack and crashing Python.  The highest possible limit is platform-\n\
dependent."
);
static PyObject *
sys_getrecursionlimit(PyObject *self)
PyDoc_STRVAR(getrecursionlimit_doc,
"getrecursionlimit()\n\
\n\
Return the current value of the recursion limit, the maximum depth\n\
of the Python interpreter stack.  This limit prevents infinite\n\
recursion from causing an overflow of the C stack and crashing Python."
);
PyDoc_STRVAR(getwindowsversion_doc,
"getwindowsversion()\n\
\n\
Return information about the running version of Windows as a named tuple.\n\
The members are named: major, minor, build, platform, service_pack,\n\
service_pack_major, service_pack_minor, suite_mask, and product_type. For\n\
backward compatibility, only the first 5 items are available by indexing.\n\
All elements are numbers, except service_pack which is a string. Platform\n\
may be 0 for win32s, 1 for Windows 9x/ME, 2 for Windows NT/2000/XP/Vista/7,\n\
3 for Windows CE. Product_type may be 1 for a workstation, 2 for a domain\n\
controller, 3 for a server."
);
static PyTypeObject WindowsVersionType = ;
static PyStructSequence_Field windows_version_fields[] = ;
static PyStructSequence_Desc windows_version_desc = ;
static PyObject *
sys_getwindowsversion(PyObject *self)
static PyObject *
sys_setdlopenflags(PyObject *self, PyObject *args)
PyDoc_STRVAR(setdlopenflags_doc,
"setdlopenflags(n) -> None\n\
\n\
Set the flags used by the interpreter for dlopen calls, such as when the\n\
interpreter loads extension modules.  Among other things, this will enable\n\
a lazy resolving of symbols when importing a module, if called as\n\
sys.setdlopenflags(0).  To share symbols across extension modules, call as\n\
sys.setdlopenflags(ctypes.RTLD_GLOBAL).  Symbolic names for the flag modules\n\
can be either found in the ctypes module, or in the DLFCN module. If DLFCN\n\
is not available, it can be generated from /usr/include/dlfcn.h using the\n\
h2py script.");
static PyObject *
sys_getdlopenflags(PyObject *self, PyObject *args)
PyDoc_STRVAR(getdlopenflags_doc,
"getdlopenflags() -> int\n\
\n\
Return the current value of the flags that are used for dlopen calls.\n\
The flag constants are defined in the ctypes and DLFCN modules.");
static PyObject *
sys_mdebug(PyObject *self, PyObject *args)
size_t
_PySys_GetSizeOf(PyObject *o)
static PyObject *
sys_getsizeof(PyObject *self, PyObject *args, PyObject *kwds)
PyDoc_STRVAR(getsizeof_doc,
"getsizeof(object, default) -> int\n\
\n\
Return the size of object in bytes.");
static PyObject *
sys_getrefcount(PyObject *self, PyObject *arg)
static PyObject *
sys_gettotalrefcount(PyObject *self)
PyDoc_STRVAR(getrefcount_doc,
"getrefcount(object) -> integer\n\
\n\
Return the reference count of object.  The count returned is generally\n\
one higher than you might expect, because it includes the (temporary)\n\
reference as an argument to getrefcount()."
);
static PyObject *
sys_getcounts(PyObject *self)
PyDoc_STRVAR(getframe_doc,
"_getframe([depth]) -> frameobject\n\
\n\
Return a frame object from the call stack.  If optional integer depth is\n\
given, return the frame object that many calls below the top of the stack.\n\
If that is deeper than the call stack, ValueError is raised.  The default\n\
for depth is zero, returning the frame at the top of the call stack.\n\
\n\
This function should be used for internal and specialized\n\
purposes only."
);
static PyObject *
sys_getframe(PyObject *self, PyObject *args)
PyDoc_STRVAR(current_frames_doc,
"_current_frames() -> dictionary\n\
\n\
Return a dictionary mapping each current thread T's thread id to T's\n\
current stack frame.\n\
\n\
This function should be used for specialized purposes only."
);
static PyObject *
sys_current_frames(PyObject *self, PyObject *noargs)
PyDoc_STRVAR(call_tracing_doc,
"call_tracing(func, args) -> object\n\
\n\
Call func(*args), while tracing is enabled.  The tracing state is\n\
saved, and restored afterwards.  This is intended to be called from\n\
a debugger from a checkpoint, to recursively debug some other code."
);
static PyObject *
sys_call_tracing(PyObject *self, PyObject *args)
PyDoc_STRVAR(callstats_doc,
"callstats() -> tuple of integers\n\
\n\
Return a tuple of function call statistics, if CALL_PROFILE was defined\n\
when Python was built.  Otherwise, return None.\n\
\n\
When enabled, this function returns detailed, implementation-specific\n\
details about the number of function calls executed. The return value is\n\
a 11-tuple where the entries in the tuple are counts of:\n\
0. all function calls\n\
1. calls to PyFunction_Type objects\n\
2. PyFunction calls that do not create an argument tuple\n\
3. PyFunction calls that do not create an argument tuple\n\
and bypass PyEval_EvalCodeEx()\n\
4. PyMethod calls\n\
5. PyMethod calls on bound methods\n\
6. PyType calls\n\
7. PyCFunction calls\n\
8. generator calls\n\
9. All other calls\n\
10. Number of stack pops performed by call_function()"
);
extern PyObject *_Py_GetObjects(PyObject *, PyObject *);
extern PyObject *_Py_GetDXProfile(PyObject *,  PyObject *);
static PyObject *
sys_clear_type_cache(PyObject* self, PyObject* args)
PyDoc_STRVAR(sys_clear_type_cache__doc__,
"_clear_type_cache() -> None\n\
Clear the internal type lookup cache.");
static PyMethodDef sys_methods[] = ;
static PyObject *
list_builtin_module_names(void)
static PyObject *warnoptions = NULL;
void
PySys_ResetWarnOptions(void)
void
PySys_AddWarnOption(char *s)
int
PySys_HasWarnOptions(void)
PyDoc_VAR(sys_doc) =
PyDoc_STR(
"This module provides access to some objects used or maintained by the\n\
interpreter and to functions that interact strongly with the interpreter.\n\
\n\
Dynamic objects:\n\
\n\
argv -- command line arguments; argv[0] is the script pathname if known\n\
path -- module search path; path[0] is the script directory, else ''\n\
modules -- dictionary of loaded modules\n\
\n\
displayhook -- called to show results in an interactive session\n\
excepthook -- called to handle any uncaught exception other than SystemExit\n\
To customize printing in an interactive session or to install a custom\n\
top-level exception handler, assign other functions to replace these.\n\
\n\
exitfunc -- if sys.exitfunc exists, this routine is called when Python exits\n\
Assigning to sys.exitfunc is deprecated; use the atexit module instead.\n\
\n\
stdin -- standard input file object; used by raw_input() and input()\n\
stdout -- standard output file object; used by the print statement\n\
stderr -- standard error object; used for error messages\n\
By assigning other file objects (or objects that behave like files)\n\
to these, it is possible to redirect all of the interpreter's I/O.\n\
\n\
last_type -- type of last uncaught exception\n\
last_value -- value of last uncaught exception\n\
last_traceback -- traceback of last uncaught exception\n\
These three are only available in an interactive session after a\n\
traceback has been printed.\n\
\n\
exc_type -- type of exception currently being handled\n\
exc_value -- value of exception currently being handled\n\
exc_traceback -- traceback of exception currently being handled\n\
The function exc_info() should be used instead of these three,\n\
because it is thread-safe.\n\
"
)
PyDoc_STR(
"\n\
Static objects:\n\
\n\
float_info -- a dict with information about the float inplementation.\n\
long_info -- a struct sequence with information about the long implementation.\n\
maxint -- the largest supported integer (the smallest is -maxint-1)\n\
maxsize -- the largest supported length of containers.\n\
maxunicode -- the largest supported character\n\
builtin_module_names -- tuple of module names built into this interpreter\n\
version -- the version of this interpreter as a string\n\
version_info -- version information as a named tuple\n\
hexversion -- version information encoded as a single integer\n\
copyright -- copyright notice pertaining to this interpreter\n\
platform -- platform identifier\n\
executable -- absolute path of the executable binary of the Python interpreter\n\
prefix -- prefix used to find the Python library\n\
exec_prefix -- prefix used to find the machine-specific Python library\n\
float_repr_style -- string indicating the style of repr() output for floats\n\
"
)
PyDoc_STR(
"dllhandle -- [Windows only] integer handle of the Python DLL\n\
winver -- [Windows only] version number of the Python DLL\n\
"
)
PyDoc_STR(
"__stdin__ -- the original stdin; don't touch!\n\
__stdout__ -- the original stdout; don't touch!\n\
__stderr__ -- the original stderr; don't touch!\n\
__displayhook__ -- the original displayhook; don't touch!\n\
__excepthook__ -- the original excepthook; don't touch!\n\
\n\
Functions:\n\
\n\
displayhook() -- print an object to the screen, and save it in __builtin__._\n\
excepthook() -- print an exception and its traceback to sys.stderr\n\
exc_info() -- return thread-safe information about the current exception\n\
exc_clear() -- clear the exception state for the current thread\n\
exit() -- exit the interpreter by raising SystemExit\n\
getdlopenflags() -- returns flags to be used for dlopen() calls\n\
getprofile() -- get the global profiling function\n\
getrefcount() -- return the reference count for an object (plus one :-)\n\
getrecursionlimit() -- return the max recursion depth for the interpreter\n\
getsizeof() -- return the size of an object in bytes\n\
gettrace() -- get the global debug tracing function\n\
setcheckinterval() -- control how often the interpreter checks for events\n\
setdlopenflags() -- set the flags to be used for dlopen() calls\n\
setprofile() -- set the global profiling function\n\
setrecursionlimit() -- set the max recursion depth for the interpreter\n\
settrace() -- set the global debug tracing function\n\
"
) ;
static int
_check_and_flush (FILE *stream)
static int svn_initialized;
static char patchlevel_revision[50];
static char branch[50];
static char shortbranch[50];
static const char *svn_revision;
static void
svnversion_init(void)
const char*
Py_SubversionRevision()
const char*
Py_SubversionShortBranch()
PyDoc_STRVAR(flags__doc__,
"sys.flags\n\
\n\
Flags provided through command line arguments or environment vars.");
static PyTypeObject FlagsType = ;
static PyStructSequence_Field flags_fields[] = ;
static PyStructSequence_Desc flags_desc = ;
static PyObject*
make_flags(void)
PyDoc_STRVAR(version_info__doc__,
"sys.version_info\n\
\n\
Version information as a named tuple.");
static PyTypeObject VersionInfoType = ;
static PyStructSequence_Field version_info_fields[] = ;
static PyStructSequence_Desc version_info_desc = ;
static PyObject *
make_version_info(void)
PyObject *
_PySys_Init(void)
static PyObject *
makepathobject(char *path, int delim)
void
PySys_SetPath(char *path)
static PyObject *
makeargvobject(int argc, char **argv)
void
PySys_SetArgvEx(int argc, char **argv, int updatepath)
void
PySys_SetArgv(int argc, char **argv)
static void
mywrite(char *name, FILE *fp, const char *format, va_list va)
void
PySys_WriteStdout(const char *format, ...)
void
PySys_WriteStderr(const char *format, ...)
