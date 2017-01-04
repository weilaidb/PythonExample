static char const page_strtbl[][3] = ;
#define page(flags)    (((flags) & 0x30000) >> 16)
#define strpage(flags) page_strtbl[page(flags)]
struct cplbinfo_data ;
static void cplbinfo_print_header(struct seq_file *m)
static int cplbinfo_nomore(struct cplbinfo_data *cdata)
static int cplbinfo_show(struct seq_file *m, void *p)
static void cplbinfo_seq_init(struct cplbinfo_data *cdata, unsigned int cpu)
static void *cplbinfo_start(struct seq_file *m, loff_t *pos)
static void *cplbinfo_next(struct seq_file *m, void *p, loff_t *pos)
static void cplbinfo_stop(struct seq_file *m, void *p)
static const struct seq_operations cplbinfo_sops = ;
#define CPLBINFO_DCPLB_FLAG 0x80000000
static int cplbinfo_open(struct inode *inode, struct file *file)
static const struct file_operations cplbinfo_fops = ;
static int __init cplbinfo_init(void)
late_initcall(cplbinfo_init);
