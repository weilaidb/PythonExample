#define MAX_RT_TEST_THREADS	8
#define MAX_RT_TEST_MUTEXES	8
static spinlock_t rttest_lock;
static atomic_t rttest_event;
struct test_thread_data ;
static struct test_thread_data thread_data[MAX_RT_TEST_THREADS];
static struct task_struct *threads[MAX_RT_TEST_THREADS];
static struct rt_mutex mutexes[MAX_RT_TEST_MUTEXES];
enum test_opcodes ;
static int handle_op(struct test_thread_data *td, int lockwakeup)
void schedule_rt_mutex_test(struct rt_mutex *mutex)
static int test_func(void *data)
static ssize_t sysfs_test_command(struct sys_device *dev, struct sysdev_attribute *attr,
const char *buf, size_t count)
static ssize_t sysfs_test_status(struct sys_device *dev, struct sysdev_attribute *attr,
char *buf)
static SYSDEV_ATTR(status, 0600, sysfs_test_status, NULL);
static SYSDEV_ATTR(command, 0600, NULL, sysfs_test_command);
static struct sysdev_class rttest_sysclass = ;
static int init_test_thread(int id)
static int init_rttest(void)
device_initcall(init_rttest);
