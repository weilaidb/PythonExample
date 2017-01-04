#define _ASM_X86_PAGE_32_DEFS_H
#define __PAGE_OFFSET		_AC(CONFIG_PAGE_OFFSET, UL)
#define THREAD_ORDER	1
#define THREAD_SIZE 	(PAGE_SIZE << THREAD_ORDER)
#define STACKFAULT_STACK 0
#define DOUBLEFAULT_STACK 1
#define NMI_STACK 0
#define DEBUG_STACK 0
#define MCE_STACK 0
#define N_EXCEPTION_STACKS 1
#define __PHYSICAL_MASK_SHIFT	44
#define __VIRTUAL_MASK_SHIFT	32
#define __PHYSICAL_MASK_SHIFT	32
#define __VIRTUAL_MASK_SHIFT	32
#define KERNEL_IMAGE_SIZE	(512 * 1024 * 1024)
extern unsigned int __VMALLOC_RESERVE;
extern int sysctl_legacy_va_layout;
extern void find_low_pfn_range(void);
extern void setup_bootmem_allocator(void);
