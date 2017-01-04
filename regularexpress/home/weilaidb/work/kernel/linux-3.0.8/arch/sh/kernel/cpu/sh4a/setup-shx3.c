static struct plat_sci_port scif0_platform_data = ;
static struct platform_device scif0_device = ;
static struct plat_sci_port scif1_platform_data = ;
static struct platform_device scif1_device = ;
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
static struct sh_timer_config tmu3_platform_data = ;
static struct resource tmu3_resources[] = ;
static struct platform_device tmu3_device = ;
static struct sh_timer_config tmu4_platform_data = ;
static struct resource tmu4_resources[] = ;
static struct platform_device tmu4_device = ;
static struct sh_timer_config tmu5_platform_data = ;
static struct resource tmu5_resources[] = ;
static struct platform_device tmu5_device = ;
static struct platform_device *shx3_early_devices[] __initdata = ;
static int __init shx3_devices_setup(void)
arch_initcall(shx3_devices_setup);
void __init plat_early_device_setup(void)
enum ;
static struct intc_vect vectors[] __initdata = ;
static struct intc_group groups[] __initdata = ;
#define INT2DISTCR0	0xfe4108a0
#define INT2DISTCR1	0xfe4108a4
#define INT2DISTCR2	0xfe4108a8
static struct intc_mask_reg mask_registers[] __initdata = ;
static struct intc_prio_reg prio_registers[] __initdata = ;
static DECLARE_INTC_DESC(intc_desc, "shx3", vectors, groups,
mask_registers, prio_registers, NULL);
static struct intc_vect vectors_irq[] __initdata = ;
static struct intc_sense_reg sense_registers[] __initdata = ;
static DECLARE_INTC_DESC(intc_desc_irq, "shx3-irq", vectors_irq, groups,
mask_registers, prio_registers, sense_registers);
static struct intc_vect vectors_irl[] __initdata = ;
static DECLARE_INTC_DESC(intc_desc_irl, "shx3-irl", vectors_irl, groups,
mask_registers, prio_registers, NULL);
void __init plat_irq_setup_pins(int mode)
void __init plat_irq_setup(void)
void __init plat_mem_setup(void)
