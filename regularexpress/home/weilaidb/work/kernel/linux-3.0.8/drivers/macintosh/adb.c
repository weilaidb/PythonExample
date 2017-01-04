EXPORT_SYMBOL(adb_client_list);
extern struct adb_driver via_macii_driver;
extern struct adb_driver via_maciisi_driver;
extern struct adb_driver via_cuda_driver;
extern struct adb_driver adb_iop_driver;
extern struct adb_driver via_pmu_driver;
extern struct adb_driver macio_adb_driver;
static DEFINE_MUTEX(adb_mutex);
static struct adb_driver *adb_driver_list[] = ;
static struct class *adb_dev_class;
static struct adb_driver *adb_controller;
BLOCKING_NOTIFIER_HEAD(adb_client_list);
static int adb_got_sleep;
static int adb_inited;
static DEFINE_SEMAPHORE(adb_probe_mutex);
static int sleepy_trackpad;
static int autopoll_devs;
int __adb_probe_sync;
static int adb_scan_bus(void);
static int do_adb_reset_bus(void);
static void adbdev_init(void);
static int try_handler_change(int, int);
static struct adb_handler  adb_handler[16];
static DEFINE_MUTEX(adb_handler_mutex);
static DEFINE_RWLOCK(adb_handler_lock);
static int adb_scan_bus(void)
static int
adb_probe_task(void *x)
static void
__adb_probe_task(struct work_struct *bullshit)
static DECLARE_WORK(adb_reset_work, __adb_probe_task);
int
adb_reset_bus(void)
static int adb_suspend(struct platform_device *dev, pm_message_t state)
static int adb_resume(struct platform_device *dev)
static int __init adb_init(void)
device_initcall(adb_init);
static int
do_adb_reset_bus(void)
void
adb_poll(void)
static void adb_sync_req_done(struct adb_request *req)
int
adb_request(struct adb_request *req, void (*done)(struct adb_request *),
int flags, int nbytes, ...)
int
adb_register(int default_id, int handler_id, struct adb_ids *ids,
void (*handler)(unsigned char *, int, int))
int
adb_unregister(int index)
void
adb_input(unsigned char *buf, int nb, int autopoll)
static int try_handler_change(int address, int new_id)
int
adb_try_handler_change(int address, int new_id)
int
adb_get_infos(int address, int *original_address, int *handler_id)
#define ADB_MAJOR	56
struct adbdev_state ;
static void adb_write_done(struct adb_request *req)
static int
do_adb_query(struct adb_request *req)
static int adb_open(struct inode *inode, struct file *file)
static int adb_release(struct inode *inode, struct file *file)
static ssize_t adb_read(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static ssize_t adb_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static const struct file_operations adb_fops = ;
static struct platform_driver adb_pfdrv = ;
static struct platform_device adb_pfdev = ;
static int __init
adb_dummy_probe(struct platform_device *dev)
static void __init
adbdev_init(void)
