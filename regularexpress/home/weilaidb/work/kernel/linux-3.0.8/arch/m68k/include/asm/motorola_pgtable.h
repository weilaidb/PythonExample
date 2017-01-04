#define _MOTOROLA_PGTABLE_H
#define _PAGE_PRESENT	0x001
#define _PAGE_SHORT	0x002
#define _PAGE_RONLY	0x004
#define _PAGE_ACCESSED	0x008
#define _PAGE_DIRTY	0x010
#define _PAGE_SUPER	0x080
#define _PAGE_GLOBAL040	0x400
#define _PAGE_NOCACHE030 0x040
#define _PAGE_NOCACHE	0x060
#define _PAGE_NOCACHE_S	0x040
#define _PAGE_CACHE040	0x020
#define _PAGE_CACHE040W	0x000
#define _DESCTYPE_MASK	0x003
#define _CACHEMASK040	(~0x060)
#define _TABLE_MASK	(0xfffffe00)
#define _PAGE_TABLE	(_PAGE_SHORT)
#define _PAGE_CHG_MASK  (PAGE_MASK | _PAGE_ACCESSED | _PAGE_DIRTY | _PAGE_NOCACHE)
#define _PAGE_PROTNONE	0x004
#define _PAGE_FILE	0x008
extern int m68k_pgtable_cachemode;
#if defined(CPU_M68060_ONLY) && defined(CONFIG_060_WRITETHROUGH)
#define m68k_supervisor_cachemode _PAGE_CACHE040W
#elif defined(CPU_M68040_OR_M68060_ONLY)
#define m68k_supervisor_cachemode _PAGE_CACHE040
#elif defined(CPU_M68020_OR_M68030_ONLY)
#define m68k_supervisor_cachemode 0
extern int m68k_supervisor_cachemode;
#if defined(CPU_M68040_OR_M68060_ONLY)
#define mm_cachebits _PAGE_CACHE040
#elif defined(CPU_M68020_OR_M68030_ONLY)
#define mm_cachebits 0
extern unsigned long mm_cachebits;
#define PAGE_NONE	__pgprot(_PAGE_PROTNONE | _PAGE_ACCESSED | mm_cachebits)
#define PAGE_SHARED	__pgprot(_PAGE_PRESENT | _PAGE_ACCESSED | mm_cachebits)
#define PAGE_COPY	__pgprot(_PAGE_PRESENT | _PAGE_RONLY | _PAGE_ACCESSED | mm_cachebits)
#define PAGE_READONLY	__pgprot(_PAGE_PRESENT | _PAGE_RONLY | _PAGE_ACCESSED | mm_cachebits)
#define PAGE_KERNEL	__pgprot(_PAGE_PRESENT | _PAGE_DIRTY | _PAGE_ACCESSED | mm_cachebits)
#define PAGE_NONE_C	__pgprot(_PAGE_PROTNONE | _PAGE_ACCESSED)
#define PAGE_SHARED_C	__pgprot(_PAGE_PRESENT | _PAGE_ACCESSED)
#define PAGE_COPY_C	__pgprot(_PAGE_PRESENT | _PAGE_RONLY | _PAGE_ACCESSED)
#define PAGE_READONLY_C	__pgprot(_PAGE_PRESENT | _PAGE_RONLY | _PAGE_ACCESSED)
#define __P000	PAGE_NONE_C
#define __P001	PAGE_READONLY_C
#define __P010	PAGE_COPY_C
#define __P011	PAGE_COPY_C
#define __P100	PAGE_READONLY_C
#define __P101	PAGE_READONLY_C
#define __P110	PAGE_COPY_C
#define __P111	PAGE_COPY_C
#define __S000	PAGE_NONE_C
#define __S001	PAGE_READONLY_C
#define __S010	PAGE_SHARED_C
#define __S011	PAGE_SHARED_C
#define __S100	PAGE_READONLY_C
#define __S101	PAGE_READONLY_C
#define __S110	PAGE_SHARED_C
#define __S111	PAGE_SHARED_C
#define mk_pte(page, pgprot) pfn_pte(page_to_pfn(page), (pgprot))
static inline pte_t pte_modify(pte_t pte, pgprot_t newprot)
static inline void pmd_set(pmd_t *pmdp, pte_t *ptep)
static inline void pgd_set(pgd_t *pgdp, pmd_t *pmdp)
#define __pte_page(pte) ((unsigned long)__va(pte_val(pte) & PAGE_MASK))
#define __pmd_page(pmd) ((unsigned long)__va(pmd_val(pmd) & _TABLE_MASK))
#define __pgd_page(pgd) ((unsigned long)__va(pgd_val(pgd) & _TABLE_MASK))
#define pte_none(pte)		(!pte_val(pte))
#define pte_present(pte)	(pte_val(pte) & (_PAGE_PRESENT | _PAGE_PROTNONE))
#define pte_clear(mm,addr,ptep)		()
#define pte_page(pte)		virt_to_page(__va(pte_val(pte)))
#define pte_pfn(pte)		(pte_val(pte) >> PAGE_SHIFT)
#define pfn_pte(pfn, prot)	__pte(((pfn) << PAGE_SHIFT) | pgprot_val(prot))
#define pmd_none(pmd)		(!pmd_val(pmd))
#define pmd_bad(pmd)		((pmd_val(pmd) & _DESCTYPE_MASK) != _PAGE_TABLE)
#define pmd_present(pmd)	(pmd_val(pmd) & _PAGE_TABLE)
#define pmd_clear(pmdp) ()
#define pmd_page(pmd)		virt_to_page(__va(pmd_val(pmd)))
#define pgd_none(pgd)		(!pgd_val(pgd))
#define pgd_bad(pgd)		((pgd_val(pgd) & _DESCTYPE_MASK) != _PAGE_TABLE)
#define pgd_present(pgd)	(pgd_val(pgd) & _PAGE_TABLE)
#define pgd_clear(pgdp)		()
#define pgd_page(pgd)		(mem_map + ((unsigned long)(__va(pgd_val(pgd)) - PAGE_OFFSET) >> PAGE_SHIFT))
#define pte_ERROR(e) \
printk("%s:%d: bad pte %08lx.\n", __FILE__, __LINE__, pte_val(e))
#define pmd_ERROR(e) \
printk("%s:%d: bad pmd %08lx.\n", __FILE__, __LINE__, pmd_val(e))
#define pgd_ERROR(e) \
printk("%s:%d: bad pgd %08lx.\n", __FILE__, __LINE__, pgd_val(e))
static inline int pte_write(pte_t pte)
static inline int pte_dirty(pte_t pte)
static inline int pte_young(pte_t pte)
static inline int pte_file(pte_t pte)
static inline int pte_special(pte_t pte)
static inline pte_t pte_wrprotect(pte_t pte)
static inline pte_t pte_mkclean(pte_t pte)
static inline pte_t pte_mkold(pte_t pte)
static inline pte_t pte_mkwrite(pte_t pte)
static inline pte_t pte_mkdirty(pte_t pte)
static inline pte_t pte_mkyoung(pte_t pte)
static inline pte_t pte_mknocache(pte_t pte)
static inline pte_t pte_mkcache(pte_t pte)
static inline pte_t pte_mkspecial(pte_t pte)
#define PAGE_DIR_OFFSET(tsk,address) pgd_offset((tsk),(address))
#define pgd_index(address)     ((address) >> PGDIR_SHIFT)
static inline pgd_t *pgd_offset(const struct mm_struct *mm,
unsigned long address)
#define swapper_pg_dir kernel_pg_dir
extern pgd_t kernel_pg_dir[128];
static inline pgd_t *pgd_offset_k(unsigned long address)
static inline pmd_t *pmd_offset(pgd_t *dir, unsigned long address)
static inline pte_t *pte_offset_kernel(pmd_t *pmdp, unsigned long address)
#define pte_offset_map(pmdp,address) ((pte_t *)__pmd_page(*pmdp) + (((address) >> PAGE_SHIFT) & (PTRS_PER_PTE - 1)))
#define pte_unmap(pte)		((void)0)
static inline void nocache_page(void *vaddr)
static inline void cache_page(void *vaddr)
#define PTE_FILE_MAX_BITS	28
static inline unsigned long pte_to_pgoff(pte_t pte)
static inline pte_t pgoff_to_pte(unsigned off)
#define __swp_type(x)		(((x).val >> 4) & 0xff)
#define __swp_offset(x)		((x).val >> 12)
#define __swp_entry(type, offset) ((swp_entry_t) )
#define __pte_to_swp_entry(pte)	((swp_entry_t) )
#define __swp_entry_to_pte(x)	((pte_t) )
