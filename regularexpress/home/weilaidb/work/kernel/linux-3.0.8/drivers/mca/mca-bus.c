static struct mca_bus *mca_root_busses[MAX_MCA_BUSSES];
#define MCA_DEVINFO(i,s)
struct mca_device_info ;
static int mca_bus_match (struct device *dev, struct device_driver *drv)
struct bus_type mca_bus_type = ;
EXPORT_SYMBOL (mca_bus_type);
static ssize_t mca_show_pos_id(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t mca_show_pos(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(id, S_IRUGO, mca_show_pos_id, NULL);
static DEVICE_ATTR(pos, S_IRUGO, mca_show_pos, NULL);
int __init mca_register_device(int bus, struct mca_device *mca_dev)
struct mca_bus * __devinit mca_attach_bus(int bus)
int __init mca_system_init (void)
