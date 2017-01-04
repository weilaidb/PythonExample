enum ;
static struct intc_vect vectors[] __initdata = ;
static struct intc_prio_reg prio_registers[] __initdata = ;
static DECLARE_INTC_DESC(intc_desc, "sh7619", vectors, NULL,
NULL, prio_registers, NULL);
static struct plat_sci_port scif0_platform_data = ;
static struct platform_device scif0_device = ;
static struct plat_sci_port scif1_platform_data = ;
static struct platform_device scif1_device = ;
static struct plat_sci_port scif2_platform_data = ;
static struct platform_device scif2_device = ;
static struct resource eth_resources[] = ;
static struct platform_device eth_device = ;
static struct sh_timer_config cmt0_platform_data = ;
static struct resource cmt0_resources[] = ;
static struct platform_device cmt0_device = ;
static struct sh_timer_config cmt1_platform_data = ;
static struct resource cmt1_resources[] = ;
static struct platform_device cmt1_device = ;
static struct platform_device *sh7619_devices[] __initdata = ;
static int __init sh7619_devices_setup(void)
arch_initcall(sh7619_devices_setup);
void __init plat_irq_setup(void)
static struct platform_device *sh7619_early_devices[] __initdata = ;
#define STBCR3 0xf80a0000
void __init plat_early_device_setup(void)
