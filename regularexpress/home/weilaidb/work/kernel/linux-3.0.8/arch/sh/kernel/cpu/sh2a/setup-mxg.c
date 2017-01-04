enum ;
static struct intc_vect vectors[] __initdata = ;
static struct intc_group groups[] __initdata = ;
static struct intc_prio_reg prio_registers[] __initdata = ;
static struct intc_mask_reg mask_registers[] __initdata = ;
static DECLARE_INTC_DESC(intc_desc, "mxg", vectors, groups,
mask_registers, prio_registers, NULL);
static struct sh_timer_config mtu2_0_platform_data = ;
static struct resource mtu2_0_resources[] = ;
static struct platform_device mtu2_0_device = ;
static struct sh_timer_config mtu2_1_platform_data = ;
static struct resource mtu2_1_resources[] = ;
static struct platform_device mtu2_1_device = ;
static struct sh_timer_config mtu2_2_platform_data = ;
static struct resource mtu2_2_resources[] = ;
static struct platform_device mtu2_2_device = ;
static struct plat_sci_port scif0_platform_data = ;
static struct platform_device scif0_device = ;
static struct platform_device *mxg_devices[] __initdata = ;
static int __init mxg_devices_setup(void)
arch_initcall(mxg_devices_setup);
void __init plat_irq_setup(void)
static struct platform_device *mxg_early_devices[] __initdata = ;
void __init plat_early_device_setup(void)
