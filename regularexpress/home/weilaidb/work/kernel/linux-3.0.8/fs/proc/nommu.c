static int nommu_region_show(struct seq_file *m, struct vm_region *region)
static int nommu_region_list_show(struct seq_file *m, void *_p)
static void *nommu_region_list_start(struct seq_file *m, loff_t *_pos)
static void nommu_region_list_stop(struct seq_file *m, void *v)
static void *nommu_region_list_next(struct seq_file *m, void *v, loff_t *pos)
static const struct seq_operations proc_nommu_region_list_seqop = ;
static int proc_nommu_region_list_open(struct inode *inode, struct file *file)
static const struct file_operations proc_nommu_region_list_operations = ;
static int __init proc_nommu_init(void)
module_init(proc_nommu_init);
