#define MC13783_TS_NAME	"mc13783-ts"
#define DEFAULT_SAMPLE_TOLERANCE 300
static unsigned int sample_tolerance = DEFAULT_SAMPLE_TOLERANCE;
module_param(sample_tolerance, uint, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(sample_tolerance,
"If the minimal and maximal value read out for one axis (out "
"of three) differ by this value (default: "
__stringify(DEFAULT_SAMPLE_TOLERANCE) ") or more, the reading "
"is supposed to be wrong and is discarded.  Set to 0 to "
"disable this check.");
struct mc13783_ts_priv ;
static irqreturn_t mc13783_ts_handler(int irq, void *data)
#define sort3(a0, a1, a2) ()
static void mc13783_ts_report_sample(struct mc13783_ts_priv *priv)
static void mc13783_ts_work(struct work_struct *work)
static int mc13783_ts_open(struct input_dev *dev)
static void mc13783_ts_close(struct input_dev *dev)
static int __init mc13783_ts_probe(struct platform_device *pdev)
static int __devexit mc13783_ts_remove(struct platform_device *pdev)
static struct platform_driver mc13783_ts_driver = ;
static int __init mc13783_ts_init(void)
module_init(mc13783_ts_init);
static void __exit mc13783_ts_exit(void)
module_exit(mc13783_ts_exit);
MODULE_DESCRIPTION("MC13783 input touchscreen driver");
MODULE_AUTHOR("Sascha Hauer <s.hauer@pengutronix.de>");
MODULE_LICENSE("GPL v2");
MODULE_ALIAS("platform:" MC13783_TS_NAME);
