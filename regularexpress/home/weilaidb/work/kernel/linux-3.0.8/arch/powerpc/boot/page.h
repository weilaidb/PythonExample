#define _PPC_BOOT_PAGE_H
#define ASM_CONST(x) x
#define __ASM_CONST(x) x##UL
#define ASM_CONST(x) __ASM_CONST(x)
#define PAGE_SHIFT	12
#define PAGE_SIZE	(ASM_CONST(1) << PAGE_SHIFT)
#define PAGE_MASK	(~(PAGE_SIZE-1))
#define _ALIGN_UP(addr,size)	(((addr)+((size)-1))&(~((size)-1)))
#define _ALIGN_DOWN(addr,size)	((addr)&(~((size)-1)))
#define _ALIGN(addr,size)     _ALIGN_UP(addr,size)
#define PAGE_ALIGN(addr)	_ALIGN(addr, PAGE_SIZE)
