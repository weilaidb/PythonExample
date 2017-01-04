#undef DEBUG
#define SHARPSL_CHARGE_ON_TIME_INTERVAL        (msecs_to_jiffies(1*60*1000))
#define SHARPSL_CHARGE_FINISH_TIME             (msecs_to_jiffies(10*60*1000))
#define SHARPSL_BATCHK_TIME                    (msecs_to_jiffies(15*1000))
#define SHARPSL_BATCHK_TIME_SUSPEND            (60*10)
#define SHARPSL_WAIT_CO_TIME                   15
#define SHARPSL_WAIT_DISCHARGE_ON              100
#define SHARPSL_CHECK_BATTERY_WAIT_TIME_TEMP   10
#define SHARPSL_CHECK_BATTERY_WAIT_TIME_VOLT   10
#define SHARPSL_CHECK_BATTERY_WAIT_TIME_ACIN   10
#define SHARPSL_CHARGE_WAIT_TIME               15
#define SHARPSL_CHARGE_CO_CHECK_TIME           5
#define SHARPSL_CHARGE_RETRY_CNT               1
static int sharpsl_off_charge_battery(void);
static int sharpsl_check_battery_voltage(void);
static int sharpsl_fatal_check(void);
static int sharpsl_check_battery_temp(void);
static int sharpsl_ac_check(void);
static int sharpsl_average_value(int ad);
static void sharpsl_average_clear(void);
static void sharpsl_charge_toggle(struct work_struct *private_);
static void sharpsl_battery_thread(struct work_struct *private_);
struct sharpsl_pm_status sharpsl_pm;
static DECLARE_DELAYED_WORK(toggle_charger, sharpsl_charge_toggle);
static DECLARE_DELAYED_WORK(sharpsl_bat, sharpsl_battery_thread);
DEFINE_LED_TRIGGER(sharpsl_charge_led_trigger);
struct battery_thresh sharpsl_battery_levels_acin[] = ;
struct battery_thresh sharpsl_battery_levels_noac[] = ;
#define MAXCTRL_PD0      (1u << 0)
#define MAXCTRL_PD1      (1u << 1)
#define MAXCTRL_SGL      (1u << 2)
#define MAXCTRL_UNI      (1u << 3)
#define MAXCTRL_SEL_SH   4
#define MAXCTRL_STR      (1u << 7)
int sharpsl_pm_pxa_read_max1111(int channel)
static int get_percentage(int voltage)
static int get_apm_status(int voltage)
void sharpsl_battery_kick(void)
EXPORT_SYMBOL(sharpsl_battery_kick);
static void sharpsl_battery_thread(struct work_struct *private_)
void sharpsl_pm_led(int val)
static void sharpsl_charge_on(void)
static void sharpsl_charge_off(void)
static void sharpsl_charge_error(void)
static void sharpsl_charge_toggle(struct work_struct *private_)
static void sharpsl_ac_timer(unsigned long data)
static irqreturn_t sharpsl_ac_isr(int irq, void *dev_id)
static void sharpsl_chrg_full_timer(unsigned long data)
static irqreturn_t sharpsl_chrg_full_isr(int irq, void *dev_id)
static irqreturn_t sharpsl_fatal_isr(int irq, void *dev_id)
#define SHARPSL_CNV_VALUE_NUM    10
static int sharpsl_ad_index;
static void sharpsl_average_clear(void)
static int sharpsl_average_value(int ad)
static int get_select_val(int *val)
static int sharpsl_check_battery_temp(void)
static int sharpsl_check_battery_voltage(void)
static int sharpsl_ac_check(void)
static int sharpsl_pm_suspend(struct platform_device *pdev, pm_message_t state)
static int sharpsl_pm_resume(struct platform_device *pdev)
static void corgi_goto_sleep(unsigned long alarm_time, unsigned int alarm_enable, suspend_state_t state)
static int corgi_enter_suspend(unsigned long alarm_time, unsigned int alarm_enable, suspend_state_t state)
static int corgi_pxa_pm_enter(suspend_state_t state)
static int sharpsl_fatal_check(void)
static int sharpsl_off_charge_error(void)
static int sharpsl_off_charge_battery(void)
#define sharpsl_pm_suspend	NULL
#define sharpsl_pm_resume	NULL
static ssize_t battery_percentage_show(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t battery_voltage_show(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(battery_percentage, 0444, battery_percentage_show, NULL);
static DEVICE_ATTR(battery_voltage, 0444, battery_voltage_show, NULL);
extern void (*apm_get_power_status)(struct apm_power_info *);
static void sharpsl_apm_get_power_status(struct apm_power_info *info)
static const struct platform_suspend_ops sharpsl_pm_ops = ;
static int __devinit sharpsl_pm_probe(struct platform_device *pdev)
static int sharpsl_pm_remove(struct platform_device *pdev)
static struct platform_driver sharpsl_pm_driver = ;
static int __devinit sharpsl_pm_init(void)
static void sharpsl_pm_exit(void)
late_initcall(sharpsl_pm_init);
module_exit(sharpsl_pm_exit);
