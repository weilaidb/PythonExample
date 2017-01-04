static int napi_weight = 128;
module_param(napi_weight, int, 0444);
static int csum = 1, gso = 1;
module_param(csum, bool, 0444);
module_param(gso, bool, 0444);
#define MAX_PACKET_LEN (ETH_HLEN + VLAN_HLEN + ETH_DATA_LEN)
#define GOOD_COPY_LEN	128
#define VIRTNET_SEND_COMMAND_SG_MAX    2
struct virtnet_info ;
struct skb_vnet_hdr ;
struct padded_vnet_hdr ;
static inline struct skb_vnet_hdr *skb_vnet_hdr(struct sk_buff *skb)
static void give_pages(struct virtnet_info *vi, struct page *page)
static struct page *get_a_page(struct virtnet_info *vi, gfp_t gfp_mask)
static void skb_xmit_done(struct virtqueue *svq)
static void set_skb_frag(struct sk_buff *skb, struct page *page,
unsigned int offset, unsigned int *len)
static struct sk_buff *page_to_skb(struct virtnet_info *vi,
struct page *page, unsigned int len)
static int receive_mergeable(struct virtnet_info *vi, struct sk_buff *skb)
static void receive_buf(struct net_device *dev, void *buf, unsigned int len)
static int add_recvbuf_small(struct virtnet_info *vi, gfp_t gfp)
static int add_recvbuf_big(struct virtnet_info *vi, gfp_t gfp)
static int add_recvbuf_mergeable(struct virtnet_info *vi, gfp_t gfp)
static bool try_fill_recv(struct virtnet_info *vi, gfp_t gfp)
static void skb_recv_done(struct virtqueue *rvq)
static void virtnet_napi_enable(struct virtnet_info *vi)
static void refill_work(struct work_struct *work)
static int virtnet_poll(struct napi_struct *napi, int budget)
static unsigned int free_old_xmit_skbs(struct virtnet_info *vi)
static int xmit_skb(struct virtnet_info *vi, struct sk_buff *skb)
static netdev_tx_t start_xmit(struct sk_buff *skb, struct net_device *dev)
static int virtnet_set_mac_address(struct net_device *dev, void *p)
static void virtnet_netpoll(struct net_device *dev)
static int virtnet_open(struct net_device *dev)
static bool virtnet_send_command(struct virtnet_info *vi, u8 class, u8 cmd,
struct scatterlist *data, int out, int in)
static int virtnet_close(struct net_device *dev)
static void virtnet_set_rx_mode(struct net_device *dev)
static void virtnet_vlan_rx_add_vid(struct net_device *dev, u16 vid)
static void virtnet_vlan_rx_kill_vid(struct net_device *dev, u16 vid)
static const struct ethtool_ops virtnet_ethtool_ops = ;
#define MIN_MTU 68
#define MAX_MTU 65535
static int virtnet_change_mtu(struct net_device *dev, int new_mtu)
static const struct net_device_ops virtnet_netdev = ;
static void virtnet_update_status(struct virtnet_info *vi)
static void virtnet_config_changed(struct virtio_device *vdev)
static int virtnet_probe(struct virtio_device *vdev)
static void free_unused_bufs(struct virtnet_info *vi)
static void __devexit virtnet_remove(struct virtio_device *vdev)
static struct virtio_device_id id_table[] = ;
static unsigned int features[] = ;
static struct virtio_driver virtio_net_driver = ;
static int __init init(void)
static void __exit fini(void)
module_init(init);
module_exit(fini);
MODULE_DEVICE_TABLE(virtio, id_table);
MODULE_DESCRIPTION("Virtio network driver");
MODULE_LICENSE("GPL");
