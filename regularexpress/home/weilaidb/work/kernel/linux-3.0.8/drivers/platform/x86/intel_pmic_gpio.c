#define pr_fmt(fmt) "%s: " fmt, __func__
#define DRIVER_NAME "pmic_gpio"
enum pmic_gpio_register ;
#define GPIO_DRV 0x01
#define GPIO_DIR 0x02
#define GPIO_DIN 0x04
#define GPIO_DOU 0x08
#define GPIO_INTCTL 0x30
#define GPIO_DBC 0xc0
#define GPOSW_DRV 0x01
#define GPOSW_DOU 0x08
#define GPOSW_RDRV 0x30
#define GPIO_UPDATE_TYPE	0x80000000
#define NUM_GPIO 24
struct pmic_gpio ;
static void pmic_program_irqtype(int gpio, int type)
;
static int pmic_gpio_direction_input(struct gpio_chip *chip, unsigned offset)
static int pmic_gpio_direction_output(struct gpio_chip *chip,
unsigned offset, int value)
static int pmic_gpio_get(struct gpio_chip *chip, unsigned offset)
static void pmic_gpio_set(struct gpio_chip *chip, unsigned offset, int value)
static int pmic_irq_type(struct irq_data *data, unsigned type)
static int pmic_gpio_to_irq(struct gpio_chip *chip, unsigned offset)
static void pmic_bus_lock(struct irq_data *data)
static void pmic_bus_sync_unlock(struct irq_data *data)
static void pmic_irq_unmask(struct irq_data *data)
static void pmic_irq_mask(struct irq_data *data)
static struct irq_chip pmic_irqchip = ;
static irqreturn_t pmic_irq_handler(int irq, void *data)
static int __devinit platform_pmic_gpio_probe(struct platform_device *pdev)
static struct platform_driver platform_pmic_gpio_driver = ;
static int __init platform_pmic_gpio_init(void)
subsys_initcall(platform_pmic_gpio_init);
MODULE_AUTHOR("Alek Du <alek.du@intel.com>");
MODULE_DESCRIPTION("Intel Moorestown PMIC GPIO driver");
MODULE_LICENSE("GPL v2");
