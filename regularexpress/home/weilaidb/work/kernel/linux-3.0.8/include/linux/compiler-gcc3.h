#error "Please don't include <linux/compiler-gcc3.h> directly, include <linux/compiler.h> instead."
#if __GNUC_MINOR__ < 2
# error Sorry, your compiler is too old - please upgrade it.
#if __GNUC_MINOR__ >= 3
# define __used			__attribute__((__used__))
# define __used			__attribute__((__unused__))
#if __GNUC_MINOR__ >= 4
#define __must_check		__attribute__((warn_unused_result))
# if __GNUC_MINOR__ < 4
#   error "GCOV profiling support for gcc versions below 3.4 not included"
# endif
