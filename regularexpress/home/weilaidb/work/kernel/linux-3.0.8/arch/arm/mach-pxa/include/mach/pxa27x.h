#define __MACH_PXA27x_H
#define ARB_CNTRL	__REG(0x48000048)
#define ARB_DMA_SLV_PARK	(1<<31)
#define ARB_CI_PARK		(1<<30)
#define ARB_EX_MEM_PARK 	(1<<29)
#define ARB_INT_MEM_PARK	(1<<28)
#define ARB_USB_PARK		(1<<27)
#define ARB_LCD_PARK		(1<<26)
#define ARB_DMA_PARK		(1<<25)
#define ARB_CORE_PARK		(1<<24)
#define ARB_LOCK_FLAG		(1<<23)
extern int __init pxa27x_set_pwrmode(unsigned int mode);
