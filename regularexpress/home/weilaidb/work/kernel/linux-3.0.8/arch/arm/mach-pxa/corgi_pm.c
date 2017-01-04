#define SHARPSL_CHARGE_ON_VOLT         0x99
#define SHARPSL_CHARGE_ON_TEMP         0xe0
#define SHARPSL_CHARGE_ON_ACIN_HIGH    0x9b
#define SHARPSL_CHARGE_ON_ACIN_LOW     0x34
#define SHARPSL_FATAL_ACIN_VOLT        182
#define SHARPSL_FATAL_NOACIN_VOLT      170
static struct gpio charger_gpios[] = ;
static void corgi_charger_init(void)
static void corgi_measure_temp(int on)
static void corgi_charge(int on)
static void corgi_discharge(int on)
static void corgi_presuspend(void)
static void corgi_postsuspend(void)
static int corgi_should_wakeup(unsigned int resume_on_alarm)
static unsigned long corgi_charger_wakeup(void)
unsigned long corgipm_read_devdata(int type)
static struct sharpsl_charger_machinfo corgi_pm_machinfo = ;
static struct platform_device *corgipm_device;
static int __devinit corgipm_init(void)
static void corgipm_exit(void)
module_init(corgipm_init);
module_exit(corgipm_exit);
