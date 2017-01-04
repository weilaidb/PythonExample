static void inline
tioce_mmr_war_pre(struct tioce_kernel *kern, void __iomem *mmr_addr)
static void inline
tioce_mmr_war_post(struct tioce_kernel *kern, void __iomem *mmr_addr)
#define tioce_mmr_load(kern, mmrp, varp) do  while (0)
#define tioce_mmr_store(kern, mmrp, varp) do  while (0)
#define tioce_mmr_storei(kern, mmrp, val) do  while (0)
#define tioce_mmr_seti(kern, mmrp, bits) do  while (0)
#define tioce_mmr_clri(kern, mmrp, bits) do  while (0)
#define TIOCE_D64_MIN	0x8000000000000000UL
#define TIOCE_D64_MAX	0xffffffffffffffffUL
#define TIOCE_D64_ADDR(a)	((a) >= TIOCE_D64_MIN)
#define TIOCE_D32_MIN	0x0000000080000000UL
#define TIOCE_D32_MAX	0x00000000ffffffffUL
#define TIOCE_D32_ADDR(a)	((a) >= TIOCE_D32_MIN && (a) <= TIOCE_D32_MAX)
#define TIOCE_M32_MIN	0x0000000000000000UL
#define TIOCE_M32_MAX	0x000000007fffffffUL
#define TIOCE_M32_ADDR(a)	((a) >= TIOCE_M32_MIN && (a) <= TIOCE_M32_MAX)
#define TIOCE_M40_MIN	0x0000004000000000UL
#define TIOCE_M40_MAX	0x0000007fffffffffUL
#define TIOCE_M40_ADDR(a)	((a) >= TIOCE_M40_MIN && (a) <= TIOCE_M40_MAX)
#define TIOCE_M40S_MIN	0x0000008000000000UL
#define TIOCE_M40S_MAX	0x000000ffffffffffUL
#define TIOCE_M40S_ADDR(a)	((a) >= TIOCE_M40S_MIN && (a) <= TIOCE_M40S_MAX)
#define ATE_PAGESHIFT(ps)	(__ffs(ps))
#define ATE_PAGEMASK(ps)	((ps)-1)
#define ATE_PAGE(x, ps) ((x) >> ATE_PAGESHIFT(ps))
#define ATE_NPAGES(start, len, pagesize) \
(ATE_PAGE((start)+(len)-1, pagesize) - ATE_PAGE(start, pagesize) + 1)
#define ATE_VALID(ate)	((ate) & (1UL << 63))
#define ATE_MAKE(addr, ps, msi) \
(((addr) & ~ATE_PAGEMASK(ps)) | (1UL << 63) | ((msi)?(1UL << 62):0))
#define TIOCE_ATE_M32	1
#define TIOCE_ATE_M40	2
#define TIOCE_ATE_M40S	3
#define KB(x)	((u64)(x) << 10)
#define MB(x)	((u64)(x) << 20)
#define GB(x)	((u64)(x) << 30)
static u64
tioce_dma_d64(unsigned long ct_addr, int dma_flags)
static inline void
pcidev_to_tioce(struct pci_dev *pdev, struct tioce __iomem **base,
struct tioce_kernel **kernel, int *port)
static u64
tioce_alloc_map(struct tioce_kernel *ce_kern, int type, int port,
u64 ct_addr, int len, int dma_flags)
static u64
tioce_dma_d32(struct pci_dev *pdev, u64 ct_addr, int dma_flags)
static u64
tioce_dma_barrier(u64 bus_addr, int on)
void
tioce_dma_unmap(struct pci_dev *pdev, dma_addr_t bus_addr, int dir)
static u64
tioce_do_dma_map(struct pci_dev *pdev, u64 paddr, size_t byte_count,
int barrier, int dma_flags)
static u64
tioce_dma(struct pci_dev *pdev, unsigned long  paddr, size_t byte_count, int dma_flags)
static u64
tioce_dma_consistent(struct pci_dev *pdev, unsigned long  paddr, size_t byte_count, int dma_flags)
static irqreturn_t
tioce_error_intr_handler(int irq, void *arg)
static void
tioce_reserve_m32(struct tioce_kernel *ce_kern, u64 base, u64 limit)
static struct tioce_kernel *
tioce_kern_init(struct tioce_common *tioce_common)
static void
tioce_force_interrupt(struct sn_irq_info *sn_irq_info)
static void
tioce_target_interrupt(struct sn_irq_info *sn_irq_info)
static void *
tioce_bus_fixup(struct pcibus_bussoft *prom_bussoft, struct pci_controller *controller)
static struct sn_pcibus_provider tioce_pci_interfaces = ;
int
tioce_init_provider(void)
