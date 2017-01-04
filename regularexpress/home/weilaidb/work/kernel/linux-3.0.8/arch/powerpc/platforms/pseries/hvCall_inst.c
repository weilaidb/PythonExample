DEFINE_PER_CPU(struct hcall_stats[HCALL_STAT_ARRAY_SIZE], hcall_stats);
static void *hc_start(struct seq_file *m, loff_t *pos)
static void *hc_next(struct seq_file *m, void *p, loff_t * pos)
static void hc_stop(struct seq_file *m, void *p)
static int hc_show(struct seq_file *m, void *p)
static const struct seq_operations hcall_inst_seq_ops = ;
static int hcall_inst_seq_open(struct inode *inode, struct file *file)
static const struct file_operations hcall_inst_seq_fops = ;
#define	HCALL_ROOT_DIR		"hcall_inst"
#define CPU_NAME_BUF_SIZE	32
static void probe_hcall_entry(void *ignored, unsigned long opcode, unsigned long *args)
static void probe_hcall_exit(void *ignored, unsigned long opcode, unsigned long retval,
unsigned long *retbuf)
static int __init hcall_inst_init(void)
__initcall(hcall_inst_init);
