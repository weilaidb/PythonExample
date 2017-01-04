#define PGALLOC_GFP GFP_KERNEL | __GFP_REPEAT | __GFP_ZERO
static struct kmem_cache *pgd_cachep;
#if PAGETABLE_LEVELS > 2
static struct kmem_cache *pmd_cachep;
void pgd_ctor(void *x)
void pgtable_cache_init(void)
pgd_t *pgd_alloc(struct mm_struct *mm)
void pgd_free(struct mm_struct *mm, pgd_t *pgd)
#if PAGETABLE_LEVELS > 2
void pud_populate(struct mm_struct *mm, pud_t *pud, pmd_t *pmd)
pmd_t *pmd_alloc_one(struct mm_struct *mm, unsigned long address)
void pmd_free(struct mm_struct *mm, pmd_t *pmd)
