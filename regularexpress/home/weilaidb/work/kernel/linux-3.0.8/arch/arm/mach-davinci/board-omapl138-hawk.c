#define HAWKBOARD_PHY_ID		"0:07"
#define DA850_HAWK_MMCSD_CD_PIN		GPIO_TO_PIN(3, 12)
#define DA850_HAWK_MMCSD_WP_PIN		GPIO_TO_PIN(3, 13)
#define DA850_USB1_VBUS_PIN		GPIO_TO_PIN(2, 4)
#define DA850_USB1_OC_PIN		GPIO_TO_PIN(6, 13)
static short omapl138_hawk_mii_pins[] __initdata = ;
static __init void omapl138_hawk_config_emac(void)
static const s16 da850_dma0_rsv_chans[][2] = ;
static const s16 da850_dma0_rsv_slots[][2] = ;
static const s16 da850_dma1_rsv_chans[][2] = ;
static const s16 da850_dma1_rsv_slots[][2] = ;
static struct edma_rsv_info da850_edma_cc0_rsv = ;
static struct edma_rsv_info da850_edma_cc1_rsv = ;
static struct edma_rsv_info *da850_edma_rsv[2] = ;
static const short hawk_mmcsd0_pins[] = ;
static int da850_hawk_mmc_get_ro(int index)
static int da850_hawk_mmc_get_cd(int index)
static struct davinci_mmc_config da850_mmc_config = ;
static __init void omapl138_hawk_mmc_init(void)
static irqreturn_t omapl138_hawk_usb_ocic_irq(int irq, void *dev_id);
static da8xx_ocic_handler_t hawk_usb_ocic_handler;
static const short da850_hawk_usb11_pins[] = ;
static int hawk_usb_set_power(unsigned port, int on)
static int hawk_usb_get_power(unsigned port)
static int hawk_usb_get_oci(unsigned port)
static int hawk_usb_ocic_notify(da8xx_ocic_handler_t handler)
static struct da8xx_ohci_root_hub omapl138_hawk_usb11_pdata = ;
static irqreturn_t omapl138_hawk_usb_ocic_irq(int irq, void *dev_id)
static __init void omapl138_hawk_usb_init(void)
static struct davinci_uart_config omapl138_hawk_uart_config __initdata = ;
static __init void omapl138_hawk_init(void)
static int __init omapl138_hawk_console_init(void)
console_initcall(omapl138_hawk_console_init);
static void __init omapl138_hawk_map_io(void)
MACHINE_START(OMAPL138_HAWKBOARD, "AM18x/OMAP-L138 Hawkboard")
.boot_params	= (DA8XX_DDR_BASE + 0x100),
.map_io		= omapl138_hawk_map_io,
.init_irq	= cp_intc_init,
.timer		= &davinci_timer,
.init_machine	= omapl138_hawk_init,
MACHINE_END
