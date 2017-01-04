#define _ASM_SCORE_FIXMAP_H
#define PHY_RAM_BASE		0x00000000
#define PHY_IO_BASE		0x10000000
#define VIRTUAL_RAM_BASE	0xa0000000
#define VIRTUAL_IO_BASE		0xb0000000
#define RAM_SPACE_SIZE		0x10000000
#define IO_SPACE_SIZE		0x10000000
#define KSEG1			0xa0000000
enum fixed_addresses ;
#define FIXADDR_TOP	((unsigned long)(long)(int)0xfefe0000)
#define FIXADDR_SIZE	(__end_of_fixed_addresses << PAGE_SHIFT)
#define FIXADDR_START	(FIXADDR_TOP - FIXADDR_SIZE)
#define __fix_to_virt(x)	(FIXADDR_TOP - ((x) << PAGE_SHIFT))
#define __virt_to_fix(x)	\
((FIXADDR_TOP - ((x) & PAGE_MASK)) >> PAGE_SHIFT)
extern void __this_fixmap_does_not_exist(void);
static inline unsigned long fix_to_virt(const unsigned int idx)
static inline unsigned long virt_to_fix(const unsigned long vaddr)
