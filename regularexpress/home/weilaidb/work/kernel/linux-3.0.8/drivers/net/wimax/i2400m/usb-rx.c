#define D_SUBMODULE rx
static
size_t i2400mu_rx_size_grow(struct i2400mu *i2400mu)
static
void i2400mu_rx_size_maybe_shrink(struct i2400mu *i2400mu)
static
struct sk_buff *i2400mu_rx(struct i2400mu *i2400mu, struct sk_buff *rx_skb)
static
int i2400mu_rxd(void *_i2400mu)
void i2400mu_rx_kick(struct i2400mu *i2400mu)
int i2400mu_rx_setup(struct i2400mu *i2400mu)
void i2400mu_rx_release(struct i2400mu *i2400mu)
