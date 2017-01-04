struct goku_udc_regs  __attribute__ ((packed));
#define	MAX_FIFO_SIZE	64
#define	MAX_EP0_SIZE	8
struct goku_ep ;
struct goku_request ;
enum ep0state ;
struct goku_udc ;
#define xprintk(dev,level,fmt,args...) \
printk(level "%s %s: " fmt , driver_name , \
pci_name(dev->pdev) , ## args)
#define DBG(dev,fmt,args...) \
xprintk(dev , KERN_DEBUG , fmt , ## args)
#define DBG(dev,fmt,args...) \
do  while (0)
#define VDBG DBG
#define VDBG(dev,fmt,args...) \
do  while (0)
#define ERROR(dev,fmt,args...) \
xprintk(dev , KERN_ERR , fmt , ## args)
#define WARNING(dev,fmt,args...) \
xprintk(dev , KERN_WARNING , fmt , ## args)
#define INFO(dev,fmt,args...) \
xprintk(dev , KERN_INFO , fmt , ## args)
