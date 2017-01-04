#define LINUX_ASPM_H
#define PCIE_LINK_STATE_L0S	1
#define PCIE_LINK_STATE_L1	2
#define PCIE_LINK_STATE_CLKPM	4
extern void pcie_aspm_init_link_state(struct pci_dev *pdev);
extern void pcie_aspm_exit_link_state(struct pci_dev *pdev);
extern void pcie_aspm_pm_state_change(struct pci_dev *pdev);
extern void pcie_aspm_powersave_config_link(struct pci_dev *pdev);
extern void pci_disable_link_state(struct pci_dev *pdev, int state);
extern void pci_disable_link_state_locked(struct pci_dev *pdev, int state);
extern void pcie_clear_aspm(void);
extern void pcie_no_aspm(void);
static inline void pcie_aspm_init_link_state(struct pci_dev *pdev)
static inline void pcie_aspm_exit_link_state(struct pci_dev *pdev)
static inline void pcie_aspm_pm_state_change(struct pci_dev *pdev)
static inline void pcie_aspm_powersave_config_link(struct pci_dev *pdev)
static inline void pci_disable_link_state(struct pci_dev *pdev, int state)
static inline void pcie_clear_aspm(void)
static inline void pcie_no_aspm(void)
extern void pcie_aspm_create_sysfs_dev_files(struct pci_dev *pdev);
extern void pcie_aspm_remove_sysfs_dev_files(struct pci_dev *pdev);
static inline void pcie_aspm_create_sysfs_dev_files(struct pci_dev *pdev)
static inline void pcie_aspm_remove_sysfs_dev_files(struct pci_dev *pdev)
