#define LIBFFI_TARGET_H
#error "Please do not include ffitarget.h directly into your source.  Use ffi.h instead."
typedef unsigned long          ffi_arg;
typedef signed long            ffi_sarg;
typedef enum ffi_abi  ffi_abi;
#define FFI_AGGREGATE_ALIGNMENT 4
#define FFI_CLOSURES 1
#define FFI_TRAMPOLINE_SIZE 28
#define FFI_NATIVE_RAW_API 0
