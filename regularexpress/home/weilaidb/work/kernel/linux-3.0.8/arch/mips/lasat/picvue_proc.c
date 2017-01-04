static DEFINE_MUTEX(pvc_mutex);
static char pvc_lines[PVC_NLINES][PVC_LINELEN+1];
static int pvc_linedata[PVC_NLINES];
static struct proc_dir_entry *pvc_display_dir;
static char *pvc_linename[PVC_NLINES] = ;
#define DISPLAY_DIR_NAME "display"
static int scroll_dir, scroll_interval;
static struct timer_list timer;
static void pvc_display(unsigned long data)
static DECLARE_TASKLET(pvc_display_tasklet, &pvc_display, 0);
static int pvc_line_proc_show(struct seq_file *m, void *v)
static int pvc_line_proc_open(struct inode *inode, struct file *file)
static ssize_t pvc_line_proc_write(struct file *file, const char __user *buf,
size_t count, loff_t *pos)
static const struct file_operations pvc_line_proc_fops = ;
static ssize_t pvc_scroll_proc_write(struct file *file, const char __user *buf,
size_t count, loff_t *pos)
static int pvc_scroll_proc_show(struct seq_file *m, void *v)
static int pvc_scroll_proc_open(struct inode *inode, struct file *file)
static const struct file_operations pvc_scroll_proc_fops = ;
void pvc_proc_timerfunc(unsigned long data)
static void pvc_proc_cleanup(void)
static int __init pvc_proc_init(void)
module_init(pvc_proc_init);
module_exit(pvc_proc_cleanup);
MODULE_LICENSE("GPL");
