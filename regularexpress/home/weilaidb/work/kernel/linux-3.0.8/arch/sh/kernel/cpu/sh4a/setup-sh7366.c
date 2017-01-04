static struct plat_sci_port scif0_platform_data = ;
static struct platform_device scif0_device = ;
static struct resource iic_resources[] = ;
static struct platform_device iic_device = ;
static struct r8a66597_platdata r8a66597_data = ;
static struct resource usb_host_resources[] = ;
static struct platform_device usb_host_device = ;
static struct uio_info vpu_platform_data = ;
static struct resource vpu_resources[] = ;
static struct platform_device vpu_device = ;
static struct uio_info veu0_platform_data = ;
static struct resource veu0_resources[] = ;
static struct platform_device veu0_device = ;
static struct uio_info veu1_platform_data = ;
static struct resource veu1_resources[] = ;
static struct platform_device veu1_device = ;
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
static struct platform_device *sh7366_devices[] __initdata = ;
static int __init sh7366_devices_setup(void)
arch_initcall(sh7366_devices_setup);
static struct platform_device *sh7366_early_devices[] __initdata = ;
void __init plat_early_device_setup(void)
enum ;
static struct intc_vect vectors[] __initdata = ;
static struct intc_group groups[] __initdata = ;
static struct intc_mask_reg mask_registers[] __initdata = ;
static struct intc_prio_reg prio_registers[] __initdata = ;
static struct intc_sense_reg sense_registers[] __initdata = ;
static struct intc_mask_reg ack_registers[] __initdata = ;
static struct intc_desc intc_desc __initdata = ;
void __init plat_irq_setup(void)
void __init plat_mem_setup(void)
