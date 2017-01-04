#define D_SUBMODULE tx
enum ;
#define TAIL_FULL ((void *)~(unsigned long)NULL)
static inline
size_t __i2400m_tx_tail_room(struct i2400m *i2400m)
static
void *i2400m_tx_fifo_push(struct i2400m *i2400m, size_t size,
size_t padding, bool try_head)
static
void i2400m_tx_skip_tail(struct i2400m *i2400m)
static
unsigned i2400m_tx_fits(struct i2400m *i2400m)
static
void i2400m_tx_new(struct i2400m *i2400m)
static
void i2400m_tx_close(struct i2400m *i2400m)
int i2400m_tx(struct i2400m *i2400m, const void *buf, size_t buf_len,
enum i2400m_pt pl_type)
EXPORT_SYMBOL_GPL(i2400m_tx);
struct i2400m_msg_hdr *i2400m_tx_msg_get(struct i2400m *i2400m,
size_t *bus_size)
EXPORT_SYMBOL_GPL(i2400m_tx_msg_get);
void i2400m_tx_msg_sent(struct i2400m *i2400m)
EXPORT_SYMBOL_GPL(i2400m_tx_msg_sent);
int i2400m_tx_setup(struct i2400m *i2400m)
void i2400m_tx_release(struct i2400m *i2400m)
