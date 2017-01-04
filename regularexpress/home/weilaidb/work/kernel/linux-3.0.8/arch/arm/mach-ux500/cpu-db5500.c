static struct map_desc u5500_uart_io_desc[] __initdata = ;
static struct map_desc u5500_io_desc[] __initdata = ;
static struct resource db5500_pmu_resources[] = ;
static struct platform_device db5500_pmu_device = ;
static struct resource mbox0_resources[] = ;
static struct resource mbox1_resources[] = ;
static struct resource mbox2_resources[] = ;
static struct platform_device mbox0_device = ;
static struct platform_device mbox1_device = ;
static struct platform_device mbox2_device = ;
static struct platform_device *db5500_platform_devs[] __initdata = ;
static resource_size_t __initdata db5500_gpio_base[] = ;
static void __init db5500_add_gpios(void)
void __init u5500_map_io(void)
static int usb_db5500_rx_dma_cfg[] = ;
static int usb_db5500_tx_dma_cfg[] = ;
void __init u5500_init_devices(void)
