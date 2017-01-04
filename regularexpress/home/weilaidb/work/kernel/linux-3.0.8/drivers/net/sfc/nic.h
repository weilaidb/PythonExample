#define EFX_NIC_H
enum ;
static inline int efx_nic_rev(struct efx_nic *efx)
extern u32 efx_nic_fpga_ver(struct efx_nic *efx);
static inline bool efx_nic_has_mc(struct efx_nic *efx)
static inline bool efx_nic_is_dual_func(struct efx_nic *efx)
enum ;
#define FALCON_XMAC_LOOPBACKS			\
((1 << LOOPBACK_XGMII) |		\
(1 << LOOPBACK_XGXS) |			\
(1 << LOOPBACK_XAUI))
#define FALCON_GMAC_LOOPBACKS			\
(1 << LOOPBACK_GMAC)
struct falcon_board_type ;
struct falcon_board ;
struct falcon_nic_data ;
static inline struct falcon_board *falcon_board(struct efx_nic *efx)
struct siena_nic_data ;
extern const struct efx_nic_type falcon_a1_nic_type;
extern const struct efx_nic_type falcon_b0_nic_type;
extern const struct efx_nic_type siena_a0_nic_type;
extern int falcon_probe_board(struct efx_nic *efx, u16 revision_info);
extern int efx_nic_probe_tx(struct efx_tx_queue *tx_queue);
extern void efx_nic_init_tx(struct efx_tx_queue *tx_queue);
extern void efx_nic_fini_tx(struct efx_tx_queue *tx_queue);
extern void efx_nic_remove_tx(struct efx_tx_queue *tx_queue);
extern void efx_nic_push_buffers(struct efx_tx_queue *tx_queue);
extern int efx_nic_probe_rx(struct efx_rx_queue *rx_queue);
extern void efx_nic_init_rx(struct efx_rx_queue *rx_queue);
extern void efx_nic_fini_rx(struct efx_rx_queue *rx_queue);
extern void efx_nic_remove_rx(struct efx_rx_queue *rx_queue);
extern void efx_nic_notify_rx_desc(struct efx_rx_queue *rx_queue);
extern int efx_nic_probe_eventq(struct efx_channel *channel);
extern void efx_nic_init_eventq(struct efx_channel *channel);
extern void efx_nic_fini_eventq(struct efx_channel *channel);
extern void efx_nic_remove_eventq(struct efx_channel *channel);
extern int efx_nic_process_eventq(struct efx_channel *channel, int rx_quota);
extern void efx_nic_eventq_read_ack(struct efx_channel *channel);
extern bool efx_nic_event_present(struct efx_channel *channel);
extern void falcon_drain_tx_fifo(struct efx_nic *efx);
extern void falcon_reconfigure_mac_wrapper(struct efx_nic *efx);
extern int efx_nic_init_interrupt(struct efx_nic *efx);
extern void efx_nic_enable_interrupts(struct efx_nic *efx);
extern void efx_nic_generate_test_event(struct efx_channel *channel);
extern void efx_nic_generate_fill_event(struct efx_channel *channel);
extern void efx_nic_generate_interrupt(struct efx_nic *efx);
extern void efx_nic_disable_interrupts(struct efx_nic *efx);
extern void efx_nic_fini_interrupt(struct efx_nic *efx);
extern irqreturn_t efx_nic_fatal_interrupt(struct efx_nic *efx);
extern irqreturn_t falcon_legacy_interrupt_a1(int irq, void *dev_id);
extern void falcon_irq_ack_a1(struct efx_nic *efx);
#define EFX_IRQ_MOD_RESOLUTION 5
extern int efx_nic_flush_queues(struct efx_nic *efx);
extern void falcon_start_nic_stats(struct efx_nic *efx);
extern void falcon_stop_nic_stats(struct efx_nic *efx);
extern void falcon_setup_xaui(struct efx_nic *efx);
extern int falcon_reset_xaui(struct efx_nic *efx);
extern void efx_nic_init_common(struct efx_nic *efx);
extern void efx_nic_push_rx_indir_table(struct efx_nic *efx);
int efx_nic_alloc_buffer(struct efx_nic *efx, struct efx_buffer *buffer,
unsigned int len);
void efx_nic_free_buffer(struct efx_nic *efx, struct efx_buffer *buffer);
struct efx_nic_register_test ;
extern int efx_nic_test_registers(struct efx_nic *efx,
const struct efx_nic_register_test *regs,
size_t n_regs);
extern size_t efx_nic_get_regs_len(struct efx_nic *efx);
extern void efx_nic_get_regs(struct efx_nic *efx, void *buf);
#define FALCON_STAT_OFFSET(falcon_stat) EFX_VAL(falcon_stat, offset)
#define FALCON_STAT_WIDTH(falcon_stat) EFX_VAL(falcon_stat, WIDTH)
#define FALCON_STAT(efx, falcon_stat, efx_stat) do  while (0)
#define FALCON_MAC_STATS_SIZE 0x100
#define MAC_DATA_LBN 0
#define MAC_DATA_WIDTH 32
extern void efx_nic_generate_event(struct efx_channel *channel,
efx_qword_t *event);
extern void falcon_poll_xmac(struct efx_nic *efx);
