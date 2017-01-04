static int nocompress = 0;
static int noresume = 0;
static char resume_file[256] = CONFIG_PM_STD_PARTITION;
dev_t swsusp_resume_device;
sector_t swsusp_resume_block;
int in_suspend __nosavedata = 0;
enum ;
#define HIBERNATION_MAX (__HIBERNATION_AFTER_LAST-1)
#define HIBERNATION_FIRST (HIBERNATION_INVALID + 1)
static int hibernation_mode = HIBERNATION_SHUTDOWN;
static const struct platform_hibernation_ops *hibernation_ops;
void hibernation_set_ops(const struct platform_hibernation_ops *ops)
static bool entering_platform_hibernation;
bool system_entering_hibernation(void)
EXPORT_SYMBOL(system_entering_hibernation);
static void hibernation_debug_sleep(void)
static int hibernation_testmode(int mode)
static int hibernation_test(int level)
static int hibernation_testmode(int mode)
static int hibernation_test(int level)
static int platform_begin(int platform_mode)
static void platform_end(int platform_mode)
static int platform_pre_snapshot(int platform_mode)
static void platform_leave(int platform_mode)
static void platform_finish(int platform_mode)
static int platform_pre_restore(int platform_mode)
static void platform_restore_cleanup(int platform_mode)
static void platform_recover(int platform_mode)
void swsusp_show_speed(struct timeval *start, struct timeval *stop,
unsigned nr_pages, char *msg)
static int create_image(int platform_mode)
int hibernation_snapshot(int platform_mode)
static int resume_target_kernel(bool platform_mode)
int hibernation_restore(int platform_mode)
int hibernation_platform_enter(void)
static void power_down(void)
static int prepare_processes(void)
int hibernate(void)
static int software_resume(void)
late_initcall(software_resume);
static const char * const hibernation_modes[] = ;
static ssize_t disk_show(struct kobject *kobj, struct kobj_attribute *attr,
char *buf)
static ssize_t disk_store(struct kobject *kobj, struct kobj_attribute *attr,
const char *buf, size_t n)
power_attr(disk);
static ssize_t resume_show(struct kobject *kobj, struct kobj_attribute *attr,
char *buf)
static ssize_t resume_store(struct kobject *kobj, struct kobj_attribute *attr,
const char *buf, size_t n)
power_attr(resume);
static ssize_t image_size_show(struct kobject *kobj, struct kobj_attribute *attr,
char *buf)
static ssize_t image_size_store(struct kobject *kobj, struct kobj_attribute *attr,
const char *buf, size_t n)
power_attr(image_size);
static ssize_t reserved_size_show(struct kobject *kobj,
struct kobj_attribute *attr, char *buf)
static ssize_t reserved_size_store(struct kobject *kobj,
struct kobj_attribute *attr,
const char *buf, size_t n)
power_attr(reserved_size);
static struct attribute * g[] = ;
static struct attribute_group attr_group = ;
static int __init pm_disk_init(void)
core_initcall(pm_disk_init);
static int __init resume_setup(char *str)
static int __init resume_offset_setup(char *str)
static int __init hibernate_setup(char *str)
static int __init noresume_setup(char *str)
__setup("noresume", noresume_setup);
__setup("resume_offset=", resume_offset_setup);
__setup("resume=", resume_setup);
__setup("hibernate=", hibernate_setup);
