#define Py_CONFIG_H
#define PREFIX
#define EXEC_PREFIX
#define PLATFORM
#define COMPILER
#define PYOS_OS2
#define PYCC_VACPP
#define PYTHONPATH
#define DOSFILESYS
#define WORD_BIT                32
#define LONG_BIT                32
#define SIZEOF_INT               4
#define SIZEOF_LONG              4
#define SIZEOF_VOID_P            4
#define Py_USING_UNICODE
#define PY_UNICODE_TYPE    wchar_t
#define Py_UNICODE_SIZE SIZEOF_SHORT
#define HAVE_DYNAMIC_LOADING 1
typedef int mode_t;
typedef int uid_t;
typedef int gid_t;
typedef int pid_t;
#if defined(__MULTI__)
#define WITH_THREAD            1
#define OS2_THREADS            1
#define STDC_HEADERS             1
#define HAVE_HYPOT               1
#define HAVE_PUTENV              1
#define HAVE_ERRNO_H             1
#define HAVE_SYS_STAT_H          1
#define HAVE_SYS_TYPES_H         1
#define HAVE_PROTOTYPES          1
#define HAVE_STDARG_PROTOTYPES   1
#define HAVE_MEMMOVE             1
#define HAVE_STRERROR            1
#define HAVE_SETLOCALE           1
#define MALLOC_ZERO_RETURNS_NULL 1
#define HAVE_SIGNAL_H            1
#define RETSIGTYPE            void
#define DONT_HAVE_SIG_ALARM      1
#define DONT_HAVE_SIG_PAUSE      1
#define HAVE_FTIME               1
#define HAVE_CLOCK               1
#define HAVE_STRFTIME            1
#define HAVE_MKTIME              1
#define HAVE_TZNAME              1
#define HAVE_TIMES               1
#define HAVE_SYS_UTIME_H         1
#define HAVE_SYS_TIME_H          1
#define HAVE_GETTIMEOFDAY        1
#define TIME_WITH_SYS_TIME       1
#define SYS_SELECT_WITH_SYS_TIME 1
#define HAVE_SYS_SELECT_H       1
#define BSD_SELECT              1
#define HAVE_SELECT             1
#define HAVE_GETPEERNAME        1
#define HAVE_DUP2                1
#define HAVE_EXECV               1
#define HAVE_SETVBUF             1
#define HAVE_GETCWD              1
#define HAVE_PIPE                1
#define HAVE_IO_H                1
#define HAVE_FCNTL_H             1
#define HAVE_DIRECT_H            1
#define HAVE_PROCESS_H           1
#define HAVE_GETPID              1
#define HAVE_SYSTEM              1
#define HAVE_WAIT                1
#define HAVE_KILL                1
#define HAVE_POPEN               1
#define WITH_DOC_STRINGS 1
#define DL_IMPORT(RTYPE) RTYPE _System
