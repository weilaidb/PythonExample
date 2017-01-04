enum ;
static struct intc_vect vectors[] __initdata = ;
static struct intc_group groups[] __initdata = ;
static struct intc_mask_reg mask_registers[] __initdata = ;
static struct intc_prio_reg prio_registers[] __initdata = ;
static DECLARE_INTC_DESC(intc_desc, "sh7760", vectors, groups,
mask_registers, prio_registers, NULL);
static struct intc_vect vectors_irq[] __initdata = ;
static DECLARE_INTC_DESC(intc_desc_irq, "sh7760-irq", vectors_irq, groups,
mask_registers, prio_registers, NULL);
static struct plat_sci_port scif0_platform_data = ;
static struct platform_device scif0_device = ;
static struct plat_sci_port scif1_platform_data = ;
static struct platform_device scif1_device = ;
static struct plat_sci_port scif2_platform_data = ;
static struct platform_device scif2_device = ;
static struct plat_sci_port scif3_platform_data = ;
static struct platform_device scif3_device = ;
static struct sh_timer_config tmu0_platform_data = ;
static struct resource tmu0_resources[] = ;
static struct platform_device tmu0_device = ;
static struct sh_timer_config tmu1_platform_data = ;
static struct resource tmu1_resources[] = ;
static struct platform_device tmu1_device = ;
static struct sh_timer_config tmu2_platform_data = ;
static struct resource tmu2_resources[] = ;
static struct platform_device tmu2_device = ;
static struct platform_device *sh7760_devices[] __initdata = ;
static int __init sh7760_devices_setup(void)
arch_initcall(sh7760_devices_setup);
static struct platform_device *sh7760_early_devices[] __initdata = ;
void __init plat_early_device_setup(void)
#define INTC_ICR	0xffd00000UL
#define INTC_ICR_IRLM	(1 << 7)
void __init plat_irq_setup_pins(int mode)
void __init plat_irq_setup(void)
