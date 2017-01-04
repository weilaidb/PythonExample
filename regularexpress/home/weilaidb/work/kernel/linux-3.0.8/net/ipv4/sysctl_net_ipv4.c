static int zero;
static int tcp_retr1_max = 255;
static int ip_local_port_range_min[] = ;
static int ip_local_port_range_max[] = ;
static int tcp_adv_win_scale_min = -31;
static int tcp_adv_win_scale_max = 31;
static int ip_ttl_min = 1;
static int ip_ttl_max = 255;
static int ip_ping_group_range_min[] = ;
static int ip_ping_group_range_max[] = ;
static void set_local_port_range(int range[2])
static int ipv4_local_port_range(ctl_table *table, int write,
void __user *buffer,
size_t *lenp, loff_t *ppos)
void inet_get_ping_group_range_table(struct ctl_table *table, gid_t *low, gid_t *high)
static void set_ping_group_range(struct ctl_table *table, int range[2])
static int ipv4_ping_group_range(ctl_table *table, int write,
void __user *buffer,
size_t *lenp, loff_t *ppos)
static int proc_tcp_congestion_control(ctl_table *ctl, int write,
void __user *buffer, size_t *lenp, loff_t *ppos)
static int proc_tcp_available_congestion_control(ctl_table *ctl,
int write,
void __user *buffer, size_t *lenp,
loff_t *ppos)
static int proc_allowed_congestion_control(ctl_table *ctl,
int write,
void __user *buffer, size_t *lenp,
loff_t *ppos)
static struct ctl_table ipv4_table[] = ;
static struct ctl_table ipv4_net_table[] = ;
struct ctl_path net_ipv4_ctl_path[] = ;
EXPORT_SYMBOL_GPL(net_ipv4_ctl_path);
static __net_init int ipv4_sysctl_init_net(struct net *net)
static __net_exit void ipv4_sysctl_exit_net(struct net *net)
static __net_initdata struct pernet_operations ipv4_sysctl_ops = ;
static __init int sysctl_ipv4_init(void)
__initcall(sysctl_ipv4_init);
