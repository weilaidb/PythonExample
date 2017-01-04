#define MX21ADS_MMIO_BASE_ADDR   0xf5000000
#define MX21ADS_MMIO_SIZE        SZ_16M
#define MX21ADS_REG_ADDR(offset)    (void __force __iomem *) \
(MX21ADS_MMIO_BASE_ADDR + (offset))
#define MX21ADS_CS8900A_IRQ         IRQ_GPIOE(11)
#define MX21ADS_CS8900A_IOBASE_REG  MX21ADS_REG_ADDR(0x000000)
#define MX21ADS_ST16C255_IOBASE_REG MX21ADS_REG_ADDR(0x200000)
#define MX21ADS_VERSION_REG         MX21ADS_REG_ADDR(0x400000)
#define MX21ADS_IO_REG              MX21ADS_REG_ADDR(0x800000)
#define MX21ADS_IO_SD_WP        0x0001
#define MX21ADS_IO_TP6          0x0001
#define MX21ADS_IO_SW_SEL       0x0002
#define MX21ADS_IO_TP7          0x0002
#define MX21ADS_IO_RESET_E_UART 0x0004
#define MX21ADS_IO_RESET_BASE   0x0008
#define MX21ADS_IO_CSI_CTL2     0x0010
#define MX21ADS_IO_CSI_CTL1     0x0020
#define MX21ADS_IO_CSI_CTL0     0x0040
#define MX21ADS_IO_UART1_EN     0x0080
#define MX21ADS_IO_UART4_EN     0x0100
#define MX21ADS_IO_LCDON        0x0200
#define MX21ADS_IO_IRDA_EN      0x0400
#define MX21ADS_IO_IRDA_FIR_SEL 0x0800
#define MX21ADS_IO_IRDA_MD0_B   0x1000
#define MX21ADS_IO_IRDA_MD1     0x2000
#define MX21ADS_IO_LED4_ON      0x4000
#define MX21ADS_IO_LED3_ON      0x8000
static const int mx21ads_pins[] __initconst = ;
static struct physmap_flash_data mx21ads_flash_data = ;
static struct resource mx21ads_flash_resource = ;
static struct platform_device mx21ads_nor_mtd_device = ;
static const struct imxuart_platform_data uart_pdata_rts __initconst = ;
static const struct imxuart_platform_data uart_pdata_norts __initconst = ;
static int mx21ads_fb_init(struct platform_device *pdev)
static void mx21ads_fb_exit(struct platform_device *pdev)
static struct imx_fb_videomode mx21ads_modes[] = ;
static const struct imx_fb_platform_data mx21ads_fb_data __initconst = ;
static int mx21ads_sdhc_get_ro(struct device *dev)
static int mx21ads_sdhc_init(struct device *dev, irq_handler_t detect_irq,
void *data)
static void mx21ads_sdhc_exit(struct device *dev, void *data)
static const struct imxmmc_platform_data mx21ads_sdhc_pdata __initconst = ;
static const struct mxc_nand_platform_data
mx21ads_nand_board_info __initconst = ;
static struct map_desc mx21ads_io_desc[] __initdata = ;
static void __init mx21ads_map_io(void)
static struct platform_device *platform_devices[] __initdata = ;
static void __init mx21ads_board_init(void)
static void __init mx21ads_timer_init(void)
static struct sys_timer mx21ads_timer = ;
MACHINE_START(MX21ADS, "Freescale i.MX21ADS")
.boot_params = MX21_PHYS_OFFSET + 0x100,
.map_io = mx21ads_map_io,
.init_early = imx21_init_early,
.init_irq = mx21_init_irq,
.timer = &mx21ads_timer,
.init_machine = mx21ads_board_init,
MACHINE_END
