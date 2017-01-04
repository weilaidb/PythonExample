static const struct snmp_mib sctp_snmp_list[] = ;
static int sctp_snmp_seq_show(struct seq_file *seq, void *v)
static int sctp_snmp_seq_open(struct inode *inode, struct file *file)
static const struct file_operations sctp_snmp_seq_fops = ;
int __init sctp_snmp_proc_init(void)
void sctp_snmp_proc_exit(void)
static void sctp_seq_dump_local_addrs(struct seq_file *seq, struct sctp_ep_common *epb)
static void sctp_seq_dump_remote_addrs(struct seq_file *seq, struct sctp_association *assoc)
static void * sctp_eps_seq_start(struct seq_file *seq, loff_t *pos)
static void sctp_eps_seq_stop(struct seq_file *seq, void *v)
static void * sctp_eps_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static int sctp_eps_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations sctp_eps_ops = ;
static int sctp_eps_seq_open(struct inode *inode, struct file *file)
static const struct file_operations sctp_eps_seq_fops = ;
int __init sctp_eps_proc_init(void)
void sctp_eps_proc_exit(void)
static void * sctp_assocs_seq_start(struct seq_file *seq, loff_t *pos)
static void sctp_assocs_seq_stop(struct seq_file *seq, void *v)
static void * sctp_assocs_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static int sctp_assocs_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations sctp_assoc_ops = ;
static int sctp_assocs_seq_open(struct inode *inode, struct file *file)
static const struct file_operations sctp_assocs_seq_fops = ;
int __init sctp_assocs_proc_init(void)
void sctp_assocs_proc_exit(void)
static void *sctp_remaddr_seq_start(struct seq_file *seq, loff_t *pos)
static void *sctp_remaddr_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void sctp_remaddr_seq_stop(struct seq_file *seq, void *v)
static int sctp_remaddr_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations sctp_remaddr_ops = ;
void sctp_remaddr_proc_exit(void)
static int sctp_remaddr_seq_open(struct inode *inode, struct file *file)
static const struct file_operations sctp_remaddr_seq_fops = ;
int __init sctp_remaddr_proc_init(void)
