static struct plat_sci_port scif0_platform_data = ;
static struct platform_device scif0_device = ;
static struct sh_timer_config tmu0_platform_data = ;
static struct resource tmu0_resources[] = ;
static struct platform_device tmu0_device = ;
static struct sh_timer_config tmu1_platform_data = ;
static struct resource tmu1_resources[] = ;
static struct platform_device tmu1_device = ;
static struct sh_timer_config tmu2_platform_data = ;
static struct resource tmu2_resources[] = ;
static struct platform_device tmu2_device = ;
static struct platform_device *sh4202_devices[] __initdata = ;
static int __init sh4202_devices_setup(void)
arch_initcall(sh4202_devices_setup);
static struct platform_device *sh4202_early_devices[] __initdata = ;
void __init plat_early_device_setup(void)
enum ;
static struct intc_vect vectors[] __initdata = ;
static struct intc_prio_reg prio_registers[] __initdata = ;
static DECLARE_INTC_DESC(intc_desc, "sh4-202", vectors, NULL,
NULL, prio_registers, NULL);
static struct intc_vect vectors_irlm[] __initdata = ;
static DECLARE_INTC_DESC(intc_desc_irlm, "sh4-202_irlm", vectors_irlm, NULL,
NULL, prio_registers, NULL);
void __init plat_irq_setup(void)
#define INTC_ICR	0xffd00000UL
#define INTC_ICR_IRLM   (1<<7)
void __init plat_irq_setup_pins(int mode)
