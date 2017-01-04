static unsigned int ir_debug;
module_param(ir_debug, int, 0644);
MODULE_PARM_DESC(ir_debug, "enable integrated IR debug messages");
#define CX25840_IR_REG_BASE 	0x200
#define CX25840_IR_CNTRL_REG	0x200
#define CNTRL_WIN_3_3	0x00000000
#define CNTRL_WIN_4_3	0x00000001
#define CNTRL_WIN_3_4	0x00000002
#define CNTRL_WIN_4_4	0x00000003
#define CNTRL_WIN	0x00000003
#define CNTRL_EDG_NONE	0x00000000
#define CNTRL_EDG_FALL	0x00000004
#define CNTRL_EDG_RISE	0x00000008
#define CNTRL_EDG_BOTH	0x0000000C
#define CNTRL_EDG	0x0000000C
#define CNTRL_DMD	0x00000010
#define CNTRL_MOD	0x00000020
#define CNTRL_RFE	0x00000040
#define CNTRL_TFE	0x00000080
#define CNTRL_RXE	0x00000100
#define CNTRL_TXE	0x00000200
#define CNTRL_RIC	0x00000400
#define CNTRL_TIC	0x00000800
#define CNTRL_CPL	0x00001000
#define CNTRL_LBM	0x00002000
#define CNTRL_R		0x00004000
#define CX25840_IR_TXCLK_REG	0x204
#define TXCLK_TCD	0x0000FFFF
#define CX25840_IR_RXCLK_REG	0x208
#define RXCLK_RCD	0x0000FFFF
#define CX25840_IR_CDUTY_REG	0x20C
#define CDUTY_CDC	0x0000000F
#define CX25840_IR_STATS_REG	0x210
#define STATS_RTO	0x00000001
#define STATS_ROR	0x00000002
#define STATS_RBY	0x00000004
#define STATS_TBY	0x00000008
#define STATS_RSR	0x00000010
#define STATS_TSR	0x00000020
#define CX25840_IR_IRQEN_REG	0x214
#define IRQEN_RTE	0x00000001
#define IRQEN_ROE	0x00000002
#define IRQEN_RSE	0x00000010
#define IRQEN_TSE	0x00000020
#define IRQEN_MSK	0x00000033
#define CX25840_IR_FILTR_REG	0x218
#define FILTR_LPF	0x0000FFFF
#define CX25840_IR_FIFO_REG	0x23C
#define FIFO_RXTX	0x0000FFFF
#define FIFO_RXTX_LVL	0x00010000
#define FIFO_RXTX_RTO	0x0001FFFF
#define FIFO_RX_NDV	0x00020000
#define FIFO_RX_DEPTH	8
#define FIFO_TX_DEPTH	8
#define CX25840_VIDCLK_FREQ	108000000
#define CX25840_IR_REFCLK_FREQ	(CX25840_VIDCLK_FREQ / 2)
union cx25840_ir_fifo_rec ;
#define CX25840_IR_RX_KFIFO_SIZE    (256 * sizeof(union cx25840_ir_fifo_rec))
#define CX25840_IR_TX_KFIFO_SIZE    (256 * sizeof(union cx25840_ir_fifo_rec))
struct cx25840_ir_state ;
static inline struct cx25840_ir_state *to_ir_state(struct v4l2_subdev *sd)
static inline u16 count_to_clock_divider(unsigned int d)
static inline u16 ns_to_clock_divider(unsigned int ns)
static inline unsigned int clock_divider_to_ns(unsigned int divider)
static inline u16 carrier_freq_to_clock_divider(unsigned int freq)
static inline unsigned int clock_divider_to_carrier_freq(unsigned int divider)
static inline u16 freq_to_clock_divider(unsigned int freq,
unsigned int rollovers)
static inline unsigned int clock_divider_to_freq(unsigned int divider,
unsigned int rollovers)
static inline u16 count_to_lpf_count(unsigned int d)
static inline u16 ns_to_lpf_count(unsigned int ns)
static inline unsigned int lpf_count_to_ns(unsigned int count)
static inline unsigned int lpf_count_to_us(unsigned int count)
static u32 clock_divider_to_resolution(u16 divider)
static u64 pulse_width_count_to_ns(u16 count, u16 divider)
static unsigned int pulse_width_count_to_us(u16 count, u16 divider)
static u64 ns_to_pulse_clocks(u32 ns)
static u16 pulse_clocks_to_clock_divider(u64 count)
enum tx_fifo_watermark ;
enum rx_fifo_watermark ;
static inline void control_tx_irq_watermark(struct i2c_client *c,
enum tx_fifo_watermark level)
static inline void control_rx_irq_watermark(struct i2c_client *c,
enum rx_fifo_watermark level)
static inline void control_tx_enable(struct i2c_client *c, bool enable)
static inline void control_rx_enable(struct i2c_client *c, bool enable)
static inline void control_tx_modulation_enable(struct i2c_client *c,
bool enable)
static inline void control_rx_demodulation_enable(struct i2c_client *c,
bool enable)
static inline void control_rx_s_edge_detection(struct i2c_client *c,
u32 edge_types)
static void control_rx_s_carrier_window(struct i2c_client *c,
unsigned int carrier,
unsigned int *carrier_range_low,
unsigned int *carrier_range_high)
static inline void control_tx_polarity_invert(struct i2c_client *c,
bool invert)
static unsigned int txclk_tx_s_carrier(struct i2c_client *c,
unsigned int freq,
u16 *divider)
static unsigned int rxclk_rx_s_carrier(struct i2c_client *c,
unsigned int freq,
u16 *divider)
static u32 txclk_tx_s_max_pulse_width(struct i2c_client *c, u32 ns,
u16 *divider)
static u32 rxclk_rx_s_max_pulse_width(struct i2c_client *c, u32 ns,
u16 *divider)
static unsigned int cduty_tx_s_duty_cycle(struct i2c_client *c,
unsigned int duty_cycle)
static u32 filter_rx_s_min_width(struct i2c_client *c, u32 min_width_ns)
static inline void irqenable_rx(struct v4l2_subdev *sd, u32 mask)
static inline void irqenable_tx(struct v4l2_subdev *sd, u32 mask)
int cx25840_ir_irq_handler(struct v4l2_subdev *sd, u32 status, bool *handled)
static int cx25840_ir_rx_read(struct v4l2_subdev *sd, u8 *buf, size_t count,
ssize_t *num)
static int cx25840_ir_rx_g_parameters(struct v4l2_subdev *sd,
struct v4l2_subdev_ir_parameters *p)
static int cx25840_ir_rx_shutdown(struct v4l2_subdev *sd)
static int cx25840_ir_rx_s_parameters(struct v4l2_subdev *sd,
struct v4l2_subdev_ir_parameters *p)
static int cx25840_ir_tx_write(struct v4l2_subdev *sd, u8 *buf, size_t count,
ssize_t *num)
static int cx25840_ir_tx_g_parameters(struct v4l2_subdev *sd,
struct v4l2_subdev_ir_parameters *p)
static int cx25840_ir_tx_shutdown(struct v4l2_subdev *sd)
static int cx25840_ir_tx_s_parameters(struct v4l2_subdev *sd,
struct v4l2_subdev_ir_parameters *p)
int cx25840_ir_log_status(struct v4l2_subdev *sd)
const struct v4l2_subdev_ir_ops cx25840_ir_ops = ;
static const struct v4l2_subdev_ir_parameters default_rx_params = ;
static const struct v4l2_subdev_ir_parameters default_tx_params = ;
int cx25840_ir_probe(struct v4l2_subdev *sd)
int cx25840_ir_remove(struct v4l2_subdev *sd)
