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
static struct sh_mobile_sdhi_info sdhi0_info = ;
static struct resource sdhi0_resources[] = ;
static struct platform_device sdhi0_device = ;
static struct sh_mobile_sdhi_info sdhi1_info = ;
static struct resource sdhi1_resources[] = ;
static struct platform_device sdhi1_device = ;
static struct platform_device *g4evm_devices[] __initdata = ;
static struct map_desc g4evm_io_desc[] __initdata = ;
static void __init g4evm_map_io(void)
#define GPIO_SDHID0_D0	0xe60520fc
#define GPIO_SDHID0_D1	0xe60520fd
#define GPIO_SDHID0_D2	0xe60520fe
#define GPIO_SDHID0_D3	0xe60520ff
#define GPIO_SDHICMD0	0xe6052100
#define GPIO_SDHID1_D0	0xe6052103
#define GPIO_SDHID1_D1	0xe6052104
#define GPIO_SDHID1_D2	0xe6052105
#define GPIO_SDHID1_D3	0xe6052106
#define GPIO_SDHICMD1	0xe6052107
static void __init gpio_pull_up(u32 addr)
static void __init g4evm_init(void)
static void __init g4evm_timer_init(void)
static struct sys_timer g4evm_timer = ;
MACHINE_START(G4EVM, "g4evm")
.map_io		= g4evm_map_io,
.init_irq	= sh7377_init_irq,
.handle_irq	= shmobile_handle_irq_intc,
.init_machine	= g4evm_init,
.timer		= &g4evm_timer,
MACHINE_END
