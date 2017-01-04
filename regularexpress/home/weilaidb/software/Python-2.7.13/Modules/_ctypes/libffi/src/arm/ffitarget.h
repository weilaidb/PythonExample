#define LIBFFI_TARGET_H
#error "Please do not include ffitarget.h directly into your source.  Use ffi.h instead."
typedef unsigned long          ffi_arg;
typedef signed long            ffi_sarg;
typedef enum ffi_abi  ffi_abi;
#define FFI_EXTRA_CIF_FIELDS			\
int vfp_used;					\
short vfp_reg_free, vfp_nargs;		\
signed char vfp_args[16]			\
#define FFI_TYPE_STRUCT_VFP_FLOAT  (FFI_TYPE_LAST + 1)
#define FFI_TYPE_STRUCT_VFP_DOUBLE (FFI_TYPE_LAST + 2)
#define FFI_TARGET_SPECIFIC_VARIADIC
#define FFI_CLOSURES 1
#define FFI_TRAMPOLINE_SIZE 20
#define FFI_NATIVE_RAW_API 0
