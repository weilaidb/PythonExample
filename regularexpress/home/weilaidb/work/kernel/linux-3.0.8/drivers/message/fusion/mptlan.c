#define my_VERSION	MPT_LINUX_VERSION_COMMON
#define MYNAM		"mptlan"
MODULE_LICENSE("GPL");
MODULE_VERSION(my_VERSION);
#define MPT_LAN_RECEIVE_POST_REQUEST_SIZE \
(sizeof(LANReceivePostRequest_t) - sizeof(SGE_MPI_UNION))
#define MPT_LAN_TRANSACTION32_SIZE \
(sizeof(SGETransaction32_t) - sizeof(u32))
struct BufferControl ;
struct mpt_lan_priv ;
struct mpt_lan_ohdr ;
static int  lan_reply (MPT_ADAPTER *ioc, MPT_FRAME_HDR *mf,
MPT_FRAME_HDR *reply);
static int  mpt_lan_open(struct net_device *dev);
static int  mpt_lan_reset(struct net_device *dev);
static int  mpt_lan_close(struct net_device *dev);
static void mpt_lan_post_receive_buckets(struct mpt_lan_priv *priv);
static void mpt_lan_wake_post_buckets_task(struct net_device *dev,
int priority);
static int  mpt_lan_receive_post_turbo(struct net_device *dev, u32 tmsg);
static int  mpt_lan_receive_post_reply(struct net_device *dev,
LANReceivePostReply_t *pRecvRep);
static int  mpt_lan_send_turbo(struct net_device *dev, u32 tmsg);
static int  mpt_lan_send_reply(struct net_device *dev,
LANSendReply_t *pSendRep);
static int  mpt_lan_ioc_reset(MPT_ADAPTER *ioc, int reset_phase);
static int  mpt_lan_event_process(MPT_ADAPTER *ioc, EventNotificationReply_t *pEvReply);
static unsigned short mpt_lan_type_trans(struct sk_buff *skb,
struct net_device *dev);
static u8 LanCtx = MPT_MAX_PROTOCOL_DRIVERS;
static u32 max_buckets_out = 127;
static u32 tx_max_out_p = 127 - 16;
static int
lan_reply (MPT_ADAPTER *ioc, MPT_FRAME_HDR *mf, MPT_FRAME_HDR *reply)
static int
mpt_lan_ioc_reset(MPT_ADAPTER *ioc, int reset_phase)
static int
mpt_lan_event_process(MPT_ADAPTER *ioc, EventNotificationReply_t *pEvReply)
static int
mpt_lan_open(struct net_device *dev)
static int
mpt_lan_reset(struct net_device *dev)
static int
mpt_lan_close(struct net_device *dev)
static int
mpt_lan_change_mtu(struct net_device *dev, int new_mtu)
static void
mpt_lan_tx_timeout(struct net_device *dev)
static int
mpt_lan_send_turbo(struct net_device *dev, u32 tmsg)
static int
mpt_lan_send_reply(struct net_device *dev, LANSendReply_t *pSendRep)
static int
mpt_lan_sdu_send (struct sk_buff *skb, struct net_device *dev)
static void
mpt_lan_wake_post_buckets_task(struct net_device *dev, int priority)
static int
mpt_lan_receive_skb(struct net_device *dev, struct sk_buff *skb)
static int
mpt_lan_receive_post_turbo(struct net_device *dev, u32 tmsg)
static int
mpt_lan_receive_post_free(struct net_device *dev,
LANReceivePostReply_t *pRecvRep)
static int
mpt_lan_receive_post_reply(struct net_device *dev,
LANReceivePostReply_t *pRecvRep)
static void
mpt_lan_post_receive_buckets(struct mpt_lan_priv *priv)
static void
mpt_lan_post_receive_buckets_work(struct work_struct *work)
static const struct net_device_ops mpt_netdev_ops = ;
static struct net_device *
mpt_register_lan_device (MPT_ADAPTER *mpt_dev, int pnum)
static int
mptlan_probe(struct pci_dev *pdev, const struct pci_device_id *id)
static void
mptlan_remove(struct pci_dev *pdev)
static struct mpt_pci_driver mptlan_driver = ;
static int __init mpt_lan_init (void)
static void __exit mpt_lan_exit(void)
module_init(mpt_lan_init);
module_exit(mpt_lan_exit);
static unsigned short
mpt_lan_type_trans(struct sk_buff *skb, struct net_device *dev)
