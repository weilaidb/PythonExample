#define pr_fmt(fmt) "%s: " fmt, __func__
#define CREATE_TRACE_POINTS
#define rdev_err(rdev, fmt, ...)					\
pr_err("%s: " fmt, rdev_get_name(rdev), ##__VA_ARGS__)
#define rdev_warn(rdev, fmt, ...)					\
pr_warn("%s: " fmt, rdev_get_name(rdev), ##__VA_ARGS__)
#define rdev_info(rdev, fmt, ...)					\
pr_info("%s: " fmt, rdev_get_name(rdev), ##__VA_ARGS__)
#define rdev_dbg(rdev, fmt, ...)					\
pr_debug("%s: " fmt, rdev_get_name(rdev), ##__VA_ARGS__)
static DEFINE_MUTEX(regulator_list_mutex);
static LIST_HEAD(regulator_list);
static LIST_HEAD(regulator_map_list);
static bool has_full_constraints;
static bool board_wants_dummy_regulator;
static struct dentry *debugfs_root;
struct regulator_map ;
struct regulator ;
static int _regulator_is_enabled(struct regulator_dev *rdev);
static int _regulator_disable(struct regulator_dev *rdev,
struct regulator_dev **supply_rdev_ptr);
static int _regulator_get_voltage(struct regulator_dev *rdev);
static int _regulator_get_current_limit(struct regulator_dev *rdev);
static unsigned int _regulator_get_mode(struct regulator_dev *rdev);
static void _notifier_call_chain(struct regulator_dev *rdev,
unsigned long event, void *data);
static int _regulator_do_set_voltage(struct regulator_dev *rdev,
int min_uV, int max_uV);
static const char *rdev_get_name(struct regulator_dev *rdev)
static struct regulator *get_device_regulator(struct device *dev)
static int regulator_check_voltage(struct regulator_dev *rdev,
int *min_uV, int *max_uV)
static int regulator_check_consumers(struct regulator_dev *rdev,
int *min_uV, int *max_uV)
static int regulator_check_current_limit(struct regulator_dev *rdev,
int *min_uA, int *max_uA)
static int regulator_mode_constrain(struct regulator_dev *rdev, int *mode)
static int regulator_check_drms(struct regulator_dev *rdev)
static ssize_t device_requested_uA_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t regulator_uV_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(microvolts, 0444, regulator_uV_show, NULL);
static ssize_t regulator_uA_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(microamps, 0444, regulator_uA_show, NULL);
static ssize_t regulator_name_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t regulator_print_opmode(char *buf, int mode)
static ssize_t regulator_opmode_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(opmode, 0444, regulator_opmode_show, NULL);
static ssize_t regulator_print_state(char *buf, int state)
static ssize_t regulator_state_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(state, 0444, regulator_state_show, NULL);
static ssize_t regulator_status_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(status, 0444, regulator_status_show, NULL);
static ssize_t regulator_min_uA_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(min_microamps, 0444, regulator_min_uA_show, NULL);
static ssize_t regulator_max_uA_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(max_microamps, 0444, regulator_max_uA_show, NULL);
static ssize_t regulator_min_uV_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(min_microvolts, 0444, regulator_min_uV_show, NULL);
static ssize_t regulator_max_uV_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(max_microvolts, 0444, regulator_max_uV_show, NULL);
static ssize_t regulator_total_uA_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(requested_microamps, 0444, regulator_total_uA_show, NULL);
static ssize_t regulator_num_users_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t regulator_type_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t regulator_suspend_mem_uV_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(suspend_mem_microvolts, 0444,
regulator_suspend_mem_uV_show, NULL);
static ssize_t regulator_suspend_disk_uV_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(suspend_disk_microvolts, 0444,
regulator_suspend_disk_uV_show, NULL);
static ssize_t regulator_suspend_standby_uV_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(suspend_standby_microvolts, 0444,
regulator_suspend_standby_uV_show, NULL);
static ssize_t regulator_suspend_mem_mode_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(suspend_mem_mode, 0444,
regulator_suspend_mem_mode_show, NULL);
static ssize_t regulator_suspend_disk_mode_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(suspend_disk_mode, 0444,
regulator_suspend_disk_mode_show, NULL);
static ssize_t regulator_suspend_standby_mode_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(suspend_standby_mode, 0444,
regulator_suspend_standby_mode_show, NULL);
static ssize_t regulator_suspend_mem_state_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(suspend_mem_state, 0444,
regulator_suspend_mem_state_show, NULL);
static ssize_t regulator_suspend_disk_state_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(suspend_disk_state, 0444,
regulator_suspend_disk_state_show, NULL);
static ssize_t regulator_suspend_standby_state_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(suspend_standby_state, 0444,
regulator_suspend_standby_state_show, NULL);
static struct device_attribute regulator_dev_attrs[] = ;
static void regulator_dev_release(struct device *dev)
static struct class regulator_class = ;
static void drms_uA_update(struct regulator_dev *rdev)
static int suspend_set_state(struct regulator_dev *rdev,
struct regulator_state *rstate)
static int suspend_prepare(struct regulator_dev *rdev, suspend_state_t state)
static void print_constraints(struct regulator_dev *rdev)
static int machine_constraints_voltage(struct regulator_dev *rdev,
struct regulation_constraints *constraints)
static int set_machine_constraints(struct regulator_dev *rdev,
const struct regulation_constraints *constraints)
static int set_supply(struct regulator_dev *rdev,
struct regulator_dev *supply_rdev)
static int set_consumer_device_supply(struct regulator_dev *rdev,
struct device *consumer_dev, const char *consumer_dev_name,
const char *supply)
static void unset_regulator_supplies(struct regulator_dev *rdev)
#define REG_STR_SIZE	32
static struct regulator *create_regulator(struct regulator_dev *rdev,
struct device *dev,
const char *supply_name)
static int _regulator_get_enable_time(struct regulator_dev *rdev)
static struct regulator *_regulator_get(struct device *dev, const char *id,
int exclusive)
struct regulator *regulator_get(struct device *dev, const char *id)
EXPORT_SYMBOL_GPL(regulator_get);
struct regulator *regulator_get_exclusive(struct device *dev, const char *id)
EXPORT_SYMBOL_GPL(regulator_get_exclusive);
void regulator_put(struct regulator *regulator)
EXPORT_SYMBOL_GPL(regulator_put);
static int _regulator_can_change_status(struct regulator_dev *rdev)
static int _regulator_enable(struct regulator_dev *rdev)
int regulator_enable(struct regulator *regulator)
EXPORT_SYMBOL_GPL(regulator_enable);
static int _regulator_disable(struct regulator_dev *rdev,
struct regulator_dev **supply_rdev_ptr)
int regulator_disable(struct regulator *regulator)
EXPORT_SYMBOL_GPL(regulator_disable);
static int _regulator_force_disable(struct regulator_dev *rdev,
struct regulator_dev **supply_rdev_ptr)
int regulator_force_disable(struct regulator *regulator)
EXPORT_SYMBOL_GPL(regulator_force_disable);
static int _regulator_is_enabled(struct regulator_dev *rdev)
int regulator_is_enabled(struct regulator *regulator)
EXPORT_SYMBOL_GPL(regulator_is_enabled);
int regulator_count_voltages(struct regulator *regulator)
EXPORT_SYMBOL_GPL(regulator_count_voltages);
int regulator_list_voltage(struct regulator *regulator, unsigned selector)
EXPORT_SYMBOL_GPL(regulator_list_voltage);
int regulator_is_supported_voltage(struct regulator *regulator,
int min_uV, int max_uV)
static int _regulator_do_set_voltage(struct regulator_dev *rdev,
int min_uV, int max_uV)
int regulator_set_voltage(struct regulator *regulator, int min_uV, int max_uV)
EXPORT_SYMBOL_GPL(regulator_set_voltage);
int regulator_set_voltage_time(struct regulator *regulator,
int old_uV, int new_uV)
EXPORT_SYMBOL_GPL(regulator_set_voltage_time);
int regulator_sync_voltage(struct regulator *regulator)
EXPORT_SYMBOL_GPL(regulator_sync_voltage);
static int _regulator_get_voltage(struct regulator_dev *rdev)
int regulator_get_voltage(struct regulator *regulator)
EXPORT_SYMBOL_GPL(regulator_get_voltage);
int regulator_set_current_limit(struct regulator *regulator,
int min_uA, int max_uA)
EXPORT_SYMBOL_GPL(regulator_set_current_limit);
static int _regulator_get_current_limit(struct regulator_dev *rdev)
int regulator_get_current_limit(struct regulator *regulator)
EXPORT_SYMBOL_GPL(regulator_get_current_limit);
int regulator_set_mode(struct regulator *regulator, unsigned int mode)
EXPORT_SYMBOL_GPL(regulator_set_mode);
static unsigned int _regulator_get_mode(struct regulator_dev *rdev)
unsigned int regulator_get_mode(struct regulator *regulator)
EXPORT_SYMBOL_GPL(regulator_get_mode);
int regulator_set_optimum_mode(struct regulator *regulator, int uA_load)
EXPORT_SYMBOL_GPL(regulator_set_optimum_mode);
int regulator_register_notifier(struct regulator *regulator,
struct notifier_block *nb)
EXPORT_SYMBOL_GPL(regulator_register_notifier);
int regulator_unregister_notifier(struct regulator *regulator,
struct notifier_block *nb)
EXPORT_SYMBOL_GPL(regulator_unregister_notifier);
static void _notifier_call_chain(struct regulator_dev *rdev,
unsigned long event, void *data)
int regulator_bulk_get(struct device *dev, int num_consumers,
struct regulator_bulk_data *consumers)
EXPORT_SYMBOL_GPL(regulator_bulk_get);
int regulator_bulk_enable(int num_consumers,
struct regulator_bulk_data *consumers)
EXPORT_SYMBOL_GPL(regulator_bulk_enable);
int regulator_bulk_disable(int num_consumers,
struct regulator_bulk_data *consumers)
EXPORT_SYMBOL_GPL(regulator_bulk_disable);
void regulator_bulk_free(int num_consumers,
struct regulator_bulk_data *consumers)
EXPORT_SYMBOL_GPL(regulator_bulk_free);
int regulator_notifier_call_chain(struct regulator_dev *rdev,
unsigned long event, void *data)
EXPORT_SYMBOL_GPL(regulator_notifier_call_chain);
int regulator_mode_to_status(unsigned int mode)
EXPORT_SYMBOL_GPL(regulator_mode_to_status);
static int add_regulator_attributes(struct regulator_dev *rdev)
static void rdev_init_debugfs(struct regulator_dev *rdev)
struct regulator_dev *regulator_register(struct regulator_desc *regulator_desc,
struct device *dev, const struct regulator_init_data *init_data,
void *driver_data)
EXPORT_SYMBOL_GPL(regulator_register);
void regulator_unregister(struct regulator_dev *rdev)
EXPORT_SYMBOL_GPL(regulator_unregister);
int regulator_suspend_prepare(suspend_state_t state)
EXPORT_SYMBOL_GPL(regulator_suspend_prepare);
int regulator_suspend_finish(void)
EXPORT_SYMBOL_GPL(regulator_suspend_finish);
void regulator_has_full_constraints(void)
EXPORT_SYMBOL_GPL(regulator_has_full_constraints);
void regulator_use_dummy_regulator(void)
EXPORT_SYMBOL_GPL(regulator_use_dummy_regulator);
void *rdev_get_drvdata(struct regulator_dev *rdev)
EXPORT_SYMBOL_GPL(rdev_get_drvdata);
void *regulator_get_drvdata(struct regulator *regulator)
EXPORT_SYMBOL_GPL(regulator_get_drvdata);
void regulator_set_drvdata(struct regulator *regulator, void *data)
EXPORT_SYMBOL_GPL(regulator_set_drvdata);
int rdev_get_id(struct regulator_dev *rdev)
EXPORT_SYMBOL_GPL(rdev_get_id);
struct device *rdev_get_dev(struct regulator_dev *rdev)
EXPORT_SYMBOL_GPL(rdev_get_dev);
void *regulator_get_init_drvdata(struct regulator_init_data *reg_init_data)
EXPORT_SYMBOL_GPL(regulator_get_init_drvdata);
static int __init regulator_init(void)
core_initcall(regulator_init);
static int __init regulator_init_complete(void)
late_initcall(regulator_init_complete);
