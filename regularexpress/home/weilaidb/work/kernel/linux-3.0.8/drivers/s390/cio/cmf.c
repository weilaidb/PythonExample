#define KMSG_COMPONENT "cio"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
#define ARGSTRING "s390cmf"
enum cmb_index ;
enum cmb_format ;
static int format = CMF_AUTODETECT;
module_param(format, bool, 0444);
struct cmb_operations ;
static struct cmb_operations *cmbops;
struct cmb_data ;
static inline u64 time_to_nsec(u32 value)
static inline u64 time_to_avg_nsec(u32 value, u32 count)
static inline void cmf_activate(void *area, unsigned int onoff)
static int set_schib(struct ccw_device *cdev, u32 mme, int mbfc,
unsigned long address)
struct set_schib_struct ;
static void cmf_set_schib_release(struct kref *kref)
#define CMF_PENDING 1
static int set_schib_wait(struct ccw_device *cdev, u32 mme,
int mbfc, unsigned long address)
void retry_set_schib(struct ccw_device *cdev)
static int cmf_copy_block(struct ccw_device *cdev)
struct copy_block_struct ;
static void cmf_copy_block_release(struct kref *kref)
static int cmf_cmb_copy_wait(struct ccw_device *cdev)
void cmf_retry_copy_block(struct ccw_device *cdev)
static void cmf_generic_reset(struct ccw_device *cdev)
struct cmb_area ;
static struct cmb_area cmb_area = ;
module_param_named(maxchannels, cmb_area.num_channels, uint, 0444);
struct cmb ;
static int alloc_cmb_single(struct ccw_device *cdev,
struct cmb_data *cmb_data)
static int alloc_cmb(struct ccw_device *cdev)
static void free_cmb(struct ccw_device *cdev)
static int set_cmb(struct ccw_device *cdev, u32 mme)
static u64 read_cmb(struct ccw_device *cdev, int index)
static int readall_cmb(struct ccw_device *cdev, struct cmbdata *data)
static void reset_cmb(struct ccw_device *cdev)
static void * align_cmb(void *area)
static struct attribute_group cmf_attr_group;
static struct cmb_operations cmbops_basic = ;
struct cmbe ;
static inline struct cmbe *cmbe_align(struct cmbe *c)
static int alloc_cmbe(struct ccw_device *cdev)
static void free_cmbe(struct ccw_device *cdev)
static int set_cmbe(struct ccw_device *cdev, u32 mme)
static u64 read_cmbe(struct ccw_device *cdev, int index)
static int readall_cmbe(struct ccw_device *cdev, struct cmbdata *data)
static void reset_cmbe(struct ccw_device *cdev)
static void * align_cmbe(void *area)
static struct attribute_group cmf_attr_group_ext;
static struct cmb_operations cmbops_extended = ;
static ssize_t cmb_show_attr(struct device *dev, char *buf, enum cmb_index idx)
static ssize_t cmb_show_avg_sample_interval(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t cmb_show_avg_utilization(struct device *dev,
struct device_attribute *attr,
char *buf)
#define cmf_attr(name) \
static ssize_t show_##name(struct device *dev, \
struct device_attribute *attr, char *buf)	\
\
static DEVICE_ATTR(name, 0444, show_##name, NULL);
#define cmf_attr_avg(name) \
static ssize_t show_avg_##name(struct device *dev, \
struct device_attribute *attr, char *buf) \
\
static DEVICE_ATTR(avg_##name, 0444, show_avg_##name, NULL);
cmf_attr(ssch_rsch_count);
cmf_attr(sample_count);
cmf_attr_avg(device_connect_time);
cmf_attr_avg(function_pending_time);
cmf_attr_avg(device_disconnect_time);
cmf_attr_avg(control_unit_queuing_time);
cmf_attr_avg(device_active_only_time);
cmf_attr_avg(device_busy_time);
cmf_attr_avg(initial_command_response_time);
static DEVICE_ATTR(avg_sample_interval, 0444, cmb_show_avg_sample_interval,
NULL);
static DEVICE_ATTR(avg_utilization, 0444, cmb_show_avg_utilization, NULL);
static struct attribute *cmf_attributes[] = ;
static struct attribute_group cmf_attr_group = ;
static struct attribute *cmf_attributes_ext[] = ;
static struct attribute_group cmf_attr_group_ext = ;
static ssize_t cmb_enable_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t cmb_enable_store(struct device *dev,
struct device_attribute *attr, const char *buf,
size_t c)
DEVICE_ATTR(cmb_enable, 0644, cmb_enable_show, cmb_enable_store);
int ccw_set_cmf(struct ccw_device *cdev, int enable)
int enable_cmf(struct ccw_device *cdev)
int disable_cmf(struct ccw_device *cdev)
u64 cmf_read(struct ccw_device *cdev, int index)
int cmf_readall(struct ccw_device *cdev, struct cmbdata *data)
int cmf_reenable(struct ccw_device *cdev)
static int __init init_cmf(void)
module_init(init_cmf);
MODULE_AUTHOR("Arnd Bergmann <arndb@de.ibm.com>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("channel measurement facility base driver\n"
"Copyright 2003 IBM Corporation\n");
EXPORT_SYMBOL_GPL(enable_cmf);
EXPORT_SYMBOL_GPL(disable_cmf);
EXPORT_SYMBOL_GPL(cmf_read);
EXPORT_SYMBOL_GPL(cmf_readall);
