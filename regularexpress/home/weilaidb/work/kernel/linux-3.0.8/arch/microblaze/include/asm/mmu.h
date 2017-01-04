#define _ASM_MICROBLAZE_MMU_H
# ifndef CONFIG_MMU
#  include <asm-generic/mmu.h>
# else
#  ifdef __KERNEL__
#   ifndef __ASSEMBLY__
typedef unsigned long mm_context_t;
typedef struct _PTE  PTE;
#  define PP_RWXX	0
#  define PP_RWRX	1
#  define PP_RWRW	2
#  define PP_RXRX	3
typedef struct _SEGREG  SEGREG;
extern void _tlbie(unsigned long va);
extern void _tlbia(void);
#   endif
#  define MICROBLAZE_TLB_SIZE 64
#  define TLB_LO		1
#  define TLB_HI		0
#  define TLB_DATA		TLB_LO
#  define TLB_TAG		TLB_HI
#  define TLB_EPN_MASK		0xFFFFFC00
#  define TLB_PAGESZ_MASK	0x00000380
#  define TLB_PAGESZ(x)		(((x) & 0x7) << 7)
#  define PAGESZ_1K		0
#  define PAGESZ_4K		1
#  define PAGESZ_16K		2
#  define PAGESZ_64K		3
#  define PAGESZ_256K		4
#  define PAGESZ_1M		5
#  define PAGESZ_4M		6
#  define PAGESZ_16M		7
#  define TLB_VALID		0x00000040
#  define TLB_RPN_MASK		0xFFFFFC00
#  define TLB_PERM_MASK		0x00000300
#  define TLB_EX		0x00000200
#  define TLB_WR		0x00000100
#  define TLB_ZSEL_MASK		0x000000F0
#  define TLB_ZSEL(x)		(((x) & 0xF) << 4)
#  define TLB_ATTR_MASK		0x0000000F
#  define TLB_W			0x00000008
#  define TLB_I			0x00000004
#  define TLB_M			0x00000002
#  define TLB_G			0x00000001
#  endif
# endif
