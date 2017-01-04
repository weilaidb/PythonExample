enum ;
static struct intc_vect vectors[] __initdata = ;
static struct intc_group groups[] __initdata = ;
static struct intc_prio_reg prio_registers[] __initdata = ;
static struct intc_mask_reg mask_registers[] __initdata = ;
static DECLARE_INTC_DESC(intc_desc, "sh7201", vectors, groups,
mask_registers, prio_registers, NULL);
static struct plat_sci_port scif0_platform_data = ;
static struct platform_device scif0_device = ;
static struct plat_sci_port scif1_platform_data = ;
static struct platform_device scif1_device = ;
static struct plat_sci_port scif2_platform_data = ;
static struct platform_device scif2_device = ;
static struct plat_sci_port scif3_platform_data = ;
static struct platform_device scif3_device = ;
static struct plat_sci_port scif4_platform_data = ;
static struct platform_device scif4_device = ;
static struct plat_sci_port scif5_platform_data = ;
static struct platform_device scif5_device = ;
static struct plat_sci_port scif6_platform_data = ;
static struct platform_device scif6_device = ;
static struct plat_sci_port scif7_platform_data = ;
static struct platform_device scif7_device = ;
static struct resource rtc_resources[] = ;
static struct platform_device rtc_device = ;
static struct sh_timer_config mtu2_0_platform_data = ;
static struct resource mtu2_0_resources[] = ;
static struct platform_device mtu2_0_device = ;
static struct sh_timer_config mtu2_1_platform_data = ;
static struct resource mtu2_1_resources[] = ;
static struct platform_device mtu2_1_device = ;
static struct sh_timer_config mtu2_2_platform_data = ;
static struct resource mtu2_2_resources[] = ;
static struct platform_device mtu2_2_device = ;
static struct platform_device *sh7201_devices[] __initdata = ;
static int __init sh7201_devices_setup(void)
arch_initcall(sh7201_devices_setup);
void __init plat_irq_setup(void)
static struct platform_device *sh7201_early_devices[] __initdata = ;
#define STBCR3 0xfffe0408
void __init plat_early_device_setup(void)
