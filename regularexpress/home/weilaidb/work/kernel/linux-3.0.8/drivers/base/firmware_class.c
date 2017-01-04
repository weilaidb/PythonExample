#define to_dev(obj) container_of(obj, struct device, kobj)
MODULE_AUTHOR("Manuel Estrada Sainz");
MODULE_DESCRIPTION("Multi purpose firmware loading support");
MODULE_LICENSE("GPL");
extern struct builtin_fw __start_builtin_fw[];
extern struct builtin_fw __end_builtin_fw[];
static bool fw_get_builtin_firmware(struct firmware *fw, const char *name)
static bool fw_is_builtin_firmware(const struct firmware *fw)
static inline bool fw_get_builtin_firmware(struct firmware *fw, const char *name)
static inline bool fw_is_builtin_firmware(const struct firmware *fw)
enum ;
static int loading_timeout = 60;
static DEFINE_MUTEX(fw_lock);
struct firmware_priv ;
static struct firmware_priv *to_firmware_priv(struct device *dev)
static void fw_load_abort(struct firmware_priv *fw_priv)
static ssize_t firmware_timeout_show(struct class *class,
struct class_attribute *attr,
char *buf)
static ssize_t firmware_timeout_store(struct class *class,
struct class_attribute *attr,
const char *buf, size_t count)
static struct class_attribute firmware_class_attrs[] = ;
static void fw_dev_release(struct device *dev)
static int firmware_uevent(struct device *dev, struct kobj_uevent_env *env)
static struct class firmware_class = ;
static ssize_t firmware_loading_show(struct device *dev,
struct device_attribute *attr, char *buf)
static void firmware_free_data(const struct firmware *fw)
#define PAGE_KERNEL_RO PAGE_KERNEL
static ssize_t firmware_loading_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(loading, 0644, firmware_loading_show, firmware_loading_store);
static ssize_t firmware_data_read(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buffer, loff_t offset, size_t count)
static int fw_realloc_buffer(struct firmware_priv *fw_priv, int min_size)
static ssize_t firmware_data_write(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buffer, loff_t offset, size_t count)
static struct bin_attribute firmware_attr_data = ;
static void firmware_class_timeout(u_long data)
static struct firmware_priv *
fw_create_instance(struct firmware *firmware, const char *fw_name,
struct device *device, bool uevent, bool nowait)
static void fw_destroy_instance(struct firmware_priv *fw_priv)
static int _request_firmware(const struct firmware **firmware_p,
const char *name, struct device *device,
bool uevent, bool nowait)
int
request_firmware(const struct firmware **firmware_p, const char *name,
struct device *device)
void release_firmware(const struct firmware *fw)
struct firmware_work ;
static int request_firmware_work_func(void *arg)
int
request_firmware_nowait(
struct module *module, bool uevent,
const char *name, struct device *device, gfp_t gfp, void *context,
void (*cont)(const struct firmware *fw, void *context))
static int __init firmware_class_init(void)
static void __exit firmware_class_exit(void)
fs_initcall(firmware_class_init);
module_exit(firmware_class_exit);
EXPORT_SYMBOL(release_firmware);
EXPORT_SYMBOL(request_firmware);
EXPORT_SYMBOL(request_firmware_nowait);
