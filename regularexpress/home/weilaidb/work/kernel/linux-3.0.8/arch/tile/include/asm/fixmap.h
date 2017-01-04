#define _ASM_TILE_FIXMAP_H
#define __fix_to_virt(x)	(FIXADDR_TOP - ((x) << PAGE_SHIFT))
#define __virt_to_fix(x)	((FIXADDR_TOP - ((x)&PAGE_MASK)) >> PAGE_SHIFT)
enum fixed_addresses ;
extern void __set_fixmap(enum fixed_addresses idx,
unsigned long phys, pgprot_t flags);
#define set_fixmap(idx, phys) \
__set_fixmap(idx, phys, PAGE_KERNEL)
#define set_fixmap_nocache(idx, phys) \
__set_fixmap(idx, phys, PAGE_KERNEL_NOCACHE)
#define clear_fixmap(idx) \
__set_fixmap(idx, 0, __pgprot(0))
#define __FIXADDR_SIZE	(__end_of_permanent_fixed_addresses << PAGE_SHIFT)
#define __FIXADDR_BOOT_SIZE	(__end_of_fixed_addresses << PAGE_SHIFT)
#define FIXADDR_START		(FIXADDR_TOP + PAGE_SIZE - __FIXADDR_SIZE)
#define FIXADDR_BOOT_START	(FIXADDR_TOP + PAGE_SIZE - __FIXADDR_BOOT_SIZE)
extern void __this_fixmap_does_not_exist(void);
static __always_inline unsigned long fix_to_virt(const unsigned int idx)
static inline unsigned long virt_to_fix(const unsigned long vaddr)
