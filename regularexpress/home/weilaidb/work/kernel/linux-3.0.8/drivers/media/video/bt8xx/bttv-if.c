EXPORT_SYMBOL(bttv_get_pcidev);
EXPORT_SYMBOL(bttv_gpio_enable);
EXPORT_SYMBOL(bttv_read_gpio);
EXPORT_SYMBOL(bttv_write_gpio);
struct pci_dev* bttv_get_pcidev(unsigned int card)
int bttv_gpio_enable(unsigned int card, unsigned long mask, unsigned long data)
int bttv_read_gpio(unsigned int card, unsigned long *data)
int bttv_write_gpio(unsigned int card, unsigned long mask, unsigned long data)
