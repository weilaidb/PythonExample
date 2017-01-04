#define FWNET_MAX_FRAGMENTS		30
#define FWNET_ISO_PAGE_COUNT		(PAGE_SIZE < 16*1024 ? 4 : 2)
#define FWNET_MAX_QUEUED_DATAGRAMS	20
#define FWNET_MIN_QUEUED_DATAGRAMS	10
#define FWNET_TX_QUEUE_LEN		FWNET_MAX_QUEUED_DATAGRAMS
#define IEEE1394_BROADCAST_CHANNEL	31
#define IEEE1394_ALL_NODES		(0xffc0 | 0x003f)
#define IEEE1394_MAX_PAYLOAD_S100	512
#define FWNET_NO_FIFO_ADDR		(~0ULL)
#define IANA_SPECIFIER_ID		0x00005eU
#define RFC2734_SW_VERSION		0x000001U
#define IEEE1394_GASP_HDR_SIZE	8
#define RFC2374_UNFRAG_HDR_SIZE	4
#define RFC2374_FRAG_HDR_SIZE	8
#define RFC2374_FRAG_OVERHEAD	4
#define RFC2374_HDR_UNFRAG	0
#define RFC2374_HDR_FIRSTFRAG	1
#define RFC2374_HDR_LASTFRAG	2
#define RFC2374_HDR_INTFRAG	3
#define RFC2734_HW_ADDR_LEN	16
struct rfc2734_arp  __attribute__((packed));
#define FWNET_ALEN	8
#define FWNET_HLEN	10
struct fwnet_header  __attribute__((packed));
struct rfc2734_header ;
#define fwnet_get_hdr_lf(h)		(((h)->w0 & 0xc0000000) >> 30)
#define fwnet_get_hdr_ether_type(h)	(((h)->w0 & 0x0000ffff))
#define fwnet_get_hdr_dg_size(h)	(((h)->w0 & 0x0fff0000) >> 16)
#define fwnet_get_hdr_fg_off(h)		(((h)->w0 & 0x00000fff))
#define fwnet_get_hdr_dgl(h)		(((h)->w1 & 0xffff0000) >> 16)
#define fwnet_set_hdr_lf(lf)		((lf)  << 30)
#define fwnet_set_hdr_ether_type(et)	(et)
#define fwnet_set_hdr_dg_size(dgs)	((dgs) << 16)
#define fwnet_set_hdr_fg_off(fgo)	(fgo)
#define fwnet_set_hdr_dgl(dgl)		((dgl) << 16)
static inline void fwnet_make_uf_hdr(struct rfc2734_header *hdr,
unsigned ether_type)
static inline void fwnet_make_ff_hdr(struct rfc2734_header *hdr,
unsigned ether_type, unsigned dg_size, unsigned dgl)
static inline void fwnet_make_sf_hdr(struct rfc2734_header *hdr,
unsigned lf, unsigned dg_size, unsigned fg_off, unsigned dgl)
struct fwnet_fragment_info ;
struct fwnet_partial_datagram ;
static DEFINE_MUTEX(fwnet_device_mutex);
static LIST_HEAD(fwnet_device_list);
struct fwnet_device ;
struct fwnet_peer ;
struct fwnet_packet_task ;
static int fwnet_header_create(struct sk_buff *skb, struct net_device *net,
unsigned short type, const void *daddr,
const void *saddr, unsigned len)
static int fwnet_header_rebuild(struct sk_buff *skb)
static int fwnet_header_cache(const struct neighbour *neigh,
struct hh_cache *hh)
static void fwnet_header_cache_update(struct hh_cache *hh,
const struct net_device *net, const unsigned char *haddr)
static int fwnet_header_parse(const struct sk_buff *skb, unsigned char *haddr)
static const struct header_ops fwnet_header_ops = ;
static bool fwnet_frag_overlap(struct fwnet_partial_datagram *pd,
unsigned offset, unsigned len)
static struct fwnet_fragment_info *fwnet_frag_new(
struct fwnet_partial_datagram *pd, unsigned offset, unsigned len)
static struct fwnet_partial_datagram *fwnet_pd_new(struct net_device *net,
struct fwnet_peer *peer, u16 datagram_label, unsigned dg_size,
void *frag_buf, unsigned frag_off, unsigned frag_len)
static struct fwnet_partial_datagram *fwnet_pd_find(struct fwnet_peer *peer,
u16 datagram_label)
static void fwnet_pd_delete(struct fwnet_partial_datagram *old)
static bool fwnet_pd_update(struct fwnet_peer *peer,
struct fwnet_partial_datagram *pd, void *frag_buf,
unsigned frag_off, unsigned frag_len)
static bool fwnet_pd_is_complete(struct fwnet_partial_datagram *pd)
static struct fwnet_peer *fwnet_peer_find_by_guid(struct fwnet_device *dev,
u64 guid)
static struct fwnet_peer *fwnet_peer_find_by_node_id(struct fwnet_device *dev,
int node_id, int generation)
static unsigned fwnet_max_payload(unsigned max_rec, unsigned speed)
static int fwnet_finish_incoming_packet(struct net_device *net,
struct sk_buff *skb, u16 source_node_id,
bool is_broadcast, u16 ether_type)
static int fwnet_incoming_packet(struct fwnet_device *dev, __be32 *buf, int len,
int source_node_id, int generation,
bool is_broadcast)
static void fwnet_receive_packet(struct fw_card *card, struct fw_request *r,
int tcode, int destination, int source, int generation,
unsigned long long offset, void *payload, size_t length,
void *callback_data)
static void fwnet_receive_broadcast(struct fw_iso_context *context,
u32 cycle, size_t header_length, void *header, void *data)
static struct kmem_cache *fwnet_packet_task_cache;
static void fwnet_free_ptask(struct fwnet_packet_task *ptask)
static void dec_queued_datagrams(struct fwnet_device *dev)
static int fwnet_send_packet(struct fwnet_packet_task *ptask);
static void fwnet_transmit_packet_done(struct fwnet_packet_task *ptask)
static void fwnet_transmit_packet_failed(struct fwnet_packet_task *ptask)
static void fwnet_write_complete(struct fw_card *card, int rcode,
void *payload, size_t length, void *data)
static int fwnet_send_packet(struct fwnet_packet_task *ptask)
static int fwnet_broadcast_start(struct fwnet_device *dev)
static void set_carrier_state(struct fwnet_device *dev)
static int fwnet_open(struct net_device *net)
static int fwnet_stop(struct net_device *net)
static netdev_tx_t fwnet_tx(struct sk_buff *skb, struct net_device *net)
static int fwnet_change_mtu(struct net_device *net, int new_mtu)
static const struct ethtool_ops fwnet_ethtool_ops = ;
static const struct net_device_ops fwnet_netdev_ops = ;
static void fwnet_init_dev(struct net_device *net)
static struct fwnet_device *fwnet_dev_find(struct fw_card *card)
static int fwnet_add_peer(struct fwnet_device *dev,
struct fw_unit *unit, struct fw_device *device)
static int fwnet_probe(struct device *_dev)
static void fwnet_remove_peer(struct fwnet_peer *peer, struct fwnet_device *dev)
static int fwnet_remove(struct device *_dev)
static void fwnet_update(struct fw_unit *unit)
static const struct ieee1394_device_id fwnet_id_table[] = ;
static struct fw_driver fwnet_driver = ;
static const u32 rfc2374_unit_directory_data[] = ;
static struct fw_descriptor rfc2374_unit_directory = ;
static int __init fwnet_init(void)
module_init(fwnet_init);
static void __exit fwnet_cleanup(void)
module_exit(fwnet_cleanup);
MODULE_AUTHOR("Jay Fenlason <fenlason@redhat.com>");
MODULE_DESCRIPTION("IPv4 over IEEE1394 as per RFC 2734");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(ieee1394, fwnet_id_table);
