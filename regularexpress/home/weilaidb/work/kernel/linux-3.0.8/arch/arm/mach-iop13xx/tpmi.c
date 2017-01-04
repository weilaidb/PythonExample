#define IOP13XX_TPMI_MMR(dev) 	IOP13XX_REG_ADDR32_PHYS(0x48000 + (dev << 12))
#define IOP13XX_TPMI_MEM(dev) 	IOP13XX_REG_ADDR32_PHYS(0x60000 + (dev << 13))
#define IOP13XX_TPMI_CTRL(dev)	IOP13XX_REG_ADDR32_PHYS(0x50000 + (dev << 10))
#define IOP13XX_TPMI_IOP_CTRL(dev) (IOP13XX_TPMI_CTRL(dev) + 0x2000)
#define IOP13XX_TPMI_MMR_SIZE	    (SZ_4K - 1)
#define IOP13XX_TPMI_MEM_SIZE	    (255)
#define IOP13XX_TPMI_MEM_CTRL	    (SZ_1K - 1)
#define IOP13XX_TPMI_RESOURCE_MMR  0
#define IOP13XX_TPMI_RESOURCE_MEM  1
#define IOP13XX_TPMI_RESOURCE_CTRL 2
#define IOP13XX_TPMI_RESOURCE_IOP_CTRL 3
#define IOP13XX_TPMI_RESOURCE_IRQ  4
static struct resource iop13xx_tpmi_0_resources[] = ;
static struct resource iop13xx_tpmi_1_resources[] = ;
static struct resource iop13xx_tpmi_2_resources[] = ;
static struct resource iop13xx_tpmi_3_resources[] = ;
u64 iop13xx_tpmi_mask = DMA_BIT_MASK(64);
static struct platform_device iop13xx_tpmi_0_device = ;
static struct platform_device iop13xx_tpmi_1_device = ;
static struct platform_device iop13xx_tpmi_2_device = ;
static struct platform_device iop13xx_tpmi_3_device = ;
__init void iop13xx_add_tpmi_devices(void)
