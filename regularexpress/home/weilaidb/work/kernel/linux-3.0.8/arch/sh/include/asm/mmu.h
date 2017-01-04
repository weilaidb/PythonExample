#define __MMU_H
#define PMB_PASCR		0xff000070
#define PMB_IRMCR		0xff000078
#define PASCR_SE		0x80000000
#define PMB_ADDR		0xf6100000
#define PMB_DATA		0xf7100000
#define NR_PMB_ENTRIES		16
#define PMB_E_MASK		0x0000000f
#define PMB_E_SHIFT		8
#define PMB_PFN_MASK		0xff000000
#define PMB_SZ_16M		0x00000000
#define PMB_SZ_64M		0x00000010
#define PMB_SZ_128M		0x00000080
#define PMB_SZ_512M		0x00000090
#define PMB_SZ_MASK		PMB_SZ_512M
#define PMB_C			0x00000008
#define PMB_WT			0x00000001
#define PMB_UB			0x00000200
#define PMB_CACHE_MASK		(PMB_C | PMB_WT | PMB_UB)
#define PMB_V			0x00000100
#define PMB_NO_ENTRY		(-1)
typedef unsigned long mm_context_id_t[NR_CPUS];
typedef struct  mm_context_t;
bool __in_29bit_mode(void);
void pmb_init(void);
int pmb_bolt_mapping(unsigned long virt, phys_addr_t phys,
unsigned long size, pgprot_t prot);
void __iomem *pmb_remap_caller(phys_addr_t phys, unsigned long size,
pgprot_t prot, void *caller);
int pmb_unmap(void __iomem *addr);
static inline int
pmb_bolt_mapping(unsigned long virt, phys_addr_t phys,
unsigned long size, pgprot_t prot)
static inline void __iomem *
pmb_remap_caller(phys_addr_t phys, unsigned long size,
pgprot_t prot, void *caller)
static inline int pmb_unmap(void __iomem *addr)
#define pmb_init(addr)		do  while (0)
#define __in_29bit_mode()	(1)
#define __in_29bit_mode()	(0)
static inline void __iomem *
pmb_remap(phys_addr_t phys, unsigned long size, pgprot_t prot)
