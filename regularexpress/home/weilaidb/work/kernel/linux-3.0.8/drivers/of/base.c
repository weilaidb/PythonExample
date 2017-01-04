struct device_node *allnodes;
struct device_node *of_chosen;
DEFINE_RWLOCK(devtree_lock);
int of_n_addr_cells(struct device_node *np)
EXPORT_SYMBOL(of_n_addr_cells);
int of_n_size_cells(struct device_node *np)
EXPORT_SYMBOL(of_n_size_cells);
#if !defined(CONFIG_SPARC)
struct device_node *of_node_get(struct device_node *node)
EXPORT_SYMBOL(of_node_get);
static inline struct device_node *kref_to_device_node(struct kref *kref)
static void of_node_release(struct kref *kref)
void of_node_put(struct device_node *node)
EXPORT_SYMBOL(of_node_put);
struct property *of_find_property(const struct device_node *np,
const char *name,
int *lenp)
EXPORT_SYMBOL(of_find_property);
struct device_node *of_find_all_nodes(struct device_node *prev)
EXPORT_SYMBOL(of_find_all_nodes);
const void *of_get_property(const struct device_node *np, const char *name,
int *lenp)
EXPORT_SYMBOL(of_get_property);
int of_device_is_compatible(const struct device_node *device,
const char *compat)
EXPORT_SYMBOL(of_device_is_compatible);
int of_machine_is_compatible(const char *compat)
EXPORT_SYMBOL(of_machine_is_compatible);
int of_device_is_available(const struct device_node *device)
EXPORT_SYMBOL(of_device_is_available);
struct device_node *of_get_parent(const struct device_node *node)
EXPORT_SYMBOL(of_get_parent);
struct device_node *of_get_next_parent(struct device_node *node)
struct device_node *of_get_next_child(const struct device_node *node,
struct device_node *prev)
EXPORT_SYMBOL(of_get_next_child);
struct device_node *of_find_node_by_path(const char *path)
EXPORT_SYMBOL(of_find_node_by_path);
struct device_node *of_find_node_by_name(struct device_node *from,
const char *name)
EXPORT_SYMBOL(of_find_node_by_name);
struct device_node *of_find_node_by_type(struct device_node *from,
const char *type)
EXPORT_SYMBOL(of_find_node_by_type);
struct device_node *of_find_compatible_node(struct device_node *from,
const char *type, const char *compatible)
EXPORT_SYMBOL(of_find_compatible_node);
struct device_node *of_find_node_with_property(struct device_node *from,
const char *prop_name)
EXPORT_SYMBOL(of_find_node_with_property);
const struct of_device_id *of_match_node(const struct of_device_id *matches,
const struct device_node *node)
EXPORT_SYMBOL(of_match_node);
struct device_node *of_find_matching_node(struct device_node *from,
const struct of_device_id *matches)
EXPORT_SYMBOL(of_find_matching_node);
int of_modalias_node(struct device_node *node, char *modalias, int len)
EXPORT_SYMBOL_GPL(of_modalias_node);
struct device_node *of_find_node_by_phandle(phandle handle)
EXPORT_SYMBOL(of_find_node_by_phandle);
struct device_node *
of_parse_phandle(struct device_node *np, const char *phandle_name, int index)
EXPORT_SYMBOL(of_parse_phandle);
int of_parse_phandles_with_args(struct device_node *np, const char *list_name,
const char *cells_name, int index,
struct device_node **out_node,
const void **out_args)
EXPORT_SYMBOL(of_parse_phandles_with_args);
int prom_add_property(struct device_node *np, struct property *prop)
int prom_remove_property(struct device_node *np, struct property *prop)
int prom_update_property(struct device_node *np,
struct property *newprop,
struct property *oldprop)
#if defined(CONFIG_OF_DYNAMIC)
void of_attach_node(struct device_node *np)
void of_detach_node(struct device_node *np)
