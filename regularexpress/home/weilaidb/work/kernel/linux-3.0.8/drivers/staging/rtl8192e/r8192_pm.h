#define R8192E_PM_H
int rtl8192E_save_state (struct pci_dev *dev, pm_message_t state);
int rtl8192E_suspend (struct pci_dev *dev, pm_message_t state);
int rtl8192E_resume (struct pci_dev *dev);
int rtl8192E_enable_wake (struct pci_dev *dev, pm_message_t state, int enable);
