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
#define PRIdLL "I64d"
#define PRIuLL "I64u"
#define PRIdLL "lld"
#define PRIuLL "llu"
#if defined(__alpha__) && defined(__osf__)
#undef PRIdLL
#define PRIdLL "ld"
#undef PRIuLL
#define PRIuLL "lu"
#define PRId8 "hd"
#define PRIu8 "hu"
#define PRId64 "ld"
#define PRIu64 "lu"
#define PRIuPTR "lu"
#if defined(__hppa__) && defined(__hpux__) && !defined(PRIuPTR)
#define PRIuPTR "lu"
#if defined(__sgi)
#define PRId8 "hhd"
#define PRIu8 "hhu"
#if (_MIPS_SZLONG == 32)
#define PRId64 "lld"
#define PRIu64 "llu"
#if (_MIPS_SZLONG == 64)
#define PRId64 "ld"
#define PRIu64 "lu"
#define PRIuPTR "lu"
#if defined(__sun__) && defined(__svr4__) && !defined(PRIuPTR)
#if defined(__arch64__) || defined (__x86_64__)
#define PRIuPTR "lu"
#define PRIuPTR "u"
#if defined _MSC_VER
#define PRIuPTR "lu"
#define PRIu8 "u"
#define PRId8 "d"
#define PRIu64 "I64u"
#define PRId64 "I64d"
#define PRIuPTR "u"
