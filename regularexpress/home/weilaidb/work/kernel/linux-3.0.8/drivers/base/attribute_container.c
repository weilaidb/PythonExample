struct internal_container ;
static void internal_container_klist_get(struct klist_node *n)
static void internal_container_klist_put(struct klist_node *n)
struct attribute_container *
attribute_container_classdev_to_container(struct device *classdev)
EXPORT_SYMBOL_GPL(attribute_container_classdev_to_container);
static LIST_HEAD(attribute_container_list);
static DEFINE_MUTEX(attribute_container_mutex);
int
attribute_container_register(struct attribute_container *cont)
EXPORT_SYMBOL_GPL(attribute_container_register);
int
attribute_container_unregister(struct attribute_container *cont)
EXPORT_SYMBOL_GPL(attribute_container_unregister);
static void attribute_container_release(struct device *classdev)
void
attribute_container_add_device(struct device *dev,
int (*fn)(struct attribute_container *,
struct device *,
struct device *))
#define klist_for_each_entry(pos, head, member, iter) \
for (klist_iter_init(head, iter); (pos = () ) != NULL; )
void
attribute_container_remove_device(struct device *dev,
void (*fn)(struct attribute_container *,
struct device *,
struct device *))
void
attribute_container_device_trigger(struct device *dev,
int (*fn)(struct attribute_container *,
struct device *,
struct device *))
void
attribute_container_trigger(struct device *dev,
int (*fn)(struct attribute_container *,
struct device *))
int
attribute_container_add_attrs(struct device *classdev)
int
attribute_container_add_class_device(struct device *classdev)
int
attribute_container_add_class_device_adapter(struct attribute_container *cont,
struct device *dev,
struct device *classdev)
void
attribute_container_remove_attrs(struct device *classdev)
void
attribute_container_class_device_del(struct device *classdev)
struct device *
attribute_container_find_class_device(struct attribute_container *cont,
struct device *dev)
EXPORT_SYMBOL_GPL(attribute_container_find_class_device);
