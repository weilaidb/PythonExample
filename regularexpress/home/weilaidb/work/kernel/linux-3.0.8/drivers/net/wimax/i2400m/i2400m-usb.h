#define __I2400M_USB_H__
enum ;
struct edc ;
struct i2400m_endpoint_cfg ;
static inline void edc_init(struct edc *edc)
static inline int edc_inc(struct edc *edc, u16 max_err, u16 timeframe)
enum ;
struct i2400mu ;
static inline
void i2400mu_init(struct i2400mu *i2400mu)
extern int i2400mu_notification_setup(struct i2400mu *);
extern void i2400mu_notification_release(struct i2400mu *);
extern int i2400mu_rx_setup(struct i2400mu *);
extern void i2400mu_rx_release(struct i2400mu *);
extern void i2400mu_rx_kick(struct i2400mu *);
extern int i2400mu_tx_setup(struct i2400mu *);
extern void i2400mu_tx_release(struct i2400mu *);
extern void i2400mu_bus_tx_kick(struct i2400m *);
extern ssize_t i2400mu_bus_bm_cmd_send(struct i2400m *,
const struct i2400m_bootrom_header *,
size_t, int);
extern ssize_t i2400mu_bus_bm_wait_for_ack(struct i2400m *,
struct i2400m_bootrom_header *,
size_t);
