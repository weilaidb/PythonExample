static struct ctl_table empty[1];
static ctl_table ipv6_static_skeleton[] = ;
static ctl_table ipv6_table_template[] = ;
static ctl_table ipv6_rotable[] = ;
struct ctl_path net_ipv6_ctl_path[] = ;
EXPORT_SYMBOL_GPL(net_ipv6_ctl_path);
static int __net_init ipv6_sysctl_net_init(struct net *net)
static void __net_exit ipv6_sysctl_net_exit(struct net *net)
static struct pernet_operations ipv6_sysctl_net_ops = ;
static struct ctl_table_header *ip6_header;
int ipv6_sysctl_register(void)
void ipv6_sysctl_unregister(void)
static struct ctl_table_header *ip6_base;
int ipv6_static_sysctl_register(void)
void ipv6_static_sysctl_unregister(void)
