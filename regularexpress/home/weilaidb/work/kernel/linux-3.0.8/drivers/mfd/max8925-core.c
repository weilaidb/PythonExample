static struct resource backlight_resources[] = ;
static struct mfd_cell backlight_devs[] = ;
static struct resource touch_resources[] = ;
static struct mfd_cell touch_devs[] = ;
static struct resource power_supply_resources[] = ;
static struct mfd_cell power_devs[] = ;
static struct resource rtc_resources[] = ;
static struct mfd_cell rtc_devs[] = ;
static struct resource onkey_resources[] = ;
static struct mfd_cell onkey_devs[] = ;
#define MAX8925_REG_RESOURCE(_start, _end)	\
static struct resource regulator_resources[] = ;
#define MAX8925_REG_DEVS(_id)						\
static struct mfd_cell regulator_devs[] = ;
enum ;
struct max8925_irq_data ;
static struct max8925_irq_data max8925_irqs[] = ;
static inline struct max8925_irq_data *irq_to_max8925(struct max8925_chip *chip,
int irq)
static irqreturn_t max8925_irq(int irq, void *data)
static irqreturn_t max8925_tsc_irq(int irq, void *data)
static void max8925_irq_lock(struct irq_data *data)
static void max8925_irq_sync_unlock(struct irq_data *data)
static void max8925_irq_enable(struct irq_data *data)
static void max8925_irq_disable(struct irq_data *data)
static struct irq_chip max8925_irq_chip = ;
static int max8925_irq_init(struct max8925_chip *chip, int irq,
struct max8925_platform_data *pdata)
int __devinit max8925_device_init(struct max8925_chip *chip,
struct max8925_platform_data *pdata)
void __devexit max8925_device_exit(struct max8925_chip *chip)
MODULE_DESCRIPTION("PMIC Driver for Maxim MAX8925");
MODULE_AUTHOR("Haojian Zhuang <haojian.zhuang@marvell.com");
MODULE_LICENSE("GPL");
