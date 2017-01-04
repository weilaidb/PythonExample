int transport_class_register(struct transport_class *tclass)
EXPORT_SYMBOL_GPL(transport_class_register);
void transport_class_unregister(struct transport_class *tclass)
EXPORT_SYMBOL_GPL(transport_class_unregister);
static int anon_transport_dummy_function(struct transport_container *tc,
struct device *dev,
struct device *cdev)
int anon_transport_class_register(struct anon_transport_class *atc)
EXPORT_SYMBOL_GPL(anon_transport_class_register);
void anon_transport_class_unregister(struct anon_transport_class *atc)
EXPORT_SYMBOL_GPL(anon_transport_class_unregister);
static int transport_setup_classdev(struct attribute_container *cont,
struct device *dev,
struct device *classdev)
void transport_setup_device(struct device *dev)
EXPORT_SYMBOL_GPL(transport_setup_device);
static int transport_add_class_device(struct attribute_container *cont,
struct device *dev,
struct device *classdev)
void transport_add_device(struct device *dev)
EXPORT_SYMBOL_GPL(transport_add_device);
static int transport_configure(struct attribute_container *cont,
struct device *dev,
struct device *cdev)
void transport_configure_device(struct device *dev)
EXPORT_SYMBOL_GPL(transport_configure_device);
static int transport_remove_classdev(struct attribute_container *cont,
struct device *dev,
struct device *classdev)
void transport_remove_device(struct device *dev)
EXPORT_SYMBOL_GPL(transport_remove_device);
static void transport_destroy_classdev(struct attribute_container *cont,
struct device *dev,
struct device *classdev)
void transport_destroy_device(struct device *dev)
EXPORT_SYMBOL_GPL(transport_destroy_device);
