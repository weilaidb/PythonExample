struct nfsd_stats	nfsdstats;
struct svc_stat		nfsd_svcstats = ;
static int nfsd_proc_show(struct seq_file *seq, void *v)
static int nfsd_proc_open(struct inode *inode, struct file *file)
static const struct file_operations nfsd_proc_fops = ;
void
nfsd_stat_init(void)
void
nfsd_stat_shutdown(void)
