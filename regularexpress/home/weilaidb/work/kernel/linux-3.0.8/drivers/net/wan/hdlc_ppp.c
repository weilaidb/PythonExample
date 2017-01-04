#define DEBUG_CP		0
#define DEBUG_STATE		0
#define DEBUG_HARD_HEADER	0
#define HDLC_ADDR_ALLSTATIONS	0xFF
#define HDLC_CTRL_UI		0x03
#define PID_LCP			0xC021
#define PID_IP			0x0021
#define PID_IPCP		0x8021
#define PID_IPV6		0x0057
#define PID_IPV6CP		0x8057
enum ;
enum ;
#if DEBUG_CP
static const char *const code_names[CP_CODES] = ;
static char debug_buffer[64 + 3 * DEBUG_CP];
enum ;
struct hdlc_header ;
struct cp_header ;
struct proto ;
struct ppp ;
enum ;
enum ;
enum ;
#if DEBUG_STATE
static const char *const state_names[STATES] = ;
static const char *const event_names[EVENTS] = ;
static struct sk_buff_head tx_queue;
static int ppp_ioctl(struct net_device *dev, struct ifreq *ifr);
static inline struct ppp* get_ppp(struct net_device *dev)
static inline struct proto* get_proto(struct net_device *dev, u16 pid)
static inline const char* proto_name(u16 pid)
static __be16 ppp_type_trans(struct sk_buff *skb, struct net_device *dev)
static int ppp_hard_header(struct sk_buff *skb, struct net_device *dev,
u16 type, const void *daddr, const void *saddr,
unsigned int len)
static void ppp_tx_flush(void)
static void ppp_tx_cp(struct net_device *dev, u16 pid, u8 code,
u8 id, unsigned int len, const void *data)
static int cp_table[EVENTS][STATES] = ;
static void ppp_cp_event(struct net_device *dev, u16 pid, u16 event, u8 code,
u8 id, unsigned int len, const void *data)
static void ppp_cp_parse_cr(struct net_device *dev, u16 pid, u8 id,
unsigned int req_len, const u8 *data)
static int ppp_rx(struct sk_buff *skb)
static void ppp_timer(unsigned long arg)
static void ppp_start(struct net_device *dev)
static void ppp_stop(struct net_device *dev)
static void ppp_close(struct net_device *dev)
static struct hdlc_proto proto = ;
static const struct header_ops ppp_header_ops = ;
static int ppp_ioctl(struct net_device *dev, struct ifreq *ifr)
static int __init mod_init(void)
static void __exit mod_exit(void)
module_init(mod_init);
module_exit(mod_exit);
MODULE_AUTHOR("Krzysztof Halasa <khc@pm.waw.pl>");
MODULE_DESCRIPTION("PPP protocol support for generic HDLC");
MODULE_LICENSE("GPL v2");
