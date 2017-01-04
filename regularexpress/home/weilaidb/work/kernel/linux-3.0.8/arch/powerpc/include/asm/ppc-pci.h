#define _ASM_POWERPC_PPC_PCI_H
extern unsigned long isa_io_base;
extern void pci_setup_phb_io(struct pci_controller *hose, int primary);
extern void pci_setup_phb_io_dynamic(struct pci_controller *hose, int primary);
extern struct list_head hose_list;
extern void find_and_init_phbs(void);
extern struct pci_dev *isa_bridge_pcidev;
#define BUID_HI(buid) upper_32_bits(buid)
#define BUID_LO(buid) lower_32_bits(buid)
struct device_node;
typedef void *(*traverse_func)(struct device_node *me, void *data);
void *traverse_pci_devices(struct device_node *start, traverse_func pre,
void *data);
extern void pci_devs_phb_init(void);
extern void pci_devs_phb_init_dynamic(struct pci_controller *phb);
extern void init_pci_config_tokens (void);
extern unsigned long get_phb_buid (struct device_node *);
extern int rtas_setup_phb(struct pci_controller *phb);
extern unsigned long pci_probe_only;
void pci_addr_cache_insert_device(struct pci_dev *dev);
void pci_addr_cache_remove_device(struct pci_dev *dev);
void pci_addr_cache_build(void);
struct pci_dev *pci_get_device_by_addr(unsigned long addr);
#define EEH_LOG_TEMP_FAILURE 1
#define EEH_LOG_PERM_FAILURE 2
void eeh_slot_error_detail (struct pci_dn *pdn, int severity);
#define EEH_THAW_MMIO 2
#define EEH_THAW_DMA  3
int rtas_pci_enable(struct pci_dn *pdn, int function);
int rtas_set_slot_reset (struct pci_dn *);
int eeh_wait_for_slot_status(struct pci_dn *pdn, int max_wait_msecs);
void eeh_restore_bars(struct pci_dn *);
void rtas_configure_bridge(struct pci_dn *);
int rtas_write_config(struct pci_dn *, int where, int size, u32 val);
int rtas_read_config(struct pci_dn *, int where, int size, u32 *val);
void eeh_mark_slot (struct device_node *dn, int mode_flag);
void eeh_clear_slot (struct device_node *dn, int mode_flag);
struct device_node * find_device_pe(struct device_node *dn);
void eeh_sysfs_add_device(struct pci_dev *pdev);
void eeh_sysfs_remove_device(struct pci_dev *pdev);
static inline const char *eeh_pci_name(struct pci_dev *pdev)
static inline void find_and_init_phbs(void)
static inline void init_pci_config_tokens(void)
