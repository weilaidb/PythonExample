#define TTCDKB_NR_IRQS		(IRQ_BOARD_START + 24)
static unsigned long ttc_dkb_pin_config[] __initdata = ;
static struct mtd_partition ttc_dkb_onenand_partitions[] = ;
static struct onenand_platform_data ttc_dkb_onenand_info = ;
static struct resource ttc_dkb_resource_onenand[] = ;
static struct platform_device ttc_dkb_device_onenand = ;
static struct platform_device *ttc_dkb_devices[] = ;
static void __init ttc_dkb_init(void)
MACHINE_START(TTC_DKB, "PXA910-based TTC_DKB Development Platform")
.map_io		= mmp_map_io,
.nr_irqs	= TTCDKB_NR_IRQS,
.init_irq       = pxa910_init_irq,
.timer          = &pxa910_timer,
.init_machine   = ttc_dkb_init,
MACHINE_END
