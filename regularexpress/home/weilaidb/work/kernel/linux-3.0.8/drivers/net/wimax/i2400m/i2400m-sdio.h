#define __I2400M_SDIO_H__
enum ;
struct i2400ms ;
static inline
void i2400ms_init(struct i2400ms *i2400ms)
extern int i2400ms_rx_setup(struct i2400ms *);
extern void i2400ms_rx_release(struct i2400ms *);
extern int i2400ms_tx_setup(struct i2400ms *);
extern void i2400ms_tx_release(struct i2400ms *);
extern void i2400ms_bus_tx_kick(struct i2400m *);
extern ssize_t i2400ms_bus_bm_cmd_send(struct i2400m *,
const struct i2400m_bootrom_header *,
size_t, int);
extern ssize_t i2400ms_bus_bm_wait_for_ack(struct i2400m *,
struct i2400m_bootrom_header *,
size_t);
extern void i2400ms_bus_bm_release(struct i2400m *);
extern int i2400ms_bus_bm_setup(struct i2400m *);
