#define UART_OMAP_NO_EMPTY_FIFO_READ_IP_REV	0x52
#define UART_OMAP_WER		0x17
#define UART_ERRATA_FIFO_FULL_ABORT	(0x1 << 0)
#define UART_ERRATA_i202_MDR1_ACCESS	(0x1 << 1)
#define DEFAULT_TIMEOUT 0
#define MAX_UART_HWMOD_NAME_LEN		16
struct omap_uart_state ;
static LIST_HEAD(uart_list);
static u8 num_uarts;
static int uart_idle_hwmod(struct omap_device *od)
static int uart_enable_hwmod(struct omap_device *od)
static struct omap_device_pm_latency omap_uart_latency[] = ;
static inline unsigned int __serial_read_reg(struct uart_port *up,
int offset)
static inline unsigned int serial_read_reg(struct omap_uart_state *uart,
int offset)
static inline void __serial_write_reg(struct uart_port *up, int offset,
int value)
static inline void serial_write_reg(struct omap_uart_state *uart, int offset,
int value)
static inline void __init omap_uart_reset(struct omap_uart_state *uart)
#if defined(CONFIG_PM) && defined(CONFIG_ARCH_OMAP3)
static void omap_uart_mdr1_errataset(struct omap_uart_state *uart, u8 mdr1_val,
u8 fcr_val)
static void omap_uart_save_context(struct omap_uart_state *uart)
static void omap_uart_restore_context(struct omap_uart_state *uart)
static inline void omap_uart_save_context(struct omap_uart_state *uart)
static inline void omap_uart_restore_context(struct omap_uart_state *uart)
static inline void omap_uart_enable_clocks(struct omap_uart_state *uart)
static inline void omap_uart_disable_clocks(struct omap_uart_state *uart)
static void omap_uart_enable_wakeup(struct omap_uart_state *uart)
static void omap_uart_disable_wakeup(struct omap_uart_state *uart)
static void omap_uart_smart_idle_enable(struct omap_uart_state *uart,
int enable)
static void omap_uart_block_sleep(struct omap_uart_state *uart)
static void omap_uart_allow_sleep(struct omap_uart_state *uart)
static void omap_uart_idle_timer(unsigned long data)
void omap_uart_prepare_idle(int num)
void omap_uart_resume_idle(int num)
void omap_uart_prepare_suspend(void)
int omap_uart_can_sleep(void)
static irqreturn_t omap_uart_interrupt(int irq, void *dev_id)
static void omap_uart_idle_init(struct omap_uart_state *uart)
void omap_uart_enable_irqs(int enable)
static ssize_t sleep_timeout_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t sleep_timeout_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t n)
static DEVICE_ATTR(sleep_timeout, 0644, sleep_timeout_show,
sleep_timeout_store);
#define DEV_CREATE_FILE(dev, attr) WARN_ON(device_create_file(dev, attr))
static inline void omap_uart_idle_init(struct omap_uart_state *uart)
static void omap_uart_block_sleep(struct omap_uart_state *uart)
#define DEV_CREATE_FILE(dev, attr)
static unsigned int serial_in_override(struct uart_port *up, int offset)
static void serial_out_override(struct uart_port *up, int offset, int value)
static int __init omap_serial_early_init(void)
core_initcall(omap_serial_early_init);
void __init omap_serial_init_port(struct omap_board_data *bdata)
void __init omap_serial_init(void)
