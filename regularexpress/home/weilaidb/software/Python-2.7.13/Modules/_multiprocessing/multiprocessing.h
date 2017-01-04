#define MULTIPROCESSING_H
#define PY_SSIZE_T_CLEAN
#define _XOPEN_SOURCE 500
#  define WIN32_LEAN_AND_MEAN
#  include <windows.h>
#  include <winsock2.h>
#  include <process.h>
#  ifdef Py_DEBUG
#    include <crtdbg.h>
#  endif
#  define SEM_HANDLE HANDLE
#  define SEM_VALUE_MAX LONG_MAX
#  include <fcntl.h>
#  include <netinet/in.h>
#  include <sys/socket.h>
#  include <sys/uio.h>
#  include <arpa/inet.h>
#  if defined(HAVE_SEM_OPEN) && !defined(POSIX_SEMAPHORES_NOT_ENABLED)
#    include <semaphore.h>
typedef sem_t *SEM_HANDLE;
#  endif
#  define HANDLE int
#  define SOCKET int
#  define BOOL int
#  define UINT32 uint32_t
#  define INT32 int32_t
#  define TRUE 1
#  define FALSE 0
#  define INVALID_HANDLE_VALUE (-1)
#if defined(HAVE_SYSCONF) && defined(_SC_SEM_VALUE_MAX)
# define SEM_VALUE_MAX sysconf(_SC_SEM_VALUE_MAX)
#elif defined(_SEM_VALUE_MAX)
# define SEM_VALUE_MAX _SEM_VALUE_MAX
#elif defined(_POSIX_SEM_VALUE_MAX)
# define SEM_VALUE_MAX _POSIX_SEM_VALUE_MAX
# define SEM_VALUE_MAX INT_MAX
#if PY_VERSION_HEX < 0x02050000 && !defined(PY_SSIZE_T_MIN)
typedef int Py_ssize_t;
#  define PY_SSIZE_T_MAX INT_MAX
#  define PY_SSIZE_T_MIN INT_MIN
#  define F_PY_SSIZE_T "i"
#  define PyInt_FromSsize_t(n) PyInt_FromLong((long)n)
#  define F_PY_SSIZE_T "n"
#if SIZEOF_VOID_P == SIZEOF_LONG
#  define F_POINTER "k"
#  define T_POINTER T_ULONG
#elif defined(HAVE_LONG_LONG) && (SIZEOF_VOID_P == SIZEOF_LONG_LONG)
#  define F_POINTER "K"
#  define T_POINTER T_ULONGLONG
#  error "can't find format code for unsigned integer of same size as void*"
#  define F_HANDLE F_POINTER
#  define T_HANDLE T_POINTER
#  define F_SEM_HANDLE F_HANDLE
#  define T_SEM_HANDLE T_HANDLE
#  define F_DWORD "k"
#  define T_DWORD T_ULONG
#  define F_HANDLE "i"
#  define T_HANDLE T_INT
#  define F_SEM_HANDLE F_POINTER
#  define T_SEM_HANDLE T_POINTER
#if PY_VERSION_HEX >= 0x03000000
#  define F_RBUFFER "y"
#  define F_RBUFFER "s"
#define MP_SUCCESS (0)
#define MP_STANDARD_ERROR (-1)
#define MP_MEMORY_ERROR (-1001)
#define MP_END_OF_FILE (-1002)
#define MP_EARLY_END_OF_FILE (-1003)
#define MP_BAD_MESSAGE_LENGTH (-1004)
#define MP_SOCKET_ERROR (-1005)
#define MP_EXCEPTION_HAS_BEEN_SET (-1006)
PyObject *mp_SetError(PyObject *Type, int num);
extern PyObject *pickle_dumps;
extern PyObject *pickle_loads;
extern PyObject *pickle_protocol;
extern PyObject *BufferTooShort;
extern PyTypeObject SemLockType;
extern PyTypeObject ConnectionType;
extern PyTypeObject PipeConnectionType;
extern HANDLE sigint_event;
#if PY_VERSION_HEX >= 0x03000000
#  define PICKLE_MODULE "pickle"
#  define FROM_FORMAT PyUnicode_FromFormat
#  define PyInt_FromLong PyLong_FromLong
#  define PyInt_FromSsize_t PyLong_FromSsize_t
#  define PICKLE_MODULE "cPickle"
#  define FROM_FORMAT PyString_FromFormat
#  define PyVarObject_HEAD_INIT(type, size) PyObject_HEAD_INIT(type) size,
#  define Py_TPFLAGS_HAVE_WEAKREFS 0
#define CONNECTION_BUFFER_SIZE 1024
typedef struct  ConnectionObject;
#define MAX_MESSAGE_LENGTH 0x7fffffff
#  define MIN(x, y) ((x) < (y) ? x : y)
#  define MAX(x, y) ((x) > (y) ? x : y)
