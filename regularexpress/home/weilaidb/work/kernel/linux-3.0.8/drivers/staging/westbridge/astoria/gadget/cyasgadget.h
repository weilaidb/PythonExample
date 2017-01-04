#define _INCLUDED_CYANGADGET_H_
extern int mpage_cleardirty(struct address_space *mapping, int num_pages);
extern int fat_get_block(struct inode *, sector_t , struct buffer_head *, int);
extern cy_as_device_handle *cyasdevice_getdevhandle(void);
typedef struct cyasgadget_ep  cyasgadget_ep;
typedef struct cyasgadget_req  cyasgadget_req;
typedef struct cyasgadget  cyasgadget;
static inline void set_halt(cyasgadget_ep *ep)
static inline void clear_halt(cyasgadget_ep *ep)
#define xprintk(dev, level, fmt, args...) \
printk(level "%s %s: " fmt, driver_name, \
pci_name(dev->pdev), ## args)
#undef DEBUG
#define DEBUG(dev, fmt, args...) \
xprintk(dev, KERN_DEBUG, fmt, ## args)
#define DEBUG(dev, fmt, args...) \
do  while (0)
#define VDEBUG DEBUG
#define VDEBUG(dev, fmt, args...) \
do  while (0)
#define ERROR(dev, fmt, args...) \
xprintk(dev, KERN_ERR, fmt, ## args)
#define GADG_WARN(dev, fmt, args...) \
xprintk(dev, KERN_WARNING, fmt, ## args)
#define INFO(dev, fmt, args...) \
xprintk(dev, KERN_INFO, fmt, ## args)
static inline void start_out_naking(struct cyasgadget_ep *ep)
static inline void stop_out_naking(struct cyasgadget_ep *ep)
