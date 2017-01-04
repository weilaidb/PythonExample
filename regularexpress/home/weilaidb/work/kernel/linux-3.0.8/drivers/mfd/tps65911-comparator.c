#define COMP					0
#define COMP1					1
#define COMP2					2
static const u16 COMP_VSEL_TABLE[] = ;
struct comparator ;
static struct comparator tps_comparators[] = ;
static int comp_threshold_set(struct tps65910 *tps65910, int id, int voltage)
static int comp_threshold_get(struct tps65910 *tps65910, int id)
static ssize_t comp_threshold_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(comp1_threshold, S_IRUGO, comp_threshold_show, NULL);
static DEVICE_ATTR(comp2_threshold, S_IRUGO, comp_threshold_show, NULL);
static __devinit int tps65911_comparator_probe(struct platform_device *pdev)
static __devexit int tps65911_comparator_remove(struct platform_device *pdev)
static struct platform_driver tps65911_comparator_driver = ;
static int __init tps65911_comparator_init(void)
subsys_initcall(tps65911_comparator_init);
static void __exit tps65911_comparator_exit(void)
module_exit(tps65911_comparator_exit);
MODULE_AUTHOR("Jorge Eduardo Candelaria <jedu@slimlogic.co.uk>");
MODULE_DESCRIPTION("TPS65911 comparator driver");
MODULE_LICENSE("GPL v2");
MODULE_ALIAS("platform:tps65911-comparator");
