static struct resource smsc9220_resources[] = ;
static struct smsc911x_platform_config smsc9220_platdata = ;
static struct platform_device eth_device = ;
static struct sh_keysc_info keysc_platdata = ;
static struct resource keysc_resources[] = ;
static struct platform_device keysc_device = ;
static struct resource fsi_resources[] = ;
static struct platform_device fsi_device = ;
static struct resource sh_mmcif_resources[] = ;
static struct sh_mmcif_dma sh_mmcif_dma = ;
static struct sh_mmcif_plat_data sh_mmcif_platdata = ;
static struct platform_device mmc_device = ;
static struct resource irda_resources[] = ;
static struct platform_device irda_device = ;
static unsigned char lcd_backlight_seq[3][2] = ;
static void lcd_backlight_on(void)
static void lcd_backlight_reset(void)
static void lcd_on(void *board_data, struct fb_info *info)
static void lcd_off(void *board_data)
static const struct fb_videomode lcdc0_modes[] = ;
static struct sh_mobile_lcdc_info lcdc0_info = ;
static struct resource lcdc0_resources[] = ;
static struct platform_device lcdc0_device = ;
static struct resource mipidsi0_resources[] = ;
static struct sh_mipi_dsi_info mipidsi0_info = ;
static struct platform_device mipidsi0_device = ;
static struct sh_mobile_sdhi_info sdhi0_info = ;
static struct resource sdhi0_resources[] = ;
static struct platform_device sdhi0_device = ;
void ag5evm_sdhi1_set_pwr(struct platform_device *pdev, int state)
static struct sh_mobile_sdhi_info sh_sdhi1_info = ;
static struct resource sdhi1_resources[] = ;
static struct platform_device sdhi1_device = ;
static struct platform_device *ag5evm_devices[] __initdata = ;
static struct map_desc ag5evm_io_desc[] __initdata = ;
static void __init ag5evm_map_io(void)
#define PINTC_ADDR	0xe6900000
#define PINTER0A	(PINTC_ADDR + 0xa0)
#define PINTCR0A	(PINTC_ADDR + 0xb0)
void __init ag5evm_init_irq(void)
#define DSI0PHYCR	0xe615006c
static void __init ag5evm_init(void)
static void __init ag5evm_timer_init(void)
struct sys_timer ag5evm_timer = ;
MACHINE_START(AG5EVM, "ag5evm")
.map_io		= ag5evm_map_io,
.init_irq	= ag5evm_init_irq,
.handle_irq	= shmobile_handle_irq_gic,
.init_machine	= ag5evm_init,
.timer		= &ag5evm_timer,
MACHINE_END
