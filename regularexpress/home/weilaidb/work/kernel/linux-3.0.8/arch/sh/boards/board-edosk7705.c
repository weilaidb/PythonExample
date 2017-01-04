#define SMC_IOBASE	0xA2000000
#define SMC_IO_OFFSET	0x300
#define SMC_IOADDR	(SMC_IOBASE + SMC_IO_OFFSET)
#define ETHERNET_IRQ	0x09
static void __init sh_edosk7705_init_irq(void)
static struct smc91x_platdata smc91x_info = ;
static struct resource smc91x_res[] = ;
static struct platform_device smc91x_dev = ;
static struct platform_device *edosk7705_devices[] __initdata = ;
static int __init init_edosk7705_devices(void)
device_initcall(init_edosk7705_devices);
static struct sh_machine_vector mv_edosk7705 __initmv = ;
