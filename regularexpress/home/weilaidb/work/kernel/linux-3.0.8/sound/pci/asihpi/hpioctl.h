int __devinit asihpi_adapter_probe(struct pci_dev *pci_dev,
const struct pci_device_id *pci_id);
void __devexit asihpi_adapter_remove(struct pci_dev *pci_dev);
void __init asihpi_init(void);
void __exit asihpi_exit(void);
int asihpi_hpi_release(struct file *file);
long asihpi_hpi_ioctl(struct file *file, unsigned int cmd, unsigned long arg);
void hpi_send_recv(struct hpi_message *phm, struct hpi_response *phr);
#define HOWNER_KERNEL ((void *)-1)
