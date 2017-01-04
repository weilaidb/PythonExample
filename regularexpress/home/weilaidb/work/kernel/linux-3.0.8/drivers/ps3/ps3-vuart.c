MODULE_AUTHOR("Sony Corporation");
MODULE_LICENSE("GPL v2");
MODULE_DESCRIPTION("PS3 vuart");
enum ;
enum vuart_param ;
enum vuart_interrupt_bit ;
enum vuart_interrupt_mask ;
struct ps3_vuart_port_priv ;
static struct ps3_vuart_port_priv *to_port_priv(
struct ps3_system_bus_device *dev)
struct ports_bmp  __attribute__((aligned(32)));
#define dump_ports_bmp(_b) _dump_ports_bmp(_b, __func__, __LINE__)
static void __maybe_unused _dump_ports_bmp(
const struct ports_bmp *bmp, const char *func, int line)
#define dump_port_params(_b) _dump_port_params(_b, __func__, __LINE__)
static void __maybe_unused _dump_port_params(unsigned int port_number,
const char *func, int line)
struct vuart_triggers ;
int ps3_vuart_get_triggers(struct ps3_system_bus_device *dev,
struct vuart_triggers *trig)
int ps3_vuart_set_triggers(struct ps3_system_bus_device *dev, unsigned int tx,
unsigned int rx)
static int ps3_vuart_get_rx_bytes_waiting(struct ps3_system_bus_device *dev,
u64 *bytes_waiting)
static int ps3_vuart_set_interrupt_mask(struct ps3_system_bus_device *dev,
unsigned long mask)
static int ps3_vuart_get_interrupt_status(struct ps3_system_bus_device *dev,
unsigned long *status)
int ps3_vuart_enable_interrupt_tx(struct ps3_system_bus_device *dev)
int ps3_vuart_enable_interrupt_rx(struct ps3_system_bus_device *dev)
int ps3_vuart_enable_interrupt_disconnect(struct ps3_system_bus_device *dev)
int ps3_vuart_disable_interrupt_tx(struct ps3_system_bus_device *dev)
int ps3_vuart_disable_interrupt_rx(struct ps3_system_bus_device *dev)
int ps3_vuart_disable_interrupt_disconnect(struct ps3_system_bus_device *dev)
static int ps3_vuart_raw_write(struct ps3_system_bus_device *dev,
const void *buf, unsigned int bytes, u64 *bytes_written)
static int ps3_vuart_raw_read(struct ps3_system_bus_device *dev, void *buf,
unsigned int bytes, u64 *bytes_read)
void ps3_vuart_clear_rx_bytes(struct ps3_system_bus_device *dev,
unsigned int bytes)
EXPORT_SYMBOL_GPL(ps3_vuart_clear_rx_bytes);
struct list_buffer ;
int ps3_vuart_write(struct ps3_system_bus_device *dev, const void *buf,
unsigned int bytes)
EXPORT_SYMBOL_GPL(ps3_vuart_write);
static int ps3_vuart_queue_rx_bytes(struct ps3_system_bus_device *dev,
u64 *bytes_queued)
int ps3_vuart_read(struct ps3_system_bus_device *dev, void *buf,
unsigned int bytes)
EXPORT_SYMBOL_GPL(ps3_vuart_read);
static void ps3_vuart_work(struct work_struct *work)
int ps3_vuart_read_async(struct ps3_system_bus_device *dev, unsigned int bytes)
EXPORT_SYMBOL_GPL(ps3_vuart_read_async);
void ps3_vuart_cancel_async(struct ps3_system_bus_device *dev)
EXPORT_SYMBOL_GPL(ps3_vuart_cancel_async);
static int ps3_vuart_handle_interrupt_tx(struct ps3_system_bus_device *dev)
static int ps3_vuart_handle_interrupt_rx(struct ps3_system_bus_device *dev)
static int ps3_vuart_handle_interrupt_disconnect(
struct ps3_system_bus_device *dev)
static int ps3_vuart_handle_port_interrupt(struct ps3_system_bus_device *dev)
struct vuart_bus_priv  static vuart_bus_priv;
static irqreturn_t ps3_vuart_irq_handler(int irq, void *_private)
static int ps3_vuart_bus_interrupt_get(void)
static int ps3_vuart_bus_interrupt_put(void)
static int ps3_vuart_probe(struct ps3_system_bus_device *dev)
static int ps3_vuart_cleanup(struct ps3_system_bus_device *dev)
static int ps3_vuart_remove(struct ps3_system_bus_device *dev)
static int ps3_vuart_shutdown(struct ps3_system_bus_device *dev)
static int __init ps3_vuart_bus_init(void)
static void __exit ps3_vuart_bus_exit(void)
core_initcall(ps3_vuart_bus_init);
module_exit(ps3_vuart_bus_exit);
int ps3_vuart_port_driver_register(struct ps3_vuart_port_driver *drv)
EXPORT_SYMBOL_GPL(ps3_vuart_port_driver_register);
void ps3_vuart_port_driver_unregister(struct ps3_vuart_port_driver *drv)
EXPORT_SYMBOL_GPL(ps3_vuart_port_driver_unregister);
