#define _CONFIGFS_MACROS_H_
#define CONFIGFS_EATTR_STRUCT(_name, _item)				\
struct _name##_attribute
#define __CONFIGFS_EATTR(_name, _mode, _show, _store)			\
#define __CONFIGFS_EATTR_RO(_name, _show)				\
#define CONFIGFS_EATTR_OPS_TO_FUNC(_name, _item, _item_member)		\
static struct _item *to_##_name(struct config_item *ci)			\
#define CONFIGFS_EATTR_OPS_SHOW(_name, _item)				\
static ssize_t _name##_attr_show(struct config_item *item,		\
struct configfs_attribute *attr,	\
char *page)				\
#define CONFIGFS_EATTR_OPS_STORE(_name, _item)				\
static ssize_t _name##_attr_store(struct config_item *item,		\
struct configfs_attribute *attr,	\
const char *page, size_t count)	\
#define CONFIGFS_EATTR_OPS(_name, _item, _item_member)			\
CONFIGFS_EATTR_OPS_TO_FUNC(_name, _item, _item_member);		\
CONFIGFS_EATTR_OPS_SHOW(_name, _item);				\
CONFIGFS_EATTR_OPS_STORE(_name, _item);
#define CONFIGFS_EATTR_OPS_RO(_name, _item, _item_member)		\
CONFIGFS_EATTR_OPS_TO_FUNC(_name, _item, _item_member);		\
CONFIGFS_EATTR_OPS_SHOW(_name, _item);
