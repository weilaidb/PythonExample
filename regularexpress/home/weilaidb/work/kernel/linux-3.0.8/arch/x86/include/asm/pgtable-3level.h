#define _ASM_X86_PGTABLE_3LEVEL_H
#define pte_ERROR(e)							\
printk("%s:%d: bad pte %p(%08lx%08lx).\n",			\
__FILE__, __LINE__, &(e), (e).pte_high, (e).pte_low)
#define pmd_ERROR(e)							\
printk("%s:%d: bad pmd %p(%016Lx).\n",				\
__FILE__, __LINE__, &(e), pmd_val(e))
#define pgd_ERROR(e)							\
printk("%s:%d: bad pgd %p(%016Lx).\n",				\
__FILE__, __LINE__, &(e), pgd_val(e))
static inline void native_set_pte(pte_t *ptep, pte_t pte)
static inline void native_set_pte_atomic(pte_t *ptep, pte_t pte)
static inline void native_set_pmd(pmd_t *pmdp, pmd_t pmd)
static inline void native_set_pud(pud_t *pudp, pud_t pud)
static inline void native_pte_clear(struct mm_struct *mm, unsigned long addr,
pte_t *ptep)
static inline void native_pmd_clear(pmd_t *pmd)
static inline void pud_clear(pud_t *pudp)
static inline pte_t native_ptep_get_and_clear(pte_t *ptep)
#define native_ptep_get_and_clear(xp) native_local_ptep_get_and_clear(xp)
union split_pmd ;
static inline pmd_t native_pmdp_get_and_clear(pmd_t *pmdp)
#define native_pmdp_get_and_clear(xp) native_local_pmdp_get_and_clear(xp)
#define pte_to_pgoff(pte) ((pte).pte_high)
#define pgoff_to_pte(off)						\
((pte_t) )
#define PTE_FILE_MAX_BITS       32
#define MAX_SWAPFILES_CHECK() BUILD_BUG_ON(MAX_SWAPFILES_SHIFT > 5)
#define __swp_type(x)			(((x).val) & 0x1f)
#define __swp_offset(x)			((x).val >> 5)
#define __swp_entry(type, offset)	((swp_entry_t))
#define __pte_to_swp_entry(pte)		((swp_entry_t))
#define __swp_entry_to_pte(x)		((pte_t))
