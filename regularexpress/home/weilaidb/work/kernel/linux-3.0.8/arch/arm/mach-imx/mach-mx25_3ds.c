static const struct imxuart_platform_data uart_pdata __initconst = ;
static iomux_v3_cfg_t mx25pdk_pads[] = ;
static const struct fec_platform_data mx25_fec_pdata __initconst = ;
#define FEC_ENABLE_GPIO		IMX_GPIO_NR(2, 3)
#define FEC_RESET_B_GPIO	IMX_GPIO_NR(4, 8)
static void __init mx25pdk_fec_reset(void)
static const struct mxc_nand_platform_data
mx25pdk_nand_board_info __initconst = ;
static struct imx_fb_videomode mx25pdk_modes[] = ;
static const struct imx_fb_platform_data mx25pdk_fb_pdata __initconst = ;
static const uint32_t mx25pdk_keymap[] = ;
static const struct matrix_keymap_data mx25pdk_keymap_data __initconst = ;
static int mx25pdk_usbh2_init(struct platform_device *pdev)
static const struct mxc_usbh_platform_data usbh2_pdata __initconst = ;
static const struct fsl_usb2_platform_data otg_device_pdata __initconst = ;
static const struct imxi2c_platform_data mx25_3ds_i2c0_data __initconst = ;
#define SD1_GPIO_WP	IMX_GPIO_NR(2, 0)
#define SD1_GPIO_CD	IMX_GPIO_NR(2, 1)
static const struct esdhc_platform_data mx25pdk_esdhc_pdata __initconst = ;
static void __init mx25pdk_init(void)
static void __init mx25pdk_timer_init(void)
static struct sys_timer mx25pdk_timer = ;
MACHINE_START(MX25_3DS, "Freescale MX25PDK (3DS)")
.boot_params = MX25_PHYS_OFFSET + 0x100,
.map_io = mx25_map_io,
.init_early = imx25_init_early,
.init_irq = mx25_init_irq,
.timer = &mx25pdk_timer,
.init_machine = mx25pdk_init,
MACHINE_END
