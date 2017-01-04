static struct resource rtc_resources[] = ;
static struct platform_device rtc_device = ;
static struct plat_sci_port sci_platform_data = ;
static struct platform_device sci_device = ;
static struct plat_sci_port scif_platform_data = ;
static struct platform_device scif_device = ;
static struct sh_timer_config tmu0_platform_data = ;
static struct resource tmu0_resources[] = ;
static struct platform_device tmu0_device = ;
static struct sh_timer_config tmu1_platform_data = ;
static struct resource tmu1_resources[] = ;
static struct platform_device tmu1_device = ;
static struct sh_timer_config tmu2_platform_data = ;
static struct resource tmu2_resources[] = ;
static struct platform_device tmu2_device = ;
#if defined(CONFIG_CPU_SUBTYPE_SH7750R) || \
defined(CONFIG_CPU_SUBTYPE_SH7751) || \
defined(CONFIG_CPU_SUBTYPE_SH7751R)
static struct sh_timer_config tmu3_platform_data = ;
static struct resource tmu3_resources[] = ;
static struct platform_device tmu3_device = ;
static struct sh_timer_config tmu4_platform_data = ;
static struct resource tmu4_resources[] = ;
static struct platform_device tmu4_device = ;
static struct platform_device *sh7750_devices[] __initdata = ;
static int __init sh7750_devices_setup(void)
arch_initcall(sh7750_devices_setup);
static struct platform_device *sh7750_early_devices[] __initdata = ;
void __init plat_early_device_setup(void)
enum ;
static struct intc_vect vectors[] __initdata = ;
static struct intc_prio_reg prio_registers[] __initdata = ;
static DECLARE_INTC_DESC(intc_desc, "sh7750", vectors, NULL,
NULL, prio_registers, NULL);
#if defined(CONFIG_CPU_SUBTYPE_SH7750) || \
defined(CONFIG_CPU_SUBTYPE_SH7750S) || \
defined(CONFIG_CPU_SUBTYPE_SH7751) || \
defined(CONFIG_CPU_SUBTYPE_SH7091)
static struct intc_vect vectors_dma4[] __initdata = ;
static DECLARE_INTC_DESC(intc_desc_dma4, "sh7750_dma4",
vectors_dma4, NULL,
NULL, prio_registers, NULL);
#if defined(CONFIG_CPU_SUBTYPE_SH7750R) || defined(CONFIG_CPU_SUBTYPE_SH7751R)
static struct intc_vect vectors_dma8[] __initdata = ;
static DECLARE_INTC_DESC(intc_desc_dma8, "sh7750_dma8",
vectors_dma8, NULL,
NULL, prio_registers, NULL);
#if defined(CONFIG_CPU_SUBTYPE_SH7750R) || \
defined(CONFIG_CPU_SUBTYPE_SH7751) || \
defined(CONFIG_CPU_SUBTYPE_SH7751R)
static struct intc_vect vectors_tmu34[] __initdata = ;
static struct intc_mask_reg mask_registers[] __initdata = ;
static DECLARE_INTC_DESC(intc_desc_tmu34, "sh7750_tmu34",
vectors_tmu34, NULL,
mask_registers, prio_registers, NULL);
static struct intc_vect vectors_irlm[] __initdata = ;
static DECLARE_INTC_DESC(intc_desc_irlm, "sh7750_irlm", vectors_irlm, NULL,
NULL, prio_registers, NULL);
#if defined(CONFIG_CPU_SUBTYPE_SH7751) || defined(CONFIG_CPU_SUBTYPE_SH7751R)
static struct intc_vect vectors_pci[] __initdata = ;
static struct intc_group groups_pci[] __initdata = ;
static DECLARE_INTC_DESC(intc_desc_pci, "sh7750_pci", vectors_pci, groups_pci,
mask_registers, prio_registers, NULL);
#if defined(CONFIG_CPU_SUBTYPE_SH7750) || \
defined(CONFIG_CPU_SUBTYPE_SH7750S) || \
defined(CONFIG_CPU_SUBTYPE_SH7091)
void __init plat_irq_setup(void)
#if defined(CONFIG_CPU_SUBTYPE_SH7750R)
void __init plat_irq_setup(void)
#if defined(CONFIG_CPU_SUBTYPE_SH7751)
void __init plat_irq_setup(void)
#if defined(CONFIG_CPU_SUBTYPE_SH7751R)
void __init plat_irq_setup(void)
#define INTC_ICR	0xffd00000UL
#define INTC_ICR_IRLM   (1<<7)
void __init plat_irq_setup_pins(int mode)
