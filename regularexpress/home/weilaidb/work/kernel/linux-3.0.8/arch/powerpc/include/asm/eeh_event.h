#define ASM_POWERPC_EEH_EVENT_H
struct eeh_event ;
int eeh_send_failure_event (struct device_node *dn,
struct pci_dev *dev);
struct pci_dn * handle_eeh_events (struct eeh_event *);
