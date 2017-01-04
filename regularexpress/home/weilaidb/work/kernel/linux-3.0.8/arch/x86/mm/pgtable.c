#define PGALLOC_GFP GFP_KERNEL | __GFP_NOTRACK | __GFP_REPEAT | __GFP_ZERO
#define PGALLOC_USER_GFP __GFP_HIGHMEM
#define PGALLOC_USER_GFP 0
gfp_t __userpte_alloc_gfp = PGALLOC_GFP | PGALLOC_USER_GFP;
pte_t *pte_alloc_one_kernel(struct mm_struct *mm, unsigned long address)
pgtable_t pte_alloc_one(struct mm_struct *mm, unsigned long address)
static int __init setup_userpte(char *arg)
early_param("userpte", setup_userpte);
void ___pte_free_tlb(struct mmu_gather *tlb, struct page *pte)
#if PAGETABLE_LEVELS > 2
void ___pmd_free_tlb(struct mmu_gather *tlb, pmd_t *pmd)
#if PAGETABLE_LEVELS > 3
void ___pud_free_tlb(struct mmu_gather *tlb, pud_t *pud)
static inline void pgd_list_add(pgd_t *pgd)
static inline void pgd_list_del(pgd_t *pgd)
#define UNSHARED_PTRS_PER_PGD				\
(SHARED_KERNEL_PMD ? KERNEL_PGD_BOUNDARY : PTRS_PER_PGD)
static void pgd_set_mm(pgd_t *pgd, struct mm_struct *mm)
struct mm_struct *pgd_page_get_mm(struct page *page)
static void pgd_ctor(struct mm_struct *mm, pgd_t *pgd)
static void pgd_dtor(pgd_t *pgd)
#define PREALLOCATED_PMDS	UNSHARED_PTRS_PER_PGD
void pud_populate(struct mm_struct *mm, pud_t *pudp, pmd_t *pmd)
#define PREALLOCATED_PMDS	0
static void free_pmds(pmd_t *pmds[])
static int preallocate_pmds(pmd_t *pmds[])
static void pgd_mop_up_pmds(struct mm_struct *mm, pgd_t *pgdp)
static void pgd_prepopulate_pmd(struct mm_struct *mm, pgd_t *pgd, pmd_t *pmds[])
pgd_t *pgd_alloc(struct mm_struct *mm)
void pgd_free(struct mm_struct *mm, pgd_t *pgd)
int ptep_set_access_flags(struct vm_area_struct *vma,
unsigned long address, pte_t *ptep,
pte_t entry, int dirty)
int pmdp_set_access_flags(struct vm_area_struct *vma,
unsigned long address, pmd_t *pmdp,
pmd_t entry, int dirty)
int ptep_test_and_clear_young(struct vm_area_struct *vma,
unsigned long addr, pte_t *ptep)
int pmdp_test_and_clear_young(struct vm_area_struct *vma,
unsigned long addr, pmd_t *pmdp)
int ptep_clear_flush_young(struct vm_area_struct *vma,
unsigned long address, pte_t *ptep)
int pmdp_clear_flush_young(struct vm_area_struct *vma,
unsigned long address, pmd_t *pmdp)
void pmdp_splitting_flush(struct vm_area_struct *vma,
unsigned long address, pmd_t *pmdp)
void __init reserve_top_address(unsigned long reserve)
int fixmaps_set;
void __native_set_fixmap(enum fixed_addresses idx, pte_t pte)
void native_set_fixmap(enum fixed_addresses idx, phys_addr_t phys,
pgprot_t flags)
