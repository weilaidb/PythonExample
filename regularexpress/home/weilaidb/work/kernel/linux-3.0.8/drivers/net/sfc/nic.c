#define TX_DC_ENTRIES 16
#define TX_DC_ENTRIES_ORDER 1
#define RX_DC_ENTRIES 64
#define RX_DC_ENTRIES_ORDER 3
#define EFX_INT_ERROR_EXPIRE 3600
#define EFX_MAX_INT_ERRORS 5
#define EFX_FLUSH_INTERVAL 10
#define EFX_FLUSH_POLL_COUNT 100
#define EFX_BUF_SIZE 4096
#define EFX_RX_FLUSH_COUNT 4
#define EFX_CHANNEL_MAGIC_TEST(_channel)	\
(0x00010100 + (_channel)->channel)
#define EFX_CHANNEL_MAGIC_FILL(_channel)	\
(0x00010200 + (_channel)->channel)
static inline void efx_write_buf_tbl(struct efx_nic *efx, efx_qword_t *value,
unsigned int index)
static inline efx_qword_t *efx_event(struct efx_channel *channel,
unsigned int index)
static inline int efx_event_present(efx_qword_t *event)
static bool efx_masked_compare_oword(const efx_oword_t *a, const efx_oword_t *b,
const efx_oword_t *mask)
int efx_nic_test_registers(struct efx_nic *efx,
const struct efx_nic_register_test *regs,
size_t n_regs)
static void
efx_init_special_buffer(struct efx_nic *efx, struct efx_special_buffer *buffer)
static void
efx_fini_special_buffer(struct efx_nic *efx, struct efx_special_buffer *buffer)
static int efx_alloc_special_buffer(struct efx_nic *efx,
struct efx_special_buffer *buffer,
unsigned int len)
static void
efx_free_special_buffer(struct efx_nic *efx, struct efx_special_buffer *buffer)
int efx_nic_alloc_buffer(struct efx_nic *efx, struct efx_buffer *buffer,
unsigned int len)
void efx_nic_free_buffer(struct efx_nic *efx, struct efx_buffer *buffer)
static inline efx_qword_t *
efx_tx_desc(struct efx_tx_queue *tx_queue, unsigned int index)
static inline void efx_notify_tx_desc(struct efx_tx_queue *tx_queue)
static inline void efx_push_tx_desc(struct efx_tx_queue *tx_queue,
const efx_qword_t *txd)
static inline bool
efx_may_push_tx_desc(struct efx_tx_queue *tx_queue, unsigned int write_count)
void efx_nic_push_buffers(struct efx_tx_queue *tx_queue)
int efx_nic_probe_tx(struct efx_tx_queue *tx_queue)
void efx_nic_init_tx(struct efx_tx_queue *tx_queue)
static void efx_flush_tx_queue(struct efx_tx_queue *tx_queue)
void efx_nic_fini_tx(struct efx_tx_queue *tx_queue)
void efx_nic_remove_tx(struct efx_tx_queue *tx_queue)
static inline efx_qword_t *
efx_rx_desc(struct efx_rx_queue *rx_queue, unsigned int index)
static inline void
efx_build_rx_desc(struct efx_rx_queue *rx_queue, unsigned index)
void efx_nic_notify_rx_desc(struct efx_rx_queue *rx_queue)
int efx_nic_probe_rx(struct efx_rx_queue *rx_queue)
void efx_nic_init_rx(struct efx_rx_queue *rx_queue)
static void efx_flush_rx_queue(struct efx_rx_queue *rx_queue)
void efx_nic_fini_rx(struct efx_rx_queue *rx_queue)
void efx_nic_remove_rx(struct efx_rx_queue *rx_queue)
void efx_nic_eventq_read_ack(struct efx_channel *channel)
static void efx_generate_event(struct efx_channel *channel, efx_qword_t *event)
static int
efx_handle_tx_event(struct efx_channel *channel, efx_qword_t *event)
static void efx_handle_rx_not_ok(struct efx_rx_queue *rx_queue,
const efx_qword_t *event,
bool *rx_ev_pkt_ok,
bool *discard)
static void
efx_handle_rx_bad_index(struct efx_rx_queue *rx_queue, unsigned index)
static void
efx_handle_rx_event(struct efx_channel *channel, const efx_qword_t *event)
static void
efx_handle_generated_event(struct efx_channel *channel, efx_qword_t *event)
static void
efx_handle_driver_event(struct efx_channel *channel, efx_qword_t *event)
int efx_nic_process_eventq(struct efx_channel *channel, int budget)
bool efx_nic_event_present(struct efx_channel *channel)
int efx_nic_probe_eventq(struct efx_channel *channel)
void efx_nic_init_eventq(struct efx_channel *channel)
void efx_nic_fini_eventq(struct efx_channel *channel)
void efx_nic_remove_eventq(struct efx_channel *channel)
void efx_nic_generate_test_event(struct efx_channel *channel)
void efx_nic_generate_fill_event(struct efx_channel *channel)
static void efx_poll_flush_events(struct efx_nic *efx)
int efx_nic_flush_queues(struct efx_nic *efx)
static inline void efx_nic_interrupts(struct efx_nic *efx,
bool enabled, bool force)
void efx_nic_enable_interrupts(struct efx_nic *efx)
void efx_nic_disable_interrupts(struct efx_nic *efx)
void efx_nic_generate_interrupt(struct efx_nic *efx)
irqreturn_t efx_nic_fatal_interrupt(struct efx_nic *efx)
static irqreturn_t efx_legacy_interrupt(int irq, void *dev_id)
static irqreturn_t efx_msi_interrupt(int irq, void *dev_id)
void efx_nic_push_rx_indir_table(struct efx_nic *efx)
int efx_nic_init_interrupt(struct efx_nic *efx)
void efx_nic_fini_interrupt(struct efx_nic *efx)
u32 efx_nic_fpga_ver(struct efx_nic *efx)
void efx_nic_init_common(struct efx_nic *efx)
#define REGISTER_REVISION_A	1
#define REGISTER_REVISION_B	2
#define REGISTER_REVISION_C	3
#define REGISTER_REVISION_Z	3
struct efx_nic_reg ;
#define REGISTER(name, min_rev, max_rev)
#define REGISTER_AA(name) REGISTER(name, A, A)
#define REGISTER_AB(name) REGISTER(name, A, B)
#define REGISTER_AZ(name) REGISTER(name, A, Z)
#define REGISTER_BB(name) REGISTER(name, B, B)
#define REGISTER_BZ(name) REGISTER(name, B, Z)
#define REGISTER_CZ(name) REGISTER(name, C, Z)
static const struct efx_nic_reg efx_nic_regs[] = ;
struct efx_nic_reg_table ;
#define REGISTER_TABLE_DIMENSIONS(_, offset, min_rev, max_rev, step, rows)
#define REGISTER_TABLE(name, min_rev, max_rev) 				\
REGISTER_TABLE_DIMENSIONS(					\
name, FR_ ## min_rev ## max_rev ## _ ## name,		\
min_rev, max_rev,					\
FR_ ## min_rev ## max_rev ## _ ## name ## _STEP,	\
FR_ ## min_rev ## max_rev ## _ ## name ## _ROWS)
#define REGISTER_TABLE_AA(name) REGISTER_TABLE(name, A, A)
#define REGISTER_TABLE_AZ(name) REGISTER_TABLE(name, A, Z)
#define REGISTER_TABLE_BB(name) REGISTER_TABLE(name, B, B)
#define REGISTER_TABLE_BZ(name) REGISTER_TABLE(name, B, Z)
#define REGISTER_TABLE_BB_CZ(name)					\
REGISTER_TABLE_DIMENSIONS(name, FR_BZ_ ## name, B, B,		\
FR_BZ_ ## name ## _STEP,		\
FR_BB_ ## name ## _ROWS),		\
REGISTER_TABLE_DIMENSIONS(name, FR_BZ_ ## name, C, Z,		\
FR_BZ_ ## name ## _STEP,		\
FR_CZ_ ## name ## _ROWS)
#define REGISTER_TABLE_CZ(name) REGISTER_TABLE(name, C, Z)
static const struct efx_nic_reg_table efx_nic_reg_tables[] = ;
size_t efx_nic_get_regs_len(struct efx_nic *efx)
void efx_nic_get_regs(struct efx_nic *efx, void *buf)
