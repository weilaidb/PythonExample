#define LLC_H
struct net_device;
struct packet_type;
struct sk_buff;
struct llc_addr ;
#define LLC_SAP_STATE_INACTIVE	1
#define LLC_SAP_STATE_ACTIVE	2
#define LLC_SK_DEV_HASH_BITS 6
#define LLC_SK_DEV_HASH_ENTRIES (1<<LLC_SK_DEV_HASH_BITS)
#define LLC_SK_LADDR_HASH_BITS 6
#define LLC_SK_LADDR_HASH_ENTRIES (1<<LLC_SK_LADDR_HASH_BITS)
struct llc_sap ;
static inline
struct hlist_head *llc_sk_dev_hash(struct llc_sap *sap, int ifindex)
static inline
u32 llc_sk_laddr_hashfn(struct llc_sap *sap, const struct llc_addr *laddr)
static inline
struct hlist_nulls_head *llc_sk_laddr_hash(struct llc_sap *sap,
const struct llc_addr *laddr)
#define LLC_DEST_INVALID         0
#define LLC_DEST_SAP             1
#define LLC_DEST_CONN            2
extern struct list_head llc_sap_list;
extern spinlock_t llc_sap_list_lock;
extern int llc_rcv(struct sk_buff *skb, struct net_device *dev,
struct packet_type *pt, struct net_device *orig_dev);
extern int llc_mac_hdr_init(struct sk_buff *skb,
const unsigned char *sa, const unsigned char *da);
extern void llc_add_pack(int type, void (*handler)(struct llc_sap *sap,
struct sk_buff *skb));
extern void llc_remove_pack(int type);
extern void llc_set_station_handler(void (*handler)(struct sk_buff *skb));
extern struct llc_sap *llc_sap_open(unsigned char lsap,
int (*rcv)(struct sk_buff *skb,
struct net_device *dev,
struct packet_type *pt,
struct net_device *orig_dev));
static inline void llc_sap_hold(struct llc_sap *sap)
extern void llc_sap_close(struct llc_sap *sap);
static inline void llc_sap_put(struct llc_sap *sap)
extern struct llc_sap *llc_sap_find(unsigned char sap_value);
extern int llc_build_and_send_ui_pkt(struct llc_sap *sap, struct sk_buff *skb,
unsigned char *dmac, unsigned char dsap);
extern void llc_sap_handler(struct llc_sap *sap, struct sk_buff *skb);
extern void llc_conn_handler(struct llc_sap *sap, struct sk_buff *skb);
extern int llc_station_init(void);
extern void llc_station_exit(void);
extern int llc_proc_init(void);
extern void llc_proc_exit(void);
#define llc_proc_init()	(0)
#define llc_proc_exit()	do  while(0)
extern int llc_sysctl_init(void);
extern void llc_sysctl_exit(void);
extern int sysctl_llc2_ack_timeout;
extern int sysctl_llc2_busy_timeout;
extern int sysctl_llc2_p_timeout;
extern int sysctl_llc2_rej_timeout;
extern int sysctl_llc_station_ack_timeout;
#define llc_sysctl_init() (0)
#define llc_sysctl_exit() do  while(0)
