#if defined(CONFIG_USB_MUSB_OMAP2PLUS) || defined (CONFIG_USB_MUSB_AM35X)
static struct musb_hdrc_config musb_config = ;
static struct musb_hdrc_platform_data musb_plat = ;
static u64 musb_dmamask = DMA_BIT_MASK(32);
static struct omap_device_pm_latency omap_musb_latency[] = ;
static void usb_musb_mux_init(struct omap_musb_board_data *board_data)
static struct omap_musb_board_data musb_default_board_data = ;
void __init usb_musb_init(struct omap_musb_board_data *musb_board_data)
void __init usb_musb_init(struct omap_musb_board_data *board_data)
