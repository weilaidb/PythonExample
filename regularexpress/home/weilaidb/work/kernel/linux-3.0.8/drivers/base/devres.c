struct devres_node ;
struct devres ;
struct devres_group ;
static int log_devres = 0;
module_param_named(log, log_devres, int, S_IRUGO | S_IWUSR);
static void set_node_dbginfo(struct devres_node *node, const char *name,
size_t size)
static void devres_log(struct device *dev, struct devres_node *node,
const char *op)
#define set_node_dbginfo(node, n, s)	do  while (0)
#define devres_log(dev, node, op)	do  while (0)
static void group_open_release(struct device *dev, void *res)
static void group_close_release(struct device *dev, void *res)
static struct devres_group * node_to_group(struct devres_node *node)
static __always_inline struct devres * alloc_dr(dr_release_t release,
size_t size, gfp_t gfp)
static void add_dr(struct device *dev, struct devres_node *node)
void * __devres_alloc(dr_release_t release, size_t size, gfp_t gfp,
const char *name)
EXPORT_SYMBOL_GPL(__devres_alloc);
void * devres_alloc(dr_release_t release, size_t size, gfp_t gfp)
EXPORT_SYMBOL_GPL(devres_alloc);
void devres_free(void *res)
EXPORT_SYMBOL_GPL(devres_free);
void devres_add(struct device *dev, void *res)
EXPORT_SYMBOL_GPL(devres_add);
static struct devres *find_dr(struct device *dev, dr_release_t release,
dr_match_t match, void *match_data)
void * devres_find(struct device *dev, dr_release_t release,
dr_match_t match, void *match_data)
EXPORT_SYMBOL_GPL(devres_find);
void * devres_get(struct device *dev, void *new_res,
dr_match_t match, void *match_data)
EXPORT_SYMBOL_GPL(devres_get);
void * devres_remove(struct device *dev, dr_release_t release,
dr_match_t match, void *match_data)
EXPORT_SYMBOL_GPL(devres_remove);
int devres_destroy(struct device *dev, dr_release_t release,
dr_match_t match, void *match_data)
EXPORT_SYMBOL_GPL(devres_destroy);
static int remove_nodes(struct device *dev,
struct list_head *first, struct list_head *end,
struct list_head *todo)
static int release_nodes(struct device *dev, struct list_head *first,
struct list_head *end, unsigned long flags)
int devres_release_all(struct device *dev)
void * devres_open_group(struct device *dev, void *id, gfp_t gfp)
EXPORT_SYMBOL_GPL(devres_open_group);
static struct devres_group * find_group(struct device *dev, void *id)
void devres_close_group(struct device *dev, void *id)
EXPORT_SYMBOL_GPL(devres_close_group);
void devres_remove_group(struct device *dev, void *id)
EXPORT_SYMBOL_GPL(devres_remove_group);
int devres_release_group(struct device *dev, void *id)
EXPORT_SYMBOL_GPL(devres_release_group);
static void devm_kzalloc_release(struct device *dev, void *res)
static int devm_kzalloc_match(struct device *dev, void *res, void *data)
void * devm_kzalloc(struct device *dev, size_t size, gfp_t gfp)
EXPORT_SYMBOL_GPL(devm_kzalloc);
void devm_kfree(struct device *dev, void *p)
EXPORT_SYMBOL_GPL(devm_kfree);
