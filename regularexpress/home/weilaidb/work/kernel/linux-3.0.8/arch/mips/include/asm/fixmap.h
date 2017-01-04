#define _ASM_FIXMAP_H
enum fixed_addresses ;
#define FIXADDR_TOP     ((unsigned long)(long)(int)0xff000000)
#if defined(CONFIG_CPU_TX39XX) || defined(CONFIG_CPU_TX49XX)
#define FIXADDR_TOP	((unsigned long)(long)(int)(0xff000000 - 0x20000))
#define FIXADDR_TOP	((unsigned long)(long)(int)0xfffe0000)
#define FIXADDR_SIZE	(__end_of_fixed_addresses << PAGE_SHIFT)
#define FIXADDR_START	(FIXADDR_TOP - FIXADDR_SIZE)
#define __fix_to_virt(x)	(FIXADDR_TOP - ((x) << PAGE_SHIFT))
#define __virt_to_fix(x)	((FIXADDR_TOP - ((x)&PAGE_MASK)) >> PAGE_SHIFT)
extern void __this_fixmap_does_not_exist(void);
static inline unsigned long fix_to_virt(const unsigned int idx)
static inline unsigned long virt_to_fix(const unsigned long vaddr)
#define kmap_get_fixmap_pte(vaddr)					\
pte_offset_kernel(pmd_offset(pud_offset(pgd_offset_k(vaddr), (vaddr)), (vaddr)), (vaddr))
extern void fixrange_init(unsigned long start, unsigned long end,
pgd_t *pgd_base);
