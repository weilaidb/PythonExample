#define Py_CONFIG_H
#define MS_WINCE
#	define Py_BUILD_CORE
#define _CRT_SECURE_NO_DEPRECATE 1
#define _CRT_NONSTDC_NO_DEPRECATE 1
#define HAVE_IO_H
#define HAVE_SYS_UTIME_H
#define HAVE_TEMPNAM
#define HAVE_TMPFILE
#define HAVE_TMPNAM
#define HAVE_CLOCK
#define HAVE_STRERROR
#define HAVE_HYPOT
#define HAVE_STRFTIME
#define DONT_HAVE_SIG_ALARM
#define DONT_HAVE_SIG_PAUSE
#define LONG_BIT	32
#define WORD_BIT 32
#define PREFIX ""
#define EXEC_PREFIX ""
#define MS_WIN32
#define MS_WINDOWS
#	define PYTHONPATH ".\\DLLs;.\\lib;.\\lib\\plat-win;.\\lib\\lib-tk"
#define NT_THREADS
#define WITH_THREAD
#define USE_SOCKET
#if defined(MS_WINCE)
#  include <stdlib.h>
#  define strdup _strdup
#define getenv(v) (NULL)
#define environ (NULL)
#define _Py_PASTE_VERSION(SUFFIX) \
("[MSC v." _Py_STRINGIZE(_MSC_VER) " " SUFFIX "]")
#define _Py_STRINGIZE(X) _Py_STRINGIZE1((X))
#define _Py_STRINGIZE1(X) _Py_STRINGIZE2 ## X
#define _Py_STRINGIZE2(X) #X
#define MS_WIN64
#if defined(_M_IA64)
#define COMPILER _Py_PASTE_VERSION("64 bit (Itanium)")
#define MS_WINI64
#elif defined(_M_X64) || defined(_M_AMD64)
#define COMPILER ("[ICC v." _Py_STRINGIZE(__INTEL_COMPILER) " 64 bit (amd64) with MSC v." _Py_STRINGIZE(_MSC_VER) " CRT]")
#define COMPILER _Py_PASTE_VERSION("64 bit (AMD64)")
#define MS_WINX64
#define COMPILER _Py_PASTE_VERSION("64 bit (Unknown)")
#define Py_WINVER _WIN32_WINNT_WINXP
#define Py_NTDDI NTDDI_WINXP
#define Py_WINVER _WIN32_WINNT_WIN2K
#define Py_WINVER 0x0500
#define Py_NTDDI NTDDI_WIN2KSP4
#if defined(Py_BUILD_CORE) || defined(Py_BUILD_CORE_MODULE)
#define NTDDI_VERSION Py_NTDDI
#define WINVER Py_WINVER
#define _WIN32_WINNT Py_WINVER
#define _W64
typedef __int64 ssize_t;
typedef _W64 int ssize_t;
#define HAVE_SSIZE_T 1
#if defined(MS_WIN32) && !defined(MS_WIN64)
#define COMPILER ("[ICC v." _Py_STRINGIZE(__INTEL_COMPILER) " 32 bit (Intel) with MSC v." _Py_STRINGIZE(_MSC_VER) " CRT]")
#define COMPILER _Py_PASTE_VERSION("32 bit (Intel)")
#define COMPILER _Py_PASTE_VERSION("32 bit (Unknown)")
typedef int pid_t;
#define Py_IS_NAN _isnan
#define Py_IS_INFINITY(X) (!_finite(X) && !_isnan(X))
#define Py_IS_FINITE(X) _finite(X)
#define copysign _copysign
#if _MSC_VER < 1600
#define hypot _hypot
#if defined(_MSC_VER) && _MSC_VER >= 1200
#define COMPILER "[Borland]"
typedef int pid_t;
#undef HAVE_SYS_UTIME_H
#define HAVE_UTIME_H
#define HAVE_DIRENT_H
#define _chsize chsize
#define _setmode setmode
#error "Only Win32 and later are supported"
#if defined(__GNUC__) && defined(_WIN32)
#if (__GNUC__==2) && (__GNUC_MINOR__<=91)
#warning "Please use an up-to-date version of gcc! (>2.91 recommended)"
#define COMPILER "[gcc]"
#define hypot _hypot
#define PY_LONG_LONG long long
#define PY_LLONG_MIN LLONG_MIN
#define PY_LLONG_MAX LLONG_MAX
#define PY_ULLONG_MAX ULLONG_MAX
#if defined(__LCC__)
#define COMPILER "[lcc-win32]"
typedef int pid_t;
#	include <stdio.h>
#define HAVE_LONG_LONG 1
#	define PY_LONG_LONG __int64
#	define PY_LLONG_MAX _I64_MAX
#	define PY_LLONG_MIN _I64_MIN
#	define PY_ULLONG_MAX _UI64_MAX
#if !defined(MS_NO_COREDLL) && !defined(Py_NO_ENABLE_SHARED)
#	define Py_ENABLE_SHARED 1
#	define MS_COREDLL
#define HAVE_DECLSPEC_DLL
#	ifndef Py_BUILD_CORE
#		if defined(_MSC_VER)
#			ifdef _DEBUG
#				pragma comment(lib,"python27_d.lib")
#			else
#				pragma comment(lib,"python27.lib")
#			endif
#		endif
#	endif
#if defined(MS_WIN64)
#	define PLATFORM "win32"
#	define SIZEOF_VOID_P 8
#	define SIZEOF_TIME_T 8
#	define SIZEOF_OFF_T 4
#	define SIZEOF_FPOS_T 8
#	define SIZEOF_HKEY 8
#	define SIZEOF_SIZE_T 8
#	define HAVE_LARGEFILE_SUPPORT
#elif defined(MS_WIN32)
#	define PLATFORM "win32"
#	define HAVE_LARGEFILE_SUPPORT
#	define SIZEOF_VOID_P 4
#	define SIZEOF_OFF_T 4
#	define SIZEOF_FPOS_T 8
#	define SIZEOF_HKEY 4
#	define SIZEOF_SIZE_T 4
#	if defined(_MSC_VER) && _MSC_VER >= 1400
#	define SIZEOF_TIME_T 8
#	else
#	define SIZEOF_TIME_T 4
#	endif
#	define Py_DEBUG
#define SIZEOF_SHORT 2
#define SIZEOF_INT 4
#define SIZEOF_LONG 4
#define SIZEOF_LONG_LONG 8
#define SIZEOF_DOUBLE 8
#define SIZEOF_FLOAT 4
#if defined(_MSC_VER)
#if _MSC_VER > 1300
#define HAVE_UINTPTR_T 1
#define HAVE_INTPTR_T 1
#define Py_LL(x) x##I64
#if SIZEOF_INT == 4
#define HAVE_UINT32_T 1
#define PY_UINT32_T unsigned int
#elif SIZEOF_LONG == 4
#define HAVE_UINT32_T 1
#define PY_UINT32_T unsigned long
#if SIZEOF_LONG_LONG == 8
#define HAVE_UINT64_T 1
#define PY_UINT64_T unsigned PY_LONG_LONG
#if SIZEOF_INT == 4
#define HAVE_INT32_T 1
#define PY_INT32_T int
#elif SIZEOF_LONG == 4
#define HAVE_INT32_T 1
#define PY_INT32_T long
#if SIZEOF_LONG_LONG == 8
#define HAVE_INT64_T 1
#define PY_INT64_T PY_LONG_LONG
#define HAVE_COPYSIGN 1
#if _MSC_VER >= 1800
#define HAVE_ROUND 1
#define HAVE_DECL_ISINF 1
#define HAVE_DECL_ISNAN 1
#define HAVE_CONIO_H 1
#define HAVE_DIRECT_H 1
#define HAVE_TZNAME
#define RETSIGTYPE void
#define STDC_HEADERS 1
#define HAVE_PUTENV
#define HAVE_PROTOTYPES
#define WITH_DOC_STRINGS 1
#define Py_USING_UNICODE
#define Py_UNICODE_SIZE 2
#define WITH_PYMALLOC 1
#define HAVE_DYNAMIC_LOADING
#define HAVE_FTIME
#define HAVE_GETPEERNAME
#define HAVE_GETPID
#define HAVE_MKTIME
#define HAVE_SETVBUF
#define HAVE_WCSCOLL 1
#define HAVE_ZLIB_COPY 1
#define HAVE_ERRNO_H 1
#define HAVE_FCNTL_H 1
#define HAVE_PROCESS_H 1
#define HAVE_SIGNAL_H 1
#define HAVE_STDARG_PROTOTYPES
#define HAVE_STDDEF_H 1
#define HAVE_SYS_STAT_H 1
#define HAVE_SYS_TYPES_H 1
#define HAVE_WCHAR_H 1
#define HAVE_LIBNSL 1
#define HAVE_LIBSOCKET 1
#define Py_SOCKET_FD_CAN_BE_GE_FD_SETSIZE
#define DOUBLE_IS_LITTLE_ENDIAN_IEEE754 1
