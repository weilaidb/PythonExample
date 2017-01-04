#define __NEC_VR41XX_PCI_H
#define PCI_MASTER_ADDRESS_MASK	0x7fffffffU
struct pci_master_address_conversion ;
struct pci_target_address_conversion ;
typedef enum  pci_exclusive_access_t;
struct pci_mailbox_address ;
struct pci_target_address_window ;
typedef enum  pci_arbiter_priority_control_t;
typedef enum  pci_take_away_gnt_mode_t;
struct pci_controller_unit_setup ;
extern void vr41xx_pciu_setup(struct pci_controller_unit_setup *setup);
