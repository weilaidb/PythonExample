#define _ASM_POWERPC_SECTIONS_H
extern char _end[];
static inline int in_kernel_text(unsigned long addr)
static inline int overlaps_kernel_text(unsigned long start, unsigned long end)
#undef dereference_function_descriptor
static inline void *dereference_function_descriptor(void *ptr)
