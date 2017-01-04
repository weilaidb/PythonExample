#define FFI_COMMON_H
# define alloca __builtin_alloca
# if HAVE_ALLOCA_H
#  include <alloca.h>
# else
#  ifdef _AIX
#  else
#   ifndef alloca
char *alloca ();
#   endif
#  endif
# endif
#if STDC_HEADERS
# include <string.h>
# ifndef HAVE_MEMCPY
#  define memcpy(d, s, n) bcopy ((s), (d), (n))
# endif
#if defined(FFI_DEBUG)
void ffi_stop_here(void);
void ffi_type_test( ffi_type *a, char *file, int line);
#define FFI_ASSERT(x) ((x) ? (void)0 : ffi_assert(#x, __FILE__,__LINE__))
#define FFI_ASSERT_AT(x, f, l) ((x) ? 0 : ffi_assert(#x, (f), (l)))
#define FFI_ASSERT_VALID_TYPE(x) ffi_type_test (x, __FILE__, __LINE__)
#define FFI_ASSERT(x)
#define FFI_ASSERT_AT(x, f, l)
#define FFI_ASSERT_VALID_TYPE(x)
#define ALIGN(v, a)  (((((size_t) (v))-1) | ((a)-1))+1)
ffi_status ffi_prep_cif_machdep(ffi_cif *cif);
typedef struct
extended_cif;
#if defined(__GNUC__)
typedef unsigned int UINT8  __attribute__((__mode__(__QI__)));
typedef signed int   SINT8  __attribute__((__mode__(__QI__)));
typedef unsigned int UINT16 __attribute__((__mode__(__HI__)));
typedef signed int   SINT16 __attribute__((__mode__(__HI__)));
typedef unsigned int UINT32 __attribute__((__mode__(__SI__)));
typedef signed int   SINT32 __attribute__((__mode__(__SI__)));
typedef unsigned int UINT64 __attribute__((__mode__(__DI__)));
typedef signed int   SINT64 __attribute__((__mode__(__DI__)));
#elif defined(_MSC_VER)
typedef unsigned __int8  UINT8;
typedef signed __int8    SINT8;
typedef unsigned __int16 UINT16;
typedef signed __int16   SINT16;
typedef unsigned __int32 UINT32;
typedef signed __int32   SINT32;
typedef unsigned __int64 UINT64;
typedef signed __int64   SINT64;
#error "Need typedefs here"
typedef float FLOAT32;
