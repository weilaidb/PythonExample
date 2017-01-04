static struct proc_dir_entry *proc_ide_root;
static int ide_imodel_proc_show(struct seq_file *m, void *v)
static int ide_imodel_proc_open(struct inode *inode, struct file *file)
static const struct file_operations ide_imodel_proc_fops = ;
static int ide_mate_proc_show(struct seq_file *m, void *v)
static int ide_mate_proc_open(struct inode *inode, struct file *file)
static const struct file_operations ide_mate_proc_fops = ;
static int ide_channel_proc_show(struct seq_file *m, void *v)
static int ide_channel_proc_open(struct inode *inode, struct file *file)
static const struct file_operations ide_channel_proc_fops = ;
static int ide_identify_proc_show(struct seq_file *m, void *v)
static int ide_identify_proc_open(struct inode *inode, struct file *file)
static const struct file_operations ide_identify_proc_fops = ;
static
const struct ide_proc_devset *ide_find_setting(const struct ide_proc_devset *st,
char *name)
static int ide_read_setting(ide_drive_t *drive,
const struct ide_proc_devset *setting)
static int ide_write_setting(ide_drive_t *drive,
const struct ide_proc_devset *setting, int val)
ide_devset_get(xfer_rate, current_speed);
static int set_xfer_rate (ide_drive_t *drive, int arg)
ide_devset_rw(current_speed, xfer_rate);
ide_devset_rw_field(init_speed, init_speed);
ide_devset_rw_flag(nice1, IDE_DFLAG_NICE1);
ide_devset_rw_field(number, dn);
static const struct ide_proc_devset ide_generic_settings[] = ;
static void proc_ide_settings_warn(void)
static int ide_settings_proc_show(struct seq_file *m, void *v)
static int ide_settings_proc_open(struct inode *inode, struct file *file)
#define MAX_LEN	30
static ssize_t ide_settings_proc_write(struct file *file, const char __user *buffer,
size_t count, loff_t *pos)
static const struct file_operations ide_settings_proc_fops = ;
static int ide_capacity_proc_show(struct seq_file *m, void *v)
static int ide_capacity_proc_open(struct inode *inode, struct file *file)
const struct file_operations ide_capacity_proc_fops = ;
EXPORT_SYMBOL_GPL(ide_capacity_proc_fops);
static int ide_geometry_proc_show(struct seq_file *m, void *v)
static int ide_geometry_proc_open(struct inode *inode, struct file *file)
const struct file_operations ide_geometry_proc_fops = ;
EXPORT_SYMBOL(ide_geometry_proc_fops);
static int ide_dmodel_proc_show(struct seq_file *seq, void *v)
static int ide_dmodel_proc_open(struct inode *inode, struct file *file)
static const struct file_operations ide_dmodel_proc_fops = ;
static int ide_driver_proc_show(struct seq_file *m, void *v)
static int ide_driver_proc_open(struct inode *inode, struct file *file)
static int ide_replace_subdriver(ide_drive_t *drive, const char *driver)
static ssize_t ide_driver_proc_write(struct file *file, const char __user *buffer,
size_t count, loff_t *pos)
static const struct file_operations ide_driver_proc_fops = ;
static int ide_media_proc_show(struct seq_file *m, void *v)
static int ide_media_proc_open(struct inode *inode, struct file *file)
static const struct file_operations ide_media_proc_fops = ;
static ide_proc_entry_t generic_drive_entries[] = ;
static void ide_add_proc_entries(struct proc_dir_entry *dir, ide_proc_entry_t *p, void *data)
static void ide_remove_proc_entries(struct proc_dir_entry *dir, ide_proc_entry_t *p)
void ide_proc_register_driver(ide_drive_t *drive, struct ide_driver *driver)
EXPORT_SYMBOL(ide_proc_register_driver);
void ide_proc_unregister_driver(ide_drive_t *drive, struct ide_driver *driver)
EXPORT_SYMBOL(ide_proc_unregister_driver);
void ide_proc_port_register_devices(ide_hwif_t *hwif)
void ide_proc_unregister_device(ide_drive_t *drive)
static ide_proc_entry_t hwif_entries[] = ;
void ide_proc_register_port(ide_hwif_t *hwif)
void ide_proc_unregister_port(ide_hwif_t *hwif)
static int proc_print_driver(struct device_driver *drv, void *data)
static int ide_drivers_show(struct seq_file *s, void *p)
static int ide_drivers_open(struct inode *inode, struct file *file)
static const struct file_operations ide_drivers_operations = ;
void proc_ide_create(void)
void proc_ide_destroy(void)
