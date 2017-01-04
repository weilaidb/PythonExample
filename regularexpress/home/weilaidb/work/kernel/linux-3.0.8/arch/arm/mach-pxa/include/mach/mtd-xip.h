#define __ARCH_PXA_MTD_XIP_H__
#define xip_irqpending()	(ICIP & ICMR)
#define xip_currtime()		(OSCR)
#define xip_elapsed_since(x)	(signed)((OSCR - (x)) / 4)
#define xip_cpu_idle()  asm volatile ("mcr p14, 0, %0, c7, c0, 0" :: "r" (1))
