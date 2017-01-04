#define _ASM_FIXMAP_H
#define FIXADDR_START		0xfff00000UL
#define FIXADDR_TOP		0xfffe0000UL
#define FIXADDR_SIZE		(FIXADDR_TOP - FIXADDR_START)
#define FIX_KMAP_BEGIN		0
#define FIX_KMAP_END		(FIXADDR_SIZE >> PAGE_SHIFT)
#define __fix_to_virt(x)	(FIXADDR_START + ((x) << PAGE_SHIFT))
#define __virt_to_fix(x)	(((x) - FIXADDR_START) >> PAGE_SHIFT)
extern void __this_fixmap_does_not_exist(void);
static inline unsigned long fix_to_virt(const unsigned int idx)
static inline unsigned int virt_to_fix(const unsigned long vaddr)
