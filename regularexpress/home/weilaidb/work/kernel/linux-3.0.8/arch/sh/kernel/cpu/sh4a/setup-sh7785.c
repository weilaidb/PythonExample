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
static const struct sh_dmae_channel sh7785_dmae0_channels[] = ;
static const struct sh_dmae_channel sh7785_dmae1_channels[] = ;
static const unsigned int ts_shift[] = TS_SHIFT;
static struct sh_dmae_pdata dma0_platform_data = ;
static struct sh_dmae_pdata dma1_platform_data = ;
static struct resource sh7785_dmae0_resources[] = ;
static struct resource sh7785_dmae1_resources[] = ;
static struct platform_device dma0_device = ;
static struct platform_device dma1_device = ;
static struct platform_device *sh7785_devices[] __initdata = ;
static int __init sh7785_devices_setup(void)
arch_initcall(sh7785_devices_setup);
static struct platform_device *sh7785_early_devices[] __initdata = ;
void __init plat_early_device_setup(void)
enum ;
static struct intc_vect vectors[] __initdata = ;
static struct intc_group groups[] __initdata = ;
static struct intc_mask_reg mask_registers[] __initdata = ;
static struct intc_prio_reg prio_registers[] __initdata = ;
static DECLARE_INTC_DESC(intc_desc, "sh7785", vectors, groups,
mask_registers, prio_registers, NULL);
static struct intc_vect vectors_irq0123[] __initdata = ;
static struct intc_vect vectors_irq4567[] __initdata = ;
static struct intc_sense_reg sense_registers[] __initdata = ;
static struct intc_mask_reg ack_registers[] __initdata = ;
static DECLARE_INTC_DESC_ACK(intc_desc_irq0123, "sh7785-irq0123",
vectors_irq0123, NULL, mask_registers,
prio_registers, sense_registers, ack_registers);
static DECLARE_INTC_DESC_ACK(intc_desc_irq4567, "sh7785-irq4567",
vectors_irq4567, NULL, mask_registers,
prio_registers, sense_registers, ack_registers);
static struct intc_vect vectors_irl0123[] __initdata = ;
static struct intc_vect vectors_irl4567[] __initdata = ;
static DECLARE_INTC_DESC(intc_desc_irl0123, "sh7785-irl0123", vectors_irl0123,
NULL, mask_registers, NULL, NULL);
static DECLARE_INTC_DESC(intc_desc_irl4567, "sh7785-irl4567", vectors_irl4567,
NULL, mask_registers, NULL, NULL);
#define INTC_ICR0	0xffd00000
#define INTC_INTMSK0	0xffd00044
#define INTC_INTMSK1	0xffd00048
#define INTC_INTMSK2	0xffd40080
#define INTC_INTMSKCLR1	0xffd00068
#define INTC_INTMSKCLR2	0xffd40084
void __init plat_irq_setup(void)
void __init plat_irq_setup_pins(int mode)
void __init plat_mem_setup(void)
