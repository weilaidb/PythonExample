struct pending_tx_info ;
typedef unsigned int pending_ring_idx_t;
struct netbk_rx_meta ;
#define MAX_PENDING_REQS 256
#define MAX_BUFFER_OFFSET PAGE_SIZE
union page_ext ;
struct xen_netbk ;
static struct xen_netbk *xen_netbk;
static int xen_netbk_group_nr;
void xen_netbk_add_xenvif(struct xenvif *vif)
void xen_netbk_remove_xenvif(struct xenvif *vif)
static void xen_netbk_idx_release(struct xen_netbk *netbk, u16 pending_idx);
static void make_tx_response(struct xenvif *vif,
struct xen_netif_tx_request *txp,
s8       st);
static struct xen_netif_rx_response *make_rx_response(struct xenvif *vif,
u16      id,
s8       st,
u16      offset,
u16      size,
u16      flags);
static inline unsigned long idx_to_pfn(struct xen_netbk *netbk,
unsigned int idx)
static inline unsigned long idx_to_kaddr(struct xen_netbk *netbk,
unsigned int idx)
static inline void set_page_ext(struct page *pg, struct xen_netbk *netbk,
unsigned int idx)
static int get_page_ext(struct page *pg,
unsigned int *pgroup, unsigned int *pidx)
#define PKT_PROT_LEN    (ETH_HLEN + \
VLAN_HLEN + \
sizeof(struct iphdr) + MAX_IPOPTLEN + \
sizeof(struct tcphdr) + MAX_TCP_OPTION_SPACE)
static inline pending_ring_idx_t pending_index(unsigned i)
static inline pending_ring_idx_t nr_pending_reqs(struct xen_netbk *netbk)
static void xen_netbk_kick_thread(struct xen_netbk *netbk)
static int max_required_rx_slots(struct xenvif *vif)
int xen_netbk_rx_ring_full(struct xenvif *vif)
int xen_netbk_must_stop_queue(struct xenvif *vif)
static bool start_new_rx_buffer(int offset, unsigned long size, int head)
unsigned int xen_netbk_count_skb_slots(struct xenvif *vif, struct sk_buff *skb)
struct netrx_pending_operations ;
static struct netbk_rx_meta *get_next_rx_buffer(struct xenvif *vif,
struct netrx_pending_operations *npo)
static void netbk_gop_frag_copy(struct xenvif *vif, struct sk_buff *skb,
struct netrx_pending_operations *npo,
struct page *page, unsigned long size,
unsigned long offset, int *head)
static int netbk_gop_skb(struct sk_buff *skb,
struct netrx_pending_operations *npo)
static int netbk_check_gop(struct xenvif *vif, int nr_meta_slots,
struct netrx_pending_operations *npo)
static void netbk_add_frag_responses(struct xenvif *vif, int status,
struct netbk_rx_meta *meta,
int nr_meta_slots)
struct skb_cb_overlay ;
static void xen_netbk_rx_action(struct xen_netbk *netbk)
void xen_netbk_queue_tx_skb(struct xenvif *vif, struct sk_buff *skb)
static void xen_netbk_alarm(unsigned long data)
static int __on_net_schedule_list(struct xenvif *vif)
static void remove_from_net_schedule_list(struct xenvif *vif)
static struct xenvif *poll_net_schedule_list(struct xen_netbk *netbk)
void xen_netbk_schedule_xenvif(struct xenvif *vif)
void xen_netbk_deschedule_xenvif(struct xenvif *vif)
void xen_netbk_check_rx_xenvif(struct xenvif *vif)
static void tx_add_credit(struct xenvif *vif)
static void tx_credit_callback(unsigned long data)
static void netbk_tx_err(struct xenvif *vif,
struct xen_netif_tx_request *txp, RING_IDX end)
static int netbk_count_requests(struct xenvif *vif,
struct xen_netif_tx_request *first,
struct xen_netif_tx_request *txp,
int work_to_do)
static struct page *xen_netbk_alloc_page(struct xen_netbk *netbk,
struct sk_buff *skb,
unsigned long pending_idx)
static struct gnttab_copy *xen_netbk_get_requests(struct xen_netbk *netbk,
struct xenvif *vif,
struct sk_buff *skb,
struct xen_netif_tx_request *txp,
struct gnttab_copy *gop)
static int xen_netbk_tx_check_gop(struct xen_netbk *netbk,
struct sk_buff *skb,
struct gnttab_copy **gopp)
static void xen_netbk_fill_frags(struct xen_netbk *netbk, struct sk_buff *skb)
static int xen_netbk_get_extras(struct xenvif *vif,
struct xen_netif_extra_info *extras,
int work_to_do)
static int netbk_set_skb_gso(struct xenvif *vif,
struct sk_buff *skb,
struct xen_netif_extra_info *gso)
static int checksum_setup(struct xenvif *vif, struct sk_buff *skb)
static bool tx_credit_exceeded(struct xenvif *vif, unsigned size)
static unsigned xen_netbk_tx_build_gops(struct xen_netbk *netbk)
static void xen_netbk_tx_submit(struct xen_netbk *netbk)
static void xen_netbk_tx_action(struct xen_netbk *netbk)
static void xen_netbk_idx_release(struct xen_netbk *netbk, u16 pending_idx)
static void make_tx_response(struct xenvif *vif,
struct xen_netif_tx_request *txp,
s8       st)
static struct xen_netif_rx_response *make_rx_response(struct xenvif *vif,
u16      id,
s8       st,
u16      offset,
u16      size,
u16      flags)
static inline int rx_work_todo(struct xen_netbk *netbk)
static inline int tx_work_todo(struct xen_netbk *netbk)
static int xen_netbk_kthread(void *data)
void xen_netbk_unmap_frontend_rings(struct xenvif *vif)
int xen_netbk_map_frontend_rings(struct xenvif *vif,
grant_ref_t tx_ring_ref,
grant_ref_t rx_ring_ref)
static int __init netback_init(void)
module_init(netback_init);
MODULE_LICENSE("Dual BSD/GPL");
