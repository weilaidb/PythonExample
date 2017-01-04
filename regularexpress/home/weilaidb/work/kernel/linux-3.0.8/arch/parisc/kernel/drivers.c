struct hppa_dma_ops *hppa_dma_ops __read_mostly;
EXPORT_SYMBOL(hppa_dma_ops);
static struct device root = ;
static inline int check_dev(struct device *dev)
static struct device *
parse_tree_node(struct device *parent, int index, struct hardware_path *modpath);
struct recurse_struct ;
static int descend_children(struct device * dev, void * data)
static int for_each_padev(int (*fn)(struct device *, void *), void * data)
static int match_device(struct parisc_driver *driver, struct parisc_device *dev)
static int parisc_driver_probe(struct device *dev)
static int parisc_driver_remove(struct device *dev)
int register_parisc_driver(struct parisc_driver *driver)
EXPORT_SYMBOL(register_parisc_driver);
struct match_count ;
static int match_and_count(struct device * dev, void * data)
int count_parisc_driver(struct parisc_driver *driver)
int unregister_parisc_driver(struct parisc_driver *driver)
EXPORT_SYMBOL(unregister_parisc_driver);
struct find_data ;
static int find_device(struct device * dev, void * data)
static struct parisc_device *find_device_by_addr(unsigned long hpa)
const struct parisc_device *
find_pa_parent_type(const struct parisc_device *padev, int type)
static inline int is_pci_dev(struct device *dev)
static inline int is_pci_dev(struct device *dev)
static void get_node_path(struct device *dev, struct hardware_path *path)
static char *print_hwpath(struct hardware_path *path, char *output)
char *print_pa_hwpath(struct parisc_device *dev, char *output)
EXPORT_SYMBOL(print_pa_hwpath);
#if defined(CONFIG_PCI) || defined(CONFIG_ISA)
void get_pci_node_path(struct pci_dev *pdev, struct hardware_path *path)
EXPORT_SYMBOL(get_pci_node_path);
char *print_pci_hwpath(struct pci_dev *dev, char *output)
EXPORT_SYMBOL(print_pci_hwpath);
static void setup_bus_id(struct parisc_device *padev)
struct parisc_device * create_tree_node(char id, struct device *parent)
struct match_id_data ;
static int match_by_id(struct device * dev, void * data)
static struct parisc_device * alloc_tree_node(struct device *parent, char id)
static struct parisc_device *create_parisc_device(struct hardware_path *modpath)
struct parisc_device *
alloc_pa_dev(unsigned long hpa, struct hardware_path *mod_path)
static int parisc_generic_match(struct device *dev, struct device_driver *drv)
static ssize_t make_modalias(struct device *dev, char *buf)
static int parisc_uevent(struct device *dev, struct kobj_uevent_env *env)
#define pa_dev_attr(name, field, format_string)				\
static ssize_t name##_show(struct device *dev, struct device_attribute *attr, char *buf)		\
#define pa_dev_attr_id(field, format) pa_dev_attr(field, id.field, format)
pa_dev_attr(irq, irq, "%u\n");
pa_dev_attr_id(hw_type, "0x%02x\n");
pa_dev_attr(rev, id.hversion_rev, "0x%x\n");
pa_dev_attr_id(hversion, "0x%03x\n");
pa_dev_attr_id(sversion, "0x%05x\n");
static ssize_t modalias_show(struct device *dev, struct device_attribute *attr, char *buf)
static struct device_attribute parisc_device_attrs[] = ;
struct bus_type parisc_bus_type = ;
int register_parisc_device(struct parisc_device *dev)
static int match_pci_device(struct device *dev, int index,
struct hardware_path *modpath)
static int match_parisc_device(struct device *dev, int index,
struct hardware_path *modpath)
struct parse_tree_data ;
static int check_parent(struct device * dev, void * data)
static struct device *
parse_tree_node(struct device *parent, int index, struct hardware_path *modpath)
struct device *hwpath_to_device(struct hardware_path *modpath)
EXPORT_SYMBOL(hwpath_to_device);
void device_to_hwpath(struct device *dev, struct hardware_path *path)
EXPORT_SYMBOL(device_to_hwpath);
#define BC_PORT_MASK 0x8
#define BC_LOWER_PORT 0x8
#define BUS_CONVERTER(dev) \
((dev->id.hw_type == HPHW_IOA) || (dev->id.hw_type == HPHW_BCPORT))
#define IS_LOWER_PORT(dev) \
((gsc_readl(dev->hpa.start + offsetof(struct bc_module, io_status)) \
& BC_PORT_MASK) == BC_LOWER_PORT)
#define MAX_NATIVE_DEVICES 64
#define NATIVE_DEVICE_OFFSET 0x1000
#define FLEX_MASK 	F_EXTEND(0xfffc0000)
#define IO_IO_LOW	offsetof(struct bc_module, io_io_low)
#define IO_IO_HIGH	offsetof(struct bc_module, io_io_high)
#define READ_IO_IO_LOW(dev)  (unsigned long)(signed int)gsc_readl(dev->hpa.start + IO_IO_LOW)
#define READ_IO_IO_HIGH(dev) (unsigned long)(signed int)gsc_readl(dev->hpa.start + IO_IO_HIGH)
static void walk_native_bus(unsigned long io_io_low, unsigned long io_io_high,
struct device *parent);
void walk_lower_bus(struct parisc_device *dev)
static void walk_native_bus(unsigned long io_io_low, unsigned long io_io_high,
struct device *parent)
#define CENTRAL_BUS_ADDR F_EXTEND(0xfff80000)
void walk_central_bus(void)
static void print_parisc_device(struct parisc_device *dev)
void init_parisc_bus(void)
static int print_one_device(struct device * dev, void * data)
void print_parisc_devices(void)
