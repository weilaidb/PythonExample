#define _ASM_X86_FIXMAP_H
extern unsigned long __FIXADDR_TOP;
#define FIXADDR_TOP	((unsigned long)__FIXADDR_TOP)
#define FIXADDR_USER_START     __fix_to_virt(FIX_VDSO)
#define FIXADDR_USER_END       __fix_to_virt(FIX_VDSO - 1)
#define FIXADDR_TOP	(VSYSCALL_END-PAGE_SIZE)
#define FIXADDR_USER_START	((unsigned long)VSYSCALL32_VSYSCALL)
#define FIXADDR_USER_END	(FIXADDR_USER_START + PAGE_SIZE)
enum fixed_addresses ;
extern void reserve_top_address(unsigned long reserve);
#define FIXADDR_SIZE	(__end_of_permanent_fixed_addresses << PAGE_SHIFT)
#define FIXADDR_BOOT_SIZE	(__end_of_fixed_addresses << PAGE_SHIFT)
#define FIXADDR_START		(FIXADDR_TOP - FIXADDR_SIZE)
#define FIXADDR_BOOT_START	(FIXADDR_TOP - FIXADDR_BOOT_SIZE)
extern int fixmaps_set;
extern pte_t *kmap_pte;
extern pgprot_t kmap_prot;
extern pte_t *pkmap_page_table;
void __native_set_fixmap(enum fixed_addresses idx, pte_t pte);
void native_set_fixmap(enum fixed_addresses idx,
phys_addr_t phys, pgprot_t flags);
static inline void __set_fixmap(enum fixed_addresses idx,
phys_addr_t phys, pgprot_t flags)
#define set_fixmap(idx, phys)				\
__set_fixmap(idx, phys, PAGE_KERNEL)
#define set_fixmap_nocache(idx, phys)			\
__set_fixmap(idx, phys, PAGE_KERNEL_NOCACHE)
#define clear_fixmap(idx)			\
__set_fixmap(idx, 0, __pgprot(0))
#define __fix_to_virt(x)	(FIXADDR_TOP - ((x) << PAGE_SHIFT))
#define __virt_to_fix(x)	((FIXADDR_TOP - ((x)&PAGE_MASK)) >> PAGE_SHIFT)
extern void __this_fixmap_does_not_exist(void);
static __always_inline unsigned long fix_to_virt(const unsigned int idx)
static inline unsigned long virt_to_fix(const unsigned long vaddr)
static __always_inline unsigned long
__set_fixmap_offset(enum fixed_addresses idx, phys_addr_t phys, pgprot_t flags)
#define set_fixmap_offset(idx, phys)			\
__set_fixmap_offset(idx, phys, PAGE_KERNEL)
#define set_fixmap_offset_nocache(idx, phys)			\
__set_fixmap_offset(idx, phys, PAGE_KERNEL_NOCACHE)
