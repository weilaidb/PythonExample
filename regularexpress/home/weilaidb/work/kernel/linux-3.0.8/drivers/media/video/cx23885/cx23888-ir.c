static unsigned int ir_888_debug;
module_param(ir_888_debug, int, 0644);
MODULE_PARM_DESC(ir_888_debug, "enable debug messages [CX23888 IR controller]");
#define CX23888_IR_REG_BASE 	0x170000
#define CX23888_IR_CNTRL_REG	0x170000
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
#define CNTRL_IVO	0x00008000
#define CX23888_IR_TXCLK_REG	0x170004
#define TXCLK_TCD	0x0000FFFF
#define CX23888_IR_RXCLK_REG	0x170008
#define RXCLK_RCD	0x0000FFFF
#define CX23888_IR_CDUTY_REG	0x17000C
#define CDUTY_CDC	0x0000000F
#define CX23888_IR_STATS_REG	0x170010
#define STATS_RTO	0x00000001
#define STATS_ROR	0x00000002
#define STATS_RBY	0x00000004
#define STATS_TBY	0x00000008
#define STATS_RSR	0x00000010
#define STATS_TSR	0x00000020
#define CX23888_IR_IRQEN_REG	0x170014
#define IRQEN_RTE	0x00000001
#define IRQEN_ROE	0x00000002
#define IRQEN_RSE	0x00000010
#define IRQEN_TSE	0x00000020
#define CX23888_IR_FILTR_REG	0x170018
#define FILTR_LPF	0x0000FFFF
#define CX23888_IR_FIFO_REG	0x170040
#define FIFO_RXTX	0x0000FFFF
#define FIFO_RXTX_LVL	0x00010000
#define FIFO_RXTX_RTO	0x0001FFFF
#define FIFO_RX_NDV	0x00020000
#define FIFO_RX_DEPTH	8
#define FIFO_TX_DEPTH	8
#define CX23888_IR_SEEDP_REG	0x17001C
#define CX23888_IR_TIMOL_REG	0x170020
#define CX23888_IR_WAKE0_REG	0x170024
#define CX23888_IR_WAKE1_REG	0x170028
#define CX23888_IR_WAKE2_REG	0x17002C
#define CX23888_IR_MASK0_REG	0x170030
#define CX23888_IR_MASK1_REG	0x170034
#define CX23888_IR_MAKS2_REG	0x170038
#define CX23888_IR_DPIPG_REG	0x17003C
#define CX23888_IR_LEARN_REG	0x170044
#define CX23888_VIDCLK_FREQ	108000000
#define CX23888_IR_REFCLK_FREQ	(CX23888_VIDCLK_FREQ / 2)
union cx23888_ir_fifo_rec ;
#define CX23888_IR_RX_KFIFO_SIZE    (256 * sizeof(union cx23888_ir_fifo_rec))
#define CX23888_IR_TX_KFIFO_SIZE    (256 * sizeof(union cx23888_ir_fifo_rec))
struct cx23888_ir_state ;
static inline struct cx23888_ir_state *to_state(struct v4l2_subdev *sd)
static
inline int cx23888_ir_write4(struct cx23885_dev *dev, u32 addr, u32 value)
static inline u32 cx23888_ir_read4(struct cx23885_dev *dev, u32 addr)
static inline int cx23888_ir_and_or4(struct cx23885_dev *dev, u32 addr,
u32 and_mask, u32 or_value)
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
static inline void control_tx_irq_watermark(struct cx23885_dev *dev,
enum tx_fifo_watermark level)
static inline void control_rx_irq_watermark(struct cx23885_dev *dev,
enum rx_fifo_watermark level)
static inline void control_tx_enable(struct cx23885_dev *dev, bool enable)
static inline void control_rx_enable(struct cx23885_dev *dev, bool enable)
static inline void control_tx_modulation_enable(struct cx23885_dev *dev,
bool enable)
static inline void control_rx_demodulation_enable(struct cx23885_dev *dev,
bool enable)
static inline void control_rx_s_edge_detection(struct cx23885_dev *dev,
u32 edge_types)
static void control_rx_s_carrier_window(struct cx23885_dev *dev,
unsigned int carrier,
unsigned int *carrier_range_low,
unsigned int *carrier_range_high)
static inline void control_tx_polarity_invert(struct cx23885_dev *dev,
bool invert)
static inline void control_tx_level_invert(struct cx23885_dev *dev,
bool invert)
static unsigned int txclk_tx_s_carrier(struct cx23885_dev *dev,
unsigned int freq,
u16 *divider)
static unsigned int rxclk_rx_s_carrier(struct cx23885_dev *dev,
unsigned int freq,
u16 *divider)
static u32 txclk_tx_s_max_pulse_width(struct cx23885_dev *dev, u32 ns,
u16 *divider)
static u32 rxclk_rx_s_max_pulse_width(struct cx23885_dev *dev, u32 ns,
u16 *divider)
static unsigned int cduty_tx_s_duty_cycle(struct cx23885_dev *dev,
unsigned int duty_cycle)
static u32 filter_rx_s_min_width(struct cx23885_dev *dev, u32 min_width_ns)
static inline void irqenable_rx(struct cx23885_dev *dev, u32 mask)
static inline void irqenable_tx(struct cx23885_dev *dev, u32 mask)
static int cx23888_ir_irq_handler(struct v4l2_subdev *sd, u32 status,
bool *handled)
static int cx23888_ir_rx_read(struct v4l2_subdev *sd, u8 *buf, size_t count,
ssize_t *num)
static int cx23888_ir_rx_g_parameters(struct v4l2_subdev *sd,
struct v4l2_subdev_ir_parameters *p)
static int cx23888_ir_rx_shutdown(struct v4l2_subdev *sd)
static int cx23888_ir_rx_s_parameters(struct v4l2_subdev *sd,
struct v4l2_subdev_ir_parameters *p)
static int cx23888_ir_tx_write(struct v4l2_subdev *sd, u8 *buf, size_t count,
ssize_t *num)
static int cx23888_ir_tx_g_parameters(struct v4l2_subdev *sd,
struct v4l2_subdev_ir_parameters *p)
static int cx23888_ir_tx_shutdown(struct v4l2_subdev *sd)
static int cx23888_ir_tx_s_parameters(struct v4l2_subdev *sd,
struct v4l2_subdev_ir_parameters *p)
static int cx23888_ir_log_status(struct v4l2_subdev *sd)
static inline int cx23888_ir_dbg_match(const struct v4l2_dbg_match *match)
static int cx23888_ir_g_chip_ident(struct v4l2_subdev *sd,
struct v4l2_dbg_chip_ident *chip)
static int cx23888_ir_g_register(struct v4l2_subdev *sd,
struct v4l2_dbg_register *reg)
static int cx23888_ir_s_register(struct v4l2_subdev *sd,
struct v4l2_dbg_register *reg)
static const struct v4l2_subdev_core_ops cx23888_ir_core_ops = ;
static const struct v4l2_subdev_ir_ops cx23888_ir_ir_ops = ;
static const struct v4l2_subdev_ops cx23888_ir_controller_ops = ;
static const struct v4l2_subdev_ir_parameters default_rx_params = ;
static const struct v4l2_subdev_ir_parameters default_tx_params = ;
int cx23888_ir_probe(struct cx23885_dev *dev)
int cx23888_ir_remove(struct cx23885_dev *dev)
