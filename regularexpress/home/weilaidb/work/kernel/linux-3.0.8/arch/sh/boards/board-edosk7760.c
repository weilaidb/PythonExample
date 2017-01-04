#define BSC_CS4BCR	0xA4FD0010
#define BSC_CS4WCR	0xA4FD0030
#define SMC_IOBASE	0xA2000000
#define SMC_IO_OFFSET	0x300
#define SMC_IOADDR	(SMC_IOBASE + SMC_IO_OFFSET)
#define ETHERNET_IRQ	5
static struct mtd_partition edosk7760_nor_flash_partitions[] = ;
static struct physmap_flash_data edosk7760_nor_flash_data = ;
static struct resource edosk7760_nor_flash_resources[] = ;
static struct platform_device edosk7760_nor_flash_device = ;
static struct sh7760_i2c_platdata i2c_pd = ;
static struct resource sh7760_i2c1_res[] = ;
static struct platform_device sh7760_i2c1_dev = ;
static struct resource sh7760_i2c0_res[] = ;
static struct platform_device sh7760_i2c0_dev = ;
static struct smc91x_platdata smc91x_info = ;
static struct resource smc91x_res[] = ;
static struct platform_device smc91x_dev = ;
static struct platform_device *edosk7760_devices[] __initdata = ;
static int __init init_edosk7760_devices(void)
device_initcall(init_edosk7760_devices);
struct sh_machine_vector mv_edosk7760 __initmv = ;
