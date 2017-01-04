MODULE_AUTHOR("David Hinds <dahinds@users.sourceforge.net>");
MODULE_DESCRIPTION("PCMCIA Driver Services");
MODULE_LICENSE("GPL");
static void pcmcia_check_driver(struct pcmcia_driver *p_drv)
struct pcmcia_dynid ;
static ssize_t
pcmcia_store_new_id(struct device_driver *driver, const char *buf, size_t count)
static DRIVER_ATTR(new_id, S_IWUSR, NULL, pcmcia_store_new_id);
static void
pcmcia_free_dynids(struct pcmcia_driver *drv)
static int
pcmcia_create_newid_file(struct pcmcia_driver *drv)
int pcmcia_register_driver(struct pcmcia_driver *driver)
EXPORT_SYMBOL(pcmcia_register_driver);
void pcmcia_unregister_driver(struct pcmcia_driver *driver)
EXPORT_SYMBOL(pcmcia_unregister_driver);
static struct pcmcia_device *pcmcia_get_dev(struct pcmcia_device *p_dev)
static void pcmcia_put_dev(struct pcmcia_device *p_dev)
static void pcmcia_release_function(struct kref *ref)
static void pcmcia_release_dev(struct device *dev)
static int pcmcia_device_probe(struct device *dev)
static void pcmcia_card_remove(struct pcmcia_socket *s, struct pcmcia_device *leftover)
static int pcmcia_device_remove(struct device *dev)
static int pcmcia_device_query(struct pcmcia_device *p_dev)
static struct pcmcia_device *pcmcia_device_add(struct pcmcia_socket *s,
unsigned int function)
static int pcmcia_card_add(struct pcmcia_socket *s)
static int pcmcia_requery_callback(struct device *dev, void * _data)
static void pcmcia_requery(struct pcmcia_socket *s)
static int pcmcia_load_firmware(struct pcmcia_device *dev, char * filename)
static inline int pcmcia_load_firmware(struct pcmcia_device *dev, char * filename)
static inline int pcmcia_devmatch(struct pcmcia_device *dev,
const struct pcmcia_device_id *did)
static int pcmcia_bus_match(struct device *dev, struct device_driver *drv)
static int pcmcia_bus_uevent(struct device *dev, struct kobj_uevent_env *env)
static int pcmcia_bus_uevent(struct device *dev, struct kobj_uevent_env *env)
static int pcmcia_dev_suspend(struct device *dev, pm_message_t state);
static int pcmcia_dev_resume(struct device *dev);
static int runtime_suspend(struct device *dev)
static int runtime_resume(struct device *dev)
#define pcmcia_device_attr(field, test, format)				\
static ssize_t field##_show (struct device *dev, struct device_attribute *attr, char *buf)		\
#define pcmcia_device_stringattr(name, field)					\
static ssize_t name##_show (struct device *dev, struct device_attribute *attr, char *buf)		\
pcmcia_device_attr(func, socket, "0x%02x\n");
pcmcia_device_attr(func_id, has_func_id, "0x%02x\n");
pcmcia_device_attr(manf_id, has_manf_id, "0x%04x\n");
pcmcia_device_attr(card_id, has_card_id, "0x%04x\n");
pcmcia_device_stringattr(prod_id1, prod_id[0]);
pcmcia_device_stringattr(prod_id2, prod_id[1]);
pcmcia_device_stringattr(prod_id3, prod_id[2]);
pcmcia_device_stringattr(prod_id4, prod_id[3]);
static ssize_t pcmcia_show_resources(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t pcmcia_show_pm_state(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t pcmcia_store_pm_state(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t modalias_show(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t pcmcia_store_allow_func_id_match(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static struct device_attribute pcmcia_dev_attrs[] = ;
static int pcmcia_dev_suspend(struct device *dev, pm_message_t state)
static int pcmcia_dev_resume(struct device *dev)
static int pcmcia_bus_suspend_callback(struct device *dev, void * _data)
static int pcmcia_bus_resume_callback(struct device *dev, void * _data)
static int pcmcia_bus_resume(struct pcmcia_socket *skt)
static int pcmcia_bus_suspend(struct pcmcia_socket *skt)
static int pcmcia_bus_remove(struct pcmcia_socket *skt)
static int pcmcia_bus_add(struct pcmcia_socket *skt)
static int pcmcia_bus_early_resume(struct pcmcia_socket *skt)
struct pcmcia_device *pcmcia_dev_present(struct pcmcia_device *_p_dev)
EXPORT_SYMBOL(pcmcia_dev_present);
static struct pcmcia_callback pcmcia_bus_callback = ;
static int __devinit pcmcia_bus_add_socket(struct device *dev,
struct class_interface *class_intf)
static void pcmcia_bus_remove_socket(struct device *dev,
struct class_interface *class_intf)
static struct class_interface pcmcia_bus_interface __refdata = ;
struct bus_type pcmcia_bus_type = ;
static int __init init_pcmcia_bus(void)
fs_initcall(init_pcmcia_bus);
static void __exit exit_pcmcia_bus(void)
module_exit(exit_pcmcia_bus);
MODULE_ALIAS("ds");
