#undef DEBUG
static DEFINE_MUTEX(rpadlpar_mutex);
#define DLPAR_MODULE_NAME "rpadlpar_io"
#define NODE_TYPE_VIO  1
#define NODE_TYPE_SLOT 2
#define NODE_TYPE_PHB  3
static struct device_node *find_vio_slot_node(char *drc_name)
static struct device_node *find_php_slot_pci_node(char *drc_name,
char *drc_type)
static struct device_node *find_dlpar_node(char *drc_name, int *node_type)
static struct slot *find_php_slot(struct device_node *dn)
static struct pci_dev *dlpar_find_new_dev(struct pci_bus *parent,
struct device_node *dev_dn)
static void dlpar_pci_add_bus(struct device_node *dn)
static int dlpar_add_pci_slot(char *drc_name, struct device_node *dn)
static int dlpar_remove_phb(char *drc_name, struct device_node *dn)
static int dlpar_add_phb(char *drc_name, struct device_node *dn)
static int dlpar_add_vio_slot(char *drc_name, struct device_node *dn)
int dlpar_add_slot(char *drc_name)
static int dlpar_remove_vio_slot(char *drc_name, struct device_node *dn)
int dlpar_remove_pci_slot(char *drc_name, struct device_node *dn)
int dlpar_remove_slot(char *drc_name)
static inline int is_dlpar_capable(void)
int __init rpadlpar_io_init(void)
void rpadlpar_io_exit(void)
module_init(rpadlpar_io_init);
module_exit(rpadlpar_io_exit);
MODULE_LICENSE("GPL");
