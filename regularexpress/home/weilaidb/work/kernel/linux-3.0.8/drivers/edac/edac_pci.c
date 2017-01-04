static DEFINE_MUTEX(edac_pci_ctls_mutex);
static LIST_HEAD(edac_pci_list);
static atomic_t pci_indexes = ATOMIC_INIT(0);
struct edac_pci_ctl_info *edac_pci_alloc_ctl_info(unsigned int sz_pvt,
const char *edac_pci_name)
EXPORT_SYMBOL_GPL(edac_pci_alloc_ctl_info);
void edac_pci_free_ctl_info(struct edac_pci_ctl_info *pci)
EXPORT_SYMBOL_GPL(edac_pci_free_ctl_info);
static struct edac_pci_ctl_info *find_edac_pci_by_dev(struct device *dev)
static int add_edac_pci_to_global_list(struct edac_pci_ctl_info *pci)
static void del_edac_pci_from_global_list(struct edac_pci_ctl_info *pci)
static void edac_pci_workq_function(struct work_struct *work_req)
static void edac_pci_workq_setup(struct edac_pci_ctl_info *pci,
unsigned int msec)
static void edac_pci_workq_teardown(struct edac_pci_ctl_info *pci)
void edac_pci_reset_delay_period(struct edac_pci_ctl_info *pci,
unsigned long value)
EXPORT_SYMBOL_GPL(edac_pci_reset_delay_period);
int edac_pci_alloc_index(void)
EXPORT_SYMBOL_GPL(edac_pci_alloc_index);
int edac_pci_add_device(struct edac_pci_ctl_info *pci, int edac_idx)
EXPORT_SYMBOL_GPL(edac_pci_add_device);
struct edac_pci_ctl_info *edac_pci_del_device(struct device *dev)
EXPORT_SYMBOL_GPL(edac_pci_del_device);
static void edac_pci_generic_check(struct edac_pci_ctl_info *pci)
static int edac_pci_idx;
#define EDAC_PCI_GENCTL_NAME	"EDAC PCI controller"
struct edac_pci_gen_data ;
struct edac_pci_ctl_info *edac_pci_create_generic_ctl(struct device *dev,
const char *mod_name)
EXPORT_SYMBOL_GPL(edac_pci_create_generic_ctl);
void edac_pci_release_generic_ctl(struct edac_pci_ctl_info *pci)
EXPORT_SYMBOL_GPL(edac_pci_release_generic_ctl);
