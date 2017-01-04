static void add_node_proc_entries(struct device_node *np)
static void remove_node_proc_entries(struct device_node *np)
static void add_node_proc_entries(struct device_node *np)
static void remove_node_proc_entries(struct device_node *np)
static struct device_node *derive_parent(const char *path)
BLOCKING_NOTIFIER_HEAD(pSeries_reconfig_chain);
int pSeries_reconfig_notifier_register(struct notifier_block *nb)
void pSeries_reconfig_notifier_unregister(struct notifier_block *nb)
static int pSeries_reconfig_add_node(const char *path, struct property *proplist)
static int pSeries_reconfig_remove_node(struct device_node *np)
static void release_prop_list(const struct property *prop)
static char * parse_next_property(char *buf, char *end, char **name, int *length,
unsigned char **value)
static struct property *new_property(const char *name, const int length,
const unsigned char *value, struct property *last)
static int do_add_node(char *buf, size_t bufsize)
static int do_remove_node(char *buf)
static char *parse_node(char *buf, size_t bufsize, struct device_node **npp)
static int do_add_property(char *buf, size_t bufsize)
static int do_remove_property(char *buf, size_t bufsize)
static int do_update_property(char *buf, size_t bufsize)
static ssize_t ofdt_write(struct file *file, const char __user *buf, size_t count,
loff_t *off)
static const struct file_operations ofdt_fops = ;
static int proc_ppc64_create_ofdt(void)
__initcall(proc_ppc64_create_ofdt);
