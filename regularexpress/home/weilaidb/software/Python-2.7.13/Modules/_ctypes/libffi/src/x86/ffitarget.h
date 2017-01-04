#define LIBFFI_TARGET_H
#error "Please do not include ffitarget.h directly into your source.  Use ffi.h instead."
#define X86_ANY
#if defined (X86_64) && defined (__i386__)
#undef X86_64
#define X86
#define FFI_SIZEOF_ARG 8
#define USE_BUILTIN_FFS 0
typedef unsigned __int64       ffi_arg;
typedef __int64                ffi_sarg;
typedef unsigned long long     ffi_arg;
typedef long long              ffi_sarg;
#if defined __x86_64__ && defined __ILP32__
#define FFI_SIZEOF_ARG 8
#define FFI_SIZEOF_JAVA_RAW  4
typedef unsigned long long     ffi_arg;
typedef long long              ffi_sarg;
typedef unsigned long          ffi_arg;
typedef signed long            ffi_sarg;
typedef enum ffi_abi  ffi_abi;
#define FFI_CLOSURES 1
#define FFI_TYPE_SMALL_STRUCT_1B (FFI_TYPE_LAST + 1)
#define FFI_TYPE_SMALL_STRUCT_2B (FFI_TYPE_LAST + 2)
#define FFI_TYPE_SMALL_STRUCT_4B (FFI_TYPE_LAST + 3)
#define FFI_TYPE_MS_STRUCT       (FFI_TYPE_LAST + 4)
#if defined (X86_64) || (defined (__x86_64__) && defined (X86_DARWIN))
#define FFI_TRAMPOLINE_SIZE 24
#define FFI_NATIVE_RAW_API 0
#define FFI_TRAMPOLINE_SIZE 52
#define FFI_TRAMPOLINE_SIZE 29
#define FFI_NATIVE_RAW_API 0
#define FFI_NO_RAW_API 1
#define FFI_TRAMPOLINE_SIZE 10
#define FFI_NATIVE_RAW_API 1
