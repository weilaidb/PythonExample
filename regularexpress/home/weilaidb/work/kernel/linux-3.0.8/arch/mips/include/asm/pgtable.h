#define _ASM_PGTABLE_H
struct mm_struct;
struct vm_area_struct;
#define PAGE_NONE	__pgprot(_PAGE_PRESENT | _CACHE_CACHABLE_NONCOHERENT)
#define PAGE_SHARED	__pgprot(_PAGE_PRESENT | _PAGE_WRITE | (kernel_uses_smartmips_rixi ? 0 : _PAGE_READ) | \
_page_cachable_default)
#define PAGE_COPY	__pgprot(_PAGE_PRESENT | (kernel_uses_smartmips_rixi ? 0 : _PAGE_READ) | \
(kernel_uses_smartmips_rixi ?  _PAGE_NO_EXEC : 0) | _page_cachable_default)
#define PAGE_READONLY	__pgprot(_PAGE_PRESENT | (kernel_uses_smartmips_rixi ? 0 : _PAGE_READ) | \
_page_cachable_default)
#define PAGE_KERNEL	__pgprot(_PAGE_PRESENT | __READABLE | __WRITEABLE | \
_PAGE_GLOBAL | _page_cachable_default)
#define PAGE_USERIO	__pgprot(_PAGE_PRESENT | (kernel_uses_smartmips_rixi ? 0 : _PAGE_READ) | _PAGE_WRITE | \
_page_cachable_default)
#define PAGE_KERNEL_UNCACHED __pgprot(_PAGE_PRESENT | __READABLE | \
__WRITEABLE | _PAGE_GLOBAL | _CACHE_UNCACHED)
#define __P000 __pgprot(0)
#define __P001 __pgprot(0)
#define __P010 __pgprot(0)
#define __P011 __pgprot(0)
#define __P100 __pgprot(0)
#define __P101 __pgprot(0)
#define __P110 __pgprot(0)
#define __P111 __pgprot(0)
#define __S000 __pgprot(0)
#define __S001 __pgprot(0)
#define __S010 __pgprot(0)
#define __S011 __pgprot(0)
#define __S100 __pgprot(0)
#define __S101 __pgprot(0)
#define __S110 __pgprot(0)
#define __S111 __pgprot(0)
extern unsigned long _page_cachable_default;
extern unsigned long empty_zero_page;
extern unsigned long zero_page_mask;
#define ZERO_PAGE(vaddr) \
(virt_to_page((void *)(empty_zero_page + (((unsigned long)(vaddr)) & zero_page_mask))))
#define is_zero_pfn is_zero_pfn
static inline int is_zero_pfn(unsigned long pfn)
#define my_zero_pfn(addr)	page_to_pfn(ZERO_PAGE(addr))
extern void paging_init(void);
#define pmd_phys(pmd)		virt_to_phys((void *)pmd_val(pmd))
#define pmd_page(pmd)		(pfn_to_page(pmd_phys(pmd) >> PAGE_SHIFT))
#define pmd_page_vaddr(pmd)	pmd_val(pmd)
#if defined(CONFIG_64BIT_PHYS_ADDR) && defined(CONFIG_CPU_MIPS32)
#define pte_none(pte)		(!(((pte).pte_low | (pte).pte_high) & ~_PAGE_GLOBAL))
#define pte_present(pte)	((pte).pte_low & _PAGE_PRESENT)
static inline void set_pte(pte_t *ptep, pte_t pte)
#define set_pte_at(mm, addr, ptep, pteval) set_pte(ptep, pteval)
static inline void pte_clear(struct mm_struct *mm, unsigned long addr, pte_t *ptep)
#define pte_none(pte)		(!(pte_val(pte) & ~_PAGE_GLOBAL))
#define pte_present(pte)	(pte_val(pte) & _PAGE_PRESENT)
static inline void set_pte(pte_t *ptep, pte_t pteval)
#define set_pte_at(mm, addr, ptep, pteval) set_pte(ptep, pteval)
static inline void pte_clear(struct mm_struct *mm, unsigned long addr, pte_t *ptep)
#define set_pmd(pmdptr, pmdval) do  while(0)
#define set_pud(pudptr, pudval) do  while(0)
#define PGD_T_LOG2	(__builtin_ffs(sizeof(pgd_t)) - 1)
#define PMD_T_LOG2	(__builtin_ffs(sizeof(pmd_t)) - 1)
#define PTE_T_LOG2	(__builtin_ffs(sizeof(pte_t)) - 1)
extern pgd_t swapper_pg_dir[];
#if defined(CONFIG_64BIT_PHYS_ADDR) && defined(CONFIG_CPU_MIPS32)
static inline int pte_write(pte_t pte)
static inline int pte_dirty(pte_t pte)
static inline int pte_young(pte_t pte)
static inline int pte_file(pte_t pte)
static inline pte_t pte_wrprotect(pte_t pte)
static inline pte_t pte_mkclean(pte_t pte)
static inline pte_t pte_mkold(pte_t pte)
static inline pte_t pte_mkwrite(pte_t pte)
static inline pte_t pte_mkdirty(pte_t pte)
static inline pte_t pte_mkyoung(pte_t pte)
static inline int pte_write(pte_t pte)
static inline int pte_dirty(pte_t pte)
static inline int pte_young(pte_t pte)
static inline int pte_file(pte_t pte)
static inline pte_t pte_wrprotect(pte_t pte)
static inline pte_t pte_mkclean(pte_t pte)
static inline pte_t pte_mkold(pte_t pte)
static inline pte_t pte_mkwrite(pte_t pte)
static inline pte_t pte_mkdirty(pte_t pte)
static inline pte_t pte_mkyoung(pte_t pte)
static inline int pte_huge(pte_t pte)
static inline pte_t pte_mkhuge(pte_t pte)
static inline int pte_special(pte_t pte)
static inline pte_t pte_mkspecial(pte_t pte)
#define pgprot_noncached pgprot_noncached
static inline pgprot_t pgprot_noncached(pgprot_t _prot)
#define mk_pte(page, pgprot)	pfn_pte(page_to_pfn(page), (pgprot))
#if defined(CONFIG_64BIT_PHYS_ADDR) && defined(CONFIG_CPU_MIPS32)
static inline pte_t pte_modify(pte_t pte, pgprot_t newprot)
static inline pte_t pte_modify(pte_t pte, pgprot_t newprot)
extern void __update_tlb(struct vm_area_struct *vma, unsigned long address,
pte_t pte);
extern void __update_cache(struct vm_area_struct *vma, unsigned long address,
pte_t pte);
static inline void update_mmu_cache(struct vm_area_struct *vma,
unsigned long address, pte_t *ptep)
#define kern_addr_valid(addr)	(1)
extern int remap_pfn_range(struct vm_area_struct *vma, unsigned long from, unsigned long pfn, unsigned long size, pgprot_t prot);
static inline int io_remap_pfn_range(struct vm_area_struct *vma,
unsigned long vaddr,
unsigned long pfn,
unsigned long size,
pgprot_t prot)
#define io_remap_pfn_range(vma, vaddr, pfn, size, prot)		\
remap_pfn_range(vma, vaddr, pfn, size, prot)
#define __HAVE_PHYS_MEM_ACCESS_PROT
struct file;
pgprot_t phys_mem_access_prot(struct file *file, unsigned long pfn,
unsigned long size, pgprot_t vma_prot);
int phys_mem_access_prot_allowed(struct file *file, unsigned long pfn,
unsigned long size, pgprot_t *vma_prot);
#define HAVE_ARCH_UNMAPPED_AREA
#define pgtable_cache_init()	do  while (0)
