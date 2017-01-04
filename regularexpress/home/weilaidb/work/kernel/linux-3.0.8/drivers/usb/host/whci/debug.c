struct whc_dbg ;
static void qset_print(struct seq_file *s, struct whc_qset *qset)
static int di_print(struct seq_file *s, void *p)
static int asl_print(struct seq_file *s, void *p)
static int pzl_print(struct seq_file *s, void *p)
static int di_open(struct inode *inode, struct file *file)
static int asl_open(struct inode *inode, struct file *file)
static int pzl_open(struct inode *inode, struct file *file)
static const struct file_operations di_fops = ;
static const struct file_operations asl_fops = ;
static const struct file_operations pzl_fops = ;
void whc_dbg_init(struct whc *whc)
void whc_dbg_clean_up(struct whc *whc)
