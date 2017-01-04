#define __LINUX_MTD_XIP_H__
#define __xipram noinline __attribute__ ((__section__ (".data")))
#warning "missing IRQ and timer primitives for XIP MTD support"
#warning "some of the XIP MTD support code will be disabled"
#warning "your system will therefore be unresponsive when writing or erasing flash"
#define xip_irqpending()	(0)
#define xip_currtime()		(0)
#define xip_elapsed_since(x)	(0)
#define xip_iprefetch()		do  while (0)
#define xip_cpu_idle()  do  while (0)
#define __xipram
