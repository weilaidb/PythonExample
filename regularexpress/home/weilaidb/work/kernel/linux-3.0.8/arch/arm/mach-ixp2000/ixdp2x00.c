static volatile unsigned long *board_irq_mask;
static volatile unsigned long *board_irq_stat;
static unsigned long board_irq_count;
static struct slowport_cfg slowport_cpld_cfg = ;
static void ixdp2x00_irq_mask(struct irq_data *d)
static void ixdp2x00_irq_unmask(struct irq_data *d)
static void ixdp2x00_irq_handler(unsigned int irq, struct irq_desc *desc)
static struct irq_chip ixdp2x00_cpld_irq_chip = ;
void __init ixdp2x00_init_irq(volatile unsigned long *stat_reg, volatile unsigned long *mask_reg, unsigned long nr_of_irqs)
static struct map_desc ixdp2x00_io_desc __initdata = ;
void __init ixdp2x00_map_io(void)
void ixdp2x00_slave_pci_postinit(void)
static struct flash_platform_data ixdp2x00_platform_data = ;
static struct ixp2000_flash_data ixdp2x00_flash_data = ;
static struct resource ixdp2x00_flash_resource = ;
static struct platform_device ixdp2x00_flash = ;
static struct ixp2000_i2c_pins ixdp2x00_i2c_gpio_pins = ;
static struct platform_device ixdp2x00_i2c_controller = ;
static struct platform_device *ixdp2x00_devices[] __initdata = ;
void __init ixdp2x00_init_machine(void)
