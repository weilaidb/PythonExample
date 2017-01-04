MODULE_AUTHOR("Kristoffer Ericson <kristoffer.ericson@gmail.com>");
MODULE_DESCRIPTION("HP Jornada 710/720/728 touchscreen driver");
MODULE_LICENSE("GPL v2");
struct jornada_ts ;
static void jornada720_ts_collect_data(struct jornada_ts *jornada_ts)
static int jornada720_ts_average(int coords[4])
static irqreturn_t jornada720_ts_interrupt(int irq, void *dev_id)
static int __devinit jornada720_ts_probe(struct platform_device *pdev)
static int __devexit jornada720_ts_remove(struct platform_device *pdev)
MODULE_ALIAS("platform:jornada_ts");
static struct platform_driver jornada720_ts_driver = ;
static int __init jornada720_ts_init(void)
static void __exit jornada720_ts_exit(void)
module_init(jornada720_ts_init);
module_exit(jornada720_ts_exit);
