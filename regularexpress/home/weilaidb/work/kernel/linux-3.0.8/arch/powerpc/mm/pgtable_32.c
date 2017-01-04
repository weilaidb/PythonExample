unsigned long ioremap_base;
unsigned long ioremap_bot;
EXPORT_SYMBOL(ioremap_bot);
#if defined(CONFIG_6xx) || defined(CONFIG_POWER3)
#define HAVE_BATS	1
#if defined(CONFIG_FSL_BOOKE)
#define HAVE_TLBCAM	1
extern char etext[], _stext[];
extern phys_addr_t v_mapped_by_bats(unsigned long va);
extern unsigned long p_mapped_by_bats(phys_addr_t pa);
void setbat(int index, unsigned long virt, phys_addr_t phys,
unsigned int size, int flags);
#define v_mapped_by_bats(x)	(0UL)
#define p_mapped_by_bats(x)	(0UL)
extern unsigned int tlbcam_index;
extern phys_addr_t v_mapped_by_tlbcam(unsigned long va);
extern unsigned long p_mapped_by_tlbcam(phys_addr_t pa);
#define v_mapped_by_tlbcam(x)	(0UL)
#define p_mapped_by_tlbcam(x)	(0UL)
#define PGDIR_ORDER	(32 + PGD_T_LOG2 - PGDIR_SHIFT)
pgd_t *pgd_alloc(struct mm_struct *mm)
void pgd_free(struct mm_struct *mm, pgd_t *pgd)
__init_refok pte_t *pte_alloc_one_kernel(struct mm_struct *mm, unsigned long address)
pgtable_t pte_alloc_one(struct mm_struct *mm, unsigned long address)
void __iomem *
ioremap(phys_addr_t addr, unsigned long size)
EXPORT_SYMBOL(ioremap);
void __iomem *
ioremap_wc(phys_addr_t addr, unsigned long size)
EXPORT_SYMBOL(ioremap_wc);
void __iomem *
ioremap_prot(phys_addr_t addr, unsigned long size, unsigned long flags)
EXPORT_SYMBOL(ioremap_prot);
void __iomem *
__ioremap(phys_addr_t addr, unsigned long size, unsigned long flags)
void __iomem *
__ioremap_caller(phys_addr_t addr, unsigned long size, unsigned long flags,
void *caller)
EXPORT_SYMBOL(__ioremap);
void iounmap(volatile void __iomem *addr)
EXPORT_SYMBOL(iounmap);
int map_page(unsigned long va, phys_addr_t pa, int flags)
void __init __mapin_ram_chunk(unsigned long offset, unsigned long top)
void __init mapin_ram(void)
int
get_pteptr(struct mm_struct *mm, unsigned long addr, pte_t **ptep, pmd_t **pmdp)
static int __change_page_attr(struct page *page, pgprot_t prot)
static int change_page_attr(struct page *page, int numpages, pgprot_t prot)
void kernel_map_pages(struct page *page, int numpages, int enable)
static int fixmaps;
void __set_fixmap (enum fixed_addresses idx, phys_addr_t phys, pgprot_t flags)
void __this_fixmap_does_not_exist(void)
