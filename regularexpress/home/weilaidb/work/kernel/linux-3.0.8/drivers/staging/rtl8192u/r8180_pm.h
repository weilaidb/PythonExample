#define R8180_PM_H
int rtl8180_save_state (struct pci_dev *dev, u32 state);
int rtl8180_suspend (struct pci_dev *dev, u32 state);
int rtl8180_resume (struct pci_dev *dev);
int rtl8180_enable_wake (struct pci_dev *dev, u32 state, int enable);
