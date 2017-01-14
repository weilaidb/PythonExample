#define LIBFFI_TARGET_H
#error
typedef unsigned long ffi_arg;
typedef signed long ffi_sarg;
typedef enum ffi_abi
ffi_abi;
#define FFI_CLOSURES 1
#define FFI_TRAMPOLINE_SIZE 36
#define FFI_NATIVE_RAW_API 0
#if defined (__APPLE__)
#define FFI_TARGET_SPECIFIC_VARIADIC
#define FFI_EXTRA_CIF_FIELDS unsigned aarch64_flags; unsigned aarch64_nfixedargs
#define FFI_EXTRA_CIF_FIELDS unsigned aarch64_flags
#define AARCH64_FFI_WITH_V_BIT 0
#define AARCH64_N_XREG 32
#define AARCH64_N_VREG 32
#define AARCH64_CALL_CONTEXT_SIZE (AARCH64_N_XREG * 8 + AARCH64_N_VREG * 16)
