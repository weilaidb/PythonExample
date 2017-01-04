static const struct snmp_mib xfrm_mib_list[] = ;
static int xfrm_statistics_seq_show(struct seq_file *seq, void *v)
static int xfrm_statistics_seq_open(struct inode *inode, struct file *file)
static const struct file_operations xfrm_statistics_seq_fops = ;
int __net_init xfrm_proc_init(struct net *net)
void xfrm_proc_fini(struct net *net)
