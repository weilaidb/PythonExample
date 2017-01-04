#define __IRQ_KERN_H__
extern int um_request_irq(unsigned int irq, int fd, int type,
irq_handler_t handler,
unsigned long irqflags,  const char * devname,
void *dev_id);
