#define _ASM_PARISC_ROPES_H_
#define ZX1_SUPPORT
#undef SBA_COLLECT_STATS
#define DELAYED_RESOURCE_CNT	16
#define MAX_IOC		2
#define ROPES_PER_IOC	8
struct ioc ;
struct sba_device ;
#define ASTRO_RUNWAY_PORT	0x582
#define IKE_MERCED_PORT		0x803
#define REO_MERCED_PORT		0x804
#define REOG_MERCED_PORT	0x805
#define PLUTO_MCKINLEY_PORT	0x880
static inline int IS_ASTRO(struct parisc_device *d)
static inline int IS_IKE(struct parisc_device *d)
static inline int IS_PLUTO(struct parisc_device *d)
#define PLUTO_IOVA_BASE	(1UL*1024*1024*1024)
#define PLUTO_IOVA_SIZE	(1UL*1024*1024*1024)
#define PLUTO_GART_SIZE	(PLUTO_IOVA_SIZE / 2)
#define SBA_PDIR_VALID_BIT	0x8000000000000000ULL
#define SBA_AGPGART_COOKIE	0x0000badbadc0ffeeULL
#define SBA_FUNC_ID	0x0000
#define SBA_FCLASS	0x0008
#define SBA_FUNC_SIZE 4096
#define ASTRO_IOC_OFFSET	(32 * SBA_FUNC_SIZE)
#define PLUTO_IOC_OFFSET	(1 * SBA_FUNC_SIZE)
#define IKE_IOC_OFFSET(p)	((p+2) * SBA_FUNC_SIZE)
#define IOC_CTRL          0x8
#define IOC_CTRL_TC       (1 << 0)
#define IOC_CTRL_CE       (1 << 1)
#define IOC_CTRL_DE       (1 << 2)
#define IOC_CTRL_RM       (1 << 8)
#define IOC_CTRL_NC       (1 << 9)
#define IOC_CTRL_D4       (1 << 11)
#define IOC_CTRL_DD       (1 << 13)
#define LMMIO_DIRECT0_BASE  0x300
#define LMMIO_DIRECT0_MASK  0x308
#define LMMIO_DIRECT0_ROUTE 0x310
#define LMMIO_DIST_BASE  0x360
#define LMMIO_DIST_MASK  0x368
#define LMMIO_DIST_ROUTE 0x370
#define IOS_DIST_BASE	0x390
#define IOS_DIST_MASK	0x398
#define IOS_DIST_ROUTE	0x3A0
#define IOS_DIRECT_BASE	0x3C0
#define IOS_DIRECT_MASK	0x3C8
#define IOS_DIRECT_ROUTE 0x3D0
#define ROPE0_CTL	0x200
#define ROPE1_CTL	0x208
#define ROPE2_CTL	0x210
#define ROPE3_CTL	0x218
#define ROPE4_CTL	0x220
#define ROPE5_CTL	0x228
#define ROPE6_CTL	0x230
#define ROPE7_CTL	0x238
#define IOC_ROPE0_CFG	0x500
#define   IOC_ROPE_AO	  0x10
#define HF_ENABLE	0x40
#define IOC_IBASE	0x300
#define IOC_IMASK	0x308
#define IOC_PCOM	0x310
#define IOC_TCNFG	0x318
#define IOC_PDIR_BASE	0x320
#define IOVP_SIZE	PAGE_SIZE
#define IOVP_SHIFT	PAGE_SHIFT
#define IOVP_MASK	PAGE_MASK
#define SBA_PERF_CFG	0x708
#define SBA_PERF_MASK1	0x718
#define SBA_PERF_MASK2	0x730
#define SBA_PERF_CNT1	0x200
#define SBA_PERF_CNT2	0x208
#define SBA_PERF_CNT3	0x210
struct lba_device ;
#define ELROY_HVERS		0x782
#define MERCURY_HVERS		0x783
#define QUICKSILVER_HVERS	0x784
static inline int IS_ELROY(struct parisc_device *d)
static inline int IS_MERCURY(struct parisc_device *d)
static inline int IS_QUICKSILVER(struct parisc_device *d)
static inline int agp_mode_mercury(void __iomem *hpa)
extern void *iosapic_register(unsigned long hpa);
extern int iosapic_fixup_irq(void *obj, struct pci_dev *pcidev);
#define LBA_FUNC_ID	0x0000
#define LBA_FCLASS	0x0008
#define LBA_CAPABLE	0x0030
#define LBA_PCI_CFG_ADDR	0x0040
#define LBA_PCI_CFG_DATA	0x0048
#define LBA_PMC_MTLT	0x0050
#define LBA_FW_SCRATCH	0x0058
#define LBA_ERROR_ADDR	0x0070
#define LBA_ARB_MASK	0x0080
#define LBA_ARB_PRI	0x0088
#define LBA_ARB_MODE	0x0090
#define LBA_ARB_MTLT	0x0098
#define LBA_MOD_ID	0x0100
#define LBA_STAT_CTL	0x0108
#define   LBA_BUS_RESET		0x01
#define   CLEAR_ERRLOG		0x10
#define   CLEAR_ERRLOG_ENABLE	0x20
#define   HF_ENABLE	0x40
#define LBA_LMMIO_BASE	0x0200
#define LBA_LMMIO_MASK	0x0208
#define LBA_GMMIO_BASE	0x0210
#define LBA_GMMIO_MASK	0x0218
#define LBA_WLMMIO_BASE	0x0220
#define LBA_WLMMIO_MASK	0x0228
#define LBA_WGMMIO_BASE	0x0230
#define LBA_WGMMIO_MASK	0x0238
#define LBA_IOS_BASE	0x0240
#define LBA_IOS_MASK	0x0248
#define LBA_ELMMIO_BASE	0x0250
#define LBA_ELMMIO_MASK	0x0258
#define LBA_EIOS_BASE	0x0260
#define LBA_EIOS_MASK	0x0268
#define LBA_GLOBAL_MASK	0x0270
#define LBA_DMA_CTL	0x0278
#define LBA_IBASE	0x0300
#define LBA_IMASK	0x0308
#define LBA_HINT_CFG	0x0310
#define LBA_HINT_BASE	0x0380
#define LBA_BUS_MODE	0x0620
#define LBA_ERROR_CONFIG 0x0680
#define     LBA_SMART_MODE 0x20
#define LBA_ERROR_STATUS 0x0688
#define LBA_ROPE_CTL     0x06A0
#define LBA_IOSAPIC_BASE	0x800
