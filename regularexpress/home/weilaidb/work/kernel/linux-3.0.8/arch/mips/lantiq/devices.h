#define _LTQ_DEVICES_H__
#define IRQ_RES(resname, irq) \
extern void ltq_register_nor(struct physmap_flash_data *data);
extern void ltq_register_wdt(void);
extern void ltq_register_asc(int port);
extern void ltq_register_pci(struct ltq_pci_data *data);
