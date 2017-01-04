static int idefloppy_capacity_proc_show(struct seq_file *m, void *v)
static int idefloppy_capacity_proc_open(struct inode *inode, struct file *file)
static const struct file_operations idefloppy_capacity_proc_fops = ;
ide_proc_entry_t ide_floppy_proc[] = ;
ide_devset_rw_field(bios_cyl, bios_cyl);
ide_devset_rw_field(bios_head, bios_head);
ide_devset_rw_field(bios_sect, bios_sect);
ide_devset_rw_field(ticks, pc_delay);
const struct ide_proc_devset ide_floppy_settings[] = ;
