enum ;
static struct intc_vect vectors[] __initdata = ;
static struct intc_prio_reg prio_registers[] __initdata = ;
static DECLARE_INTC_DESC(intc_desc, "sh770x", vectors, NULL,
NULL, prio_registers, NULL);
static struct resource rtc_resources[] = ;
static struct platform_device rtc_device = ;
static struct plat_sci_port scif0_platform_data = ;
static struct platform_device scif0_device = ;
#if defined(CONFIG_CPU_SUBTYPE_SH7706) || \
defined(CONFIG_CPU_SUBTYPE_SH7707) || \
defined(CONFIG_CPU_SUBTYPE_SH7709)
static struct plat_sci_port scif1_platform_data = ;
static struct platform_device scif1_device = ;
#if defined(CONFIG_CPU_SUBTYPE_SH7707) || \
defined(CONFIG_CPU_SUBTYPE_SH7709)
static struct plat_sci_port scif2_platform_data = ;
static struct platform_device scif2_device = ;
static struct sh_timer_config tmu0_platform_data = ;
static struct resource tmu0_resources[] = ;
static struct platform_device tmu0_device = ;
static struct sh_timer_config tmu1_platform_data = ;
static struct resource tmu1_resources[] = ;
static struct platform_device tmu1_device = ;
static struct sh_timer_config tmu2_platform_data = ;
static struct resource tmu2_resources[] = ;
static struct platform_device tmu2_device = ;
static struct platform_device *sh770x_devices[] __initdata = ;
static int __init sh770x_devices_setup(void)
arch_initcall(sh770x_devices_setup);
static struct platform_device *sh770x_early_devices[] __initdata = ;
void __init plat_early_device_setup(void)
void __init plat_irq_setup(void)
