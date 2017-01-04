#define _LINUX_ENCLOSURE_H_
enum enclosure_component_type ;
enum enclosure_status ;
enum enclosure_component_setting ;
struct enclosure_device;
struct enclosure_component;
struct enclosure_component_callbacks ;
struct enclosure_component ;
struct enclosure_device ;
static inline struct enclosure_device *
to_enclosure_device(struct device *dev)
static inline struct enclosure_component *
to_enclosure_component(struct device *dev)
struct enclosure_device *
enclosure_register(struct device *, const char *, int,
struct enclosure_component_callbacks *);
void enclosure_unregister(struct enclosure_device *);
struct enclosure_component *
enclosure_component_register(struct enclosure_device *, unsigned int,
enum enclosure_component_type, const char *);
int enclosure_add_device(struct enclosure_device *enclosure, int component,
struct device *dev);
int enclosure_remove_device(struct enclosure_device *, struct device *);
struct enclosure_device *enclosure_find(struct device *dev,
struct enclosure_device *start);
int enclosure_for_each_device(int (*fn)(struct enclosure_device *, void *),
void *data);
