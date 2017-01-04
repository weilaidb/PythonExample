#define OHCI_CONTROL_INIT OHCI_CTRL_CBSR
#define OHCI_INTR_INIT (OHCI_INTR_MIE | OHCI_INTR_UE | OHCI_INTR_RD | \
OHCI_INTR_WDH)
MODULE_AUTHOR("Tony Olech - Elan Digital Systems Limited");
MODULE_DESCRIPTION("U132 USB Host Controller Driver");
MODULE_LICENSE("GPL");
#define INT_MODULE_PARM(n, v) static int n = v;module_param(n, int, 0444)
INT_MODULE_PARM(testing, 0);
static int distrust_firmware = 1;
module_param(distrust_firmware, bool, 0);
MODULE_PARM_DESC(distrust_firmware, "true to distrust firmware power/overcurren"
"t setup");
static DECLARE_WAIT_QUEUE_HEAD(u132_hcd_wait);
static struct mutex u132_module_lock;
static int u132_exiting;
static int u132_instances;
static struct list_head u132_static_list;
static struct workqueue_struct *workqueue;
#define MAX_U132_PORTS 7
#define MAX_U132_ADDRS 128
#define MAX_U132_UDEVS 4
#define MAX_U132_ENDPS 100
#define MAX_U132_RINGS 4
static const char *cc_to_text[16] = ;
struct u132_port ;
struct u132_addr ;
struct u132_udev ;
#define ENDP_QUEUE_SHIFT 3
#define ENDP_QUEUE_SIZE (1<<ENDP_QUEUE_SHIFT)
#define ENDP_QUEUE_MASK (ENDP_QUEUE_SIZE-1)
struct u132_urbq ;
struct u132_spin ;
struct u132_endp ;
struct u132_ring ;
struct u132 ;
#define ftdi_read_pcimem(pdev, member, data) usb_ftdi_elan_read_pcimem(pdev, \
offsetof(struct ohci_regs, member), 0, data);
#define ftdi_write_pcimem(pdev, member, data) usb_ftdi_elan_write_pcimem(pdev, \
offsetof(struct ohci_regs, member), 0, data);
#define u132_read_pcimem(u132, member, data) \
usb_ftdi_elan_read_pcimem(u132->platform_dev, offsetof(struct \
ohci_regs, member), 0, data);
#define u132_write_pcimem(u132, member, data) \
usb_ftdi_elan_write_pcimem(u132->platform_dev, offsetof(struct \
ohci_regs, member), 0, data);
static inline struct u132 *udev_to_u132(struct u132_udev *udev)
static inline struct u132 *hcd_to_u132(struct usb_hcd *hcd)
static inline struct usb_hcd *u132_to_hcd(struct u132 *u132)
static inline void u132_disable(struct u132 *u132)
#define kref_to_u132(d) container_of(d, struct u132, kref)
#define kref_to_u132_endp(d) container_of(d, struct u132_endp, kref)
#define kref_to_u132_udev(d) container_of(d, struct u132_udev, kref)
static const char hcd_name[] = "u132_hcd";
#define PORT_C_MASK ((USB_PORT_STAT_C_CONNECTION | USB_PORT_STAT_C_ENABLE | \
USB_PORT_STAT_C_SUSPEND | USB_PORT_STAT_C_OVERCURRENT | \
USB_PORT_STAT_C_RESET) << 16)
static void u132_hcd_delete(struct kref *kref)
static inline void u132_u132_put_kref(struct u132 *u132)
static inline void u132_u132_init_kref(struct u132 *u132)
static void u132_udev_delete(struct kref *kref)
static inline void u132_udev_put_kref(struct u132 *u132, struct u132_udev *udev)
static inline void u132_udev_get_kref(struct u132 *u132, struct u132_udev *udev)
static inline void u132_udev_init_kref(struct u132 *u132,
struct u132_udev *udev)
static inline void u132_ring_put_kref(struct u132 *u132, struct u132_ring *ring)
static void u132_ring_requeue_work(struct u132 *u132, struct u132_ring *ring,
unsigned int delta)
static void u132_ring_queue_work(struct u132 *u132, struct u132_ring *ring,
unsigned int delta)
static void u132_ring_cancel_work(struct u132 *u132, struct u132_ring *ring)
static void u132_endp_delete(struct kref *kref)
static inline void u132_endp_put_kref(struct u132 *u132, struct u132_endp *endp)
static inline void u132_endp_get_kref(struct u132 *u132, struct u132_endp *endp)
static inline void u132_endp_init_kref(struct u132 *u132,
struct u132_endp *endp)
static void u132_endp_queue_work(struct u132 *u132, struct u132_endp *endp,
unsigned int delta)
static void u132_endp_cancel_work(struct u132 *u132, struct u132_endp *endp)
static inline void u132_monitor_put_kref(struct u132 *u132)
static void u132_monitor_queue_work(struct u132 *u132, unsigned int delta)
static void u132_monitor_requeue_work(struct u132 *u132, unsigned int delta)
static void u132_monitor_cancel_work(struct u132 *u132)
static int read_roothub_info(struct u132 *u132)
static void u132_hcd_monitor_work(struct work_struct *work)
static void u132_hcd_giveback_urb(struct u132 *u132, struct u132_endp *endp,
struct urb *urb, int status)
static void u132_hcd_forget_urb(struct u132 *u132, struct u132_endp *endp,
struct urb *urb, int status)
static void u132_hcd_abandon_urb(struct u132 *u132, struct u132_endp *endp,
struct urb *urb, int status)
static inline int edset_input(struct u132 *u132, struct u132_ring *ring,
struct u132_endp *endp, struct urb *urb, u8 address, u8 toggle_bits,
void (*callback) (void *endp, struct urb *urb, u8 *buf, int len,
int toggle_bits, int error_count, int condition_code, int repeat_number,
int halted, int skipped, int actual, int non_null))
static inline int edset_setup(struct u132 *u132, struct u132_ring *ring,
struct u132_endp *endp, struct urb *urb, u8 address, u8 toggle_bits,
void (*callback) (void *endp, struct urb *urb, u8 *buf, int len,
int toggle_bits, int error_count, int condition_code, int repeat_number,
int halted, int skipped, int actual, int non_null))
static inline int edset_single(struct u132 *u132, struct u132_ring *ring,
struct u132_endp *endp, struct urb *urb, u8 address, u8 toggle_bits,
void (*callback) (void *endp, struct urb *urb, u8 *buf, int len,
int toggle_bits, int error_count, int condition_code, int repeat_number,
int halted, int skipped, int actual, int non_null))
static inline int edset_output(struct u132 *u132, struct u132_ring *ring,
struct u132_endp *endp, struct urb *urb, u8 address, u8 toggle_bits,
void (*callback) (void *endp, struct urb *urb, u8 *buf, int len,
int toggle_bits, int error_count, int condition_code, int repeat_number,
int halted, int skipped, int actual, int non_null))
static void u132_hcd_interrupt_recv(void *data, struct urb *urb, u8 *buf,
int len, int toggle_bits, int error_count, int condition_code,
int repeat_number, int halted, int skipped, int actual, int non_null)
static void u132_hcd_bulk_output_sent(void *data, struct urb *urb, u8 *buf,
int len, int toggle_bits, int error_count, int condition_code,
int repeat_number, int halted, int skipped, int actual, int non_null)
static void u132_hcd_bulk_input_recv(void *data, struct urb *urb, u8 *buf,
int len, int toggle_bits, int error_count, int condition_code,
int repeat_number, int halted, int skipped, int actual, int non_null)
static void u132_hcd_configure_empty_sent(void *data, struct urb *urb, u8 *buf,
int len, int toggle_bits, int error_count, int condition_code,
int repeat_number, int halted, int skipped, int actual, int non_null)
static void u132_hcd_configure_input_recv(void *data, struct urb *urb, u8 *buf,
int len, int toggle_bits, int error_count, int condition_code,
int repeat_number, int halted, int skipped, int actual, int non_null)
static void u132_hcd_configure_empty_recv(void *data, struct urb *urb, u8 *buf,
int len, int toggle_bits, int error_count, int condition_code,
int repeat_number, int halted, int skipped, int actual, int non_null)
static void u132_hcd_configure_setup_sent(void *data, struct urb *urb, u8 *buf,
int len, int toggle_bits, int error_count, int condition_code,
int repeat_number, int halted, int skipped, int actual, int non_null)
static void u132_hcd_enumeration_empty_recv(void *data, struct urb *urb,
u8 *buf, int len, int toggle_bits, int error_count, int condition_code,
int repeat_number, int halted, int skipped, int actual, int non_null)
static void u132_hcd_enumeration_address_sent(void *data, struct urb *urb,
u8 *buf, int len, int toggle_bits, int error_count, int condition_code,
int repeat_number, int halted, int skipped, int actual, int non_null)
static void u132_hcd_initial_empty_sent(void *data, struct urb *urb, u8 *buf,
int len, int toggle_bits, int error_count, int condition_code,
int repeat_number, int halted, int skipped, int actual, int non_null)
static void u132_hcd_initial_input_recv(void *data, struct urb *urb, u8 *buf,
int len, int toggle_bits, int error_count, int condition_code,
int repeat_number, int halted, int skipped, int actual, int non_null)
static void u132_hcd_initial_setup_sent(void *data, struct urb *urb, u8 *buf,
int len, int toggle_bits, int error_count, int condition_code,
int repeat_number, int halted, int skipped, int actual, int non_null)
static void u132_hcd_ring_work_scheduler(struct work_struct *work)
static void u132_hcd_endp_work_scheduler(struct work_struct *work)
static void port_power(struct u132 *u132, int pn, int is_on)
static void u132_power(struct u132 *u132, int is_on)
static int u132_periodic_reinit(struct u132 *u132)
static char *hcfs2string(int state)
static int u132_init(struct u132 *u132)
static int u132_run(struct u132 *u132)
static void u132_hcd_stop(struct usb_hcd *hcd)
static int u132_hcd_start(struct usb_hcd *hcd)
static int u132_hcd_reset(struct usb_hcd *hcd)
static int create_endpoint_and_queue_int(struct u132 *u132,
struct u132_udev *udev, struct urb *urb,
struct usb_device *usb_dev, u8 usb_addr, u8 usb_endp, u8 address,
gfp_t mem_flags)
static int queue_int_on_old_endpoint(struct u132 *u132,
struct u132_udev *udev, struct urb *urb,
struct usb_device *usb_dev, struct u132_endp *endp, u8 usb_addr,
u8 usb_endp, u8 address)
static int create_endpoint_and_queue_bulk(struct u132 *u132,
struct u132_udev *udev, struct urb *urb,
struct usb_device *usb_dev, u8 usb_addr, u8 usb_endp, u8 address,
gfp_t mem_flags)
static int queue_bulk_on_old_endpoint(struct u132 *u132, struct u132_udev *udev,
struct urb *urb,
struct usb_device *usb_dev, struct u132_endp *endp, u8 usb_addr,
u8 usb_endp, u8 address)
static int create_endpoint_and_queue_control(struct u132 *u132,
struct urb *urb,
struct usb_device *usb_dev, u8 usb_addr, u8 usb_endp,
gfp_t mem_flags)
static int queue_control_on_old_endpoint(struct u132 *u132,
struct urb *urb,
struct usb_device *usb_dev, struct u132_endp *endp, u8 usb_addr,
u8 usb_endp)
static int u132_urb_enqueue(struct usb_hcd *hcd, struct urb *urb,
gfp_t mem_flags)
static int dequeue_from_overflow_chain(struct u132 *u132,
struct u132_endp *endp, struct urb *urb)
static int u132_endp_urb_dequeue(struct u132 *u132, struct u132_endp *endp,
struct urb *urb, int status)
static int u132_urb_dequeue(struct usb_hcd *hcd, struct urb *urb, int status)
static void u132_endpoint_disable(struct usb_hcd *hcd,
struct usb_host_endpoint *hep)
static int u132_get_frame(struct usb_hcd *hcd)
static int u132_roothub_descriptor(struct u132 *u132,
struct usb_hub_descriptor *desc)
static int u132_roothub_status(struct u132 *u132, __le32 *desc)
static int u132_roothub_portstatus(struct u132 *u132, __le32 *desc, u16 wIndex)
#define PORT_RESET_HW_MSEC 10
#define PORT_RESET_MSEC 10
#define tick_before(t1, t2) ((s16)(((s16)(t1))-((s16)(t2))) < 0)
static int u132_roothub_portreset(struct u132 *u132, int port_index)
static int u132_roothub_setportfeature(struct u132 *u132, u16 wValue,
u16 wIndex)
static int u132_roothub_clearportfeature(struct u132 *u132, u16 wValue,
u16 wIndex)
static int u132_hub_status_data(struct usb_hcd *hcd, char *buf)
static int u132_hub_control(struct usb_hcd *hcd, u16 typeReq, u16 wValue,
u16 wIndex, char *buf, u16 wLength)
static int u132_start_port_reset(struct usb_hcd *hcd, unsigned port_num)
static int u132_bus_suspend(struct usb_hcd *hcd)
static int u132_bus_resume(struct usb_hcd *hcd)
#define u132_bus_suspend NULL
#define u132_bus_resume NULL
static struct hc_driver u132_hc_driver = ;
static int __devexit u132_remove(struct platform_device *pdev)
static void u132_initialise(struct u132 *u132, struct platform_device *pdev)
static int __devinit u132_probe(struct platform_device *pdev)
static int u132_suspend(struct platform_device *pdev, pm_message_t state)
static int u132_resume(struct platform_device *pdev)
#define u132_suspend NULL
#define u132_resume NULL
static struct platform_driver u132_platform_driver = ;
static int __init u132_hcd_init(void)
module_init(u132_hcd_init);
static void __exit u132_hcd_exit(void)
module_exit(u132_hcd_exit);
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:u132_hcd");
