#define __ASM_ARM_ARCH_IO_H
#define IO_SPACE_LIMIT 0xffffffff
#define __io(a)		__typesafe_io(a)
#define __mem_pci(a)	(a)
#define IOMEM(x)		(x)
#define IOMEM(x)		((void __force __iomem *)(x))
#define OMAP1_IO_OFFSET		0x01000000
#define OMAP1_IO_ADDRESS(pa)	IOMEM((pa) - OMAP1_IO_OFFSET)
#define OMAP2_L3_IO_OFFSET	0x90000000
#define OMAP2_L3_IO_ADDRESS(pa)	IOMEM((pa) + OMAP2_L3_IO_OFFSET)
#define OMAP2_L4_IO_OFFSET	0xb2000000
#define OMAP2_L4_IO_ADDRESS(pa)	IOMEM((pa) + OMAP2_L4_IO_OFFSET)
#define OMAP4_L3_IO_OFFSET	0xb4000000
#define OMAP4_L3_IO_ADDRESS(pa)	IOMEM((pa) + OMAP4_L3_IO_OFFSET)
#define OMAP4_L3_PER_IO_OFFSET	0xb1100000
#define OMAP4_L3_PER_IO_ADDRESS(pa)	IOMEM((pa) + OMAP4_L3_PER_IO_OFFSET)
#define OMAP4_GPMC_IO_OFFSET		0xa9000000
#define OMAP4_GPMC_IO_ADDRESS(pa)	IOMEM((pa) + OMAP4_GPMC_IO_OFFSET)
#define OMAP2_EMU_IO_OFFSET		0xaa800000
#define OMAP2_EMU_IO_ADDRESS(pa)	IOMEM((pa) + OMAP2_EMU_IO_OFFSET)
#define OMAP1_IO_PHYS		0xFFFB0000
#define OMAP1_IO_SIZE		0x40000
#define OMAP1_IO_VIRT		(OMAP1_IO_PHYS - OMAP1_IO_OFFSET)
#define L3_24XX_PHYS	L3_24XX_BASE
#define L3_24XX_VIRT	(L3_24XX_PHYS + OMAP2_L3_IO_OFFSET)
#define L3_24XX_SIZE	SZ_1M
#define L4_24XX_PHYS	L4_24XX_BASE
#define L4_24XX_VIRT	(L4_24XX_PHYS + OMAP2_L4_IO_OFFSET)
#define L4_24XX_SIZE	SZ_1M
#define L4_WK_243X_PHYS		L4_WK_243X_BASE
#define L4_WK_243X_VIRT		(L4_WK_243X_PHYS + OMAP2_L4_IO_OFFSET)
#define L4_WK_243X_SIZE		SZ_1M
#define OMAP243X_GPMC_PHYS	OMAP243X_GPMC_BASE
#define OMAP243X_GPMC_VIRT	(OMAP243X_GPMC_PHYS + OMAP2_L3_IO_OFFSET)
#define OMAP243X_GPMC_SIZE	SZ_1M
#define OMAP243X_SDRC_PHYS	OMAP243X_SDRC_BASE
#define OMAP243X_SDRC_VIRT	(OMAP243X_SDRC_PHYS + OMAP2_L3_IO_OFFSET)
#define OMAP243X_SDRC_SIZE	SZ_1M
#define OMAP243X_SMS_PHYS	OMAP243X_SMS_BASE
#define OMAP243X_SMS_VIRT	(OMAP243X_SMS_PHYS + OMAP2_L3_IO_OFFSET)
#define OMAP243X_SMS_SIZE	SZ_1M
#define DSP_MEM_2420_PHYS	OMAP2420_DSP_MEM_BASE
#define DSP_MEM_2420_VIRT	0xfc100000
#define DSP_MEM_2420_SIZE	0x28000
#define DSP_IPI_2420_PHYS	OMAP2420_DSP_IPI_BASE
#define DSP_IPI_2420_VIRT	0xfc128000
#define DSP_IPI_2420_SIZE	SZ_4K
#define DSP_MMU_2420_PHYS	OMAP2420_DSP_MMU_BASE
#define DSP_MMU_2420_VIRT	0xfc129000
#define DSP_MMU_2420_SIZE	SZ_4K
#define L3_34XX_PHYS		L3_34XX_BASE
#define L3_34XX_VIRT		(L3_34XX_PHYS + OMAP2_L3_IO_OFFSET)
#define L3_34XX_SIZE		SZ_1M
#define L4_34XX_PHYS		L4_34XX_BASE
#define L4_34XX_VIRT		(L4_34XX_PHYS + OMAP2_L4_IO_OFFSET)
#define L4_34XX_SIZE		SZ_4M
#define L4_PER_34XX_PHYS	L4_PER_34XX_BASE
#define L4_PER_34XX_VIRT	(L4_PER_34XX_PHYS + OMAP2_L4_IO_OFFSET)
#define L4_PER_34XX_SIZE	SZ_1M
#define L4_EMU_34XX_PHYS	L4_EMU_34XX_BASE
#define L4_EMU_34XX_VIRT	(L4_EMU_34XX_PHYS + OMAP2_EMU_IO_OFFSET)
#define L4_EMU_34XX_SIZE	SZ_8M
#define OMAP34XX_GPMC_PHYS	OMAP34XX_GPMC_BASE
#define OMAP34XX_GPMC_VIRT	(OMAP34XX_GPMC_PHYS + OMAP2_L3_IO_OFFSET)
#define OMAP34XX_GPMC_SIZE	SZ_1M
#define OMAP343X_SMS_PHYS	OMAP343X_SMS_BASE
#define OMAP343X_SMS_VIRT	(OMAP343X_SMS_PHYS + OMAP2_L3_IO_OFFSET)
#define OMAP343X_SMS_SIZE	SZ_1M
#define OMAP343X_SDRC_PHYS	OMAP343X_SDRC_BASE
#define OMAP343X_SDRC_VIRT	(OMAP343X_SDRC_PHYS + OMAP2_L3_IO_OFFSET)
#define OMAP343X_SDRC_SIZE	SZ_1M
#define L3_44XX_PHYS		L3_44XX_BASE
#define L3_44XX_VIRT		(L3_44XX_PHYS + OMAP4_L3_IO_OFFSET)
#define L3_44XX_SIZE		SZ_1M
#define L4_44XX_PHYS		L4_44XX_BASE
#define L4_44XX_VIRT		(L4_44XX_PHYS + OMAP2_L4_IO_OFFSET)
#define L4_44XX_SIZE		SZ_4M
#define L4_PER_44XX_PHYS	L4_PER_44XX_BASE
#define L4_PER_44XX_VIRT	(L4_PER_44XX_PHYS + OMAP2_L4_IO_OFFSET)
#define L4_PER_44XX_SIZE	SZ_4M
#define L4_ABE_44XX_PHYS	L4_ABE_44XX_BASE
#define L4_ABE_44XX_VIRT	(L4_ABE_44XX_PHYS + OMAP2_L4_IO_OFFSET)
#define L4_ABE_44XX_SIZE	SZ_1M
#define L4_EMU_44XX_PHYS	L4_EMU_44XX_BASE
#define L4_EMU_44XX_VIRT	(L4_EMU_44XX_PHYS + OMAP2_EMU_IO_OFFSET)
#define L4_EMU_44XX_SIZE	SZ_8M
#define OMAP44XX_GPMC_PHYS	OMAP44XX_GPMC_BASE
#define OMAP44XX_GPMC_VIRT	(OMAP44XX_GPMC_PHYS + OMAP4_GPMC_IO_OFFSET)
#define OMAP44XX_GPMC_SIZE	SZ_1M
#define OMAP44XX_EMIF1_PHYS	OMAP44XX_EMIF1_BASE
#define OMAP44XX_EMIF1_VIRT	(OMAP44XX_EMIF1_PHYS + OMAP4_L3_PER_IO_OFFSET)
#define OMAP44XX_EMIF1_SIZE	SZ_1M
#define OMAP44XX_EMIF2_PHYS	OMAP44XX_EMIF2_BASE
#define OMAP44XX_EMIF2_VIRT	(OMAP44XX_EMIF2_PHYS + OMAP4_L3_PER_IO_OFFSET)
#define OMAP44XX_EMIF2_SIZE	SZ_1M
#define OMAP44XX_DMM_PHYS	OMAP44XX_DMM_BASE
#define OMAP44XX_DMM_VIRT	(OMAP44XX_DMM_PHYS + OMAP4_L3_PER_IO_OFFSET)
#define OMAP44XX_DMM_SIZE	SZ_1M
extern u8 omap_readb(u32 pa);
extern u16 omap_readw(u32 pa);
extern u32 omap_readl(u32 pa);
extern void omap_writeb(u8 v, u32 pa);
extern void omap_writew(u16 v, u32 pa);
extern void omap_writel(u32 v, u32 pa);
struct omap_sdrc_params;
extern void omap1_map_common_io(void);
extern void omap1_init_common_hw(void);
extern void omap242x_map_common_io(void);
static inline void omap242x_map_common_io(void)
extern void omap243x_map_common_io(void);
static inline void omap243x_map_common_io(void)
extern void omap34xx_map_common_io(void);
static inline void omap34xx_map_common_io(void)
extern void omapti816x_map_common_io(void);
static inline void omapti816x_map_common_io(void)
extern void omap44xx_map_common_io(void);
static inline void omap44xx_map_common_io(void)
extern void omap2_init_common_infrastructure(void);
extern void omap2_init_common_devices(struct omap_sdrc_params *sdrc_cs0,
struct omap_sdrc_params *sdrc_cs1);
#define __arch_ioremap	omap_ioremap
#define __arch_iounmap	omap_iounmap
void __iomem *omap_ioremap(unsigned long phys, size_t size, unsigned int type);
void omap_iounmap(volatile void __iomem *addr);
