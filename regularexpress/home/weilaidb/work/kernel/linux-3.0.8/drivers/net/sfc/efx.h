#define EFX_EFX_H
#define EFX_VENDID_SFC	        0x1924
#define FALCON_A_P_DEVID	0x0703
#define FALCON_A_S_DEVID        0x6703
#define FALCON_B_P_DEVID        0x0710
#define BETHPAGE_A_P_DEVID      0x0803
#define SIENA_A_P_DEVID         0x0813
#define EFX_MEM_BAR 2
extern int efx_probe_tx_queue(struct efx_tx_queue *tx_queue);
extern void efx_remove_tx_queue(struct efx_tx_queue *tx_queue);
extern void efx_init_tx_queue(struct efx_tx_queue *tx_queue);
extern void efx_init_tx_queue_core_txq(struct efx_tx_queue *tx_queue);
extern void efx_fini_tx_queue(struct efx_tx_queue *tx_queue);
extern void efx_release_tx_buffers(struct efx_tx_queue *tx_queue);
extern netdev_tx_t
efx_hard_start_xmit(struct sk_buff *skb, struct net_device *net_dev);
extern netdev_tx_t
efx_enqueue_skb(struct efx_tx_queue *tx_queue, struct sk_buff *skb);
extern void efx_xmit_done(struct efx_tx_queue *tx_queue, unsigned int index);
extern int efx_setup_tc(struct net_device *net_dev, u8 num_tc);
extern int efx_probe_rx_queue(struct efx_rx_queue *rx_queue);
extern void efx_remove_rx_queue(struct efx_rx_queue *rx_queue);
extern void efx_init_rx_queue(struct efx_rx_queue *rx_queue);
extern void efx_fini_rx_queue(struct efx_rx_queue *rx_queue);
extern void efx_rx_strategy(struct efx_channel *channel);
extern void efx_fast_push_rx_descriptors(struct efx_rx_queue *rx_queue);
extern void efx_rx_slow_fill(unsigned long context);
extern void __efx_rx_packet(struct efx_channel *channel,
struct efx_rx_buffer *rx_buf, bool checksummed);
extern void efx_rx_packet(struct efx_rx_queue *rx_queue, unsigned int index,
unsigned int len, bool checksummed, bool discard);
extern void efx_schedule_slow_fill(struct efx_rx_queue *rx_queue);
#define EFX_MAX_DMAQ_SIZE 4096UL
#define EFX_DEFAULT_DMAQ_SIZE 1024UL
#define EFX_MIN_DMAQ_SIZE 512UL
#define EFX_MAX_EVQ_SIZE 16384UL
#define EFX_MIN_EVQ_SIZE 512UL
#define EFX_MIN_RING_SIZE (roundup_pow_of_two(2 * 3 * MAX_SKB_FRAGS))
extern int efx_probe_filters(struct efx_nic *efx);
extern void efx_restore_filters(struct efx_nic *efx);
extern void efx_remove_filters(struct efx_nic *efx);
extern int efx_filter_insert_filter(struct efx_nic *efx,
struct efx_filter_spec *spec,
bool replace);
extern int efx_filter_remove_filter(struct efx_nic *efx,
struct efx_filter_spec *spec);
extern void efx_filter_clear_rx(struct efx_nic *efx,
enum efx_filter_priority priority);
extern int efx_filter_rfs(struct net_device *net_dev, const struct sk_buff *skb,
u16 rxq_index, u32 flow_id);
extern bool __efx_filter_rfs_expire(struct efx_nic *efx, unsigned quota);
static inline void efx_filter_rfs_expire(struct efx_channel *channel)
#define efx_filter_rfs_enabled() 1
static inline void efx_filter_rfs_expire(struct efx_channel *channel)
#define efx_filter_rfs_enabled() 0
extern void efx_process_channel_now(struct efx_channel *channel);
extern int
efx_realloc_channels(struct efx_nic *efx, u32 rxq_entries, u32 txq_entries);
extern int efx_reconfigure_port(struct efx_nic *efx);
extern int __efx_reconfigure_port(struct efx_nic *efx);
extern const struct ethtool_ops efx_ethtool_ops;
extern int efx_reset(struct efx_nic *efx, enum reset_type method);
extern void efx_reset_down(struct efx_nic *efx, enum reset_type method);
extern int efx_reset_up(struct efx_nic *efx, enum reset_type method, bool ok);
extern void efx_schedule_reset(struct efx_nic *efx, enum reset_type type);
extern void efx_init_irq_moderation(struct efx_nic *efx, int tx_usecs,
int rx_usecs, bool rx_adaptive);
extern int efx_port_dummy_op_int(struct efx_nic *efx);
extern void efx_port_dummy_op_void(struct efx_nic *efx);
extern int efx_mtd_probe(struct efx_nic *efx);
extern void efx_mtd_rename(struct efx_nic *efx);
extern void efx_mtd_remove(struct efx_nic *efx);
static inline int efx_mtd_probe(struct efx_nic *efx)
static inline void efx_mtd_rename(struct efx_nic *efx)
static inline void efx_mtd_remove(struct efx_nic *efx)
static inline void efx_schedule_channel(struct efx_channel *channel)
extern void efx_link_status_changed(struct efx_nic *efx);
extern void efx_link_set_advertising(struct efx_nic *efx, u32);
extern void efx_link_set_wanted_fc(struct efx_nic *efx, u8);
