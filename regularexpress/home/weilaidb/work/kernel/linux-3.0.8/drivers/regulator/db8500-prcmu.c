static int power_state_active_cnt;
static DEFINE_SPINLOCK(power_state_active_lock);
static void power_state_active_enable(void)
static int power_state_active_disable(void)
int power_state_active_is_enabled(void)
struct db8500_regulator_info ;
static int db8500_regulator_enable(struct regulator_dev *rdev)
static int db8500_regulator_disable(struct regulator_dev *rdev)
static int db8500_regulator_is_enabled(struct regulator_dev *rdev)
static struct regulator_ops db8500_regulator_ops = ;
static bool epod_on[NUM_EPOD_ID];
static bool epod_ramret[NUM_EPOD_ID];
static int enable_epod(u16 epod_id, bool ramret)
static int disable_epod(u16 epod_id, bool ramret)
static int db8500_regulator_switch_enable(struct regulator_dev *rdev)
static int db8500_regulator_switch_disable(struct regulator_dev *rdev)
static int db8500_regulator_switch_is_enabled(struct regulator_dev *rdev)
static struct regulator_ops db8500_regulator_switch_ops = ;
static struct db8500_regulator_info
db8500_regulator_info[DB8500_NUM_REGULATORS] = ;
static int __devinit db8500_regulator_probe(struct platform_device *pdev)
static int __exit db8500_regulator_remove(struct platform_device *pdev)
static struct platform_driver db8500_regulator_driver = ;
static int __init db8500_regulator_init(void)
static void __exit db8500_regulator_exit(void)
arch_initcall(db8500_regulator_init);
module_exit(db8500_regulator_exit);
MODULE_AUTHOR("STMicroelectronics/ST-Ericsson");
MODULE_DESCRIPTION("DB8500 regulator driver");
MODULE_LICENSE("GPL v2");
