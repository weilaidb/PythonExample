struct op_counter_config ;
static int oprofile_perf_enabled;
static DEFINE_MUTEX(oprofile_perf_mutex);
static struct op_counter_config *counter_config;
static struct perf_event **perf_events[nr_cpumask_bits];
static int num_counters;
static void op_overflow_handler(struct perf_event *event, int unused,
struct perf_sample_data *data, struct pt_regs *regs)
static void op_perf_setup(void)
static int op_create_counter(int cpu, int event)
static void op_destroy_counter(int cpu, int event)
static int op_perf_start(void)
static void op_perf_stop(void)
static int oprofile_perf_create_files(struct super_block *sb, struct dentry *root)
static int oprofile_perf_setup(void)
static int oprofile_perf_start(void)
static void oprofile_perf_stop(void)
static int oprofile_perf_suspend(struct platform_device *dev, pm_message_t state)
static int oprofile_perf_resume(struct platform_device *dev)
static struct platform_driver oprofile_driver = ;
static struct platform_device *oprofile_pdev;
static int __init init_driverfs(void)
static void exit_driverfs(void)
static inline int  init_driverfs(void)
static inline void exit_driverfs(void)
void oprofile_perf_exit(void)
int __init oprofile_perf_init(struct oprofile_operations *ops)
