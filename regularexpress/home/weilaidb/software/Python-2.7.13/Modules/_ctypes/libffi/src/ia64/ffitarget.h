#define LIBFFI_TARGET_H
#error "Please do not include ffitarget.h directly into your source.  Use ffi.h instead."
typedef unsigned long long          ffi_arg;
typedef signed long long            ffi_sarg;
typedef enum ffi_abi  ffi_abi;
#define FFI_CLOSURES 1
#define FFI_TRAMPOLINE_SIZE 24
