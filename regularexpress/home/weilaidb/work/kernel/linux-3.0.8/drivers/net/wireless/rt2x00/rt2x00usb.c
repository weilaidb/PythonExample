int rt2x00usb_vendor_request(struct rt2x00_dev *rt2x00dev,
const u8 request, const u8 requesttype,
const u16 offset, const u16 value,
void *buffer, const u16 buffer_length,
const int timeout)
EXPORT_SYMBOL_GPL(rt2x00usb_vendor_request);
int rt2x00usb_vendor_req_buff_lock(struct rt2x00_dev *rt2x00dev,
const u8 request, const u8 requesttype,
const u16 offset, void *buffer,
const u16 buffer_length, const int timeout)
EXPORT_SYMBOL_GPL(rt2x00usb_vendor_req_buff_lock);
int rt2x00usb_vendor_request_buff(struct rt2x00_dev *rt2x00dev,
const u8 request, const u8 requesttype,
const u16 offset, void *buffer,
const u16 buffer_length, const int timeout)
EXPORT_SYMBOL_GPL(rt2x00usb_vendor_request_buff);
int rt2x00usb_regbusy_read(struct rt2x00_dev *rt2x00dev,
const unsigned int offset,
const struct rt2x00_field32 field,
u32 *reg)
EXPORT_SYMBOL_GPL(rt2x00usb_regbusy_read);
struct rt2x00_async_read_data ;
static void rt2x00usb_register_read_async_cb(struct urb *urb)
void rt2x00usb_register_read_async(struct rt2x00_dev *rt2x00dev,
const unsigned int offset,
bool (*callback)(struct rt2x00_dev*, int, u32))
EXPORT_SYMBOL_GPL(rt2x00usb_register_read_async);
static void rt2x00usb_work_txdone_entry(struct queue_entry *entry)
static void rt2x00usb_work_txdone(struct work_struct *work)
static void rt2x00usb_interrupt_txdone(struct urb *urb)
static bool rt2x00usb_kick_tx_entry(struct queue_entry *entry, void* data)
static void rt2x00usb_work_rxdone(struct work_struct *work)
static void rt2x00usb_interrupt_rxdone(struct urb *urb)
static bool rt2x00usb_kick_rx_entry(struct queue_entry *entry, void* data)
void rt2x00usb_kick_queue(struct data_queue *queue)
EXPORT_SYMBOL_GPL(rt2x00usb_kick_queue);
static bool rt2x00usb_flush_entry(struct queue_entry *entry, void* data)
void rt2x00usb_flush_queue(struct data_queue *queue, bool drop)
EXPORT_SYMBOL_GPL(rt2x00usb_flush_queue);
static void rt2x00usb_watchdog_tx_dma(struct data_queue *queue)
static void rt2x00usb_watchdog_tx_status(struct data_queue *queue)
static int rt2x00usb_status_timeout(struct data_queue *queue)
static int rt2x00usb_dma_timeout(struct data_queue *queue)
void rt2x00usb_watchdog(struct rt2x00_dev *rt2x00dev)
EXPORT_SYMBOL_GPL(rt2x00usb_watchdog);
void rt2x00usb_disable_radio(struct rt2x00_dev *rt2x00dev)
EXPORT_SYMBOL_GPL(rt2x00usb_disable_radio);
void rt2x00usb_clear_entry(struct queue_entry *entry)
EXPORT_SYMBOL_GPL(rt2x00usb_clear_entry);
static void rt2x00usb_assign_endpoint(struct data_queue *queue,
struct usb_endpoint_descriptor *ep_desc)
static int rt2x00usb_find_endpoints(struct rt2x00_dev *rt2x00dev)
static int rt2x00usb_alloc_entries(struct data_queue *queue)
static void rt2x00usb_free_entries(struct data_queue *queue)
int rt2x00usb_initialize(struct rt2x00_dev *rt2x00dev)
EXPORT_SYMBOL_GPL(rt2x00usb_initialize);
void rt2x00usb_uninitialize(struct rt2x00_dev *rt2x00dev)
EXPORT_SYMBOL_GPL(rt2x00usb_uninitialize);
static void rt2x00usb_free_reg(struct rt2x00_dev *rt2x00dev)
static int rt2x00usb_alloc_reg(struct rt2x00_dev *rt2x00dev)
int rt2x00usb_probe(struct usb_interface *usb_intf,
const struct rt2x00_ops *ops)
EXPORT_SYMBOL_GPL(rt2x00usb_probe);
void rt2x00usb_disconnect(struct usb_interface *usb_intf)
EXPORT_SYMBOL_GPL(rt2x00usb_disconnect);
int rt2x00usb_suspend(struct usb_interface *usb_intf, pm_message_t state)
EXPORT_SYMBOL_GPL(rt2x00usb_suspend);
int rt2x00usb_resume(struct usb_interface *usb_intf)
EXPORT_SYMBOL_GPL(rt2x00usb_resume);
MODULE_AUTHOR(DRV_PROJECT);
MODULE_VERSION(DRV_VERSION);
MODULE_DESCRIPTION("rt2x00 usb library");
MODULE_LICENSE("GPL");
