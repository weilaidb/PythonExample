#error "Please don't include <linux/compiler-gcc4.h> directly, include <linux/compiler.h> instead."
# if __GNUC_MINOR__ == 1 && __GNUC_PATCHLEVEL__ <= 1
#  error Your version of gcc miscompiles the __weak directive
# endif
#define __used			__attribute__((__used__))
#define __must_check 		__attribute__((warn_unused_result))
#define __compiler_offsetof(a,b) __builtin_offsetof(a,b)
#if __GNUC_MINOR__ >= 3
#define __cold			__attribute__((__cold__))
#if __GNUC_MINOR__ >= 5
#define unreachable() __builtin_unreachable()
#define __noclone	__attribute__((__noclone__))
#if __GNUC_MINOR__ > 0
#define __compiletime_object_size(obj) __builtin_object_size(obj, 0)
#if __GNUC_MINOR__ >= 4 && !defined(__CHECKER__)
#define __compiletime_warning(message) __attribute__((warning(message)))
#define __compiletime_error(message) __attribute__((error(message)))
