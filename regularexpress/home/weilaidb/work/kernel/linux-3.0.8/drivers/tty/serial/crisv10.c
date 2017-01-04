static char *serial_version = "$Revision: 1.25 $";
#error "Enable FAST_TIMER to use SERIAL_FAST_TIMER"
#if defined(CONFIG_ETRAX_SERIAL_RX_TIMEOUT_TICKS) && \
(CONFIG_ETRAX_SERIAL_RX_TIMEOUT_TICKS == 0)
#error "RX_TIMEOUT_TICKS == 0 not allowed, use 1"
#if defined(CONFIG_ETRAX_RS485_ON_PA) && defined(CONFIG_ETRAX_RS485_ON_PORT_G)
#error "Disable either CONFIG_ETRAX_RS485_ON_PA or CONFIG_ETRAX_RS485_ON_PORT_G"
#if defined(LOCAL_HEADERS)
struct tty_driver *serial_driver;
#define WAKEUP_CHARS 256
#define SERIAL_HANDLE_EARLY_ERRORS
#define SERIAL_DESCR_BUF_SIZE 256
#define SERIAL_PRESCALE_BASE 3125000
#define DEF_BAUD_BASE SERIAL_PRESCALE_BASE
#define MIN_FLUSH_TIME_USEC 250
#define TIMERD(x)
#define DINTR1(x)
#define DINTR2(x)
#define DFLIP(x)
#define DFLOW(x)
#define DBAUD(x)
#define DLOG_INT_TRIG(x)
#define DEBUG_LOG(line, string, value)
struct debug_log_info
;
#define DEBUG_LOG_SIZE 4096
struct debug_log_info debug_log[DEBUG_LOG_SIZE];
int debug_log_pos = 0;
#define DEBUG_LOG(_line, _string, _value) do while(0)
void debug_log_func(int line, const char *string, int value)
#define CONFIG_ETRAX_SERIAL_RX_TIMEOUT_TICKS 5
unsigned long timer_data_to_ns(unsigned long timer_data);
static void change_speed(struct e100_serial *info);
static void rs_throttle(struct tty_struct * tty);
static void rs_wait_until_sent(struct tty_struct *tty, int timeout);
static int rs_write(struct tty_struct *tty,
const unsigned char *buf, int count);
static int e100_write_rs485(struct tty_struct *tty,
const unsigned char *buf, int count);
static int get_lsr_info(struct e100_serial *info, unsigned int *value);
#define DEF_BAUD 115200
#define STD_FLAGS (ASYNC_BOOT_AUTOCONF | ASYNC_SKIP_TEST)
#define DEF_RX 0x20
#define DEF_TX 0x80
#define REG_DATA 0
#define REG_DATA_STATUS32 0
#define REG_TR_DATA 0
#define REG_STATUS 1
#define REG_TR_CTRL 1
#define REG_REC_CTRL 2
#define REG_BAUD 3
#define REG_XOFF 4
#define SER_RXD_MASK         IO_MASK(R_SERIAL0_STATUS, rxd)
#define SER_DATA_AVAIL_MASK  IO_MASK(R_SERIAL0_STATUS, data_avail)
#define SER_FRAMING_ERR_MASK IO_MASK(R_SERIAL0_STATUS, framing_err)
#define SER_PAR_ERR_MASK     IO_MASK(R_SERIAL0_STATUS, par_err)
#define SER_OVERRUN_MASK     IO_MASK(R_SERIAL0_STATUS, overrun)
#define SER_ERROR_MASK (SER_OVERRUN_MASK | SER_PAR_ERR_MASK | SER_FRAMING_ERR_MASK)
#define ERRCODE_SET_BREAK    (TTY_BREAK)
#define ERRCODE_INSERT        0x100
#define ERRCODE_INSERT_BREAK (ERRCODE_INSERT | TTY_BREAK)
#define FORCE_EOP(info)  *R_SET_EOP = 1U << info->iseteop;
static const unsigned long e100_ser_int_mask = 0
| IO_MASK(R_IRQ_MASK1_RD, ser0_data) | IO_MASK(R_IRQ_MASK1_RD, ser0_ready)
| IO_MASK(R_IRQ_MASK1_RD, ser1_data) | IO_MASK(R_IRQ_MASK1_RD, ser1_ready)
| IO_MASK(R_IRQ_MASK1_RD, ser2_data) | IO_MASK(R_IRQ_MASK1_RD, ser2_ready)
| IO_MASK(R_IRQ_MASK1_RD, ser3_data) | IO_MASK(R_IRQ_MASK1_RD, ser3_ready)
;
unsigned long r_alt_ser_baudrate_shadow = 0;
static struct e100_serial rs_table[] = ;
#define NR_PORTS (sizeof(rs_table)/sizeof(struct e100_serial))
static struct fast_timer fast_timers[NR_PORTS];
#define PROCSTAT(x) x
struct ser_statistics_type ;
static struct ser_statistics_type ser_stat[NR_PORTS];
#define PROCSTAT(x)
#if defined(CONFIG_ETRAX_RS485)
static struct fast_timer fast_timers_rs485[NR_PORTS];
#if defined(CONFIG_ETRAX_RS485_ON_PA)
static int rs485_pa_bit = CONFIG_ETRAX_RS485_ON_PA_BIT;
#if defined(CONFIG_ETRAX_RS485_ON_PORT_G)
static int rs485_port_g_bit = CONFIG_ETRAX_RS485_ON_PORT_G_BIT;
#define E100_STRUCT_PORT(line, pinname) \
((CONFIG_ETRAX_SER##line##_##pinname##_ON_PA_BIT >= 0)? \
(R_PORT_PA_DATA): ( \
(CONFIG_ETRAX_SER##line##_##pinname##_ON_PB_BIT >= 0)? \
(R_PORT_PB_DATA):&dummy_ser[line]))
#define E100_STRUCT_SHADOW(line, pinname) \
((CONFIG_ETRAX_SER##line##_##pinname##_ON_PA_BIT >= 0)? \
(&port_pa_data_shadow): ( \
(CONFIG_ETRAX_SER##line##_##pinname##_ON_PB_BIT >= 0)? \
(&port_pb_data_shadow):&dummy_ser[line]))
#define E100_STRUCT_MASK(line, pinname) \
((CONFIG_ETRAX_SER##line##_##pinname##_ON_PA_BIT >= 0)? \
(1<<CONFIG_ETRAX_SER##line##_##pinname##_ON_PA_BIT): ( \
(CONFIG_ETRAX_SER##line##_##pinname##_ON_PB_BIT >= 0)? \
(1<<CONFIG_ETRAX_SER##line##_##pinname##_ON_PB_BIT):DUMMY_##pinname##_MASK))
#define DUMMY_DTR_MASK 1
#define DUMMY_RI_MASK  2
#define DUMMY_DSR_MASK 4
#define DUMMY_CD_MASK  8
static unsigned char dummy_ser[NR_PORTS] = ;
#define SER0_PA_BITSUM (CONFIG_ETRAX_SER0_DTR_ON_PA_BIT+CONFIG_ETRAX_SER0_RI_ON_PA_BIT+CONFIG_ETRAX_SER0_DSR_ON_PA_BIT+CONFIG_ETRAX_SER0_CD_ON_PA_BIT)
#if SER0_PA_BITSUM != -4
#  if CONFIG_ETRAX_SER0_DTR_ON_PA_BIT == -1
#    ifndef CONFIG_ETRAX_SER0_DTR_RI_DSR_CD_MIXED
#      define CONFIG_ETRAX_SER0_DTR_RI_DSR_CD_MIXED 1
#    endif
#   endif
# if CONFIG_ETRAX_SER0_RI_ON_PA_BIT == -1
#   ifndef CONFIG_ETRAX_SER0_DTR_RI_DSR_CD_MIXED
#     define CONFIG_ETRAX_SER0_DTR_RI_DSR_CD_MIXED 1
#   endif
#  endif
#  if CONFIG_ETRAX_SER0_DSR_ON_PA_BIT == -1
#    ifndef CONFIG_ETRAX_SER0_DTR_RI_DSR_CD_MIXED
#      define CONFIG_ETRAX_SER0_DTR_RI_DSR_CD_MIXED 1
#    endif
#  endif
#  if CONFIG_ETRAX_SER0_CD_ON_PA_BIT == -1
#    ifndef CONFIG_ETRAX_SER0_DTR_RI_DSR_CD_MIXED
#      define CONFIG_ETRAX_SER0_DTR_RI_DSR_CD_MIXED 1
#    endif
#  endif
#define SER0_PB_BITSUM (CONFIG_ETRAX_SER0_DTR_ON_PB_BIT+CONFIG_ETRAX_SER0_RI_ON_PB_BIT+CONFIG_ETRAX_SER0_DSR_ON_PB_BIT+CONFIG_ETRAX_SER0_CD_ON_PB_BIT)
#if SER0_PB_BITSUM != -4
#  if CONFIG_ETRAX_SER0_DTR_ON_PB_BIT == -1
#    ifndef CONFIG_ETRAX_SER0_DTR_RI_DSR_CD_MIXED
#      define CONFIG_ETRAX_SER0_DTR_RI_DSR_CD_MIXED 1
#    endif
#   endif
# if CONFIG_ETRAX_SER0_RI_ON_PB_BIT == -1
#   ifndef CONFIG_ETRAX_SER0_DTR_RI_DSR_CD_MIXED
#     define CONFIG_ETRAX_SER0_DTR_RI_DSR_CD_MIXED 1
#   endif
#  endif
#  if CONFIG_ETRAX_SER0_DSR_ON_PB_BIT == -1
#    ifndef CONFIG_ETRAX_SER0_DTR_RI_DSR_CD_MIXED
#      define CONFIG_ETRAX_SER0_DTR_RI_DSR_CD_MIXED 1
#    endif
#  endif
#  if CONFIG_ETRAX_SER0_CD_ON_PB_BIT == -1
#    ifndef CONFIG_ETRAX_SER0_DTR_RI_DSR_CD_MIXED
#      define CONFIG_ETRAX_SER0_DTR_RI_DSR_CD_MIXED 1
#    endif
#  endif
#define SER1_PA_BITSUM (CONFIG_ETRAX_SER1_DTR_ON_PA_BIT+CONFIG_ETRAX_SER1_RI_ON_PA_BIT+CONFIG_ETRAX_SER1_DSR_ON_PA_BIT+CONFIG_ETRAX_SER1_CD_ON_PA_BIT)
#if SER1_PA_BITSUM != -4
#  if CONFIG_ETRAX_SER1_DTR_ON_PA_BIT == -1
#    ifndef CONFIG_ETRAX_SER1_DTR_RI_DSR_CD_MIXED
#      define CONFIG_ETRAX_SER1_DTR_RI_DSR_CD_MIXED 1
#    endif
#   endif
# if CONFIG_ETRAX_SER1_RI_ON_PA_BIT == -1
#   ifndef CONFIG_ETRAX_SER1_DTR_RI_DSR_CD_MIXED
#     define CONFIG_ETRAX_SER1_DTR_RI_DSR_CD_MIXED 1
#   endif
#  endif
#  if CONFIG_ETRAX_SER1_DSR_ON_PA_BIT == -1
#    ifndef CONFIG_ETRAX_SER1_DTR_RI_DSR_CD_MIXED
#      define CONFIG_ETRAX_SER1_DTR_RI_DSR_CD_MIXED 1
#    endif
#  endif
#  if CONFIG_ETRAX_SER1_CD_ON_PA_BIT == -1
#    ifndef CONFIG_ETRAX_SER1_DTR_RI_DSR_CD_MIXED
#      define CONFIG_ETRAX_SER1_DTR_RI_DSR_CD_MIXED 1
#    endif
#  endif
#define SER1_PB_BITSUM (CONFIG_ETRAX_SER1_DTR_ON_PB_BIT+CONFIG_ETRAX_SER1_RI_ON_PB_BIT+CONFIG_ETRAX_SER1_DSR_ON_PB_BIT+CONFIG_ETRAX_SER1_CD_ON_PB_BIT)
#if SER1_PB_BITSUM != -4
#  if CONFIG_ETRAX_SER1_DTR_ON_PB_BIT == -1
#    ifndef CONFIG_ETRAX_SER1_DTR_RI_DSR_CD_MIXED
#      define CONFIG_ETRAX_SER1_DTR_RI_DSR_CD_MIXED 1
#    endif
#   endif
# if CONFIG_ETRAX_SER1_RI_ON_PB_BIT == -1
#   ifndef CONFIG_ETRAX_SER1_DTR_RI_DSR_CD_MIXED
#     define CONFIG_ETRAX_SER1_DTR_RI_DSR_CD_MIXED 1
#   endif
#  endif
#  if CONFIG_ETRAX_SER1_DSR_ON_PB_BIT == -1
#    ifndef CONFIG_ETRAX_SER1_DTR_RI_DSR_CD_MIXED
#      define CONFIG_ETRAX_SER1_DTR_RI_DSR_CD_MIXED 1
#    endif
#  endif
#  if CONFIG_ETRAX_SER1_CD_ON_PB_BIT == -1
#    ifndef CONFIG_ETRAX_SER1_DTR_RI_DSR_CD_MIXED
#      define CONFIG_ETRAX_SER1_DTR_RI_DSR_CD_MIXED 1
#    endif
#  endif
#define SER2_PA_BITSUM (CONFIG_ETRAX_SER2_DTR_ON_PA_BIT+CONFIG_ETRAX_SER2_RI_ON_PA_BIT+CONFIG_ETRAX_SER2_DSR_ON_PA_BIT+CONFIG_ETRAX_SER2_CD_ON_PA_BIT)
#if SER2_PA_BITSUM != -4
#  if CONFIG_ETRAX_SER2_DTR_ON_PA_BIT == -1
#    ifndef CONFIG_ETRAX_SER2_DTR_RI_DSR_CD_MIXED
#      define CONFIG_ETRAX_SER2_DTR_RI_DSR_CD_MIXED 1
#    endif
#   endif
# if CONFIG_ETRAX_SER2_RI_ON_PA_BIT == -1
#   ifndef CONFIG_ETRAX_SER2_DTR_RI_DSR_CD_MIXED
#     define CONFIG_ETRAX_SER2_DTR_RI_DSR_CD_MIXED 1
#   endif
#  endif
#  if CONFIG_ETRAX_SER2_DSR_ON_PA_BIT == -1
#    ifndef CONFIG_ETRAX_SER2_DTR_RI_DSR_CD_MIXED
#      define CONFIG_ETRAX_SER2_DTR_RI_DSR_CD_MIXED 1
#    endif
#  endif
#  if CONFIG_ETRAX_SER2_CD_ON_PA_BIT == -1
#    ifndef CONFIG_ETRAX_SER2_DTR_RI_DSR_CD_MIXED
#      define CONFIG_ETRAX_SER2_DTR_RI_DSR_CD_MIXED 1
#    endif
#  endif
#define SER2_PB_BITSUM (CONFIG_ETRAX_SER2_DTR_ON_PB_BIT+CONFIG_ETRAX_SER2_RI_ON_PB_BIT+CONFIG_ETRAX_SER2_DSR_ON_PB_BIT+CONFIG_ETRAX_SER2_CD_ON_PB_BIT)
#if SER2_PB_BITSUM != -4
#  if CONFIG_ETRAX_SER2_DTR_ON_PB_BIT == -1
#    ifndef CONFIG_ETRAX_SER2_DTR_RI_DSR_CD_MIXED
#      define CONFIG_ETRAX_SER2_DTR_RI_DSR_CD_MIXED 1
#    endif
#   endif
# if CONFIG_ETRAX_SER2_RI_ON_PB_BIT == -1
#   ifndef CONFIG_ETRAX_SER2_DTR_RI_DSR_CD_MIXED
#     define CONFIG_ETRAX_SER2_DTR_RI_DSR_CD_MIXED 1
#   endif
#  endif
#  if CONFIG_ETRAX_SER2_DSR_ON_PB_BIT == -1
#    ifndef CONFIG_ETRAX_SER2_DTR_RI_DSR_CD_MIXED
#      define CONFIG_ETRAX_SER2_DTR_RI_DSR_CD_MIXED 1
#    endif
#  endif
#  if CONFIG_ETRAX_SER2_CD_ON_PB_BIT == -1
#    ifndef CONFIG_ETRAX_SER2_DTR_RI_DSR_CD_MIXED
#      define CONFIG_ETRAX_SER2_DTR_RI_DSR_CD_MIXED 1
#    endif
#  endif
#define SER3_PA_BITSUM (CONFIG_ETRAX_SER3_DTR_ON_PA_BIT+CONFIG_ETRAX_SER3_RI_ON_PA_BIT+CONFIG_ETRAX_SER3_DSR_ON_PA_BIT+CONFIG_ETRAX_SER3_CD_ON_PA_BIT)
#if SER3_PA_BITSUM != -4
#  if CONFIG_ETRAX_SER3_DTR_ON_PA_BIT == -1
#    ifndef CONFIG_ETRAX_SER3_DTR_RI_DSR_CD_MIXED
#      define CONFIG_ETRAX_SER3_DTR_RI_DSR_CD_MIXED 1
#    endif
#   endif
# if CONFIG_ETRAX_SER3_RI_ON_PA_BIT == -1
#   ifndef CONFIG_ETRAX_SER3_DTR_RI_DSR_CD_MIXED
#     define CONFIG_ETRAX_SER3_DTR_RI_DSR_CD_MIXED 1
#   endif
#  endif
#  if CONFIG_ETRAX_SER3_DSR_ON_PA_BIT == -1
#    ifndef CONFIG_ETRAX_SER3_DTR_RI_DSR_CD_MIXED
#      define CONFIG_ETRAX_SER3_DTR_RI_DSR_CD_MIXED 1
#    endif
#  endif
#  if CONFIG_ETRAX_SER3_CD_ON_PA_BIT == -1
#    ifndef CONFIG_ETRAX_SER3_DTR_RI_DSR_CD_MIXED
#      define CONFIG_ETRAX_SER3_DTR_RI_DSR_CD_MIXED 1
#    endif
#  endif
#define SER3_PB_BITSUM (CONFIG_ETRAX_SER3_DTR_ON_PB_BIT+CONFIG_ETRAX_SER3_RI_ON_PB_BIT+CONFIG_ETRAX_SER3_DSR_ON_PB_BIT+CONFIG_ETRAX_SER3_CD_ON_PB_BIT)
#if SER3_PB_BITSUM != -4
#  if CONFIG_ETRAX_SER3_DTR_ON_PB_BIT == -1
#    ifndef CONFIG_ETRAX_SER3_DTR_RI_DSR_CD_MIXED
#      define CONFIG_ETRAX_SER3_DTR_RI_DSR_CD_MIXED 1
#    endif
#   endif
# if CONFIG_ETRAX_SER3_RI_ON_PB_BIT == -1
#   ifndef CONFIG_ETRAX_SER3_DTR_RI_DSR_CD_MIXED
#     define CONFIG_ETRAX_SER3_DTR_RI_DSR_CD_MIXED 1
#   endif
#  endif
#  if CONFIG_ETRAX_SER3_DSR_ON_PB_BIT == -1
#    ifndef CONFIG_ETRAX_SER3_DTR_RI_DSR_CD_MIXED
#      define CONFIG_ETRAX_SER3_DTR_RI_DSR_CD_MIXED 1
#    endif
#  endif
#  if CONFIG_ETRAX_SER3_CD_ON_PB_BIT == -1
#    ifndef CONFIG_ETRAX_SER3_DTR_RI_DSR_CD_MIXED
#      define CONFIG_ETRAX_SER3_DTR_RI_DSR_CD_MIXED 1
#    endif
#  endif
#if defined(CONFIG_ETRAX_SER0_DTR_RI_DSR_CD_MIXED) || \
defined(CONFIG_ETRAX_SER1_DTR_RI_DSR_CD_MIXED) || \
defined(CONFIG_ETRAX_SER2_DTR_RI_DSR_CD_MIXED) || \
defined(CONFIG_ETRAX_SER3_DTR_RI_DSR_CD_MIXED)
#define CONFIG_ETRAX_SERX_DTR_RI_DSR_CD_MIXED
#define CONTROL_PINS_PORT_NOT_USED(line) \
&dummy_ser[line], &dummy_ser[line], \
&dummy_ser[line], &dummy_ser[line], \
&dummy_ser[line], &dummy_ser[line], \
&dummy_ser[line], &dummy_ser[line], \
DUMMY_DTR_MASK, DUMMY_RI_MASK, DUMMY_DSR_MASK, DUMMY_CD_MASK
struct control_pins
;
static const struct control_pins e100_modem_pins[NR_PORTS] =
;
#define CONTROL_PINS_PORT_NOT_USED(line) \
&dummy_ser[line], &dummy_ser[line], \
DUMMY_DTR_MASK, DUMMY_RI_MASK, DUMMY_DSR_MASK, DUMMY_CD_MASK
struct control_pins
;
#define dtr_port port
#define dtr_shadow shadow
#define ri_port port
#define ri_shadow shadow
#define dsr_port port
#define dsr_shadow shadow
#define cd_port port
#define cd_shadow shadow
static const struct control_pins e100_modem_pins[NR_PORTS] =
;
#define E100_RTS_MASK 0x20
#define E100_CTS_MASK 0x40
#define E100_RTS_GET(info) ((info)->rx_ctrl & E100_RTS_MASK)
#define E100_CTS_GET(info) ((info)->ioport[REG_STATUS] & E100_CTS_MASK)
#define E100_DTR_GET(info) ((*e100_modem_pins[(info)->line].dtr_shadow) & e100_modem_pins[(info)->line].dtr_mask)
#define E100_RI_GET(info) ((*e100_modem_pins[(info)->line].ri_port) & e100_modem_pins[(info)->line].ri_mask)
#define E100_CD_GET(info) ((*e100_modem_pins[(info)->line].cd_port) & e100_modem_pins[(info)->line].cd_mask)
#define E100_DSR_GET(info) ((*e100_modem_pins[(info)->line].dsr_port) & e100_modem_pins[(info)->line].dsr_mask)
static unsigned char *tmp_buf;
static DEFINE_MUTEX(tmp_buf_mutex);
static void update_char_time(struct e100_serial * info)
static int
cflag_to_baud(unsigned int cflag)
static unsigned char
cflag_to_etrax_baud(unsigned int cflag)
static inline void
e100_dtr(struct e100_serial *info, int set)
static inline void
e100_rts(struct e100_serial *info, int set)
static inline void
e100_ri_out(struct e100_serial *info, int set)
static inline void
e100_cd_out(struct e100_serial *info, int set)
static inline void
e100_disable_rx(struct e100_serial *info)
static inline void
e100_enable_rx(struct e100_serial *info)
static inline void
e100_disable_rxdma_irq(struct e100_serial *info)
static inline void
e100_enable_rxdma_irq(struct e100_serial *info)
static void e100_disable_txdma_irq(struct e100_serial *info)
static void e100_enable_txdma_irq(struct e100_serial *info)
static void e100_disable_txdma_channel(struct e100_serial *info)
static void e100_enable_txdma_channel(struct e100_serial *info)
static void e100_disable_rxdma_channel(struct e100_serial *info)
static void e100_enable_rxdma_channel(struct e100_serial *info)
static inline void
e100_disable_serial_data_irq(struct e100_serial *info)
static inline void
e100_enable_serial_data_irq(struct e100_serial *info)
static inline void
e100_disable_serial_tx_ready_irq(struct e100_serial *info)
static inline void
e100_enable_serial_tx_ready_irq(struct e100_serial *info)
static inline void e100_enable_rx_irq(struct e100_serial *info)
static inline void e100_disable_rx_irq(struct e100_serial *info)
#if defined(CONFIG_ETRAX_RS485)
static int
e100_enable_rs485(struct tty_struct *tty, struct serial_rs485 *r)
static int
e100_write_rs485(struct tty_struct *tty,
const unsigned char *buf, int count)
static void rs485_toggle_rts_timer_function(unsigned long data)
static void
rs_stop(struct tty_struct *tty)
static void
rs_start(struct tty_struct *tty)
static void rs_sched_event(struct e100_serial *info, int event)
static void
transmit_chars_dma(struct e100_serial *info)
static void
start_transmit(struct e100_serial *info)
static int serial_fast_timer_started = 0;
static int serial_fast_timer_expired = 0;
static void flush_timeout_function(unsigned long data);
#define START_FLUSH_FAST_TIMER_TIME(info, string, usec)
#define START_FLUSH_FAST_TIMER(info, string) START_FLUSH_FAST_TIMER_TIME(info, string, info->flush_time_usec)
#define START_FLUSH_FAST_TIMER_TIME(info, string, usec)
#define START_FLUSH_FAST_TIMER(info, string)
static struct etrax_recv_buffer *
alloc_recv_buffer(unsigned int size)
static void
append_recv_buffer(struct e100_serial *info, struct etrax_recv_buffer *buffer)
static int
add_char_and_flag(struct e100_serial *info, unsigned char data, unsigned char flag)
static unsigned int handle_descr_data(struct e100_serial *info,
struct etrax_dma_descr *descr,
unsigned int recvl)
static unsigned int handle_all_descr_data(struct e100_serial *info)
static void receive_chars_dma(struct e100_serial *info)
static int start_recv_dma(struct e100_serial *info)
static void
start_receive(struct e100_serial *info)
static irqreturn_t
tr_interrupt(int irq, void *dev_id)
static irqreturn_t
rec_interrupt(int irq, void *dev_id)
static int force_eop_if_needed(struct e100_serial *info)
static void flush_to_flip_buffer(struct e100_serial *info)
static void check_flush_timeout(struct e100_serial *info)
static void flush_timeout_function(unsigned long data)
static struct timer_list flush_timer;
static void
timed_flush_handler(unsigned long ptr)
static
struct e100_serial * handle_ser_rx_interrupt_no_dma(struct e100_serial *info)
static struct e100_serial* handle_ser_rx_interrupt(struct e100_serial *info)
static void handle_ser_tx_interrupt(struct e100_serial *info)
static irqreturn_t
ser_interrupt(int irq, void *dev_id)
static void
do_softint(struct work_struct *work)
static int
startup(struct e100_serial * info)
static void
shutdown(struct e100_serial * info)
static void
change_speed(struct e100_serial *info)
static void
rs_flush_chars(struct tty_struct *tty)
static int rs_raw_write(struct tty_struct *tty,
const unsigned char *buf, int count)
static int
rs_write(struct tty_struct *tty,
const unsigned char *buf, int count)
static int
rs_write_room(struct tty_struct *tty)
static int
rs_chars_in_buffer(struct tty_struct *tty)
static void
rs_flush_buffer(struct tty_struct *tty)
static void rs_send_xchar(struct tty_struct *tty, char ch)
static void
rs_throttle(struct tty_struct * tty)
static void
rs_unthrottle(struct tty_struct * tty)
static int
get_serial_info(struct e100_serial * info,
struct serial_struct * retinfo)
static int
set_serial_info(struct e100_serial *info,
struct serial_struct *new_info)
static int
get_lsr_info(struct e100_serial * info, unsigned int *value)
struct state_str
;
const struct state_str control_state_str[] = ;
char *get_control_state_str(int MLines, char *s)
static int
rs_break(struct tty_struct *tty, int break_state)
static int
rs_tiocmset(struct tty_struct *tty, unsigned int set, unsigned int clear)
static int
rs_tiocmget(struct tty_struct *tty)
static int
rs_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg)
static void
rs_set_termios(struct tty_struct *tty, struct ktermios *old_termios)
static void
rs_close(struct tty_struct *tty, struct file * filp)
static void rs_wait_until_sent(struct tty_struct *tty, int timeout)
void
rs_hangup(struct tty_struct *tty)
static int
block_til_ready(struct tty_struct *tty, struct file * filp,
struct e100_serial *info)
static void
deinit_port(struct e100_serial *info)
static int
rs_open(struct tty_struct *tty, struct file * filp)
static void seq_line_info(struct seq_file *m, struct e100_serial *info)
static int crisv10_proc_show(struct seq_file *m, void *v)
static int crisv10_proc_open(struct inode *inode, struct file *file)
static const struct file_operations crisv10_proc_fops = ;
static void show_serial_version(void)
static const struct tty_operations rs_ops = ;
static int __init rs_init(void)
module_init(rs_init);
