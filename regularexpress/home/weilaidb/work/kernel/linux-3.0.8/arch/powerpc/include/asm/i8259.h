#define _ASM_POWERPC_I8259_H
extern void i8259_init(struct device_node *node, unsigned long intack_addr);
extern unsigned int i8259_irq(void);
extern struct irq_host *i8259_get_host(void);
