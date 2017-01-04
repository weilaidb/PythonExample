#define LIBFFI_TARGET_H
#error "Please do not include ffitarget.h directly into your source.  Use ffi.h instead."
#if defined (POWERPC) && defined (__powerpc64__)
#define POWERPC64
#elif defined (POWERPC_DARWIN) && defined (__ppc64__)
#define POWERPC64
#define POWERPC_DARWIN64
#elif defined (POWERPC_AIX) && defined (__64BIT__)
#define POWERPC64
typedef unsigned long          ffi_arg;
typedef signed long            ffi_sarg;
typedef enum ffi_abi  ffi_abi;
#define FFI_CLOSURES 1
#define FFI_NATIVE_RAW_API 0
#if defined (POWERPC) || defined (POWERPC_FREEBSD)
# define FFI_TARGET_SPECIFIC_VARIADIC 1
# define FFI_EXTRA_CIF_FIELDS unsigned nfixedargs
#define FFI_TYPE_UINT128 (FFI_TYPE_LAST + 1)
#define FFI_SYSV_TYPE_SMALL_STRUCT (FFI_TYPE_LAST + 2)
#define FFI_V2_TYPE_FLOAT_HOMOG		(FFI_TYPE_LAST + 1)
#define FFI_V2_TYPE_DOUBLE_HOMOG	(FFI_TYPE_LAST + 2)
#define FFI_V2_TYPE_SMALL_STRUCT	(FFI_TYPE_LAST + 3)
#if _CALL_ELF == 2
# define FFI_TRAMPOLINE_SIZE 32
# if defined(POWERPC64) || defined(POWERPC_AIX)
#  if defined(POWERPC_DARWIN64)
#    define FFI_TRAMPOLINE_SIZE 48
#  else
#    define FFI_TRAMPOLINE_SIZE 24
#  endif
# else
#  define FFI_TRAMPOLINE_SIZE 40
# endif
#if defined(POWERPC_DARWIN) || defined(POWERPC_AIX)
struct ffi_aix_trampoline_struct ;
