#define INT_STATUS_NUM			3
static struct resource bk_resources[] __devinitdata = ;
static struct resource led_resources[] __devinitdata = ;
static struct resource regulator_resources[] __devinitdata = ;
static struct resource touch_resources[] __devinitdata = ;
static struct resource onkey_resources[] __devinitdata = ;
static struct resource codec_resources[] __devinitdata = ;
static struct resource battery_resources[] __devinitdata = ;
static struct resource charger_resources[] __devinitdata = ;
static struct resource rtc_resources[] __devinitdata = ;
static struct mfd_cell bk_devs[] = ;
static struct mfd_cell led_devs[] = ;
static struct mfd_cell regulator_devs[] = ;
static struct mfd_cell touch_devs[] = ;
static struct mfd_cell onkey_devs[] = ;
static struct mfd_cell codec_devs[] = ;
static struct mfd_cell power_devs[] = ;
static struct mfd_cell rtc_devs[] = ;
struct pm860x_irq_data ;
static struct pm860x_irq_data pm860x_irqs[] = ;
static irqreturn_t pm860x_irq(int irq, void *data)
static void pm860x_irq_lock(struct irq_data *data)
static void pm860x_irq_sync_unlock(struct irq_data *data)
static void pm860x_irq_enable(struct irq_data *data)
static void pm860x_irq_disable(struct irq_data *data)
static struct irq_chip pm860x_irq_chip = ;
static int __devinit device_gpadc_init(struct pm860x_chip *chip,
struct pm860x_platform_data *pdata)
static int __devinit device_irq_init(struct pm860x_chip *chip,
struct pm860x_platform_data *pdata)
static void device_irq_exit(struct pm860x_chip *chip)
static void __devinit device_bk_init(struct pm860x_chip *chip,
struct pm860x_platform_data *pdata)
static void __devinit device_led_init(struct pm860x_chip *chip,
struct pm860x_platform_data *pdata)
static void __devinit device_regulator_init(struct pm860x_chip *chip,
struct pm860x_platform_data *pdata)
static void __devinit device_rtc_init(struct pm860x_chip *chip,
struct pm860x_platform_data *pdata)
static void __devinit device_touch_init(struct pm860x_chip *chip,
struct pm860x_platform_data *pdata)
static void __devinit device_power_init(struct pm860x_chip *chip,
struct pm860x_platform_data *pdata)
static void __devinit device_onkey_init(struct pm860x_chip *chip,
struct pm860x_platform_data *pdata)
static void __devinit device_codec_init(struct pm860x_chip *chip,
struct pm860x_platform_data *pdata)
static void __devinit device_8607_init(struct pm860x_chip *chip,
struct i2c_client *i2c,
struct pm860x_platform_data *pdata)
int __devinit pm860x_device_init(struct pm860x_chip *chip,
struct pm860x_platform_data *pdata)
void __devexit pm860x_device_exit(struct pm860x_chip *chip)
MODULE_DESCRIPTION("PMIC Driver for Marvell 88PM860x");
MODULE_AUTHOR("Haojian Zhuang <haojian.zhuang@marvell.com>");
MODULE_LICENSE("GPL");
