#define _CONFIGFS_H_
#define CONFIGFS_ITEM_NAME_LEN	20
struct module;
struct configfs_item_operations;
struct configfs_group_operations;
struct configfs_attribute;
struct configfs_subsystem;
struct config_item ;
extern int config_item_set_name(struct config_item *, const char *, ...);
static inline char *config_item_name(struct config_item * item)
extern void config_item_init(struct config_item *);
extern void config_item_init_type_name(struct config_item *item,
const char *name,
struct config_item_type *type);
extern struct config_item * config_item_get(struct config_item *);
extern void config_item_put(struct config_item *);
struct config_item_type ;
struct config_group ;
extern void config_group_init(struct config_group *group);
extern void config_group_init_type_name(struct config_group *group,
const char *name,
struct config_item_type *type);
static inline struct config_group *to_config_group(struct config_item *item)
static inline struct config_group *config_group_get(struct config_group *group)
static inline void config_group_put(struct config_group *group)
extern struct config_item *config_group_find_item(struct config_group *,
const char *);
struct configfs_attribute ;
#define CONFIGFS_ATTR_STRUCT(_item)					\
struct _item##_attribute
#define __CONFIGFS_ATTR(_name, _mode, _show, _store)			\
#define __CONFIGFS_ATTR_RO(_name, _show)				\
#define CONFIGFS_ATTR_OPS(_item)					\
static ssize_t _item##_attr_show(struct config_item *item,		\
struct configfs_attribute *attr,	\
char *page)				\
\
static ssize_t _item##_attr_store(struct config_item *item,		\
struct configfs_attribute *attr,	\
const char *page, size_t count)	\
struct configfs_item_operations ;
struct configfs_group_operations ;
struct configfs_subsystem ;
static inline struct configfs_subsystem *to_configfs_subsystem(struct config_group *group)
int configfs_register_subsystem(struct configfs_subsystem *subsys);
void configfs_unregister_subsystem(struct configfs_subsystem *subsys);
int configfs_depend_item(struct configfs_subsystem *subsys, struct config_item *target);
void configfs_undepend_item(struct configfs_subsystem *subsys, struct config_item *target);
