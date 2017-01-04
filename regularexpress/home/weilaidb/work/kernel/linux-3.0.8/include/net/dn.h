#define _NET_DN_H
struct dn_scp
;
static inline struct dn_scp *DN_SK(struct sock *sk)
#define DN_SKB_CB(skb) ((struct dn_skb_cb *)(skb)->cb)
struct dn_skb_cb ;
static inline __le16 dn_eth2dn(unsigned char *ethaddr)
static inline __le16 dn_saddr2dn(struct sockaddr_dn *saddr)
static inline void dn_dn2eth(unsigned char *ethaddr, __le16 addr)
static inline void dn_sk_ports_copy(struct flowidn *fld, struct dn_scp *scp)
extern unsigned dn_mss_from_pmtu(struct net_device *dev, int mtu);
#define DN_MENUVER_ACC 0x01
#define DN_MENUVER_USR 0x02
#define DN_MENUVER_PRX 0x04
#define DN_MENUVER_UIC 0x08
extern struct sock *dn_sklist_find_listener(struct sockaddr_dn *addr);
extern struct sock *dn_find_by_skb(struct sk_buff *skb);
#define DN_ASCBUF_LEN 9
extern char *dn_addr2asc(__u16, char *);
extern int dn_destroy_timer(struct sock *sk);
extern int dn_sockaddr2username(struct sockaddr_dn *addr, unsigned char *buf, unsigned char type);
extern int dn_username2sockaddr(unsigned char *data, int len, struct sockaddr_dn *addr, unsigned char *type);
extern void dn_start_slow_timer(struct sock *sk);
extern void dn_stop_slow_timer(struct sock *sk);
extern __le16 decnet_address;
extern int decnet_debug_level;
extern int decnet_time_wait;
extern int decnet_dn_count;
extern int decnet_di_count;
extern int decnet_dr_count;
extern int decnet_no_fc_max_cwnd;
extern long sysctl_decnet_mem[3];
extern int sysctl_decnet_wmem[3];
extern int sysctl_decnet_rmem[3];
