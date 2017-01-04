static struct ctl_table_set *
net_ctl_header_lookup(struct ctl_table_root *root, struct nsproxy *namespaces)
static int is_seen(struct ctl_table_set *set)
static int net_ctl_permissions(struct ctl_table_root *root,
struct nsproxy *nsproxy,
struct ctl_table *table)
static struct ctl_table_root net_sysctl_root = ;
static int net_ctl_ro_header_perms(struct ctl_table_root *root,
struct nsproxy *namespaces, struct ctl_table *table)
static struct ctl_table_root net_sysctl_ro_root = ;
static int __net_init sysctl_net_init(struct net *net)
static void __net_exit sysctl_net_exit(struct net *net)
static struct pernet_operations sysctl_pernet_ops = ;
static __init int sysctl_init(void)
subsys_initcall(sysctl_init);
struct ctl_table_header *register_net_sysctl_table(struct net *net,
const struct ctl_path *path, struct ctl_table *table)
EXPORT_SYMBOL_GPL(register_net_sysctl_table);
struct ctl_table_header *register_net_sysctl_rotable(const
struct ctl_path *path, struct ctl_table *table)
EXPORT_SYMBOL_GPL(register_net_sysctl_rotable);
void unregister_net_sysctl_table(struct ctl_table_header *header)
EXPORT_SYMBOL_GPL(unregister_net_sysctl_table);
