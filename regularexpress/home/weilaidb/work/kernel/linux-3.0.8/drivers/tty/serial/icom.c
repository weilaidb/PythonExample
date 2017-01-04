#define SERIAL_DO_RESTART
#define ICOM_DRIVER_NAME "icom"
#define ICOM_VERSION_STR "1.3.1"
#define NR_PORTS	       128
#define ICOM_PORT ((struct icom_port *)port)
#define to_icom_adapter(d) container_of(d, struct icom_adapter, kref)
static const struct pci_device_id icom_pci_table[] = ;
struct lookup_proc_table start_proc[4] = ;
struct lookup_proc_table stop_proc[4] = ;
struct lookup_int_table int_mask_tbl[4] = ;
MODULE_DEVICE_TABLE(pci, icom_pci_table);
static LIST_HEAD(icom_adapter_head);
static spinlock_t icom_lock;
static inline void trace(struct icom_port *icom_port, char *trace_pt,
unsigned long trace_data)
static inline void trace(struct icom_port *icom_port, char *trace_pt, unsigned long trace_data) ;
static void icom_kref_release(struct kref *kref);
static void free_port_memory(struct icom_port *icom_port)
static int __devinit get_port_memory(struct icom_port *icom_port)
static void stop_processor(struct icom_port *icom_port)
static void start_processor(struct icom_port *icom_port)
static void load_code(struct icom_port *icom_port)
static int startup(struct icom_port *icom_port)
static void shutdown(struct icom_port *icom_port)
static int icom_write(struct uart_port *port)
static inline void check_modem_status(struct icom_port *icom_port)
static void xmit_interrupt(u16 port_int_reg, struct icom_port *icom_port)
static void recv_interrupt(u16 port_int_reg, struct icom_port *icom_port)
static void process_interrupt(u16 port_int_reg,
struct icom_port *icom_port)
static irqreturn_t icom_interrupt(int irq, void *dev_id)
static unsigned int icom_tx_empty(struct uart_port *port)
static void icom_set_mctrl(struct uart_port *port, unsigned int mctrl)
static unsigned int icom_get_mctrl(struct uart_port *port)
static void icom_stop_tx(struct uart_port *port)
static void icom_start_tx(struct uart_port *port)
static void icom_send_xchar(struct uart_port *port, char ch)
static void icom_stop_rx(struct uart_port *port)
static void icom_enable_ms(struct uart_port *port)
static void icom_break(struct uart_port *port, int break_state)
static int icom_open(struct uart_port *port)
static void icom_close(struct uart_port *port)
static void icom_set_termios(struct uart_port *port,
struct ktermios *termios,
struct ktermios *old_termios)
static const char *icom_type(struct uart_port *port)
static void icom_release_port(struct uart_port *port)
static int icom_request_port(struct uart_port *port)
static void icom_config_port(struct uart_port *port, int flags)
static struct uart_ops icom_ops = ;
#define ICOM_CONSOLE NULL
static struct uart_driver icom_uart_driver = ;
static int __devinit icom_init_ports(struct icom_adapter *icom_adapter)
static void icom_port_active(struct icom_port *icom_port, struct icom_adapter *icom_adapter, int port_num)
static int __devinit icom_load_ports(struct icom_adapter *icom_adapter)
static int __devinit icom_alloc_adapter(struct icom_adapter
**icom_adapter_ref)
static void icom_free_adapter(struct icom_adapter *icom_adapter)
static void icom_remove_adapter(struct icom_adapter *icom_adapter)
static void icom_kref_release(struct kref *kref)
static int __devinit icom_probe(struct pci_dev *dev,
const struct pci_device_id *ent)
static void __devexit icom_remove(struct pci_dev *dev)
static struct pci_driver icom_pci_driver = ;
static int __init icom_init(void)
static void __exit icom_exit(void)
module_init(icom_init);
module_exit(icom_exit);
MODULE_AUTHOR("Michael Anderson <mjanders@us.ibm.com>");
MODULE_DESCRIPTION("IBM iSeries Serial IOA driver");
MODULE_SUPPORTED_DEVICE
("IBM iSeries 2745, 2771, 2772, 2742, 2793 and 2805 Communications adapters");
MODULE_LICENSE("GPL");
MODULE_FIRMWARE("icom_call_setup.bin");
MODULE_FIRMWARE("icom_res_dce.bin");
MODULE_FIRMWARE("icom_asc.bin");
