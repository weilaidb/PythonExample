static struct plat_sci_port scif0_platform_data = ;
static struct platform_device scif0_device = ;
static struct plat_sci_port scif1_platform_data = ;
static struct platform_device scif1_device = ;
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
static struct resource rtc_resources[] = ;
static struct platform_device rtc_device = ;
static const struct sh_dmae_channel sh7780_dmae0_channels[] = ;
static const struct sh_dmae_channel sh7780_dmae1_channels[] = ;
static const unsigned int ts_shift[] = TS_SHIFT;
static struct sh_dmae_pdata dma0_platform_data = ;
static struct sh_dmae_pdata dma1_platform_data = ;
static struct resource sh7780_dmae0_resources[] = ;
static struct resource sh7780_dmae1_resources[] = ;
static struct platform_device dma0_device = ;
static struct platform_device dma1_device = ;
static struct platform_device *sh7780_devices[] __initdata = ;
static int __init sh7780_devices_setup(void)
arch_initcall(sh7780_devices_setup);
static struct platform_device *sh7780_early_devices[] __initdata = ;
void __init plat_early_device_setup(void)
enum ;
static struct intc_vect vectors[] __initdata = ;
static struct intc_group groups[] __initdata = ;
static struct intc_mask_reg mask_registers[] __initdata = ;
static struct intc_prio_reg prio_registers[] __initdata = ;
static DECLARE_INTC_DESC(intc_desc, "sh7780", vectors, groups,
mask_registers, prio_registers, NULL);
static struct intc_vect irq_vectors[] __initdata = ;
static struct intc_mask_reg irq_mask_registers[] __initdata = ;
static struct intc_prio_reg irq_prio_registers[] __initdata = ;
static struct intc_sense_reg irq_sense_registers[] __initdata = ;
static struct intc_mask_reg irq_ack_registers[] __initdata = ;
static DECLARE_INTC_DESC_ACK(intc_irq_desc, "sh7780-irq", irq_vectors,
NULL, irq_mask_registers, irq_prio_registers,
irq_sense_registers, irq_ack_registers);
static struct intc_vect irl_vectors[] __initdata = ;
static struct intc_mask_reg irl3210_mask_registers[] __initdata = ;
static struct intc_mask_reg irl7654_mask_registers[] __initdata = ;
static DECLARE_INTC_DESC(intc_irl7654_desc, "sh7780-irl7654", irl_vectors,
NULL, irl7654_mask_registers, NULL, NULL);
static DECLARE_INTC_DESC(intc_irl3210_desc, "sh7780-irl3210", irl_vectors,
NULL, irl3210_mask_registers, NULL, NULL);
#define INTC_ICR0	0xffd00000
#define INTC_INTMSK0	0xffd00044
#define INTC_INTMSK1	0xffd00048
#define INTC_INTMSK2	0xffd40080
#define INTC_INTMSKCLR1	0xffd00068
#define INTC_INTMSKCLR2	0xffd40084
void __init plat_irq_setup(void)
void __init plat_irq_setup_pins(int mode)
