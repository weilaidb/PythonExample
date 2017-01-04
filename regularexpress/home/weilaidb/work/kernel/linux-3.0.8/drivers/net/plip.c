static const char version[] = "NET3 PLIP version 2.4-parport gniibe@mri.co.jp\n";
#define PLIP_MAX  8
#define NET_DEBUG 1
static const unsigned int net_debug = NET_DEBUG;
#define ENABLE(irq)  if (irq != -1) enable_irq(irq)
#define DISABLE(irq) if (irq != -1) disable_irq(irq)
#define PLIP_DELAY_UNIT		   1
#define PLIP_TRIGGER_WAIT	 500
#define PLIP_NIBBLE_WAIT        3000
static void plip_kick_bh(struct work_struct *work);
static void plip_bh(struct work_struct *work);
static void plip_timer_bh(struct work_struct *work);
static void plip_interrupt(void *dev_id);
static int plip_tx_packet(struct sk_buff *skb, struct net_device *dev);
static int plip_hard_header(struct sk_buff *skb, struct net_device *dev,
unsigned short type, const void *daddr,
const void *saddr, unsigned len);
static int plip_hard_header_cache(const struct neighbour *neigh,
struct hh_cache *hh);
static int plip_open(struct net_device *dev);
static int plip_close(struct net_device *dev);
static int plip_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd);
static int plip_preempt(void *handle);
static void plip_wakeup(void *handle);
enum plip_connection_state ;
enum plip_packet_state ;
enum plip_nibble_state ;
struct plip_local ;
struct net_local ;
static inline void enable_parport_interrupts (struct net_device *dev)
static inline void disable_parport_interrupts (struct net_device *dev)
static inline void write_data (struct net_device *dev, unsigned char data)
static inline unsigned char read_status (struct net_device *dev)
static const struct header_ops plip_header_ops = ;
static const struct net_device_ops plip_netdev_ops = ;
static void
plip_init_netdev(struct net_device *dev)
static void
plip_kick_bh(struct work_struct *work)
static int plip_none(struct net_device *, struct net_local *,
struct plip_local *, struct plip_local *);
static int plip_receive_packet(struct net_device *, struct net_local *,
struct plip_local *, struct plip_local *);
static int plip_send_packet(struct net_device *, struct net_local *,
struct plip_local *, struct plip_local *);
static int plip_connection_close(struct net_device *, struct net_local *,
struct plip_local *, struct plip_local *);
static int plip_error(struct net_device *, struct net_local *,
struct plip_local *, struct plip_local *);
static int plip_bh_timeout_error(struct net_device *dev, struct net_local *nl,
struct plip_local *snd,
struct plip_local *rcv,
int error);
#define OK        0
#define TIMEOUT   1
#define ERROR     2
#define HS_TIMEOUT	3
typedef int (*plip_func)(struct net_device *dev, struct net_local *nl,
struct plip_local *snd, struct plip_local *rcv);
static const plip_func connection_state_table[] =
;
static void
plip_bh(struct work_struct *work)
static void
plip_timer_bh(struct work_struct *work)
static int
plip_bh_timeout_error(struct net_device *dev, struct net_local *nl,
struct plip_local *snd, struct plip_local *rcv,
int error)
static int
plip_none(struct net_device *dev, struct net_local *nl,
struct plip_local *snd, struct plip_local *rcv)
static inline int
plip_receive(unsigned short nibble_timeout, struct net_device *dev,
enum plip_nibble_state *ns_p, unsigned char *data_p)
static __be16 plip_type_trans(struct sk_buff *skb, struct net_device *dev)
static int
plip_receive_packet(struct net_device *dev, struct net_local *nl,
struct plip_local *snd, struct plip_local *rcv)
static inline int
plip_send(unsigned short nibble_timeout, struct net_device *dev,
enum plip_nibble_state *ns_p, unsigned char data)
static int
plip_send_packet(struct net_device *dev, struct net_local *nl,
struct plip_local *snd, struct plip_local *rcv)
static int
plip_connection_close(struct net_device *dev, struct net_local *nl,
struct plip_local *snd, struct plip_local *rcv)
static int
plip_error(struct net_device *dev, struct net_local *nl,
struct plip_local *snd, struct plip_local *rcv)
static void
plip_interrupt(void *dev_id)
static int
plip_tx_packet(struct sk_buff *skb, struct net_device *dev)
static void
plip_rewrite_address(const struct net_device *dev, struct ethhdr *eth)
static int
plip_hard_header(struct sk_buff *skb, struct net_device *dev,
unsigned short type, const void *daddr,
const void *saddr, unsigned len)
static int plip_hard_header_cache(const struct neighbour *neigh,
struct hh_cache *hh)
static int
plip_open(struct net_device *dev)
static int
plip_close(struct net_device *dev)
static int
plip_preempt(void *handle)
static void
plip_wakeup(void *handle)
static int
plip_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
static int parport[PLIP_MAX] = ;
static int timid;
module_param_array(parport, int, NULL, 0);
module_param(timid, int, 0);
MODULE_PARM_DESC(parport, "List of parport device numbers to use by plip");
static struct net_device *dev_plip[PLIP_MAX] = ;
static inline int
plip_searchfor(int list[], int a)
static void plip_attach (struct parport *port)
static void plip_detach (struct parport *port)
static struct parport_driver plip_driver = ;
static void __exit plip_cleanup_module (void)
static int parport_ptr;
static int __init plip_setup(char *str)
__setup("plip=", plip_setup);
static int __init plip_init (void)
module_init(plip_init);
module_exit(plip_cleanup_module);
MODULE_LICENSE("GPL");
