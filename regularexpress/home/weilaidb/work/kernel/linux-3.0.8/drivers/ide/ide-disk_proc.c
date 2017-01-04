static int smart_enable(ide_drive_t *drive)
static int get_smart_data(ide_drive_t *drive, u8 *buf, u8 sub_cmd)
static int idedisk_cache_proc_show(struct seq_file *m, void *v)
static int idedisk_cache_proc_open(struct inode *inode, struct file *file)
static const struct file_operations idedisk_cache_proc_fops = ;
static int idedisk_capacity_proc_show(struct seq_file *m, void *v)
static int idedisk_capacity_proc_open(struct inode *inode, struct file *file)
static const struct file_operations idedisk_capacity_proc_fops = ;
static int __idedisk_proc_show(struct seq_file *m, ide_drive_t *drive, u8 sub_cmd)
static int idedisk_sv_proc_show(struct seq_file *m, void *v)
static int idedisk_sv_proc_open(struct inode *inode, struct file *file)
static const struct file_operations idedisk_sv_proc_fops = ;
static int idedisk_st_proc_show(struct seq_file *m, void *v)
static int idedisk_st_proc_open(struct inode *inode, struct file *file)
static const struct file_operations idedisk_st_proc_fops = ;
ide_proc_entry_t ide_disk_proc[] = ;
ide_devset_rw_field(bios_cyl, bios_cyl);
ide_devset_rw_field(bios_head, bios_head);
ide_devset_rw_field(bios_sect, bios_sect);
ide_devset_rw_field(failures, failures);
ide_devset_rw_field(lun, lun);
ide_devset_rw_field(max_failures, max_failures);
const struct ide_proc_devset ide_disk_settings[] = ;
