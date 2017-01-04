static ctl_table unix_table[] = ;
static struct ctl_path unix_path[] = ;
int __net_init unix_sysctl_register(struct net *net)
void unix_sysctl_unregister(struct net *net)
