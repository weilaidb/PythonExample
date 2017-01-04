#define __ICS_H
#define XIVE_ADDR_MASK		0x7FFULL
extern void wsp_init_irq(void);
extern int wsp_ics_alloc_irq(struct device_node *dn, int num);
extern void wsp_ics_free_irq(struct device_node *dn, unsigned int irq);
