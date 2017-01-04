#define __POWERPC_FSL_PCI_H
#define PCIE_LTSSM	0x0404
#define PCIE_LTSSM_L0	0x16
#define PIWAR_EN		0x80000000
#define PIWAR_PF		0x20000000
#define PIWAR_TGI_LOCAL		0x00f00000
#define PIWAR_READ_SNOOP	0x00050000
#define PIWAR_WRITE_SNOOP	0x00005000
#define PIWAR_SZ_MASK          0x0000003f
struct pci_outbound_window_regs ;
struct pci_inbound_window_regs ;
struct ccsr_pci ;
extern int fsl_add_bridge(struct device_node *dev, int is_primary);
extern void fsl_pcibios_fixup_bus(struct pci_bus *bus);
extern int mpc83xx_add_bridge(struct device_node *dev);
u64 fsl_pci_immrbar_base(struct pci_controller *hose);
