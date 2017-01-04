static int sysctl_depth(struct ctl_table *table)
static struct ctl_table *sysctl_parent(struct ctl_table *table, int n)
static void sysctl_print_path(struct ctl_table *table)
static struct ctl_table *sysctl_check_lookup(struct nsproxy *namespaces,
struct ctl_table *table)
static void set_fail(const char **fail, struct ctl_table *table, const char *str)
static void sysctl_check_leaf(struct nsproxy *namespaces,
struct ctl_table *table, const char **fail)
int sysctl_check_table(struct nsproxy *namespaces, struct ctl_table *table)
