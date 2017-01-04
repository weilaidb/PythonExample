#define BE_H
#define DRV_VER			"4.0.100u"
#define DRV_NAME		"be2net"
#define BE_NAME			"ServerEngines BladeEngine2 10Gbps NIC"
#define BE3_NAME		"ServerEngines BladeEngine3 10Gbps NIC"
#define OC_NAME			"Emulex OneConnect 10Gbps NIC"
#define OC_NAME_BE		OC_NAME	"(be3)"
#define OC_NAME_LANCER		OC_NAME "(Lancer)"
#define DRV_DESC		"ServerEngines BladeEngine 10Gbps NIC Driver"
#define BE_VENDOR_ID 		0x19a2
#define EMULEX_VENDOR_ID	0x10df
#define BE_DEVICE_ID1		0x211
#define BE_DEVICE_ID2		0x221
#define OC_DEVICE_ID1		0x700
#define OC_DEVICE_ID2		0x710
#define OC_DEVICE_ID3		0xe220
#define OC_DEVICE_ID4           0xe228
static inline char *nic_name(struct pci_dev *pdev)
#define BE_HDR_LEN		((u16) 64)
#define BE_MAX_JUMBO_FRAME_SIZE	9018
#define BE_MIN_MTU		256
#define BE_NUM_VLANS_SUPPORTED	64
#define BE_MAX_EQD		96
#define	BE_MAX_TX_FRAG_COUNT	30
#define EVNT_Q_LEN		1024
#define TX_Q_LEN		2048
#define TX_CQ_LEN		1024
#define RX_Q_LEN		1024
#define RX_CQ_LEN		1024
#define MCC_Q_LEN		128
#define MCC_CQ_LEN		256
#define MAX_RSS_QS		4
#define MAX_RX_QS		(MAX_RSS_QS + 1)
#define BE_MAX_MSIX_VECTORS	(MAX_RX_QS + 1)
#define BE_NAPI_WEIGHT		64
#define MAX_RX_POST 		BE_NAPI_WEIGHT
#define RX_FRAGS_REFILL_WM	(RX_Q_LEN - MAX_RX_POST)
#define FW_VER_LEN		32
struct be_dma_mem ;
struct be_queue_info ;
static inline u32 MODULO(u16 val, u16 limit)
static inline void index_adv(u16 *index, u16 val, u16 limit)
static inline void index_inc(u16 *index, u16 limit)
static inline void *queue_head_node(struct be_queue_info *q)
static inline void *queue_tail_node(struct be_queue_info *q)
static inline void queue_head_inc(struct be_queue_info *q)
static inline void queue_tail_inc(struct be_queue_info *q)
struct be_eq_obj ;
struct be_mcc_obj ;
struct be_tx_stats ;
struct be_tx_obj ;
struct be_rx_page_info ;
struct be_rx_stats ;
struct be_rx_compl_info ;
struct be_rx_obj ;
struct be_drv_stats ;
struct be_vf_cfg ;
#define BE_INVALID_PMAC_ID		0xffffffff
struct be_adapter ;
#define be_physfn(adapter) (!adapter->is_virtfn)
#define BE_GEN2 2
#define BE_GEN3 3
#define lancer_chip(adapter)	((adapter->pdev->device == OC_DEVICE_ID3) || \
(adapter->pdev->device == OC_DEVICE_ID4))
extern const struct ethtool_ops be_ethtool_ops;
#define msix_enabled(adapter)		(adapter->num_msix_vec > 0)
#define tx_stats(adapter)		(&adapter->tx_stats)
#define rx_stats(rxo)			(&rxo->stats)
#define BE_SET_NETDEV_OPS(netdev, ops)	(netdev->netdev_ops = ops)
#define for_all_rx_queues(adapter, rxo, i)				\
for (i = 0, rxo = &adapter->rx_obj[i]; i < adapter->num_rx_qs;	\
i++, rxo++)
#define for_all_rss_queues(adapter, rxo, i)				\
for (i = 0, rxo = &adapter->rx_obj[i+1]; i < (adapter->num_rx_qs - 1);\
i++, rxo++)
#define PAGE_SHIFT_4K		12
#define PAGE_SIZE_4K		(1 << PAGE_SHIFT_4K)
#define PAGES_4K_SPANNED(_address, size) 				\
((u32)((((size_t)(_address) & (PAGE_SIZE_4K - 1)) + 	\
(size) + (PAGE_SIZE_4K - 1)) >> PAGE_SHIFT_4K))
#define OFFSET_IN_PAGE(addr)						\
((size_t)(addr) & (PAGE_SIZE_4K-1))
#define AMAP_BIT_OFFSET(_struct, field)  				\
(((size_t)&(((_struct *)0)->field))%32)
static inline u32 amap_mask(u32 bitsize)
static inline void
amap_set(void *ptr, u32 dw_offset, u32 mask, u32 offset, u32 value)
#define AMAP_SET_BITS(_struct, field, ptr, val)				\
amap_set(ptr,						\
offsetof(_struct, field)/32,			\
amap_mask(sizeof(((_struct *)0)->field)),	\
AMAP_BIT_OFFSET(_struct, field),		\
val)
static inline u32 amap_get(void *ptr, u32 dw_offset, u32 mask, u32 offset)
#define AMAP_GET_BITS(_struct, field, ptr)				\
amap_get(ptr,						\
offsetof(_struct, field)/32,			\
amap_mask(sizeof(((_struct *)0)->field)),	\
AMAP_BIT_OFFSET(_struct, field))
#define be_dws_cpu_to_le(wrb, len)	swap_dws(wrb, len)
#define be_dws_le_to_cpu(wrb, len)	swap_dws(wrb, len)
static inline void swap_dws(void *wrb, int len)
static inline u8 is_tcp_pkt(struct sk_buff *skb)
static inline u8 is_udp_pkt(struct sk_buff *skb)
static inline void be_check_sriov_fn_type(struct be_adapter *adapter)
static inline void be_vf_eth_addr_generate(struct be_adapter *adapter, u8 *mac)
static inline bool be_multi_rxq(const struct be_adapter *adapter)
extern void be_cq_notify(struct be_adapter *adapter, u16 qid, bool arm,
u16 num_popped);
extern void be_link_status_update(struct be_adapter *adapter, bool link_up);
extern void netdev_stats_update(struct be_adapter *adapter);
extern void be_parse_stats(struct be_adapter *adapter);
extern int be_load_fw(struct be_adapter *adapter, u8 *func);
