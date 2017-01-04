typedef __int64 hs_time;
#define GETTIMEOFDAY(P_HS_TIME) \
#error "This module requires gettimeofday() on non-Windows platforms!"
#if (defined(PYOS_OS2) && defined(PYCC_GCC)) || defined(__QNX__)
typedef struct timeval hs_time;
#if !defined(__cplusplus) && !defined(inline)
#define inline __inline
#define inline
#define BUFFERSIZE 10240
#if defined(PYOS_OS2) && defined(PYCC_GCC)
#define PATH_MAX 260
#if defined(__sgi) && _COMPILER_VERSION>700 && !defined(PATH_MAX)
#define PATH_MAX 1024
#   ifdef MAX_PATH
#       define PATH_MAX MAX_PATH
#   elif defined (_POSIX_PATH_MAX)
#       define PATH_MAX _POSIX_PATH_MAX
#   else
#       error "Need a defn. for PATH_MAX in _hotshot.c"
#   endif
typedef struct  ProfilerObject;
typedef struct  LogReaderObject;
static PyObject * ProfilerError = NULL;
#define GETTIMEOFDAY(ptv) gettimeofday((ptv))
#define GETTIMEOFDAY(ptv) gettimeofday((ptv), (struct timezone *)NULL)
PyDoc_STRVAR(logreader_close__doc__,
"close()\n"
"Close the log file, preventing additional records from being read.");
static PyObject *
logreader_close(LogReaderObject *self, PyObject *args)
PyDoc_STRVAR(logreader_fileno__doc__,
"fileno() -> file descriptor\n"
"Returns the file descriptor for the log file, if open.\n"
"Raises ValueError if the log file is closed.");
static PyObject *
logreader_fileno(LogReaderObject *self)
#define WHAT_ENTER        0x00
#define WHAT_EXIT         0x01
#define WHAT_LINENO       0x02
#define WHAT_OTHER        0x03
#define WHAT_ADD_INFO     0x13
#define WHAT_DEFINE_FILE  0x23
#define WHAT_LINE_TIMES   0x33
#define WHAT_DEFINE_FUNC  0x43
#define WHAT_FRAME_TIMES  0x53
#define ERR_NONE          0
#define ERR_EOF          -1
#define ERR_EXCEPTION    -2
#define ERR_BAD_RECTYPE  -3
#define PISIZE            (sizeof(int) + 1)
#define MPISIZE           (PISIZE + 1)
#define MAXEVENTSIZE      (MPISIZE + PISIZE*2)
static int
unpack_packed_int(LogReaderObject *self, int *pvalue, int discard)
static int
unpack_string(LogReaderObject *self, PyObject **pvalue)
static int
unpack_add_info(LogReaderObject *self)
static void
eof_error(LogReaderObject *self)
static PyObject *
logreader_tp_iternext(LogReaderObject *self)
static void
logreader_dealloc(LogReaderObject *self)
static PyObject *
logreader_sq_item(LogReaderObject *self, Py_ssize_t index)
static void
do_stop(ProfilerObject *self);
static int
flush_data(ProfilerObject *self)
static inline int
pack_packed_int(ProfilerObject *self, int value)
static inline int
pack_modified_packed_int(ProfilerObject *self, int value,
int modsize, int subfield)
static int
pack_string(ProfilerObject *self, const char *s, Py_ssize_t len)
static int
pack_add_info(ProfilerObject *self, const char *s1, const char *s2)
static int
pack_define_file(ProfilerObject *self, int fileno, const char *filename)
static int
pack_define_func(ProfilerObject *self, int fileno, int lineno,
const char *funcname)
static int
pack_line_times(ProfilerObject *self)
static int
pack_frame_times(ProfilerObject *self)
static inline int
pack_enter(ProfilerObject *self, int fileno, int tdelta, int lineno)
static inline int
pack_exit(ProfilerObject *self, int tdelta)
static inline int
pack_lineno(ProfilerObject *self, int lineno)
static inline int
pack_lineno_tdelta(ProfilerObject *self, int lineno, int tdelta)
static inline int
get_fileno(ProfilerObject *self, PyCodeObject *fcode)
static inline int
get_tdelta(ProfilerObject *self)
static int
tracer_callback(ProfilerObject *self, PyFrameObject *frame, int what,
PyObject *arg)
static LARGE_INTEGER frequency = ;
static unsigned long timeofday_diff = 0;
static unsigned long rusage_diff = 0;
static void
calibrate(void)
static void
do_start(ProfilerObject *self)
static void
do_stop(ProfilerObject *self)
static int
is_available(ProfilerObject *self)
PyDoc_STRVAR(addinfo__doc__,
"addinfo(key, value)\n"
"Insert an ADD_INFO record into the log.");
static PyObject *
profiler_addinfo(ProfilerObject *self, PyObject *args)
PyDoc_STRVAR(close__doc__,
"close()\n"
"Shut down this profiler and close the log files, even if its active.");
static PyObject *
profiler_close(ProfilerObject *self)
#define fileno__doc__ logreader_fileno__doc__
static PyObject *
profiler_fileno(ProfilerObject *self)
PyDoc_STRVAR(runcall__doc__,
"runcall(callable[, args[, kw]]) -> callable()\n"
"Profile a specific function call, returning the result of that call.");
static PyObject *
profiler_runcall(ProfilerObject *self, PyObject *args)
PyDoc_STRVAR(runcode__doc__,
"runcode(code, globals[, locals])\n"
"Execute a code object while collecting profile data.  If locals is\n"
"omitted, globals is used for the locals as well.");
static PyObject *
profiler_runcode(ProfilerObject *self, PyObject *args)
PyDoc_STRVAR(start__doc__,
"start()\n"
"Install this profiler for the current thread.");
static PyObject *
profiler_start(ProfilerObject *self, PyObject *args)
PyDoc_STRVAR(stop__doc__,
"stop()\n"
"Remove this profiler from the current thread.");
static PyObject *
profiler_stop(ProfilerObject *self, PyObject *args)
static void
profiler_dealloc(ProfilerObject *self)
static PyMethodDef profiler_methods[] = ;
static PyMemberDef profiler_members[] = ;
static PyObject *
profiler_get_closed(ProfilerObject *self, void *closure)
static PyGetSetDef profiler_getsets[] = ;
PyDoc_STRVAR(profiler_object__doc__,
"High-performance profiler object.\n"
"\n"
"Methods:\n"
"\n"
"close():      Stop the profiler and close the log files.\n"
"fileno():     Returns the file descriptor of the log file.\n"
"runcall():    Run a single function call with profiling enabled.\n"
"runcode():    Execute a code object with profiling enabled.\n"
"start():      Install the profiler and return.\n"
"stop():       Remove the profiler.\n"
"\n"
"Attributes (read-only):\n"
"\n"
"closed:       True if the profiler has already been closed.\n"
"frametimings: True if ENTER/EXIT events collect timing information.\n"
"lineevents:   True if line events are reported to the profiler.\n"
"linetimings:  True if line events collect timing information.");
static PyTypeObject ProfilerType = ;
static PyMethodDef logreader_methods[] = ;
static PyMemberDef logreader_members[] = ;
PyDoc_STRVAR(logreader__doc__,
"logreader(filename) --> log-iterator\n\
Create a log-reader for the timing information file.");
static PySequenceMethods logreader_as_sequence = ;
static PyObject *
logreader_get_closed(LogReaderObject *self, void *closure)
static PyGetSetDef logreader_getsets[] = ;
static PyTypeObject LogReaderType = ;
static PyObject *
hotshot_logreader(PyObject *unused, PyObject *args)
static char *
get_version_string(void)
static int
write_header(ProfilerObject *self)
PyDoc_STRVAR(profiler__doc__,
"profiler(logfilename[, lineevents[, linetimes]]) -> profiler\n\
Create a new profiler object.");
static PyObject *
hotshot_profiler(PyObject *unused, PyObject *args)
PyDoc_STRVAR(coverage__doc__,
"coverage(logfilename) -> profiler\n\
Returns a profiler that doesn't collect any timing information, which is\n\
useful in building a coverage analysis tool.");
static PyObject *
hotshot_coverage(PyObject *unused, PyObject *args)
PyDoc_VAR(resolution__doc__) =
PyDoc_STR(
"resolution() -> (performance-counter-ticks, update-frequency)\n"
"Return the resolution of the timer provided by the QueryPerformanceCounter()\n"
"function.  The first value is the smallest observed change, and the second\n"
"is the result of QueryPerformanceFrequency()."
)
PyDoc_STR(
"resolution() -> (gettimeofday-usecs, getrusage-usecs)\n"
"Return the resolution of the timers provided by the gettimeofday() and\n"
"getrusage() system calls, or -1 if the call is not supported."
)
;
static PyObject *
hotshot_resolution(PyObject *self, PyObject *unused)
static PyMethodDef functions[] = ;
void
init_hotshot(void)
