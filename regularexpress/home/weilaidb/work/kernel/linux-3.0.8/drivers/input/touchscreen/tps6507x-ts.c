#define TSC_DEFAULT_POLL_PERIOD 30
#define TPS_DEFAULT_MIN_PRESSURE 0x30
#define MAX_10BIT ((1 << 10) - 1)
#define	TPS6507X_ADCONFIG_CONVERT_TS (TPS6507X_ADCONFIG_AD_ENABLE | \
TPS6507X_ADCONFIG_START_CONVERSION | \
TPS6507X_ADCONFIG_INPUT_REAL_TSC)
#define	TPS6507X_ADCONFIG_POWER_DOWN_TS (TPS6507X_ADCONFIG_INPUT_REAL_TSC)
struct ts_event ;
struct tps6507x_ts ;
static int tps6507x_read_u8(struct tps6507x_ts *tsc, u8 reg, u8 *data)
static int tps6507x_write_u8(struct tps6507x_ts *tsc, u8 reg, u8 data)
static s32 tps6507x_adc_conversion(struct tps6507x_ts *tsc,
u8 tsc_mode, u16 *value)
static s32 tps6507x_adc_standby(struct tps6507x_ts *tsc)
static void tps6507x_ts_handler(struct work_struct *work)
static int tps6507x_ts_probe(struct platform_device *pdev)
static int __devexit tps6507x_ts_remove(struct platform_device *pdev)
static struct platform_driver tps6507x_ts_driver = ;
static int __init tps6507x_ts_init(void)
module_init(tps6507x_ts_init);
static void __exit tps6507x_ts_exit(void)
module_exit(tps6507x_ts_exit);
MODULE_AUTHOR("Todd Fischer <todd.fischer@ridgerun.com>");
MODULE_DESCRIPTION("TPS6507x - TouchScreen driver");
MODULE_LICENSE("GPL v2");
MODULE_ALIAS("platform:tps6507x-tsc");
