#define _ASM_X86_PAGE_32_H
#define HAVE_ARCH_HUGETLB_UNMAPPED_AREA
#define __phys_addr_nodebug(x)	((x) - PAGE_OFFSET)
extern unsigned long __phys_addr(unsigned long);
#define __phys_addr(x)		__phys_addr_nodebug(x)
#define __phys_reloc_hide(x)	RELOC_HIDE((x), 0)
#define pfn_valid(pfn)		((pfn) < max_mapnr)
static inline void clear_page(void *page)
static inline void copy_page(void *to, void *from)
static inline void clear_page(void *page)
static inline void copy_page(void *to, void *from)
