#if 1
#define IRQ_MMCI1A	IRQ_VICSOURCE23
#define IRQ_MMCI1A	IRQ_SIC_MMCI1A
static struct mmci_platform_data mmc1_plat_data = ;
static struct pl061_platform_data gpio2_plat_data = ;
static struct pl061_platform_data gpio3_plat_data = ;
#define UART3_IRQ
#define SCI1_IRQ
#define MMCI1_IRQ
#define GPIO2_IRQ
#define GPIO3_IRQ
AMBA_DEVICE(uart3, "fpga:09", UART3,    NULL);
AMBA_DEVICE(sci1,  "fpga:0a", SCI1,     NULL);
AMBA_DEVICE(mmc1,  "fpga:0b", MMCI1,    &mmc1_plat_data);
AMBA_DEVICE(gpio2, "dev:e6",  GPIO2,    &gpio2_plat_data);
AMBA_DEVICE(gpio3, "dev:e7",  GPIO3,    &gpio3_plat_data);
static struct amba_device *amba_devs[] __initdata = ;
static void __init versatile_pb_init(void)
MACHINE_START(VERSATILE_PB, "ARM-Versatile PB")
.boot_params	= 0x00000100,
.map_io		= versatile_map_io,
.init_early	= versatile_init_early,
.init_irq	= versatile_init_irq,
.timer		= &versatile_timer,
.init_machine	= versatile_pb_init,
MACHINE_END
