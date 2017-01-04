static int edac_mc_log_ue = 1;
static int edac_mc_log_ce = 1;
static int edac_mc_panic_on_ue;
static int edac_mc_poll_msec = 1000;
int edac_mc_get_log_ue(void)
int edac_mc_get_log_ce(void)
int edac_mc_get_panic_on_ue(void)
int edac_mc_get_poll_msec(void)
static int edac_set_poll_msec(const char *val, struct kernel_param *kp)
module_param(edac_mc_panic_on_ue, int, 0644);
MODULE_PARM_DESC(edac_mc_panic_on_ue, "Panic on uncorrected error: 0=off 1=on");
module_param(edac_mc_log_ue, int, 0644);
MODULE_PARM_DESC(edac_mc_log_ue,
"Log uncorrectable error to console: 0=off 1=on");
module_param(edac_mc_log_ce, int, 0644);
MODULE_PARM_DESC(edac_mc_log_ce,
"Log correctable error to console: 0=off 1=on");
module_param_call(edac_mc_poll_msec, edac_set_poll_msec, param_get_int,
&edac_mc_poll_msec, 0644);
MODULE_PARM_DESC(edac_mc_poll_msec, "Polling period in milliseconds");
static const char *mem_types[] = ;
static const char *dev_types[] = ;
static const char *edac_caps[] = ;
static ssize_t csrow_ue_count_show(struct csrow_info *csrow, char *data,
int private)
static ssize_t csrow_ce_count_show(struct csrow_info *csrow, char *data,
int private)
static ssize_t csrow_size_show(struct csrow_info *csrow, char *data,
int private)
static ssize_t csrow_mem_type_show(struct csrow_info *csrow, char *data,
int private)
static ssize_t csrow_dev_type_show(struct csrow_info *csrow, char *data,
int private)
static ssize_t csrow_edac_mode_show(struct csrow_info *csrow, char *data,
int private)
static ssize_t channel_dimm_label_show(struct csrow_info *csrow,
char *data, int channel)
static ssize_t channel_dimm_label_store(struct csrow_info *csrow,
const char *data,
size_t count, int channel)
static ssize_t channel_ce_count_show(struct csrow_info *csrow,
char *data, int channel)
struct csrowdev_attribute ;
#define to_csrow(k) container_of(k, struct csrow_info, kobj)
#define to_csrowdev_attr(a) container_of(a, struct csrowdev_attribute, attr)
static ssize_t csrowdev_show(struct kobject *kobj,
struct attribute *attr, char *buffer)
static ssize_t csrowdev_store(struct kobject *kobj, struct attribute *attr,
const char *buffer, size_t count)
static const struct sysfs_ops csrowfs_ops = ;
#define CSROWDEV_ATTR(_name,_mode,_show,_store,_private)	\
static struct csrowdev_attribute attr_##_name = ;
CSROWDEV_ATTR(size_mb, S_IRUGO, csrow_size_show, NULL, 0);
CSROWDEV_ATTR(dev_type, S_IRUGO, csrow_dev_type_show, NULL, 0);
CSROWDEV_ATTR(mem_type, S_IRUGO, csrow_mem_type_show, NULL, 0);
CSROWDEV_ATTR(edac_mode, S_IRUGO, csrow_edac_mode_show, NULL, 0);
CSROWDEV_ATTR(ue_count, S_IRUGO, csrow_ue_count_show, NULL, 0);
CSROWDEV_ATTR(ce_count, S_IRUGO, csrow_ce_count_show, NULL, 0);
static struct csrowdev_attribute *default_csrow_attr[] = ;
CSROWDEV_ATTR(ch0_dimm_label, S_IRUGO | S_IWUSR,
channel_dimm_label_show, channel_dimm_label_store, 0);
CSROWDEV_ATTR(ch1_dimm_label, S_IRUGO | S_IWUSR,
channel_dimm_label_show, channel_dimm_label_store, 1);
CSROWDEV_ATTR(ch2_dimm_label, S_IRUGO | S_IWUSR,
channel_dimm_label_show, channel_dimm_label_store, 2);
CSROWDEV_ATTR(ch3_dimm_label, S_IRUGO | S_IWUSR,
channel_dimm_label_show, channel_dimm_label_store, 3);
CSROWDEV_ATTR(ch4_dimm_label, S_IRUGO | S_IWUSR,
channel_dimm_label_show, channel_dimm_label_store, 4);
CSROWDEV_ATTR(ch5_dimm_label, S_IRUGO | S_IWUSR,
channel_dimm_label_show, channel_dimm_label_store, 5);
static struct csrowdev_attribute *dynamic_csrow_dimm_attr[] = ;
CSROWDEV_ATTR(ch0_ce_count, S_IRUGO | S_IWUSR, channel_ce_count_show, NULL, 0);
CSROWDEV_ATTR(ch1_ce_count, S_IRUGO | S_IWUSR, channel_ce_count_show, NULL, 1);
CSROWDEV_ATTR(ch2_ce_count, S_IRUGO | S_IWUSR, channel_ce_count_show, NULL, 2);
CSROWDEV_ATTR(ch3_ce_count, S_IRUGO | S_IWUSR, channel_ce_count_show, NULL, 3);
CSROWDEV_ATTR(ch4_ce_count, S_IRUGO | S_IWUSR, channel_ce_count_show, NULL, 4);
CSROWDEV_ATTR(ch5_ce_count, S_IRUGO | S_IWUSR, channel_ce_count_show, NULL, 5);
static struct csrowdev_attribute *dynamic_csrow_ce_count_attr[] = ;
#define EDAC_NR_CHANNELS	6
static int edac_create_channel_files(struct kobject *kobj, int chan)
static void edac_csrow_instance_release(struct kobject *kobj)
static struct kobj_type ktype_csrow = ;
static int edac_create_csrow_object(struct mem_ctl_info *mci,
struct csrow_info *csrow, int index)
static ssize_t mci_reset_counters_store(struct mem_ctl_info *mci,
const char *data, size_t count)
static ssize_t mci_sdram_scrub_rate_store(struct mem_ctl_info *mci,
const char *data, size_t count)
static ssize_t mci_sdram_scrub_rate_show(struct mem_ctl_info *mci, char *data)
static ssize_t mci_ue_count_show(struct mem_ctl_info *mci, char *data)
static ssize_t mci_ce_count_show(struct mem_ctl_info *mci, char *data)
static ssize_t mci_ce_noinfo_show(struct mem_ctl_info *mci, char *data)
static ssize_t mci_ue_noinfo_show(struct mem_ctl_info *mci, char *data)
static ssize_t mci_seconds_show(struct mem_ctl_info *mci, char *data)
static ssize_t mci_ctl_name_show(struct mem_ctl_info *mci, char *data)
static ssize_t mci_size_mb_show(struct mem_ctl_info *mci, char *data)
#define to_mci(k) container_of(k, struct mem_ctl_info, edac_mci_kobj)
#define to_mcidev_attr(a) container_of(a,struct mcidev_sysfs_attribute,attr)
static ssize_t mcidev_show(struct kobject *kobj, struct attribute *attr,
char *buffer)
static ssize_t mcidev_store(struct kobject *kobj, struct attribute *attr,
const char *buffer, size_t count)
static const struct sysfs_ops mci_ops = ;
#define MCIDEV_ATTR(_name,_mode,_show,_store)			\
static struct mcidev_sysfs_attribute mci_attr_##_name = ;
MCIDEV_ATTR(reset_counters, S_IWUSR, NULL, mci_reset_counters_store);
MCIDEV_ATTR(mc_name, S_IRUGO, mci_ctl_name_show, NULL);
MCIDEV_ATTR(size_mb, S_IRUGO, mci_size_mb_show, NULL);
MCIDEV_ATTR(seconds_since_reset, S_IRUGO, mci_seconds_show, NULL);
MCIDEV_ATTR(ue_noinfo_count, S_IRUGO, mci_ue_noinfo_show, NULL);
MCIDEV_ATTR(ce_noinfo_count, S_IRUGO, mci_ce_noinfo_show, NULL);
MCIDEV_ATTR(ue_count, S_IRUGO, mci_ue_count_show, NULL);
MCIDEV_ATTR(ce_count, S_IRUGO, mci_ce_count_show, NULL);
MCIDEV_ATTR(sdram_scrub_rate, S_IRUGO | S_IWUSR, mci_sdram_scrub_rate_show,
mci_sdram_scrub_rate_store);
static struct mcidev_sysfs_attribute *mci_attr[] = ;
static void edac_mci_control_release(struct kobject *kobj)
static struct kobj_type ktype_mci = ;
static struct kset *mc_kset;
int edac_mc_register_sysfs_main_kobj(struct mem_ctl_info *mci)
void edac_mc_unregister_sysfs_main_kobj(struct mem_ctl_info *mci)
#define EDAC_DEVICE_SYMLINK	"device"
#define grp_to_mci(k) (container_of(k, struct mcidev_sysfs_group_kobj, kobj)->mci)
static ssize_t inst_grp_show(struct kobject *kobj, struct attribute *attr,
char *buffer)
static ssize_t inst_grp_store(struct kobject *kobj, struct attribute *attr,
const char *buffer, size_t count)
static void edac_inst_grp_release(struct kobject *kobj)
static struct sysfs_ops inst_grp_ops = ;
static struct kobj_type ktype_inst_grp = ;
static int edac_create_mci_instance_attributes(struct mem_ctl_info *mci,
const struct mcidev_sysfs_attribute *sysfs_attrib,
struct kobject *kobj)
static void edac_remove_mci_instance_attributes(struct mem_ctl_info *mci,
const struct mcidev_sysfs_attribute *sysfs_attrib,
struct kobject *kobj, int count)
int edac_create_sysfs_mci_device(struct mem_ctl_info *mci)
void edac_remove_sysfs_mci_device(struct mem_ctl_info *mci)
int edac_sysfs_setup_mc_kset(void)
void edac_sysfs_teardown_mc_kset(void)
