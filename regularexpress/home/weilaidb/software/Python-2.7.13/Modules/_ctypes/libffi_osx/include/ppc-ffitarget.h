#define LIBFFI_TARGET_H
#if (defined(POWERPC) && defined(__powerpc64__)) ||		\
(defined(POWERPC_DARWIN) && defined(__ppc64__))
#define POWERPC64
typedef unsigned long	ffi_arg;
typedef signed long		ffi_sarg;
typedef enum ffi_abi  ffi_abi;
#define FFI_CLOSURES 1
#define FFI_NATIVE_RAW_API 0
#define FFI_SYSV_TYPE_SMALL_STRUCT  (FFI_TYPE_LAST)
#if defined(POWERPC64)
#	define FFI_TRAMPOLINE_SIZE 48
#elif defined(POWERPC_AIX)
#	define FFI_TRAMPOLINE_SIZE 24
#	define FFI_TRAMPOLINE_SIZE 40
#	if defined(POWERPC_DARWIN) || defined(POWERPC_AIX)
typedef struct ffi_aix_trampoline_struct  ffi_aix_trampoline_struct;
#	endif
