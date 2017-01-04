static int rps_sock_flow_sysctl(ctl_table *table, int write,
void __user *buffer, size_t *lenp, loff_t *ppos)
static struct ctl_table net_core_table[] = ;
static struct ctl_table netns_core_table[] = ;
__net_initdata struct ctl_path net_core_path[] = ;
static __net_init int sysctl_core_net_init(struct net *net)
static __net_exit void sysctl_core_net_exit(struct net *net)
static __net_initdata struct pernet_operations sysctl_core_ops = ;
static __init int sysctl_core_init(void)
fs_initcall(sysctl_core_init);
