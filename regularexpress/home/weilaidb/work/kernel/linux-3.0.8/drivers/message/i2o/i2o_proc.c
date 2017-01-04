#define OSM_NAME	"proc-osm"
#define OSM_VERSION	"1.316"
#define OSM_DESCRIPTION	"I2O ProcFS OSM"
#define I2O_MAX_MODULES 4
#define FMT_U64_HEX "0x%08x%08x"
#define U64_VAL(pu64) *((u32*)(pu64)+1), *((u32*)(pu64))
typedef struct _i2o_proc_entry_t  i2o_proc_entry;
static struct proc_dir_entry *i2o_proc_dir_root;
static struct i2o_driver i2o_proc_driver = ;
static int print_serial_number(struct seq_file *seq, u8 * serialno, int max_len)
static const char *i2o_get_class_name(int class)
#define SCSI_TABLE_SIZE	13
static char *scsi_devices[] = ;
static char *chtostr(u8 * chars, int n)
static int i2o_report_query_status(struct seq_file *seq, int block_status,
char *group)
static char *bus_strings[] = ;
static int i2o_seq_show_hrt(struct seq_file *seq, void *v)
static int i2o_seq_show_lct(struct seq_file *seq, void *v)
static int i2o_seq_show_status(struct seq_file *seq, void *v)
static int i2o_seq_show_hw(struct seq_file *seq, void *v)
static int i2o_seq_show_ddm_table(struct seq_file *seq, void *v)
static int i2o_seq_show_driver_store(struct seq_file *seq, void *v)
static int i2o_seq_show_drivers_stored(struct seq_file *seq, void *v)
static int i2o_seq_show_groups(struct seq_file *seq, void *v)
static int i2o_seq_show_phys_device(struct seq_file *seq, void *v)
static int i2o_seq_show_claimed(struct seq_file *seq, void *v)
static int i2o_seq_show_users(struct seq_file *seq, void *v)
static int i2o_seq_show_priv_msgs(struct seq_file *seq, void *v)
static int i2o_seq_show_authorized_users(struct seq_file *seq, void *v)
static int i2o_seq_show_dev_identity(struct seq_file *seq, void *v)
static int i2o_seq_show_dev_name(struct seq_file *seq, void *v)
static int i2o_seq_show_ddm_identity(struct seq_file *seq, void *v)
static int i2o_seq_show_uinfo(struct seq_file *seq, void *v)
static int i2o_seq_show_sgl_limits(struct seq_file *seq, void *v)
static int i2o_seq_show_sensors(struct seq_file *seq, void *v)
static int i2o_seq_open_hrt(struct inode *inode, struct file *file)
;
static int i2o_seq_open_lct(struct inode *inode, struct file *file)
;
static int i2o_seq_open_status(struct inode *inode, struct file *file)
;
static int i2o_seq_open_hw(struct inode *inode, struct file *file)
;
static int i2o_seq_open_ddm_table(struct inode *inode, struct file *file)
;
static int i2o_seq_open_driver_store(struct inode *inode, struct file *file)
;
static int i2o_seq_open_drivers_stored(struct inode *inode, struct file *file)
;
static int i2o_seq_open_groups(struct inode *inode, struct file *file)
;
static int i2o_seq_open_phys_device(struct inode *inode, struct file *file)
;
static int i2o_seq_open_claimed(struct inode *inode, struct file *file)
;
static int i2o_seq_open_users(struct inode *inode, struct file *file)
;
static int i2o_seq_open_priv_msgs(struct inode *inode, struct file *file)
;
static int i2o_seq_open_authorized_users(struct inode *inode, struct file *file)
;
static int i2o_seq_open_dev_identity(struct inode *inode, struct file *file)
;
static int i2o_seq_open_ddm_identity(struct inode *inode, struct file *file)
;
static int i2o_seq_open_uinfo(struct inode *inode, struct file *file)
;
static int i2o_seq_open_sgl_limits(struct inode *inode, struct file *file)
;
static int i2o_seq_open_sensors(struct inode *inode, struct file *file)
;
static int i2o_seq_open_dev_name(struct inode *inode, struct file *file)
;
static const struct file_operations i2o_seq_fops_lct = ;
static const struct file_operations i2o_seq_fops_hrt = ;
static const struct file_operations i2o_seq_fops_status = ;
static const struct file_operations i2o_seq_fops_hw = ;
static const struct file_operations i2o_seq_fops_ddm_table = ;
static const struct file_operations i2o_seq_fops_driver_store = ;
static const struct file_operations i2o_seq_fops_drivers_stored = ;
static const struct file_operations i2o_seq_fops_groups = ;
static const struct file_operations i2o_seq_fops_phys_device = ;
static const struct file_operations i2o_seq_fops_claimed = ;
static const struct file_operations i2o_seq_fops_users = ;
static const struct file_operations i2o_seq_fops_priv_msgs = ;
static const struct file_operations i2o_seq_fops_authorized_users = ;
static const struct file_operations i2o_seq_fops_dev_name = ;
static const struct file_operations i2o_seq_fops_dev_identity = ;
static const struct file_operations i2o_seq_fops_ddm_identity = ;
static const struct file_operations i2o_seq_fops_uinfo = ;
static const struct file_operations i2o_seq_fops_sgl_limits = ;
static const struct file_operations i2o_seq_fops_sensors = ;
static i2o_proc_entry i2o_proc_generic_iop_entries[] = ;
static i2o_proc_entry generic_dev_entries[] = ;
static i2o_proc_entry rbs_dev_entries[] = ;
static int i2o_proc_create_entries(struct proc_dir_entry *dir,
i2o_proc_entry * i2o_pe, void *data)
static void i2o_proc_subdir_remove(struct proc_dir_entry *dir)
;
static void i2o_proc_device_add(struct proc_dir_entry *dir,
struct i2o_device *dev)
static int i2o_proc_iop_add(struct proc_dir_entry *dir,
struct i2o_controller *c)
static void i2o_proc_iop_remove(struct proc_dir_entry *dir,
struct i2o_controller *c)
static int __init i2o_proc_fs_create(void)
;
static int __exit i2o_proc_fs_destroy(void)
;
static int __init i2o_proc_init(void)
;
static void __exit i2o_proc_exit(void)
;
MODULE_AUTHOR("Deepak Saxena");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION(OSM_DESCRIPTION);
MODULE_VERSION(OSM_VERSION);
module_init(i2o_proc_init);
module_exit(i2o_proc_exit);
