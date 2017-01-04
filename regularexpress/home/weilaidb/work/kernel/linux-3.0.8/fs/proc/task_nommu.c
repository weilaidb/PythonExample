void task_mem(struct seq_file *m, struct mm_struct *mm)
unsigned long task_vsize(struct mm_struct *mm)
unsigned long task_statm(struct mm_struct *mm,
unsigned long *shared, unsigned long *text,
unsigned long *data, unsigned long *resident)
static void pad_len_spaces(struct seq_file *m, int len)
static int nommu_vma_show(struct seq_file *m, struct vm_area_struct *vma)
static int show_map(struct seq_file *m, void *_p)
static void *m_start(struct seq_file *m, loff_t *pos)
static void m_stop(struct seq_file *m, void *_vml)
static void *m_next(struct seq_file *m, void *_p, loff_t *pos)
static const struct seq_operations proc_pid_maps_ops = ;
static int maps_open(struct inode *inode, struct file *file)
const struct file_operations proc_maps_operations = ;
