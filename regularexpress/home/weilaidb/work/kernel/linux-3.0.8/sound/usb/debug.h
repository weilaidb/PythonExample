#define __USBAUDIO_DEBUG_H
#define hwc_debug(fmt, args...) printk(KERN_DEBUG fmt, ##args)
#define hwc_debug(fmt, args...) do  while(0)
