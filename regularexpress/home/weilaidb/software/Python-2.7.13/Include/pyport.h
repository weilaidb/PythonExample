#define Py_PYPORT_H
#define Py_PROTO(x) x
#define Py_PROTO(x) ()
#define Py_FPROTO(x) Py_PROTO(x)
#define PY_LONG_LONG long long
#if defined(LLONG_MAX)
#define PY_LLONG_MIN LLONG_MIN
#define PY_LLONG_MAX LLONG_MAX
#define PY_ULLONG_MAX ULLONG_MAX
#elif defined(__LONG_LONG_MAX__)
#define PY_LLONG_MAX __LONG_LONG_MAX__
#define PY_LLONG_MIN (-PY_LLONG_MAX-1)
#define PY_ULLONG_MAX (__LONG_LONG_MAX__*2ULL + 1ULL)
#define PY_ULLONG_MAX (~0ULL)
#define PY_LLONG_MAX  ((long long)(PY_ULLONG_MAX>>1))
#define PY_LLONG_MIN (-PY_LLONG_MAX-1)
#define HAVE_UINT32_T 1
#define PY_UINT32_T uint32_t
#define HAVE_UINT64_T 1
#define PY_UINT64_T uint64_t
#define HAVE_INT32_T 1
#define PY_INT32_T int32_t
#define HAVE_INT64_T 1
#define PY_INT64_T int64_t
#if (defined HAVE_UINT64_T && defined HAVE_INT64_T && \
defined HAVE_UINT32_T && defined HAVE_INT32_T && SIZEOF_VOID_P >= 8)
#define PYLONG_BITS_IN_DIGIT 30
#define PYLONG_BITS_IN_DIGIT 15
typedef uintptr_t       Py_uintptr_t;
typedef intptr_t        Py_intptr_t;
#elif SIZEOF_VOID_P <= SIZEOF_INT
typedef unsigned int    Py_uintptr_t;
typedef int             Py_intptr_t;
#elif SIZEOF_VOID_P <= SIZEOF_LONG
typedef unsigned long   Py_uintptr_t;
typedef long            Py_intptr_t;
#elif defined(HAVE_LONG_LONG) && (SIZEOF_VOID_P <= SIZEOF_LONG_LONG)
typedef unsigned PY_LONG_LONG   Py_uintptr_t;
typedef PY_LONG_LONG            Py_intptr_t;
#   error
typedef ssize_t         Py_ssize_t;
#elif SIZEOF_VOID_P == SIZEOF_SIZE_T
typedef Py_intptr_t     Py_ssize_t;
#   error
#define PY_SIZE_MAX SIZE_MAX
#define PY_SIZE_MAX ((size_t)-1)
#define PY_SSIZE_T_MAX ((Py_ssize_t)(((size_t)-1)>>1))
#define PY_SSIZE_T_MIN (-PY_SSIZE_T_MAX-1)
#if SIZEOF_PID_T > SIZEOF_LONG
#   error
#   if SIZEOF_SIZE_T == SIZEOF_INT && !defined(__APPLE__)
#       define PY_FORMAT_SIZE_T
#   elif SIZEOF_SIZE_T == SIZEOF_LONG
#       define PY_FORMAT_SIZE_T
#   elif defined(MS_WINDOWS)
#       define PY_FORMAT_SIZE_T
#   else
#       error
#   endif
#   ifndef PY_FORMAT_LONG_LONG
#       if defined(MS_WIN64) || defined(MS_WINDOWS)
#           define PY_FORMAT_LONG_LONG
#       else
#           error
#       endif
#   endif
#undef USE_INLINE
#if defined(_MSC_VER)
#if defined(PY_LOCAL_AGGRESSIVE)
#define Py_LOCAL(type) static type __fastcall
#define Py_LOCAL_INLINE(type) static __inline type __fastcall
#elif defined(USE_INLINE)
#define Py_LOCAL(type) static type
#define Py_LOCAL_INLINE(type) static inline type
#define Py_LOCAL(type) static type
#define Py_LOCAL_INLINE(type) static type
#if defined(_MSC_VER)
#define Py_MEMCPY(target, source, length) do  while (0)
#define Py_MEMCPY memcpy
#define HAVE_STAT
#define HAVE_FSTAT
#if defined(PYOS_OS2) && defined(PYCC_GCC)
#elif defined(HAVE_STAT_H)
#if defined(PYCC_VACPP)
#define S_IFMT (S_IFDIR|S_IFCHR|S_IFREG)
#define S_ISREG(x) (((x) & S_IFMT) == S_IFREG)
#define S_ISDIR(x) (((x) & S_IFMT) == S_IFDIR)
#define Py_ARITHMETIC_RIGHT_SHIFT(TYPE, I, J) \
((I) < 0 ? -1-((-1-(I)) >> (J)) : (I) >> (J))
#define Py_ARITHMETIC_RIGHT_SHIFT(TYPE, I, J) ((I) >> (J))
#define Py_FORCE_EXPANSION(X) X
#define Py_SAFE_DOWNCAST(VALUE, WIDE, NARROW) \
(assert((WIDE)(NARROW)(VALUE) == (VALUE)), (NARROW)(VALUE))
#define Py_SAFE_DOWNCAST(VALUE, WIDE, NARROW) (NARROW)(VALUE)
#if defined(__FreeBSD__) || defined(__OpenBSD__) || (defined(__hpux) && defined(__ia64))
#define _Py_SET_EDOM_FOR_NAN(X) if (isnan(X)) errno = EDOM;
#define _Py_SET_EDOM_FOR_NAN(X) ;
#define Py_SET_ERRNO_ON_MATH_ERROR(X) \
do  while(0)
#define Py_SET_ERANGE_IF_OVERFLOW(X) Py_SET_ERRNO_ON_MATH_ERROR(X)
#define Py_ADJUST_ERANGE1(X)                                            \
do  while(0)
#define Py_ADJUST_ERANGE2(X, Y)                                         \
do  while(0)
#define HAVE_PY_SET_53BIT_PRECISION 1
#define _Py_SET_53BIT_PRECISION_HEADER                          \
unsigned short old_387controlword, new_387controlword
#define _Py_SET_53BIT_PRECISION_START                                   \
do  while (0)
#define _Py_SET_53BIT_PRECISION_END                             \
if (new_387controlword != old_387controlword)               \
_Py_set_387controlword(old_387controlword)
#if defined(_MSC_VER) && !defined(_WIN64)
#define HAVE_PY_SET_53BIT_PRECISION 1
#define _Py_SET_53BIT_PRECISION_HEADER \
unsigned int old_387controlword, new_387controlword, out_387controlword
#define _Py_SET_53BIT_PRECISION_START                                   \
do  while (0)
#define _Py_SET_53BIT_PRECISION_END                                     \
do  while (0)
#define _Py_SET_53BIT_PRECISION_HEADER
#define _Py_SET_53BIT_PRECISION_START
#define _Py_SET_53BIT_PRECISION_END
#if !defined(DOUBLE_IS_LITTLE_ENDIAN_IEEE754) && \
!defined(DOUBLE_IS_BIG_ENDIAN_IEEE754) && \
!defined(DOUBLE_IS_ARM_MIXED_ENDIAN_IEEE754)
#define PY_NO_SHORT_FLOAT_REPR
#if defined(X87_DOUBLE_ROUNDING) && !defined(HAVE_PY_SET_53BIT_PRECISION)
#define PY_NO_SHORT_FLOAT_REPR
#if defined(__GNUC__) && ((__GNUC__ >= 4) || \
(__GNUC__ == 3) && (__GNUC_MINOR__ >= 1))
#define Py_DEPRECATED(VERSION_UNUSED) __attribute__((__deprecated__))
#define Py_DEPRECATED(VERSION_UNUSED)
extern int gethostname(char *, int);
int shutdown( int, int );
extern char * _getpty(int *, int, mode_t, int);
#if defined(HAVE_SYS_TERMIO_H) && !defined(__hpux)
#if defined(HAVE_OPENPTY) || defined(HAVE_FORKPTY)
#if !defined(HAVE_PTY_H) && !defined(HAVE_LIBUTIL_H) && !defined(HAVE_UTIL_H)
extern int openpty(int *, int *, char *, struct termios *, struct winsize *);
extern pid_t forkpty(int *, char *, struct termios *, struct winsize *);
#if (__FreeBSD_version >= 500040 && __FreeBSD_version < 602113) || \
(__FreeBSD_version >= 700000 && __FreeBSD_version < 700054) || \
(__FreeBSD_version >= 800000 && __FreeBSD_version < 800001)
# define _PY_PORT_CTYPE_UTF8_ISSUE
#if defined(__APPLE__)
# define _PY_PORT_CTYPE_UTF8_ISSUE
#undef isalnum
#define isalnum(c) iswalnum(btowc(c))
#undef isalpha
#define isalpha(c) iswalpha(btowc(c))
#undef islower
#define islower(c) iswlower(btowc(c))
#undef isspace
#define isspace(c) iswspace(btowc(c))
#undef isupper
#define isupper(c) iswupper(btowc(c))
#undef tolower
#define tolower(c) towlower(btowc(c))
#undef toupper
#define toupper(c) towupper(btowc(c))
#if defined(__CYGWIN__) || defined(__BEOS__)
#       define HAVE_DECLSPEC_DLL
#if defined(Py_ENABLE_SHARED) || defined(__CYGWIN__)
#       if defined(HAVE_DECLSPEC_DLL)
#               ifdef Py_BUILD_CORE
#                       define PyAPI_FUNC(RTYPE) __declspec(dllexport) RTYPE
#                       define PyAPI_DATA(RTYPE) extern __declspec(dllexport) RTYPE
#                       if defined(__CYGWIN__)
#                               define PyMODINIT_FUNC __declspec(dllexport) void
#                       else
#                               define PyMODINIT_FUNC void
#                       endif
#               else
#                       define PyAPI_DATA(RTYPE) extern __declspec(dllimport) RTYPE
#                       if defined(__cplusplus)
#                               define PyMODINIT_FUNC extern  __declspec(dllexport) void
#                       else
#                               define PyMODINIT_FUNC __declspec(dllexport) void
#                       endif
#               endif
#       endif
#       define PyAPI_FUNC(RTYPE) RTYPE
#       define PyAPI_DATA(RTYPE) extern RTYPE
#       if defined(__cplusplus)
#               define PyMODINIT_FUNC extern  void
#       else
#               define PyMODINIT_FUNC void
#       endif
#if defined(Py_ENABLE_SHARED) && defined (HAVE_DECLSPEC_DLL)
#       if defined(Py_BUILD_CORE)
#               define DL_IMPORT(RTYPE) __declspec(dllexport) RTYPE
#               define DL_EXPORT(RTYPE) __declspec(dllexport) RTYPE
#       else
#               define DL_IMPORT(RTYPE) __declspec(dllimport) RTYPE
#               define DL_EXPORT(RTYPE) __declspec(dllexport) RTYPE
#       endif
#       define DL_EXPORT(RTYPE) RTYPE
#       define DL_IMPORT(RTYPE) RTYPE
typedef long fd_mask;
#define NFDBITS (sizeof(fd_mask) * NBBY)
#define howmany(x, y)   (((x)+((y)-1))/(y))
typedef struct fd_set  fd_set;
#define FD_SET(n, p)    ((p)->fds_bits[(n)/NFDBITS] |= (1 << ((n) % NFDBITS)))
#define FD_CLR(n, p)    ((p)->fds_bits[(n)/NFDBITS] &= ~(1 << ((n) % NFDBITS)))
#define FD_ISSET(n, p)  ((p)->fds_bits[(n)/NFDBITS] & (1 << ((n) % NFDBITS)))
#define FD_ZERO(p)      memset((char *)(p), '\0', sizeof(*(p)))
#define INT_MAX 2147483647
#if SIZEOF_LONG == 4
#define LONG_MAX 0X7FFFFFFFL
#elif SIZEOF_LONG == 8
#define LONG_MAX 0X7FFFFFFFFFFFFFFFL
#error
#define LONG_MIN (-LONG_MAX-1)
#define LONG_BIT (8 * SIZEOF_LONG)
#if LONG_BIT != 8 * SIZEOF_LONG
#error
#if (!defined(__GNUC__) || __GNUC__ < 2 || \
(__GNUC__ == 2 && __GNUC_MINOR__ < 7) ) && \
!defined(RISCOS)
#define Py_GCC_ATTRIBUTE(x)
#define Py_GCC_ATTRIBUTE(x) __attribute__(x)
#define Py_FORMAT_PARSETUPLE(func,p1,p2) __attribute__((format(func,p1,p2)))
#define Py_FORMAT_PARSETUPLE(func,p1,p2)
#if defined(__GNUC__) && __GNUC__ >= 3
#define Py_ALIGNED(x) __attribute__((aligned(x)))
#define Py_ALIGNED(x)
#define Py_LL(x) x##LL
#define Py_ULL(x) Py_LL(x##U)
