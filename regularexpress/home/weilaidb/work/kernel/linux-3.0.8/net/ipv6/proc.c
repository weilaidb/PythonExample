static int sockstat6_seq_show(struct seq_file *seq, void *v)
static int sockstat6_seq_open(struct inode *inode, struct file *file)
static const struct file_operations sockstat6_seq_fops = ;
static const struct snmp_mib snmp6_ipstats_list[] = ;
static const struct snmp_mib snmp6_icmp6_list[] = ;
static const char *const icmp6type2name[256] = ;
static const struct snmp_mib snmp6_udp6_list[] = ;
static const struct snmp_mib snmp6_udplite6_list[] = ;
static void snmp6_seq_show_icmpv6msg(struct seq_file *seq, void __percpu **pcpumib,
atomic_long_t *smib)
static void snmp6_seq_show_item(struct seq_file *seq, void __percpu **pcpumib,
atomic_long_t *smib,
const struct snmp_mib *itemlist)
static void snmp6_seq_show_item64(struct seq_file *seq, void __percpu **mib,
const struct snmp_mib *itemlist, size_t syncpoff)
static int snmp6_seq_show(struct seq_file *seq, void *v)
static int snmp6_seq_open(struct inode *inode, struct file *file)
static const struct file_operations snmp6_seq_fops = ;
static int snmp6_dev_seq_show(struct seq_file *seq, void *v)
static int snmp6_dev_seq_open(struct inode *inode, struct file *file)
static const struct file_operations snmp6_dev_seq_fops = ;
int snmp6_register_dev(struct inet6_dev *idev)
int snmp6_unregister_dev(struct inet6_dev *idev)
static int __net_init ipv6_proc_init_net(struct net *net)
static void __net_exit ipv6_proc_exit_net(struct net *net)
static struct pernet_operations ipv6_proc_ops = ;
int __init ipv6_misc_proc_init(void)
void ipv6_misc_proc_exit(void)
