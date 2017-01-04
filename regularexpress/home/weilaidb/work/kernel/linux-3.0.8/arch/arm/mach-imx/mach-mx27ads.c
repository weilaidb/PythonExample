#define PBC_BASE_ADDRESS        0xf4300000
#define PBC_REG_ADDR(offset)    (void __force __iomem *) \
(PBC_BASE_ADDRESS + (offset))
#define PBC_ADDR_SH             0
#define PBC_VERSION_REG         PBC_REG_ADDR(0x00000 >> PBC_ADDR_SH)
#define PBC_BCTRL1_SET_REG      PBC_REG_ADDR(0x00008 >> PBC_ADDR_SH)
#define PBC_BCTRL1_CLEAR_REG    PBC_REG_ADDR(0x0000C >> PBC_ADDR_SH)
#define PBC_BCTRL1_LCDON        0x0800
#define CKIH_27MHZ_BIT_SET      (1 << 3)
static const int mx27ads_pins[] __initconst = ;
static const struct mxc_nand_platform_data
mx27ads_nand_board_info __initconst = ;
static struct physmap_flash_data mx27ads_flash_data = ;
static struct resource mx27ads_flash_resource = ;
static struct platform_device mx27ads_nor_mtd_device = ;
static const struct imxi2c_platform_data mx27ads_i2c1_data __initconst = ;
static struct i2c_board_info mx27ads_i2c_devices[] = ;
void lcd_power(int on)
static struct imx_fb_videomode mx27ads_modes[] = ;
static const struct imx_fb_platform_data mx27ads_fb_data __initconst = ;
static int mx27ads_sdhc1_init(struct device *dev, irq_handler_t detect_irq,
void *data)
static int mx27ads_sdhc2_init(struct device *dev, irq_handler_t detect_irq,
void *data)
static void mx27ads_sdhc1_exit(struct device *dev, void *data)
static void mx27ads_sdhc2_exit(struct device *dev, void *data)
static const struct imxmmc_platform_data sdhc1_pdata __initconst = ;
static const struct imxmmc_platform_data sdhc2_pdata __initconst = ;
static struct platform_device *platform_devices[] __initdata = ;
static const struct imxuart_platform_data uart_pdata __initconst = ;
static void __init mx27ads_board_init(void)
static void __init mx27ads_timer_init(void)
static struct sys_timer mx27ads_timer = ;
static struct map_desc mx27ads_io_desc[] __initdata = ;
static void __init mx27ads_map_io(void)
MACHINE_START(MX27ADS, "Freescale i.MX27ADS")
.boot_params = MX27_PHYS_OFFSET + 0x100,
.map_io = mx27ads_map_io,
.init_early = imx27_init_early,
.init_irq = mx27_init_irq,
.timer = &mx27ads_timer,
.init_machine = mx27ads_board_init,
MACHINE_END
