#define _ASM_X86_PAGE_H
struct page;
static inline void clear_user_page(void *page, unsigned long vaddr,
struct page *pg)
static inline void copy_user_page(void *to, void *from, unsigned long vaddr,
struct page *topage)
#define __alloc_zeroed_user_highpage(movableflags, vma, vaddr) \
alloc_page_vma(GFP_HIGHUSER | __GFP_ZERO | movableflags, vma, vaddr)
#define __HAVE_ARCH_ALLOC_ZEROED_USER_HIGHPAGE
#define __pa(x)		__phys_addr((unsigned long)(x))
#define __pa_nodebug(x)	__phys_addr_nodebug((unsigned long)(x))
#define __pa_symbol(x)	__pa(__phys_reloc_hide((unsigned long)(x)))
#define __va(x)			((void *)((unsigned long)(x)+PAGE_OFFSET))
#define __boot_va(x)		__va(x)
#define __boot_pa(x)		__pa(x)
#define virt_to_page(kaddr)	pfn_to_page(__pa(kaddr) >> PAGE_SHIFT)
#define pfn_to_kaddr(pfn)      __va((pfn) << PAGE_SHIFT)
extern bool __virt_addr_valid(unsigned long kaddr);
#define virt_addr_valid(kaddr)	__virt_addr_valid((unsigned long) (kaddr))
#define __HAVE_ARCH_GATE_AREA 1
