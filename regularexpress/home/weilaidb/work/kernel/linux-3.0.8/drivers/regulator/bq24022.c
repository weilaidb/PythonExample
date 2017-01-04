static int bq24022_set_current_limit(struct regulator_dev *rdev,
int min_uA, int max_uA)
static int bq24022_get_current_limit(struct regulator_dev *rdev)
static int bq24022_enable(struct regulator_dev *rdev)
static int bq24022_disable(struct regulator_dev *rdev)
static int bq24022_is_enabled(struct regulator_dev *rdev)
static struct regulator_ops bq24022_ops = ;
static struct regulator_desc bq24022_desc = ;
static int __init bq24022_probe(struct platform_device *pdev)
static int __devexit bq24022_remove(struct platform_device *pdev)
static struct platform_driver bq24022_driver = ;
static int __init bq24022_init(void)
static void __exit bq24022_exit(void)
module_init(bq24022_init);
module_exit(bq24022_exit);
MODULE_AUTHOR("Philipp Zabel");
MODULE_DESCRIPTION("TI bq24022 Li-Ion Charger driver");
MODULE_LICENSE("GPL");
