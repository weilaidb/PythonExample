#define EEH_MAX_FAILS	2100000
#define PCI_BUS_RESET_WAIT_MSEC (60*1000)
static int ibm_set_eeh_option;
static int ibm_set_slot_reset;
static int ibm_read_slot_reset_state;
static int ibm_read_slot_reset_state2;
static int ibm_slot_error_detail;
static int ibm_get_config_addr_info;
static int ibm_get_config_addr_info2;
static int ibm_configure_bridge;
static int ibm_configure_pe;
int eeh_subsystem_enabled;
EXPORT_SYMBOL(eeh_subsystem_enabled);
static DEFINE_RAW_SPINLOCK(confirm_error_lock);
static unsigned char slot_errbuf[RTAS_ERROR_LOG_MAX];
static DEFINE_SPINLOCK(slot_errbuf_lock);
static int eeh_error_buf_size;
#define EEH_PCI_REGS_LOG_LEN 4096
static unsigned char pci_regs_buf[EEH_PCI_REGS_LOG_LEN];
static unsigned long no_device;
static unsigned long no_dn;
static unsigned long no_cfg_addr;
static unsigned long ignored_check;
static unsigned long total_mmio_ffs;
static unsigned long false_positives;
static unsigned long slot_resets;
#define IS_BRIDGE(class_code) (((class_code)<<16) == PCI_BASE_CLASS_BRIDGE)
static void rtas_slot_error_detail(struct pci_dn *pdn, int severity,
char *driver_log, size_t loglen)
static size_t gather_pci_data(struct pci_dn *pdn, char * buf, size_t len)
void eeh_slot_error_detail(struct pci_dn *pdn, int severity)
static int read_slot_reset_state(struct pci_dn *pdn, int rets[])
int
eeh_wait_for_slot_status(struct pci_dn *pdn, int max_wait_msecs)
static inline unsigned long eeh_token_to_phys(unsigned long token)
struct device_node * find_device_pe(struct device_node *dn)
static void __eeh_mark_slot(struct device_node *parent, int mode_flag)
void eeh_mark_slot (struct device_node *dn, int mode_flag)
static void __eeh_clear_slot(struct device_node *parent, int mode_flag)
void eeh_clear_slot (struct device_node *dn, int mode_flag)
void __eeh_set_pe_freset(struct device_node *parent, unsigned int *freset)
void eeh_set_pe_freset(struct device_node *dn, unsigned int *freset)
int eeh_dn_check_failure(struct device_node *dn, struct pci_dev *dev)
EXPORT_SYMBOL_GPL(eeh_dn_check_failure);
unsigned long eeh_check_failure(const volatile void __iomem *token, unsigned long val)
EXPORT_SYMBOL(eeh_check_failure);
int
rtas_pci_enable(struct pci_dn *pdn, int function)
static void
rtas_pci_slot_reset(struct pci_dn *pdn, int state)
int pcibios_set_pcie_reset_state(struct pci_dev *dev, enum pcie_reset_state state)
static void __rtas_set_slot_reset(struct pci_dn *pdn)
int rtas_set_slot_reset(struct pci_dn *pdn)
static inline void __restore_bars (struct pci_dn *pdn)
void eeh_restore_bars(struct pci_dn *pdn)
static void eeh_save_bars(struct pci_dn *pdn)
void
rtas_configure_bridge(struct pci_dn *pdn)
#define EEH_ENABLE 1
struct eeh_early_enable_info ;
static int get_pe_addr (int config_addr,
struct eeh_early_enable_info *info)
static void *early_enable_eeh(struct device_node *dn, void *data)
void __init eeh_init(void)
static void eeh_add_device_early(struct device_node *dn)
void eeh_add_device_tree_early(struct device_node *dn)
EXPORT_SYMBOL_GPL(eeh_add_device_tree_early);
static void eeh_add_device_late(struct pci_dev *dev)
void eeh_add_device_tree_late(struct pci_bus *bus)
EXPORT_SYMBOL_GPL(eeh_add_device_tree_late);
static void eeh_remove_device(struct pci_dev *dev)
void eeh_remove_bus_device(struct pci_dev *dev)
EXPORT_SYMBOL_GPL(eeh_remove_bus_device);
static int proc_eeh_show(struct seq_file *m, void *v)
static int proc_eeh_open(struct inode *inode, struct file *file)
static const struct file_operations proc_eeh_operations = ;
static int __init eeh_init_proc(void)
__initcall(eeh_init_proc);
