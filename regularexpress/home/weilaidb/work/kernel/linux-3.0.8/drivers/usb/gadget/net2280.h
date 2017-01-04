static inline u32
get_idx_reg (struct net2280_regs __iomem *regs, u32 index)
static inline void
set_idx_reg (struct net2280_regs __iomem *regs, u32 index, u32 value)
#define REG_DIAG		0x0
#define     RETRY_COUNTER                                       16
#define     FORCE_PCI_SERR                                      11
#define     FORCE_PCI_INTERRUPT                                 10
#define     FORCE_USB_INTERRUPT                                 9
#define     FORCE_CPU_INTERRUPT                                 8
#define     ILLEGAL_BYTE_ENABLES                                5
#define     FAST_TIMES                                          4
#define     FORCE_RECEIVE_ERROR                                 2
#define     FORCE_TRANSMIT_CRC_ERROR                            0
#define REG_FRAME		0x02
#define REG_CHIPREV		0x03
#define	REG_HS_NAK_RATE		0x0a
#define	CHIPREV_1	0x0100
#define	CHIPREV_1A	0x0110
#define REG_EP_MAXPKT(dev,num) (((num) + 1) * 0x10 + \
(((dev)->gadget.speed == USB_SPEED_HIGH) ? 0 : 1))
struct net2280_dma  __attribute__ ((aligned (16)));
struct net2280_ep ;
static inline void allow_status (struct net2280_ep *ep)
static inline void set_fifo_bytecount (struct net2280_ep *ep, unsigned count)
struct net2280_request ;
struct net2280 ;
static inline void set_halt (struct net2280_ep *ep)
static inline void clear_halt (struct net2280_ep *ep)
static inline void net2280_led_init (struct net2280 *dev)
static inline
void net2280_led_speed (struct net2280 *dev, enum usb_device_speed speed)
static inline void net2280_led_active (struct net2280 *dev, int is_active)
static inline void net2280_led_shutdown (struct net2280 *dev)
#define net2280_led_init(dev)		do  while (0)
#define net2280_led_speed(dev, speed)	do  while (0)
#define net2280_led_shutdown(dev)	do  while (0)
#define xprintk(dev,level,fmt,args...) \
printk(level "%s %s: " fmt , driver_name , \
pci_name(dev->pdev) , ## args)
#undef DEBUG
#define DEBUG(dev,fmt,args...) \
xprintk(dev , KERN_DEBUG , fmt , ## args)
#define DEBUG(dev,fmt,args...) \
do  while (0)
#define VDEBUG DEBUG
#define VDEBUG(dev,fmt,args...) \
do  while (0)
#define ERROR(dev,fmt,args...) \
xprintk(dev , KERN_ERR , fmt , ## args)
#define WARNING(dev,fmt,args...) \
xprintk(dev , KERN_WARNING , fmt , ## args)
#define INFO(dev,fmt,args...) \
xprintk(dev , KERN_INFO , fmt , ## args)
static inline void start_out_naking (struct net2280_ep *ep)
static inline void assert_out_naking (struct net2280_ep *ep, const char *where)
#define ASSERT_OUT_NAKING(ep) assert_out_naking(ep,__func__)
#define ASSERT_OUT_NAKING(ep) do  while (0)
static inline void stop_out_naking (struct net2280_ep *ep)
