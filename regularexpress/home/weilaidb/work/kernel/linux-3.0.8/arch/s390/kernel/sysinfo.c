static inline int stsi_0(void)
static int stsi_1_1_1(struct sysinfo_1_1_1 *info, char *page, int len)
static int stsi_15_1_x(struct sysinfo_15_1_x *info, char *page, int len)
static int stsi_1_2_2(struct sysinfo_1_2_2 *info, char *page, int len)
static int stsi_2_2_2(struct sysinfo_2_2_2 *info, char *page, int len)
static int stsi_3_2_2(struct sysinfo_3_2_2 *info, char *page, int len)
static int proc_read_sysinfo(char *page, char **start,
off_t off, int count,
int *eof, void *data)
static __init int create_proc_sysinfo(void)
device_initcall(create_proc_sysinfo);
static DECLARE_RWSEM(service_level_sem);
static LIST_HEAD(service_level_list);
int register_service_level(struct service_level *slr)
EXPORT_SYMBOL(register_service_level);
int unregister_service_level(struct service_level *slr)
EXPORT_SYMBOL(unregister_service_level);
static void *service_level_start(struct seq_file *m, loff_t *pos)
static void *service_level_next(struct seq_file *m, void *p, loff_t *pos)
static void service_level_stop(struct seq_file *m, void *p)
static int service_level_show(struct seq_file *m, void *p)
static const struct seq_operations service_level_seq_ops = ;
static int service_level_open(struct inode *inode, struct file *file)
static const struct file_operations service_level_ops = ;
static void service_level_vm_print(struct seq_file *m,
struct service_level *slr)
static struct service_level service_level_vm = ;
static __init int create_proc_service_level(void)
subsys_initcall(create_proc_service_level);
int get_cpu_capability(unsigned int *capability)
void s390_adjust_jiffies(void)
void __cpuinit calibrate_delay(void)
