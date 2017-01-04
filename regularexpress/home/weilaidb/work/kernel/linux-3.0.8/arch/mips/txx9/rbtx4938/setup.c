static void rbtx4938_machine_restart(char *command)
static void __init rbtx4938_pci_setup(void)
#define	SEEPROM1_CS	7
#define	SEEPROM2_CS	0
#define	SEEPROM3_CS	1
#define	SRTC_CS	2
#define SPI_BUSNO	0
static int __init rbtx4938_ethaddr_init(void)
static void __init rbtx4938_spi_setup(void)
static struct resource rbtx4938_fpga_resource;
static void __init rbtx4938_time_init(void)
static void __init rbtx4938_mem_setup(void)
static void __init rbtx4938_ne_init(void)
static DEFINE_SPINLOCK(rbtx4938_spi_gpio_lock);
static void rbtx4938_spi_gpio_set(struct gpio_chip *chip, unsigned int offset,
int value)
static int rbtx4938_spi_gpio_dir_out(struct gpio_chip *chip,
unsigned int offset, int value)
static struct gpio_chip rbtx4938_spi_gpio_chip = ;
static int __init rbtx4938_spi_init(void)
static void __init rbtx4938_mtd_init(void)
static void __init rbtx4938_arch_init(void)
static void __init rbtx4938_device_init(void)
struct txx9_board_vec rbtx4938_vec __initdata = ;
