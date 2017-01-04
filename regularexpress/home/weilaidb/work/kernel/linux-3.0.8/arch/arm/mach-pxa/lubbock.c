static unsigned long lubbock_pin_config[] __initdata = ;
#define LUB_HEXLED		__LUB_REG(LUBBOCK_FPGA_PHYS + 0x010)
#define LUB_MISC_WR		__LUB_REG(LUBBOCK_FPGA_PHYS + 0x080)
void lubbock_set_hexled(uint32_t value)
void lubbock_set_misc_wr(unsigned int mask, unsigned int set)
EXPORT_SYMBOL(lubbock_set_misc_wr);
static unsigned long lubbock_irq_enabled;
static void lubbock_mask_irq(struct irq_data *d)
static void lubbock_unmask_irq(struct irq_data *d)
static struct irq_chip lubbock_irq_chip = ;
static void lubbock_irq_handler(unsigned int irq, struct irq_desc *desc)
static void __init lubbock_init_irq(void)
static void lubbock_irq_resume(void)
static struct syscore_ops lubbock_irq_syscore_ops = ;
static int __init lubbock_irq_device_init(void)
device_initcall(lubbock_irq_device_init);
static int lubbock_udc_is_connected(void)
static struct pxa2xx_udc_mach_info udc_info __initdata = ;
static struct resource sa1111_resources[] = ;
static struct sa1111_platform_data sa1111_info = ;
static struct platform_device sa1111_device = ;
static struct pxa2xx_spi_master pxa_ssp_master_info = ;
static int lubbock_ads7846_pendown_state(void)
static struct ads7846_platform_data ads_info = ;
static void ads7846_cs(u32 command)
static struct pxa2xx_spi_chip ads_hw = ;
static struct spi_board_info spi_board_info[] __initdata = ;
static struct resource smc91x_resources[] = ;
static struct smc91x_platdata lubbock_smc91x_info = ;
static struct platform_device smc91x_device = ;
static struct resource flash_resources[] = ;
static struct mtd_partition lubbock_partitions[] = ;
static struct flash_platform_data lubbock_flash_data[2] = ;
static struct platform_device lubbock_flash_device[2] = ;
static struct platform_device *devices[] __initdata = ;
static struct pxafb_mode_info sharp_lm8v31_mode = ;
static struct pxafb_mach_info sharp_lm8v31 = ;
#define	MMC_POLL_RATE		msecs_to_jiffies(1000)
static void lubbock_mmc_poll(unsigned long);
static irq_handler_t mmc_detect_int;
static struct timer_list mmc_timer = ;
static void lubbock_mmc_poll(unsigned long data)
static irqreturn_t lubbock_detect_int(int irq, void *data)
static int lubbock_mci_init(struct device *dev,
irq_handler_t detect_int,
void *data)
static int lubbock_mci_get_ro(struct device *dev)
static void lubbock_mci_exit(struct device *dev, void *data)
static struct pxamci_platform_data lubbock_mci_platform_data = ;
static void lubbock_irda_transceiver_mode(struct device *dev, int mode)
static struct pxaficp_platform_data lubbock_ficp_platform_data = ;
static void __init lubbock_init(void)
static struct map_desc lubbock_io_desc[] __initdata = ;
static void __init lubbock_map_io(void)
MACHINE_START(LUBBOCK, "Intel DBPXA250 Development Platform (aka Lubbock)")
.map_io		= lubbock_map_io,
.nr_irqs	= LUBBOCK_NR_IRQS,
.init_irq	= lubbock_init_irq,
.timer		= &pxa_timer,
.init_machine	= lubbock_init,
MACHINE_END
