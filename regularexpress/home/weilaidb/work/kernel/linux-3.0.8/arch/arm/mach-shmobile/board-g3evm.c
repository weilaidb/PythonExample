static struct mtd_partition nor_flash_partitions[] = ;
static struct physmap_flash_data nor_flash_data = ;
static struct resource nor_flash_resources[] = ;
static struct platform_device nor_flash_device = ;
static void usb_host_port_power(int port, int power)
static struct r8a66597_platdata usb_host_data = ;
static struct resource usb_host_resources[] = ;
static struct platform_device usb_host_device = ;
static struct sh_keysc_info keysc_info = ;
static struct resource keysc_resources[] = ;
static struct platform_device keysc_device = ;
static struct mtd_partition nand_partition_info[] = ;
static struct resource nand_flash_resources[] = ;
static struct sh_flctl_platform_data nand_flash_data = ;
static struct platform_device nand_flash_device = ;
static struct resource irda_resources[] = ;
static struct platform_device irda_device = ;
static struct platform_device *g3evm_devices[] __initdata = ;
static struct map_desc g3evm_io_desc[] __initdata = ;
static void __init g3evm_map_io(void)
static void __init g3evm_init(void)
static void __init g3evm_timer_init(void)
static struct sys_timer g3evm_timer = ;
MACHINE_START(G3EVM, "g3evm")
.map_io		= g3evm_map_io,
.init_irq	= sh7367_init_irq,
.handle_irq	= shmobile_handle_irq_intc,
.init_machine	= g3evm_init,
.timer		= &g3evm_timer,
MACHINE_END
