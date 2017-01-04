#define F300_DATA	GPIO_0
#define F300_RESET	GPIO_1
#define F300_CLK	GPIO_2
#define F300_BUSY	GPIO_3
static void f300_set_line(struct cx23885_dev *dev, u32 line, u8 lvl)
static u8 f300_get_line(struct cx23885_dev *dev, u32 line)
static void f300_send_byte(struct cx23885_dev *dev, u8 dta)
static u8 f300_get_byte(struct cx23885_dev *dev)
static u8 f300_xfer(struct dvb_frontend *fe, u8 *buf)
int f300_set_voltage(struct dvb_frontend *fe, fe_sec_voltage_t voltage)
