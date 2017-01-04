#define D_SUBMODULE tx
static
int i2400mu_tx(struct i2400mu *i2400mu, struct i2400m_msg_hdr *tx_msg,
size_t tx_msg_size)
static
int i2400mu_txd(void *_i2400mu)
void i2400mu_bus_tx_kick(struct i2400m *i2400m)
int i2400mu_tx_setup(struct i2400mu *i2400mu)
void i2400mu_tx_release(struct i2400mu *i2400mu)
