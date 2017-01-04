struct efx_loopback_payload  __packed;
static const unsigned char payload_source[ETH_ALEN] = ;
static const char payload_msg[] =
"Hello world! This is an Efx loopback test in progress!";
static const unsigned int efx_interrupt_mode_max = EFX_INT_MODE_MAX;
static const char *efx_interrupt_mode_names[] = ;
#define INT_MODE(efx) \
STRING_TABLE_LOOKUP(efx->interrupt_mode, efx_interrupt_mode)
struct efx_loopback_state ;
static int efx_test_phy_alive(struct efx_nic *efx, struct efx_self_tests *tests)
static int efx_test_nvram(struct efx_nic *efx, struct efx_self_tests *tests)
static int efx_test_chip(struct efx_nic *efx, struct efx_self_tests *tests)
static int efx_test_interrupts(struct efx_nic *efx,
struct efx_self_tests *tests)
static int efx_test_eventq_irq(struct efx_channel *channel,
struct efx_self_tests *tests)
static int efx_test_phy(struct efx_nic *efx, struct efx_self_tests *tests,
unsigned flags)
void efx_loopback_rx_packet(struct efx_nic *efx,
const char *buf_ptr, int pkt_len)
static void efx_iterate_state(struct efx_nic *efx)
static int efx_begin_loopback(struct efx_tx_queue *tx_queue)
static int efx_poll_loopback(struct efx_nic *efx)
static int efx_end_loopback(struct efx_tx_queue *tx_queue,
struct efx_loopback_self_tests *lb_tests)
static int
efx_test_loopback(struct efx_tx_queue *tx_queue,
struct efx_loopback_self_tests *lb_tests)
static int efx_wait_for_link(struct efx_nic *efx)
static int efx_test_loopbacks(struct efx_nic *efx, struct efx_self_tests *tests,
unsigned int loopback_modes)
int efx_selftest(struct efx_nic *efx, struct efx_self_tests *tests,
unsigned flags)
