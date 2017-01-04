#define _ASM_CRIS_ARCH_PAGE_H
#define PAGE_OFFSET KSEG_C
#define __pa(x) ((unsigned long)(x) & 0x7fffffff)
#define __va(x) ((void *)((unsigned long)(x) | 0x80000000))
#define __pa(x) ((unsigned long)(x) & 0x3fffffff)
#define __va(x) ((void *)((unsigned long)(x) | 0xc0000000))
#define VM_STACK_DEFAULT_FLAGS	(VM_READ | VM_WRITE | \
VM_MAYREAD | VM_MAYWRITE)
