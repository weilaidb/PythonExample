#define pvr2_sysfs_trace(...) pvr2_trace(PVR2_TRACE_SYSFS,__VA_ARGS__)
struct pvr2_sysfs ;
struct pvr2_sysfs_debugifc ;
struct pvr2_sysfs_ctl_item ;
struct pvr2_sysfs_class ;
static ssize_t show_name(struct device *class_dev,
struct device_attribute *attr,
char *buf)
static ssize_t show_type(struct device *class_dev,
struct device_attribute *attr,
char *buf)
static ssize_t show_min(struct device *class_dev,
struct device_attribute *attr,
char *buf)
static ssize_t show_max(struct device *class_dev,
struct device_attribute *attr,
char *buf)
static ssize_t show_def(struct device *class_dev,
struct device_attribute *attr,
char *buf)
static ssize_t show_val_norm(struct device *class_dev,
struct device_attribute *attr,
char *buf)
static ssize_t show_val_custom(struct device *class_dev,
struct device_attribute *attr,
char *buf)
static ssize_t show_enum(struct device *class_dev,
struct device_attribute *attr,
char *buf)
static ssize_t show_bits(struct device *class_dev,
struct device_attribute *attr,
char *buf)
static int store_val_any(struct pvr2_sysfs_ctl_item *cip, int customfl,
const char *buf,unsigned int count)
static ssize_t store_val_norm(struct device *class_dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t store_val_custom(struct device *class_dev,
struct device_attribute *attr,
const char *buf, size_t count)
static void pvr2_sysfs_add_control(struct pvr2_sysfs *sfp,int ctl_id)
static ssize_t debuginfo_show(struct device *, struct device_attribute *,
char *);
static ssize_t debugcmd_show(struct device *, struct device_attribute *,
char *);
static ssize_t debugcmd_store(struct device *, struct device_attribute *,
const char *, size_t count);
static void pvr2_sysfs_add_debugifc(struct pvr2_sysfs *sfp)
static void pvr2_sysfs_tear_down_debugifc(struct pvr2_sysfs *sfp)
static void pvr2_sysfs_add_controls(struct pvr2_sysfs *sfp)
static void pvr2_sysfs_tear_down_controls(struct pvr2_sysfs *sfp)
static void pvr2_sysfs_class_release(struct class *class)
static void pvr2_sysfs_release(struct device *class_dev)
static void class_dev_destroy(struct pvr2_sysfs *sfp)
static ssize_t v4l_minor_number_show(struct device *class_dev,
struct device_attribute *attr, char *buf)
static ssize_t bus_info_show(struct device *class_dev,
struct device_attribute *attr, char *buf)
static ssize_t hdw_name_show(struct device *class_dev,
struct device_attribute *attr, char *buf)
static ssize_t hdw_desc_show(struct device *class_dev,
struct device_attribute *attr, char *buf)
static ssize_t v4l_radio_minor_number_show(struct device *class_dev,
struct device_attribute *attr,
char *buf)
static ssize_t unit_number_show(struct device *class_dev,
struct device_attribute *attr, char *buf)
static void class_dev_create(struct pvr2_sysfs *sfp,
struct pvr2_sysfs_class *class_ptr)
static void pvr2_sysfs_internal_check(struct pvr2_channel *chp)
struct pvr2_sysfs *pvr2_sysfs_create(struct pvr2_context *mp,
struct pvr2_sysfs_class *class_ptr)
struct pvr2_sysfs_class *pvr2_sysfs_class_create(void)
void pvr2_sysfs_class_destroy(struct pvr2_sysfs_class *clp)
static ssize_t debuginfo_show(struct device *class_dev,
struct device_attribute *attr, char *buf)
static ssize_t debugcmd_show(struct device *class_dev,
struct device_attribute *attr, char *buf)
static ssize_t debugcmd_store(struct device *class_dev,
struct device_attribute *attr,
const char *buf, size_t count)
