static int sockstat_seq_show(struct seq_file *seq, void *v)
static int sockstat_seq_open(struct inode *inode, struct file *file)
static const struct file_operations sockstat_seq_fops = ;
static const struct snmp_mib snmp4_ipstats_list[] = ;
static const struct snmp_mib snmp4_ipextstats_list[] = ;
static const struct  icmpmibmap[] = ;
static const struct snmp_mib snmp4_tcp_list[] = ;
static const struct snmp_mib snmp4_udp_list[] = ;
static const struct snmp_mib snmp4_net_list[] = ;
static void icmpmsg_put_line(struct seq_file *seq, unsigned long *vals,
unsigned short *type, int count)
static void icmpmsg_put(struct seq_file *seq)
static void icmp_put(struct seq_file *seq)
static int snmp_seq_show(struct seq_file *seq, void *v)
static int snmp_seq_open(struct inode *inode, struct file *file)
static const struct file_operations snmp_seq_fops = ;
static int netstat_seq_show(struct seq_file *seq, void *v)
static int netstat_seq_open(struct inode *inode, struct file *file)
static const struct file_operations netstat_seq_fops = ;
static __net_init int ip_proc_init_net(struct net *net)
static __net_exit void ip_proc_exit_net(struct net *net)
static __net_initdata struct pernet_operations ip_proc_ops = ;
int __init ip_misc_proc_init(void)
