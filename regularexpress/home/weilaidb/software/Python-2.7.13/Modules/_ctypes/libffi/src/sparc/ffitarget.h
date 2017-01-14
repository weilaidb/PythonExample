#define LIBFFI_TARGET_H
#error
#if defined(__arch64__) || defined(__sparcv9)
#define SPARC64
typedef unsigned long          ffi_arg;
typedef signed long            ffi_sarg;
typedef enum ffi_abi  ffi_abi;
#define FFI_CLOSURES 1
#define FFI_NATIVE_RAW_API 0
#define FFI_TRAMPOLINE_SIZE 24
#define FFI_TRAMPOLINE_SIZE 16
