static inline struct config_item * to_item(struct list_head * entry)
static void config_item_release(struct kref *kref);
void config_item_init(struct config_item * item)
int config_item_set_name(struct config_item * item, const char * fmt, ...)
EXPORT_SYMBOL(config_item_set_name);
void config_item_init_type_name(struct config_item *item,
const char *name,
struct config_item_type *type)
EXPORT_SYMBOL(config_item_init_type_name);
void config_group_init_type_name(struct config_group *group, const char *name,
struct config_item_type *type)
EXPORT_SYMBOL(config_group_init_type_name);
struct config_item * config_item_get(struct config_item * item)
static void config_item_cleanup(struct config_item * item)
static void config_item_release(struct kref *kref)
void config_item_put(struct config_item * item)
void config_group_init(struct config_group *group)
struct config_item *config_group_find_item(struct config_group *group,
const char *name)
EXPORT_SYMBOL(config_item_init);
EXPORT_SYMBOL(config_group_init);
EXPORT_SYMBOL(config_item_get);
EXPORT_SYMBOL(config_item_put);
EXPORT_SYMBOL(config_group_find_item);
