struct pm_runtime_clk_data ;
enum pce_status ;
struct pm_clock_entry ;
static struct pm_runtime_clk_data *__to_prd(struct device *dev)
int pm_runtime_clk_add(struct device *dev, const char *con_id)
static void __pm_runtime_clk_remove(struct pm_clock_entry *ce)
void pm_runtime_clk_remove(struct device *dev, const char *con_id)
int pm_runtime_clk_init(struct device *dev)
void pm_runtime_clk_destroy(struct device *dev)
static void pm_runtime_clk_acquire(struct device *dev,
struct pm_clock_entry *ce)
int pm_runtime_clk_suspend(struct device *dev)
int pm_runtime_clk_resume(struct device *dev)
static int pm_runtime_clk_notify(struct notifier_block *nb,
unsigned long action, void *data)
static void enable_clock(struct device *dev, const char *con_id)
static void disable_clock(struct device *dev, const char *con_id)
static int pm_runtime_clk_notify(struct notifier_block *nb,
unsigned long action, void *data)
void pm_runtime_clk_add_notifier(struct bus_type *bus,
struct pm_clk_notifier_block *clknb)
