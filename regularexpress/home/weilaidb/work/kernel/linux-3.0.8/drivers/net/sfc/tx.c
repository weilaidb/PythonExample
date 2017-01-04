#define EFX_TXQ_THRESHOLD(_efx) ((_efx)->txq_entries / 2u)
static void efx_dequeue_buffer(struct efx_tx_queue *tx_queue,
struct efx_tx_buffer *buffer)
struct efx_tso_header ;
static int efx_enqueue_skb_tso(struct efx_tx_queue *tx_queue,
struct sk_buff *skb);
static void efx_fini_tso(struct efx_tx_queue *tx_queue);
static void efx_tsoh_heap_free(struct efx_tx_queue *tx_queue,
struct efx_tso_header *tsoh);
static void efx_tsoh_free(struct efx_tx_queue *tx_queue,
struct efx_tx_buffer *buffer)
static inline unsigned
efx_max_tx_len(struct efx_nic *efx, dma_addr_t dma_addr)
netdev_tx_t efx_enqueue_skb(struct efx_tx_queue *tx_queue, struct sk_buff *skb)
static void efx_dequeue_buffers(struct efx_tx_queue *tx_queue,
unsigned int index)
netdev_tx_t efx_hard_start_xmit(struct sk_buff *skb,
struct net_device *net_dev)
void efx_init_tx_queue_core_txq(struct efx_tx_queue *tx_queue)
int efx_setup_tc(struct net_device *net_dev, u8 num_tc)
void efx_xmit_done(struct efx_tx_queue *tx_queue, unsigned int index)
int efx_probe_tx_queue(struct efx_tx_queue *tx_queue)
void efx_init_tx_queue(struct efx_tx_queue *tx_queue)
void efx_release_tx_buffers(struct efx_tx_queue *tx_queue)
void efx_fini_tx_queue(struct efx_tx_queue *tx_queue)
void efx_remove_tx_queue(struct efx_tx_queue *tx_queue)
#define TSOH_OFFSET	0
#define TSOH_OFFSET	NET_IP_ALIGN
#define TSOH_BUFFER(tsoh)	((u8 *)(tsoh + 1) + TSOH_OFFSET)
#define TSOH_SIZE(hdr_len)					\
(sizeof(struct efx_tso_header) + TSOH_OFFSET + hdr_len)
#define TSOH_STD_SIZE		128
#define PTR_DIFF(p1, p2)  ((u8 *)(p1) - (u8 *)(p2))
#define ETH_HDR_LEN(skb)  (skb_network_header(skb) - (skb)->data)
#define SKB_TCP_OFF(skb)  PTR_DIFF(tcp_hdr(skb), (skb)->data)
#define SKB_IPV4_OFF(skb) PTR_DIFF(ip_hdr(skb), (skb)->data)
#define SKB_IPV6_OFF(skb) PTR_DIFF(ipv6_hdr(skb), (skb)->data)
struct tso_state ;
static __be16 efx_tso_check_protocol(struct sk_buff *skb)
static int efx_tsoh_block_alloc(struct efx_tx_queue *tx_queue)
static void efx_tsoh_block_free(struct efx_tx_queue *tx_queue,
struct efx_tso_header *tsoh,
struct pci_dev *pci_dev)
static struct efx_tso_header *
efx_tsoh_heap_alloc(struct efx_tx_queue *tx_queue, size_t header_len)
static void
efx_tsoh_heap_free(struct efx_tx_queue *tx_queue, struct efx_tso_header *tsoh)
static int efx_tx_queue_insert(struct efx_tx_queue *tx_queue,
dma_addr_t dma_addr, unsigned len,
struct efx_tx_buffer **final_buffer)
static void efx_tso_put_header(struct efx_tx_queue *tx_queue,
struct efx_tso_header *tsoh, unsigned len)
static void efx_enqueue_unwind(struct efx_tx_queue *tx_queue)
static void tso_start(struct tso_state *st, const struct sk_buff *skb)
static int tso_get_fragment(struct tso_state *st, struct efx_nic *efx,
skb_frag_t *frag)
static int tso_get_head_fragment(struct tso_state *st, struct efx_nic *efx,
const struct sk_buff *skb)
static int tso_fill_packet_with_fragment(struct efx_tx_queue *tx_queue,
const struct sk_buff *skb,
struct tso_state *st)
static int tso_start_new_packet(struct efx_tx_queue *tx_queue,
const struct sk_buff *skb,
struct tso_state *st)
static int efx_enqueue_skb_tso(struct efx_tx_queue *tx_queue,
struct sk_buff *skb)
static void efx_fini_tso(struct efx_tx_queue *tx_queue)
