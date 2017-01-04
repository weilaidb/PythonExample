#define _ASM_POWERPC_PGTABLE_H
struct mm_struct;
extern void assert_pte_locked(struct mm_struct *mm, unsigned long addr);
static inline void assert_pte_locked(struct mm_struct *mm, unsigned long addr)
#if defined(CONFIG_PPC64)
#  include <asm/pgtable-ppc64.h>
#  include <asm/pgtable-ppc32.h>
static inline int pte_write(pte_t pte)
static inline int pte_dirty(pte_t pte)
static inline int pte_young(pte_t pte)
static inline int pte_file(pte_t pte)
static inline int pte_special(pte_t pte)
static inline int pte_present(pte_t pte)
static inline int pte_none(pte_t pte)
static inline pgprot_t pte_pgprot(pte_t pte)
static inline pte_t pfn_pte(unsigned long pfn, pgprot_t pgprot)
static inline unsigned long pte_pfn(pte_t pte)
#define pte_page(x)		pfn_to_page(pte_pfn(x))
#define mk_pte(page, pgprot)	pfn_pte(page_to_pfn(page), (pgprot))
static inline pte_t pte_wrprotect(pte_t pte)
static inline pte_t pte_mkclean(pte_t pte)
static inline pte_t pte_mkold(pte_t pte)
static inline pte_t pte_mkwrite(pte_t pte)
static inline pte_t pte_mkdirty(pte_t pte)
static inline pte_t pte_mkyoung(pte_t pte)
static inline pte_t pte_mkspecial(pte_t pte)
static inline pte_t pte_mkhuge(pte_t pte)
static inline pte_t pte_modify(pte_t pte, pgprot_t newprot)
extern void set_pte_at(struct mm_struct *mm, unsigned long addr, pte_t *ptep,
pte_t pte);
static inline void __set_pte_at(struct mm_struct *mm, unsigned long addr,
pte_t *ptep, pte_t pte, int percpu)
#define __HAVE_ARCH_PTEP_SET_ACCESS_FLAGS
extern int ptep_set_access_flags(struct vm_area_struct *vma, unsigned long address,
pte_t *ptep, pte_t entry, int dirty);
#define _PAGE_CACHE_CTL	(_PAGE_COHERENT | _PAGE_GUARDED | _PAGE_NO_CACHE | \
_PAGE_WRITETHRU)
#define pgprot_noncached(prot)	  (__pgprot((pgprot_val(prot) & ~_PAGE_CACHE_CTL) | \
_PAGE_NO_CACHE | _PAGE_GUARDED))
#define pgprot_noncached_wc(prot) (__pgprot((pgprot_val(prot) & ~_PAGE_CACHE_CTL) | \
_PAGE_NO_CACHE))
#define pgprot_cached(prot)       (__pgprot((pgprot_val(prot) & ~_PAGE_CACHE_CTL) | \
_PAGE_COHERENT))
#define pgprot_cached_wthru(prot) (__pgprot((pgprot_val(prot) & ~_PAGE_CACHE_CTL) | \
_PAGE_COHERENT | _PAGE_WRITETHRU))
#define pgprot_writecombine pgprot_noncached_wc
struct file;
extern pgprot_t phys_mem_access_prot(struct file *file, unsigned long pfn,
unsigned long size, pgprot_t vma_prot);
#define __HAVE_PHYS_MEM_ACCESS_PROT
extern unsigned long empty_zero_page[];
#define ZERO_PAGE(vaddr) (virt_to_page(empty_zero_page))
extern pgd_t swapper_pg_dir[];
extern void paging_init(void);
#define kern_addr_valid(addr)	(1)
#define io_remap_pfn_range(vma, vaddr, pfn, size, prot)		\
remap_pfn_range(vma, vaddr, pfn, size, prot)
extern void update_mmu_cache(struct vm_area_struct *, unsigned long, pte_t *);
extern int gup_hugepd(hugepd_t *hugepd, unsigned pdshift, unsigned long addr,
unsigned long end, int write, struct page **pages, int *nr);
