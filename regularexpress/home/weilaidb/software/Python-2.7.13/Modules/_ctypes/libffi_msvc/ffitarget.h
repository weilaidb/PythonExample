#define LIBFFI_TARGET_H
#if defined (X86_64) && defined (__i386__)
#undef X86_64
#define X86
typedef unsigned long          ffi_arg;
typedef unsigned __int64       ffi_arg;
typedef signed long            ffi_sarg;
typedef enum ffi_abi  ffi_abi;
#define FFI_CLOSURES 1
#define FFI_TRAMPOLINE_SIZE 29
#define FFI_NATIVE_RAW_API 0
#define FFI_TRAMPOLINE_SIZE 15
#define FFI_NATIVE_RAW_API 1
