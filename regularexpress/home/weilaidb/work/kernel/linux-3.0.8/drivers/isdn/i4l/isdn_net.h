#define ISDN_WAITCHARGE  1
#define ISDN_HAVECHARGE  2
#define ISDN_CHARGEHUP   4
#define ISDN_INHUP       8
#define ISDN_MANCHARGE  16
#define CISCO_ADDR_UNICAST    0x0f
#define CISCO_ADDR_BROADCAST  0x8f
#define CISCO_CTRL            0x00
#define CISCO_TYPE_CDP        0x2000
#define CISCO_TYPE_SLARP      0x8035
#define CISCO_SLARP_REQUEST   0
#define CISCO_SLARP_REPLY     1
#define CISCO_SLARP_KEEPALIVE 2
extern char *isdn_net_new(char *, struct net_device *);
extern char *isdn_net_newslave(char *);
extern int isdn_net_rm(char *);
extern int isdn_net_rmall(void);
extern int isdn_net_stat_callback(int, isdn_ctrl *);
extern int isdn_net_setcfg(isdn_net_ioctl_cfg *);
extern int isdn_net_getcfg(isdn_net_ioctl_cfg *);
extern int isdn_net_addphone(isdn_net_ioctl_phone *);
extern int isdn_net_getphones(isdn_net_ioctl_phone *, char __user *);
extern int isdn_net_getpeer(isdn_net_ioctl_phone *, isdn_net_ioctl_phone __user *);
extern int isdn_net_delphone(isdn_net_ioctl_phone *);
extern int isdn_net_find_icall(int, int, int, setup_parm *);
extern void isdn_net_hangup(struct net_device *);
extern void isdn_net_dial(void);
extern void isdn_net_autohup(void);
extern int isdn_net_force_hangup(char *);
extern int isdn_net_force_dial(char *);
extern isdn_net_dev *isdn_net_findif(char *);
extern int isdn_net_rcv_skb(int, struct sk_buff *);
extern int isdn_net_dial_req(isdn_net_local *);
extern void isdn_net_writebuf_skb(isdn_net_local *lp, struct sk_buff *skb);
extern void isdn_net_write_super(isdn_net_local *lp, struct sk_buff *skb);
#define ISDN_NET_MAX_QUEUE_LENGTH 2
#define ISDN_MASTER_PRIV(lp) ((isdn_net_local *) netdev_priv(lp->master))
#define ISDN_SLAVE_PRIV(lp) ((isdn_net_local *) netdev_priv(lp->slave))
#define MASTER_TO_SLAVE(master)	\
(((isdn_net_local *) netdev_priv(master))->slave)
static __inline__ int isdn_net_lp_busy(isdn_net_local *lp)
static __inline__ isdn_net_local * isdn_net_get_locked_lp(isdn_net_dev *nd)
static __inline__ void isdn_net_add_to_bundle(isdn_net_dev *nd, isdn_net_local *nlp)
static __inline__ void isdn_net_rm_from_bundle(isdn_net_local *lp)
