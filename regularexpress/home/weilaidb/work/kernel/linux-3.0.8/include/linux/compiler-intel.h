#error "Please don't include <linux/compiler-intel.h> directly, include <linux/compiler.h> instead."
#undef barrier
#undef RELOC_HIDE
#define barrier() __memory_barrier()
#define RELOC_HIDE(ptr, off)					\
()
#define __must_be_array(a) 0
#define uninitialized_var(x) x
