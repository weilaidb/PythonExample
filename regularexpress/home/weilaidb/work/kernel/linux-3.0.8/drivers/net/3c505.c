#define DRV_NAME	"3c505"
#define DRV_VERSION	"1.10a"
#define filename __FILE__
#define timeout_msg "*** timeout at %s:%s (line %d) ***\n"
#define TIMEOUT_MSG(lineno) \
pr_notice(timeout_msg, filename, __func__, (lineno))
#define invalid_pcb_msg "*** invalid pcb length %d at %s:%s (line %d) ***\n"
#define INVALID_PCB_MSG(len) \
pr_notice(invalid_pcb_msg, (len), filename, __func__, __LINE__)
#define search_msg "%s: Looking for 3c505 adapter at address %#x..."
#define stilllooking_msg "still looking..."
#define found_msg "found.\n"
#define notfound_msg "not found (reason = %d)\n"
#define couldnot_msg "%s: 3c505 not found\n"
static int elp_debug = ELP_DEBUG;
static int elp_debug;
#define debug elp_debug
static int addr_list[] __initdata = ;
static unsigned long dma_mem_alloc(int size)
static inline unsigned char inb_status(unsigned int base_addr)
static inline int inb_command(unsigned int base_addr)
static inline void outb_control(unsigned char val, struct net_device *dev)
#define HCR_VAL(x)   (((elp_device *)(netdev_priv(x)))->hcr_val)
static inline void outb_command(unsigned char val, unsigned int base_addr)
static inline unsigned int backlog_next(unsigned int n)
#define	GET_ASF(addr) \
(get_status(addr)&ASF_PCB_MASK)
static inline int get_status(unsigned int base_addr)
static inline void set_hsf(struct net_device *dev, int hsf)
static bool start_receive(struct net_device *, pcb_struct *);
static inline void adapter_reset(struct net_device *dev)
static inline void check_3c505_dma(struct net_device *dev)
static inline bool send_pcb_slow(unsigned int base_addr, unsigned char byte)
static inline bool send_pcb_fast(unsigned int base_addr, unsigned char byte)
static inline void prime_rx(struct net_device *dev)
static bool send_pcb(struct net_device *dev, pcb_struct * pcb)
static bool receive_pcb(struct net_device *dev, pcb_struct * pcb)
static bool start_receive(struct net_device *dev, pcb_struct * tx_pcb)
static void receive_packet(struct net_device *dev, int len)
static irqreturn_t elp_interrupt(int irq, void *dev_id)
static int elp_open(struct net_device *dev)
static netdev_tx_t send_packet(struct net_device *dev, struct sk_buff *skb)
static void elp_timeout(struct net_device *dev)
static netdev_tx_t elp_start_xmit(struct sk_buff *skb, struct net_device *dev)
static struct net_device_stats *elp_get_stats(struct net_device *dev)
static void netdev_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *info)
static u32 netdev_get_msglevel(struct net_device *dev)
static void netdev_set_msglevel(struct net_device *dev, u32 level)
static const struct ethtool_ops netdev_ethtool_ops = ;
static int elp_close(struct net_device *dev)
static void elp_set_mc_list(struct net_device *dev)
static int __init elp_sense(struct net_device *dev)
static int __init elp_autodetect(struct net_device *dev)
static const struct net_device_ops elp_netdev_ops = ;
static int __init elplus_setup(struct net_device *dev)
struct net_device * __init elplus_probe(int unit)
static struct net_device *dev_3c505[ELP_MAX_CARDS];
static int io[ELP_MAX_CARDS];
static int irq[ELP_MAX_CARDS];
static int dma[ELP_MAX_CARDS];
module_param_array(io, int, NULL, 0);
module_param_array(irq, int, NULL, 0);
module_param_array(dma, int, NULL, 0);
MODULE_PARM_DESC(io, "EtherLink Plus I/O base address(es)");
MODULE_PARM_DESC(irq, "EtherLink Plus IRQ number(s) (assigned)");
MODULE_PARM_DESC(dma, "EtherLink Plus DMA channel(s)");
int __init init_module(void)
void __exit cleanup_module(void)
MODULE_LICENSE("GPL");
