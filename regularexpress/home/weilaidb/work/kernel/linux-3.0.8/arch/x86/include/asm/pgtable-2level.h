#define _ASM_X86_PGTABLE_2LEVEL_H
#define pte_ERROR(e) \
printk("%s:%d: bad pte %08lx.\n", __FILE__, __LINE__, (e).pte_low)
#define pgd_ERROR(e) \
printk("%s:%d: bad pgd %08lx.\n", __FILE__, __LINE__, pgd_val(e))
static inline void native_set_pte(pte_t *ptep , pte_t pte)
static inline void native_set_pmd(pmd_t *pmdp, pmd_t pmd)
static inline void native_set_pte_atomic(pte_t *ptep, pte_t pte)
static inline void native_pmd_clear(pmd_t *pmdp)
static inline void native_pte_clear(struct mm_struct *mm,
unsigned long addr, pte_t *xp)
static inline pte_t native_ptep_get_and_clear(pte_t *xp)
#define native_ptep_get_and_clear(xp) native_local_ptep_get_and_clear(xp)
static inline pmd_t native_pmdp_get_and_clear(pmd_t *xp)
#define native_pmdp_get_and_clear(xp) native_local_pmdp_get_and_clear(xp)
#define PTE_FILE_MAX_BITS	29
#define PTE_FILE_SHIFT1		(_PAGE_BIT_PRESENT + 1)
#if _PAGE_BIT_FILE < _PAGE_BIT_PROTNONE
#define PTE_FILE_SHIFT2		(_PAGE_BIT_FILE + 1)
#define PTE_FILE_SHIFT3		(_PAGE_BIT_PROTNONE + 1)
#define PTE_FILE_SHIFT2		(_PAGE_BIT_PROTNONE + 1)
#define PTE_FILE_SHIFT3		(_PAGE_BIT_FILE + 1)
#define PTE_FILE_BITS1		(PTE_FILE_SHIFT2 - PTE_FILE_SHIFT1 - 1)
#define PTE_FILE_BITS2		(PTE_FILE_SHIFT3 - PTE_FILE_SHIFT2 - 1)
#define pte_to_pgoff(pte)						\
((((pte).pte_low >> PTE_FILE_SHIFT1)				\
& ((1U << PTE_FILE_BITS1) - 1))				\
+ ((((pte).pte_low >> PTE_FILE_SHIFT2)				\
& ((1U << PTE_FILE_BITS2) - 1)) << PTE_FILE_BITS1)		\
+ (((pte).pte_low >> PTE_FILE_SHIFT3)				\
<< (PTE_FILE_BITS1 + PTE_FILE_BITS2)))
#define pgoff_to_pte(off)						\
((pte_t) )
#if _PAGE_BIT_FILE < _PAGE_BIT_PROTNONE
#define SWP_TYPE_BITS (_PAGE_BIT_FILE - _PAGE_BIT_PRESENT - 1)
#define SWP_OFFSET_SHIFT (_PAGE_BIT_PROTNONE + 1)
#define SWP_TYPE_BITS (_PAGE_BIT_PROTNONE - _PAGE_BIT_PRESENT - 1)
#define SWP_OFFSET_SHIFT (_PAGE_BIT_FILE + 1)
#define MAX_SWAPFILES_CHECK() BUILD_BUG_ON(MAX_SWAPFILES_SHIFT > SWP_TYPE_BITS)
#define __swp_type(x)			(((x).val >> (_PAGE_BIT_PRESENT + 1)) \
& ((1U << SWP_TYPE_BITS) - 1))
#define __swp_offset(x)			((x).val >> SWP_OFFSET_SHIFT)
#define __swp_entry(type, offset)	((swp_entry_t) )
#define __pte_to_swp_entry(pte)		((swp_entry_t) )
#define __swp_entry_to_pte(x)		((pte_t) )
