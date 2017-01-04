static const struct sh_dmae_slave_config sh7724_dmae_slaves[] = ;
static const struct sh_dmae_channel sh7724_dmae_channels[] = ;
static const unsigned int ts_shift[] = TS_SHIFT;
static struct sh_dmae_pdata dma_platform_data = ;
static struct resource sh7724_dmae0_resources[] = ;
static struct resource sh7724_dmae1_resources[] = ;
static struct platform_device dma0_device = ;
static struct platform_device dma1_device = ;
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
static struct resource rtc_resources[] = ;
static struct platform_device rtc_device = ;
static struct resource iic0_resources[] = ;
static struct platform_device iic0_device = ;
static struct resource iic1_resources[] = ;
static struct platform_device iic1_device = ;
static struct uio_info vpu_platform_data = ;
static struct resource vpu_resources[] = ;
static struct platform_device vpu_device = ;
static struct uio_info veu0_platform_data = ;
static struct resource veu0_resources[] = ;
static struct platform_device veu0_device = ;
static struct uio_info veu1_platform_data = ;
static struct resource veu1_resources[] = ;
static struct platform_device veu1_device = ;
static struct uio_info beu0_platform_data = ;
static struct resource beu0_resources[] = ;
static struct platform_device beu0_device = ;
static struct uio_info beu1_platform_data = ;
static struct resource beu1_resources[] = ;
static struct platform_device beu1_device = ;
static struct sh_timer_config cmt_platform_data = ;
static struct resource cmt_resources[] = ;
static struct platform_device cmt_device = ;
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
static struct uio_info jpu_platform_data = ;
static struct resource jpu_resources[] = ;
static struct platform_device jpu_device = ;
static struct uio_info spu0_platform_data = ;
static struct resource spu0_resources[] = ;
static struct platform_device spu0_device = ;
static struct uio_info spu1_platform_data = ;
static struct resource spu1_resources[] = ;
static struct platform_device spu1_device = ;
static struct platform_device *sh7724_devices[] __initdata = ;
static int __init sh7724_devices_setup(void)
arch_initcall(sh7724_devices_setup);
static struct platform_device *sh7724_early_devices[] __initdata = ;
void __init plat_early_device_setup(void)
#define RAMCR_CACHE_L2FC	0x0002
#define RAMCR_CACHE_L2E		0x0001
#define L2_CACHE_ENABLE		(RAMCR_CACHE_L2E|RAMCR_CACHE_L2FC)
void l2_cache_init(void)
enum ;
static struct intc_vect vectors[] __initdata = ;
static struct intc_group groups[] __initdata = ;
static struct intc_mask_reg mask_registers[] __initdata = ;
static struct intc_prio_reg prio_registers[] __initdata = ;
static struct intc_sense_reg sense_registers[] __initdata = ;
static struct intc_mask_reg ack_registers[] __initdata = ;
static struct intc_desc intc_desc __initdata = ;
void __init plat_irq_setup(void)
static struct  sh7724_rstandby_state;
static int sh7724_pre_sleep_notifier_call(struct notifier_block *nb,
unsigned long flags, void *unused)
static int sh7724_post_sleep_notifier_call(struct notifier_block *nb,
unsigned long flags, void *unused)
static struct notifier_block sh7724_pre_sleep_notifier = ;
static struct notifier_block sh7724_post_sleep_notifier = ;
static int __init sh7724_sleep_setup(void)
arch_initcall(sh7724_sleep_setup);
