#define D_SUBMODULE fw
static
ssize_t i2400mu_tx_bulk_out(struct i2400mu *i2400mu, void *buf, size_t buf_size)
ssize_t i2400mu_bus_bm_cmd_send(struct i2400m *i2400m,
const struct i2400m_bootrom_header *_cmd,
size_t cmd_size, int flags)
static
void __i2400mu_bm_notif_cb(struct urb *urb)
static
int i2400mu_notif_submit(struct i2400mu *i2400mu, struct urb *urb,
struct completion *completion)
ssize_t i2400mu_bus_bm_wait_for_ack(struct i2400m *i2400m,
struct i2400m_bootrom_header *_ack,
size_t ack_size)
