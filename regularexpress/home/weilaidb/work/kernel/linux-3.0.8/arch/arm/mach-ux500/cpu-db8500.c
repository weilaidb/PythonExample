static struct map_desc u8500_uart_io_desc[] __initdata = ;
static struct map_desc u8500_io_desc[] __initdata = ;
static struct map_desc u8500_ed_io_desc[] __initdata = ;
static struct map_desc u8500_v1_io_desc[] __initdata = ;
static struct map_desc u8500_v2_io_desc[] __initdata = ;
void __init u8500_map_io(void)
static struct resource db8500_pmu_resources[] = ;
static irqreturn_t db8500_pmu_handler(int irq, void *dev, irq_handler_t handler)
static struct arm_pmu_platdata db8500_pmu_platdata = ;
static struct platform_device db8500_pmu_device = ;
static struct platform_device db8500_prcmu_device = ;
static struct platform_device *platform_devs[] __initdata = ;
static resource_size_t __initdata db8500_gpio_base[] = ;
static void __init db8500_add_gpios(void)
static int usb_db8500_rx_dma_cfg[] = ;
static int usb_db8500_tx_dma_cfg[] = ;
void __init u8500_init_devices(void)
