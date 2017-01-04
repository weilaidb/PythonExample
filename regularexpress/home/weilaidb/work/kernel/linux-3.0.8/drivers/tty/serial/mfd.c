#define HSU_DMA_BUF_SIZE	2048
#define chan_readl(chan, offset)	readl(chan->reg + offset)
#define chan_writel(chan, offset, val)	writel(val, chan->reg + offset)
#define mfd_readl(obj, offset)		readl(obj->reg + offset)
#define mfd_writel(obj, offset, val)	writel(val, obj->reg + offset)
static int hsu_dma_enable;
module_param(hsu_dma_enable, int, 0);
MODULE_PARM_DESC(hsu_dma_enable,
"It is a bitmap to set working mode, if bit[x] is 1, then port[x] will work in DMA mode, otherwise in PIO mode.");
struct hsu_dma_buffer ;
struct hsu_dma_chan ;
struct uart_hsu_port ;
struct hsu_port ;
static inline unsigned int serial_in(struct uart_hsu_port *up, int offset)
static inline void serial_out(struct uart_hsu_port *up, int offset, int value)
#define HSU_REGS_BUFSIZE	1024
static int hsu_show_regs_open(struct inode *inode, struct file *file)
static ssize_t port_show_regs(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t dma_show_regs(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static const struct file_operations port_regs_ops = ;
static const struct file_operations dma_regs_ops = ;
static int hsu_debugfs_init(struct hsu_port *hsu)
static void hsu_debugfs_remove(struct hsu_port *hsu)
static inline int hsu_debugfs_init(struct hsu_port *hsu)
static inline void hsu_debugfs_remove(struct hsu_port *hsu)
static void serial_hsu_enable_ms(struct uart_port *port)
void hsu_dma_tx(struct uart_hsu_port *up)
void hsu_dma_start_rx_chan(struct hsu_dma_chan *rxc, struct hsu_dma_buffer *dbuf)
static void serial_hsu_start_tx(struct uart_port *port)
static void serial_hsu_stop_tx(struct uart_port *port)
void hsu_dma_rx(struct uart_hsu_port *up, u32 int_sts)
static void serial_hsu_stop_rx(struct uart_port *port)
static inline void receive_chars(struct uart_hsu_port *up, int *status)
static void transmit_chars(struct uart_hsu_port *up)
static inline void check_modem_status(struct uart_hsu_port *up)
static irqreturn_t port_irq(int irq, void *dev_id)
static inline void dma_chan_irq(struct hsu_dma_chan *chan)
static irqreturn_t dma_irq(int irq, void *dev_id)
static unsigned int serial_hsu_tx_empty(struct uart_port *port)
static unsigned int serial_hsu_get_mctrl(struct uart_port *port)
static void serial_hsu_set_mctrl(struct uart_port *port, unsigned int mctrl)
static void serial_hsu_break_ctl(struct uart_port *port, int break_state)
static int serial_hsu_startup(struct uart_port *port)
static void serial_hsu_shutdown(struct uart_port *port)
static void
serial_hsu_set_termios(struct uart_port *port, struct ktermios *termios,
struct ktermios *old)
static void
serial_hsu_pm(struct uart_port *port, unsigned int state,
unsigned int oldstate)
static void serial_hsu_release_port(struct uart_port *port)
static int serial_hsu_request_port(struct uart_port *port)
static void serial_hsu_config_port(struct uart_port *port, int flags)
static int
serial_hsu_verify_port(struct uart_port *port, struct serial_struct *ser)
static const char *
serial_hsu_type(struct uart_port *port)
static struct uart_hsu_port *serial_hsu_ports[3];
static struct uart_driver serial_hsu_reg;
#define BOTH_EMPTY (UART_LSR_TEMT | UART_LSR_THRE)
static inline void wait_for_xmitr(struct uart_hsu_port *up)
static void serial_hsu_console_putchar(struct uart_port *port, int ch)
static void
serial_hsu_console_write(struct console *co, const char *s, unsigned int count)
static struct console serial_hsu_console;
static int __init
serial_hsu_console_setup(struct console *co, char *options)
static struct console serial_hsu_console = ;
struct uart_ops serial_hsu_pops = ;
static struct uart_driver serial_hsu_reg = ;
static int serial_hsu_suspend(struct pci_dev *pdev, pm_message_t state)
static int serial_hsu_resume(struct pci_dev *pdev)
#define serial_hsu_suspend	NULL
#define serial_hsu_resume	NULL
static struct hsu_port *phsu;
static int serial_hsu_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void hsu_global_init(void)
static void serial_hsu_remove(struct pci_dev *pdev)
static const struct pci_device_id pci_ids[] __devinitdata = ;
static struct pci_driver hsu_pci_driver = ;
static int __init hsu_pci_init(void)
static void __exit hsu_pci_exit(void)
module_init(hsu_pci_init);
module_exit(hsu_pci_exit);
MODULE_LICENSE("GPL v2");
MODULE_ALIAS("platform:medfield-hsu");
