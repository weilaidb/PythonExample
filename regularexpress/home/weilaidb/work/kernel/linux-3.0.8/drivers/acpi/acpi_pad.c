#define ACPI_PROCESSOR_AGGREGATOR_CLASS	"acpi_pad"
#define ACPI_PROCESSOR_AGGREGATOR_DEVICE_NAME "Processor Aggregator"
#define ACPI_PROCESSOR_AGGREGATOR_NOTIFY 0x80
static DEFINE_MUTEX(isolated_cpus_lock);
static unsigned long power_saving_mwait_eax;
static unsigned char tsc_detected_unstable;
static unsigned char tsc_marked_unstable;
static unsigned char lapic_detected_unstable;
static unsigned char lapic_marked_unstable;
static void power_saving_mwait_init(void)
static unsigned long cpu_weight[NR_CPUS];
static int tsk_in_cpu[NR_CPUS] = ;
static DECLARE_BITMAP(pad_busy_cpus_bits, NR_CPUS);
static void round_robin_cpu(unsigned int tsk_index)
static void exit_round_robin(unsigned int tsk_index)
static unsigned int idle_pct = 5;
static unsigned int round_robin_time = 10;
static int power_saving_thread(void *data)
static struct task_struct *ps_tsks[NR_CPUS];
static unsigned int ps_tsk_num;
static int create_power_saving_task(void)
static void destroy_power_saving_task(void)
static void set_power_saving_task_num(unsigned int num)
static void acpi_pad_idle_cpus(unsigned int num_cpus)
static uint32_t acpi_pad_idle_cpus_num(void)
static ssize_t acpi_pad_rrtime_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static ssize_t acpi_pad_rrtime_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(rrtime, S_IRUGO|S_IWUSR,
acpi_pad_rrtime_show,
acpi_pad_rrtime_store);
static ssize_t acpi_pad_idlepct_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static ssize_t acpi_pad_idlepct_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(idlepct, S_IRUGO|S_IWUSR,
acpi_pad_idlepct_show,
acpi_pad_idlepct_store);
static ssize_t acpi_pad_idlecpus_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static ssize_t acpi_pad_idlecpus_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(idlecpus, S_IRUGO|S_IWUSR,
acpi_pad_idlecpus_show,
acpi_pad_idlecpus_store);
static int acpi_pad_add_sysfs(struct acpi_device *device)
static void acpi_pad_remove_sysfs(struct acpi_device *device)
static int acpi_pad_pur(acpi_handle handle)
static void acpi_pad_ost(acpi_handle handle, int stat,
uint32_t idle_cpus)
static void acpi_pad_handle_notify(acpi_handle handle)
static void acpi_pad_notify(acpi_handle handle, u32 event,
void *data)
static int acpi_pad_add(struct acpi_device *device)
static int acpi_pad_remove(struct acpi_device *device,
int type)
static const struct acpi_device_id pad_device_ids[] = ;
MODULE_DEVICE_TABLE(acpi, pad_device_ids);
static struct acpi_driver acpi_pad_driver = ;
static int __init acpi_pad_init(void)
static void __exit acpi_pad_exit(void)
module_init(acpi_pad_init);
module_exit(acpi_pad_exit);
MODULE_AUTHOR("Shaohua Li<shaohua.li@intel.com>");
MODULE_DESCRIPTION("ACPI Processor Aggregator Driver");
MODULE_LICENSE("GPL");
