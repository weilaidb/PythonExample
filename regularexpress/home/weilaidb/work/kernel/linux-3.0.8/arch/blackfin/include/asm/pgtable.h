#define _BLACKFIN_PGTABLE_H
typedef pte_t *pte_addr_t;
#define pgd_present(pgd)	(1)
#define pgd_none(pgd)		(0)
#define pgd_bad(pgd)		(0)
#define pgd_clear(pgdp)
#define kern_addr_valid(addr)	(1)
#define pmd_offset(a, b)	((void *)0)
#define pmd_none(x)		(!pmd_val(x))
#define pmd_present(x)		(pmd_val(x))
#define pmd_clear(xp)		do  while (0)
#define pmd_bad(x)		(pmd_val(x) & ~PAGE_MASK)
#define kern_addr_valid(addr) (1)
#define PAGE_NONE		__pgprot(0)
#define PAGE_SHARED		__pgprot(0)
#define PAGE_COPY		__pgprot(0)
#define PAGE_READONLY		__pgprot(0)
#define PAGE_KERNEL		__pgprot(0)
#define pgprot_noncached(prot)	(prot)
extern void paging_init(void);
#define __swp_type(x)		(0)
#define __swp_offset(x)		(0)
#define __swp_entry(typ,off)	((swp_entry_t) )
#define __pte_to_swp_entry(pte)	((swp_entry_t) )
#define __swp_entry_to_pte(x)	((pte_t) )
static inline int pte_file(pte_t pte)
#define set_pte(pteptr, pteval) (*(pteptr) = pteval)
#define set_pte_at(mm, addr, ptep, pteval) set_pte(ptep, pteval)
#define _PAGE_RD	(CPLB_USER_RD)
#define _PAGE_WR	(CPLB_USER_WR)
#define _PAGE_USER	(CPLB_USER_RD | CPLB_USER_WR)
#define _PAGE_ACCESSED	CPLB_ALL_ACCESS
#define _PAGE_DIRTY	(CPLB_DIRTY)
#define PTE_BIT_FUNC(fn, op) \
static inline pte_t pte_##fn(pte_t _pte)
PTE_BIT_FUNC(rdprotect, &= ~_PAGE_RD);
PTE_BIT_FUNC(mkread, |= _PAGE_RD);
PTE_BIT_FUNC(wrprotect, &= ~_PAGE_WR);
PTE_BIT_FUNC(mkwrite, |= _PAGE_WR);
PTE_BIT_FUNC(exprotect, &= ~_PAGE_USER);
PTE_BIT_FUNC(mkexec, |= _PAGE_USER);
PTE_BIT_FUNC(mkclean, &= ~_PAGE_DIRTY);
PTE_BIT_FUNC(mkdirty, |= _PAGE_DIRTY);
PTE_BIT_FUNC(mkold, &= ~_PAGE_ACCESSED);
PTE_BIT_FUNC(mkyoung, |= _PAGE_ACCESSED);
#define ZERO_PAGE(vaddr)	virt_to_page(empty_zero_page)
extern char empty_zero_page[];
extern unsigned int kobjsize(const void *objp);
#define swapper_pg_dir ((pgd_t *) 0)
#define pgtable_cache_init()	do  while (0)
#define io_remap_pfn_range      remap_pfn_range
#define	VMALLOC_START	0
#define	VMALLOC_END	0xffffffff
extern unsigned long get_fb_unmapped_area(struct file *filp, unsigned long,
unsigned long, unsigned long,
unsigned long);
#define HAVE_ARCH_FB_UNMAPPED_AREA
