static u64 stream_id;
static struct sys_device suspend_sysdev;
static DECLARE_COMPLETION(suspend_work);
static struct rtas_suspend_me_data suspend_data;
static atomic_t suspending;
static int pseries_suspend_begin(suspend_state_t state)
static int pseries_suspend_cpu(void)
static int pseries_suspend_enter(suspend_state_t state)
static int pseries_prepare_late(void)
static ssize_t store_hibernate(struct sysdev_class *classdev,
struct sysdev_class_attribute *attr,
const char *buf, size_t count)
static SYSDEV_CLASS_ATTR(hibernate, S_IWUSR, NULL, store_hibernate);
static struct sysdev_class suspend_sysdev_class = ;
static const struct platform_suspend_ops pseries_suspend_ops = ;
static int pseries_suspend_sysfs_register(struct sys_device *sysdev)
static int __init pseries_suspend_init(void)
__initcall(pseries_suspend_init);
