#define LIBFFI_TARGET_H
#error
typedef uint_reg_t ffi_arg;
typedef int_reg_t  ffi_sarg;
typedef enum ffi_abi  ffi_abi;
#define FFI_CLOSURES 1
# define FFI_SIZEOF_ARG 8
# ifdef __LP64__
#  define FFI_TRAMPOLINE_SIZE (8 * 5)
# else
#  define FFI_TRAMPOLINE_SIZE (8 * 3)
# endif
# define FFI_SIZEOF_ARG 4
# define FFI_TRAMPOLINE_SIZE 8
#define FFI_NATIVE_RAW_API 0
