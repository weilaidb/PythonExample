#define __EXTERN_INLINE inline
#undef __EXTERN_INLINE
#define MCHK_K_TPERR		0x0080
#define MCHK_K_TCPERR		0x0082
#define MCHK_K_HERR		0x0084
#define MCHK_K_ECC_C		0x0086
#define MCHK_K_ECC_NC		0x0088
#define MCHK_K_UNKNOWN		0x008A
#define MCHK_K_CACKSOFT		0x008C
#define MCHK_K_BUGCHECK		0x008E
#define MCHK_K_OS_BUGCHECK	0x0090
#define MCHK_K_DCPERR		0x0092
#define MCHK_K_ICPERR		0x0094
#define MCHK_K_SIO_SERR		0x204
#define MCHK_K_SIO_IOCHK	0x206
#define MCHK_K_DCSR		0x208
static int
mk_conf_addr(struct pci_bus *pbus, unsigned int device_fn, int where,
unsigned long *pci_addr)
static unsigned int
conf_read(unsigned long addr)
static void
conf_write(unsigned long addr, unsigned int value)
static int
lca_read_config(struct pci_bus *bus, unsigned int devfn, int where,
int size, u32 *value)
static int
lca_write_config(struct pci_bus *bus, unsigned int devfn, int where, int size,
u32 value)
struct pci_ops lca_pci_ops =
;
void
lca_pci_tbi(struct pci_controller *hose, dma_addr_t start, dma_addr_t end)
void __init
lca_init_arch(void)
#define ESR_EAV		(1UL<< 0)
#define ESR_CEE		(1UL<< 1)
#define ESR_UEE		(1UL<< 2)
#define ESR_WRE		(1UL<< 3)
#define ESR_SOR		(1UL<< 4)
#define ESR_CTE		(1UL<< 7)
#define ESR_MSE		(1UL<< 9)
#define ESR_MHE		(1UL<<10)
#define ESR_NXM		(1UL<<12)
#define IOC_ERR		(  1<<4)
#define IOC_CMD_SHIFT	0
#define IOC_CMD		(0xf<<IOC_CMD_SHIFT)
#define IOC_CODE_SHIFT	8
#define IOC_CODE	(0xf<<IOC_CODE_SHIFT)
#define IOC_LOST	(  1<<5)
#define IOC_P_NBR	((__u32) ~((1<<13) - 1))
static void
mem_error(unsigned long esr, unsigned long ear)
static void
ioc_error(__u32 stat0, __u32 stat1)
void
lca_machine_check(unsigned long vector, unsigned long la_ptr)
void
lca_clock_print(void)
int
lca_get_clock(void)
void
lca_clock_fiddle(int divisor)
