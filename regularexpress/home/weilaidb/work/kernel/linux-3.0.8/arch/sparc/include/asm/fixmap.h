#define _ASM_FIXMAP_H
enum fixed_addresses ;
extern void __set_fixmap (enum fixed_addresses idx,
unsigned long phys, pgprot_t flags);
#define set_fixmap(idx, phys) \
__set_fixmap(idx, phys, PAGE_KERNEL)
#define set_fixmap_nocache(idx, phys) \
__set_fixmap(idx, phys, PAGE_KERNEL_NOCACHE)
#define FIXADDR_TOP	(0xfcfff000UL)
#define FIXADDR_SIZE	((__end_of_fixed_addresses) << PAGE_SHIFT)
#define FIXADDR_START	(FIXADDR_TOP - FIXADDR_SIZE)
#define __fix_to_virt(x)	(FIXADDR_TOP - ((x) << PAGE_SHIFT))
#define __virt_to_fix(x)	((FIXADDR_TOP - ((x)&PAGE_MASK)) >> PAGE_SHIFT)
extern void __this_fixmap_does_not_exist(void);
static inline unsigned long fix_to_virt(const unsigned int idx)
static inline unsigned long virt_to_fix(const unsigned long vaddr)
