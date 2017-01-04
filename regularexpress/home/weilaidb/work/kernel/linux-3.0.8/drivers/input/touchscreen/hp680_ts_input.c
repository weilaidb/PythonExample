#define MODNAME "hp680_ts_input"
#define HP680_TS_ABS_X_MIN	40
#define HP680_TS_ABS_X_MAX	950
#define HP680_TS_ABS_Y_MIN	80
#define HP680_TS_ABS_Y_MAX	910
#define	PHDR	0xa400012e
#define SCPDR	0xa4000136
static void do_softint(struct work_struct *work);
static struct input_dev *hp680_ts_dev;
static DECLARE_DELAYED_WORK(work, do_softint);
static void do_softint(struct work_struct *work)
static irqreturn_t hp680_ts_interrupt(int irq, void *dev)
static int __init hp680_ts_init(void)
static void __exit hp680_ts_exit(void)
module_init(hp680_ts_init);
module_exit(hp680_ts_exit);
MODULE_AUTHOR("Andriy Skulysh, askulysh@image.kiev.ua");
MODULE_DESCRIPTION("HP Jornada 680 touchscreen driver");
MODULE_LICENSE("GPL");
