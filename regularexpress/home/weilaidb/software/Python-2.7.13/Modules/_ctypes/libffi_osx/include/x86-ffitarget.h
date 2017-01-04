#define LIBFFI_TARGET_H
#if defined(X86_64) && defined(__i386__)
#	undef X86_64
#	define X86
#if defined(__x86_64__)
#	ifndef X86_64
#		define X86_64
#	endif
typedef unsigned long	ffi_arg;
typedef signed long		ffi_sarg;
typedef enum ffi_abi  ffi_abi;
#define FFI_CLOSURES 1
#if defined(X86_64) || (defined(__x86_64__) && defined(X86_DARWIN))
#	define FFI_TRAMPOLINE_SIZE 24
#	define FFI_NATIVE_RAW_API 0
#	define FFI_TRAMPOLINE_SIZE 10
#	define FFI_NATIVE_RAW_API 1
