#define SHARPSL_CHARGE_ON_VOLT         0x99
#define SHARPSL_CHARGE_ON_TEMP         0xe0
#define SHARPSL_CHARGE_ON_ACIN_HIGH    0x9b
#define SHARPSL_CHARGE_ON_ACIN_LOW     0x34
#define SHARPSL_FATAL_ACIN_VOLT        182
#define SHARPSL_FATAL_NOACIN_VOLT      170
static int spitz_last_ac_status;
static struct gpio spitz_charger_gpios[] = ;
static void spitz_charger_init(void)
static void spitz_measure_temp(int on)
static void spitz_charge(int on)
static void spitz_discharge(int on)
static void spitz_discharge1(int on)
static unsigned long gpio18_config[] = ;
static void spitz_presuspend(void)
static void spitz_postsuspend(void)
static int spitz_should_wakeup(unsigned int resume_on_alarm)
static unsigned long spitz_charger_wakeup(void)
unsigned long spitzpm_read_devdata(int type)
struct sharpsl_charger_machinfo spitz_pm_machinfo = ;
static struct platform_device *spitzpm_device;
static int __devinit spitzpm_init(void)
static void spitzpm_exit(void)
module_init(spitzpm_init);
module_exit(spitzpm_exit);
