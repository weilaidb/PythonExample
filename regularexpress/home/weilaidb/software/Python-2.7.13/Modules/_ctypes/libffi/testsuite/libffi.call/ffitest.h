#if defined HAVE_STDINT_H
#if defined HAVE_INTTYPES_H
#define MAX_ARGS 256
#define CHECK(x) (void)(!(x) ? (abort(), 1) : 0)
#undef __UNUSED__
#if defined(__GNUC__)
#define __UNUSED__ __attribute__((__unused__))
#define __STDCALL__ __attribute__((stdcall))
#define __THISCALL__ __attribute__((thiscall))
#define __FASTCALL__ __attribute__((fastcall))
#define __UNUSED__
#define __STDCALL__ __stdcall
#define __THISCALL__ __thiscall
#define __FASTCALL__ __fastcall
#define ABI_NUM FFI_DEFAULT_ABI
#define ABI_ATTR
# undef HAVE_MMAP_DEV_ZERO
# include <sys/mman.h>
# ifndef MAP_FAILED
#  define MAP_FAILED -1
# endif
# if !defined (MAP_ANONYMOUS) && defined (MAP_ANON)
#  define MAP_ANONYMOUS MAP_ANON
# endif
# define USING_MMAP
# include <sys/mman.h>
# ifndef MAP_FAILED
#  define MAP_FAILED -1
# endif
# define USING_MMAP
#define PRIdLL
#define PRIuLL
#define PRIdLL
#define PRIuLL
#if defined(__alpha__) && defined(__osf__)
#undef PRIdLL
#define PRIdLL
#undef PRIuLL
#define PRIuLL
#define PRId8
#define PRIu8
#define PRId64
#define PRIu64
#define PRIuPTR
#if defined(__hppa__) && defined(__hpux__) && !defined(PRIuPTR)
#define PRIuPTR
#if defined(__sgi)
#define PRId8
#define PRIu8
#if (_MIPS_SZLONG == 32)
#define PRId64
#define PRIu64
#if (_MIPS_SZLONG == 64)
#define PRId64
#define PRIu64
#define PRIuPTR
#if defined(__sun__) && defined(__svr4__) && !defined(PRIuPTR)
#if defined(__arch64__) || defined (__x86_64__)
#define PRIuPTR
#define PRIuPTR
#if defined _MSC_VER
#define PRIuPTR
#define PRIu8
#define PRId8
#define PRIu64
#define PRId64
#define PRIuPTR
