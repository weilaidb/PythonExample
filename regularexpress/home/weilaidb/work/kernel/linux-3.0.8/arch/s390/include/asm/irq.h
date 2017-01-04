#define _ASM_IRQ_H
enum interruption_class ;
typedef void (*ext_int_handler_t)(unsigned int, unsigned int, unsigned long);
int register_external_interrupt(u16 code, ext_int_handler_t handler);
int unregister_external_interrupt(u16 code, ext_int_handler_t handler);
void service_subclass_irq_register(void);
void service_subclass_irq_unregister(void);
