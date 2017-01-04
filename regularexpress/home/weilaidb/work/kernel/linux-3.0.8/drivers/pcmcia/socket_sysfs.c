#define to_socket(_dev) container_of(_dev, struct pcmcia_socket, dev)
static ssize_t pccard_show_type(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(card_type, 0444, pccard_show_type, NULL);
static ssize_t pccard_show_voltage(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(card_voltage, 0444, pccard_show_voltage, NULL);
static ssize_t pccard_show_vpp(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(card_vpp, 0444, pccard_show_vpp, NULL);
static ssize_t pccard_show_vcc(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(card_vcc, 0444, pccard_show_vcc, NULL);
static ssize_t pccard_store_insert(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(card_insert, 0200, NULL, pccard_store_insert);
static ssize_t pccard_show_card_pm_state(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t pccard_store_card_pm_state(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(card_pm_state, 0644, pccard_show_card_pm_state, pccard_store_card_pm_state);
static ssize_t pccard_store_eject(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(card_eject, 0200, NULL, pccard_store_eject);
static ssize_t pccard_show_irq_mask(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t pccard_store_irq_mask(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(card_irq_mask, 0600, pccard_show_irq_mask, pccard_store_irq_mask);
static ssize_t pccard_show_resource(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t pccard_store_resource(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(available_resources_setup_done, 0600, pccard_show_resource, pccard_store_resource);
static struct attribute *pccard_socket_attributes[] = ;
static const struct attribute_group socket_attrs = ;
int pccard_sysfs_add_socket(struct device *dev)
void pccard_sysfs_remove_socket(struct device *dev)
