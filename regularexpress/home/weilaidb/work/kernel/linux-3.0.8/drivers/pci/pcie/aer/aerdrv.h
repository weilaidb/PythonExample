#define _AERDRV_H_
#define AER_NONFATAL			0
#define AER_FATAL			1
#define AER_CORRECTABLE			2
#define SYSTEM_ERROR_INTR_ON_MESG_MASK	(PCI_EXP_RTCTL_SECEE|	\
PCI_EXP_RTCTL_SENFEE|	\
PCI_EXP_RTCTL_SEFEE)
#define ROOT_PORT_INTR_ON_MESG_MASK	(PCI_ERR_ROOT_CMD_COR_EN|	\
PCI_ERR_ROOT_CMD_NONFATAL_EN|	\
PCI_ERR_ROOT_CMD_FATAL_EN)
#define ERR_COR_ID(d)			(d & 0xffff)
#define ERR_UNCOR_ID(d)			(d >> 16)
#define AER_ERROR_SOURCES_MAX		100
#define AER_LOG_TLP_MASKS		(PCI_ERR_UNC_POISON_TLP|	\
PCI_ERR_UNC_ECRC|		\
PCI_ERR_UNC_UNSUP|		\
PCI_ERR_UNC_COMP_ABORT|		\
PCI_ERR_UNC_UNX_COMP|		\
PCI_ERR_UNC_MALF_TLP)
#define AER_MAX_MULTI_ERR_DEVICES	5
struct aer_err_info ;
struct aer_err_source ;
struct aer_rpc ;
struct aer_broadcast_data ;
static inline pci_ers_result_t merge_result(enum pci_ers_result orig,
enum pci_ers_result new)
extern struct bus_type pcie_port_bus_type;
extern void aer_do_secondary_bus_reset(struct pci_dev *dev);
extern int aer_init(struct pcie_device *dev);
extern void aer_isr(struct work_struct *work);
extern void aer_print_error(struct pci_dev *dev, struct aer_err_info *info);
extern void aer_print_port_info(struct pci_dev *dev, struct aer_err_info *info);
extern irqreturn_t aer_irq(int irq, void *context);
extern int pcie_aer_get_firmware_first(struct pci_dev *pci_dev);
static inline int pcie_aer_get_firmware_first(struct pci_dev *pci_dev)
static inline void pcie_aer_force_firmware_first(struct pci_dev *pci_dev,
int enable)
