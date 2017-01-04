#define WRITERAP(lp,x) out_be16(lp->base + LANCE_RAP, (x))
#define WRITERDP(lp,x) out_be16(lp->base + LANCE_RDP, (x))
#define READRDP(lp) in_be16(lp->base + LANCE_RDP)
#if defined(CONFIG_HPLANCE) || defined(CONFIG_HPLANCE_MODULE)
#undef WRITERAP
#undef WRITERDP
#undef READRDP
#if defined(CONFIG_MVME147_NET) || defined(CONFIG_MVME147_NET_MODULE)
#define WRITERAP(lp,x) (lp->writerap(lp,x))
#define WRITERDP(lp,x) (lp->writerdp(lp,x))
#define READRDP(lp) (lp->readrdp(lp))
static inline void WRITERAP(struct lance_private *lp, __u16 value)
static inline void WRITERDP(struct lance_private *lp, __u16 value)
static inline __u16 READRDP(struct lance_private *lp)
#define PRINT_RINGS() \
do  while (0)
#define PRINT_RINGS()
static void load_csrs (struct lance_private *lp)
#define DEBUG_IRING 0
static void lance_init_ring (struct net_device *dev)
static int init_restart_lance (struct lance_private *lp)
static int lance_reset (struct net_device *dev)
static int lance_rx (struct net_device *dev)
static int lance_tx (struct net_device *dev)
static irqreturn_t
lance_interrupt (int irq, void *dev_id)
int lance_open (struct net_device *dev)
EXPORT_SYMBOL_GPL(lance_open);
int lance_close (struct net_device *dev)
EXPORT_SYMBOL_GPL(lance_close);
void lance_tx_timeout(struct net_device *dev)
EXPORT_SYMBOL_GPL(lance_tx_timeout);
int lance_start_xmit (struct sk_buff *skb, struct net_device *dev)
EXPORT_SYMBOL_GPL(lance_start_xmit);
static void lance_load_multicast (struct net_device *dev)
void lance_set_multicast (struct net_device *dev)
EXPORT_SYMBOL_GPL(lance_set_multicast);
void lance_poll(struct net_device *dev)
MODULE_LICENSE("GPL");
