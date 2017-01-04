#undef DEBUG_PKT
#undef DEBUG_ECN
#undef DEBUG_LINK
#undef DEBUG_PROTO
#undef DEBUG_PVC
#define FR_UI			0x03
#define FR_PAD			0x00
#define NLPID_IP		0xCC
#define NLPID_IPV6		0x8E
#define NLPID_SNAP		0x80
#define NLPID_PAD		0x00
#define NLPID_CCITT_ANSI_LMI	0x08
#define NLPID_CISCO_LMI		0x09
#define LMI_CCITT_ANSI_DLCI	   0
#define LMI_CISCO_DLCI		1023
#define LMI_CALLREF		0x00
#define LMI_ANSI_LOCKSHIFT	0x95
#define LMI_ANSI_CISCO_REPTYPE	0x01
#define LMI_CCITT_REPTYPE	0x51
#define LMI_ANSI_CISCO_ALIVE	0x03
#define LMI_CCITT_ALIVE		0x53
#define LMI_ANSI_CISCO_PVCSTAT	0x07
#define LMI_CCITT_PVCSTAT	0x57
#define LMI_FULLREP		0x00
#define LMI_INTEGRITY		0x01
#define LMI_SINGLE		0x02
#define LMI_STATUS_ENQUIRY      0x75
#define LMI_STATUS              0x7D
#define LMI_REPT_LEN               1
#define LMI_INTEG_LEN              2
#define LMI_CCITT_CISCO_LENGTH	  13
#define LMI_ANSI_LENGTH		  14
typedef struct __packed fr_hdr;
typedef struct pvc_device_struct pvc_device;
struct frad_state ;
static int fr_ioctl(struct net_device *dev, struct ifreq *ifr);
static inline u16 q922_to_dlci(u8 *hdr)
static inline void dlci_to_q922(u8 *hdr, u16 dlci)
static inline struct frad_state* state(hdlc_device *hdlc)
static inline pvc_device* find_pvc(hdlc_device *hdlc, u16 dlci)
static pvc_device* add_pvc(struct net_device *dev, u16 dlci)
static inline int pvc_is_used(pvc_device *pvc)
static inline void pvc_carrier(int on, pvc_device *pvc)
static inline void delete_unused_pvcs(hdlc_device *hdlc)
static inline struct net_device** get_dev_p(pvc_device *pvc, int type)
static int fr_hard_header(struct sk_buff **skb_p, u16 dlci)
static int pvc_open(struct net_device *dev)
static int pvc_close(struct net_device *dev)
static int pvc_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
static netdev_tx_t pvc_xmit(struct sk_buff *skb, struct net_device *dev)
static inline void fr_log_dlci_active(pvc_device *pvc)
static inline u8 fr_lmi_nextseq(u8 x)
static void fr_lmi_send(struct net_device *dev, int fullrep)
static void fr_set_link_state(int reliable, struct net_device *dev)
static void fr_timer(unsigned long arg)
static int fr_lmi_recv(struct net_device *dev, struct sk_buff *skb)
static int fr_rx(struct sk_buff *skb)
static void fr_start(struct net_device *dev)
static void fr_stop(struct net_device *dev)
static void fr_close(struct net_device *dev)
static void pvc_setup(struct net_device *dev)
static const struct net_device_ops pvc_ops = ;
static int fr_add_pvc(struct net_device *frad, unsigned int dlci, int type)
static int fr_del_pvc(hdlc_device *hdlc, unsigned int dlci, int type)
static void fr_destroy(struct net_device *frad)
static struct hdlc_proto proto = ;
static int fr_ioctl(struct net_device *dev, struct ifreq *ifr)
static int __init mod_init(void)
static void __exit mod_exit(void)
module_init(mod_init);
module_exit(mod_exit);
MODULE_AUTHOR("Krzysztof Halasa <khc@pm.waw.pl>");
MODULE_DESCRIPTION("Frame-Relay protocol support for generic HDLC");
MODULE_LICENSE("GPL v2");
