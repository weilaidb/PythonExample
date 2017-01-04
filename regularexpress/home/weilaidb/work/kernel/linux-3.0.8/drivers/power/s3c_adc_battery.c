#define BAT_POLL_INTERVAL		10000
#define JITTER_DELAY			500
struct s3c_adc_bat ;
static struct delayed_work bat_work;
static void s3c_adc_bat_ext_power_changed(struct power_supply *psy)
static enum power_supply_property s3c_adc_backup_bat_props[] = ;
static int s3c_adc_backup_bat_get_property(struct power_supply *psy,
enum power_supply_property psp,
union power_supply_propval *val)
static struct s3c_adc_bat backup_bat = ;
static enum power_supply_property s3c_adc_main_bat_props[] = ;
static int calc_full_volt(int volt_val, int cur_val, int impedance)
static int charge_finished(struct s3c_adc_bat *bat)
static int s3c_adc_bat_get_property(struct power_supply *psy,
enum power_supply_property psp,
union power_supply_propval *val)
static struct s3c_adc_bat main_bat = ;
static void s3c_adc_bat_work(struct work_struct *work)
static irqreturn_t s3c_adc_bat_charged(int irq, void *dev_id)
static int __init s3c_adc_bat_probe(struct platform_device *pdev)
static int s3c_adc_bat_remove(struct platform_device *pdev)
static int s3c_adc_bat_suspend(struct platform_device *pdev,
pm_message_t state)
static int s3c_adc_bat_resume(struct platform_device *pdev)
#define s3c_adc_bat_suspend NULL
#define s3c_adc_bat_resume NULL
static struct platform_driver s3c_adc_bat_driver = ;
static int __init s3c_adc_bat_init(void)
module_init(s3c_adc_bat_init);
static void __exit s3c_adc_bat_exit(void)
module_exit(s3c_adc_bat_exit);
MODULE_AUTHOR("Vasily Khoruzhick <anarsoul@gmail.com>");
MODULE_DESCRIPTION("iPAQ H1930/H1940/RX1950 battery controller driver");
MODULE_LICENSE("GPL");
