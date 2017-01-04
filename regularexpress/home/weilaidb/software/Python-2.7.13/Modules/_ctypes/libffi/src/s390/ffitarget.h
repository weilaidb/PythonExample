#define LIBFFI_TARGET_H
#error "Please do not include ffitarget.h directly into your source.  Use ffi.h instead."
#if defined (__s390x__)
#define S390X
typedef unsigned long          ffi_arg;
typedef signed long            ffi_sarg;
typedef enum ffi_abi  ffi_abi;
#define FFI_CLOSURES 1
#define FFI_TRAMPOLINE_SIZE 32
#define FFI_TRAMPOLINE_SIZE 16
#define FFI_NATIVE_RAW_API 0
