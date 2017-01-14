#define LIBFFI_TARGET_H
#error
typedef unsigned long          ffi_arg;
typedef signed long            ffi_sarg;
typedef enum ffi_abi  ffi_abi;
#define FFI_CLOSURES 1
#define FFI_CRIS_TRAMPOLINE_CODE_PART_SIZE 36
#define FFI_CRIS_TRAMPOLINE_DATA_PART_SIZE (7*4)
#define FFI_TRAMPOLINE_SIZE \
(FFI_CRIS_TRAMPOLINE_CODE_PART_SIZE + FFI_CRIS_TRAMPOLINE_DATA_PART_SIZE)
#define FFI_NATIVE_RAW_API 0
