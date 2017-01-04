static struct usb_device_id usb_ids[] = ;
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("USB driver for devices with the ZD1211 chip.");
MODULE_AUTHOR("Ulrich Kunitz");
MODULE_AUTHOR("Daniel Drake");
MODULE_VERSION("1.0");
MODULE_DEVICE_TABLE(usb, usb_ids);
#define FW_ZD1211_PREFIX	"zd1211/zd1211_"
#define FW_ZD1211B_PREFIX	"zd1211/zd1211b_"
static void int_urb_complete(struct urb *urb);
static int request_fw_file(
const struct firmware **fw, const char *name, struct device *device)
static inline u16 get_bcdDevice(const struct usb_device *udev)
enum upload_code_flags ;
#define MAX_TRANSFER_SIZE (USB_MAX_TRANSFER_SIZE & ~1)
static int upload_code(struct usb_device *udev,
const u8 *data, size_t size, u16 code_offset, int flags)
static u16 get_word(const void *data, u16 offset)
static char *get_fw_name(struct zd_usb *usb, char *buffer, size_t size,
const char* postfix)
static int handle_version_mismatch(struct zd_usb *usb,
const struct firmware *ub_fw)
static int upload_firmware(struct zd_usb *usb)
MODULE_FIRMWARE(FW_ZD1211B_PREFIX "ur");
MODULE_FIRMWARE(FW_ZD1211_PREFIX "ur");
MODULE_FIRMWARE(FW_ZD1211B_PREFIX "ub");
MODULE_FIRMWARE(FW_ZD1211_PREFIX "ub");
MODULE_FIRMWARE(FW_ZD1211B_PREFIX "uphr");
MODULE_FIRMWARE(FW_ZD1211_PREFIX "uphr");
int zd_usb_read_fw(struct zd_usb *usb, zd_addr_t addr, u8 *data, u16 len)
#define urb_dev(urb) (&(urb)->dev->dev)
static inline void handle_regs_int(struct urb *urb)
static void int_urb_complete(struct urb *urb)
static inline int int_urb_interval(struct usb_device *udev)
static inline int usb_int_enabled(struct zd_usb *usb)
int zd_usb_enable_int(struct zd_usb *usb)
void zd_usb_disable_int(struct zd_usb *usb)
static void handle_rx_packet(struct zd_usb *usb, const u8 *buffer,
unsigned int length)
static void rx_urb_complete(struct urb *urb)
static struct urb *alloc_rx_urb(struct zd_usb *usb)
static void free_rx_urb(struct urb *urb)
static int __zd_usb_enable_rx(struct zd_usb *usb)
int zd_usb_enable_rx(struct zd_usb *usb)
static void __zd_usb_disable_rx(struct zd_usb *usb)
void zd_usb_disable_rx(struct zd_usb *usb)
static void zd_usb_reset_rx(struct zd_usb *usb)
void zd_usb_disable_tx(struct zd_usb *usb)
void zd_usb_enable_tx(struct zd_usb *usb)
static void tx_dec_submitted_urbs(struct zd_usb *usb)
static void tx_inc_submitted_urbs(struct zd_usb *usb)
static void tx_urb_complete(struct urb *urb)
int zd_usb_tx(struct zd_usb *usb, struct sk_buff *skb)
static bool zd_tx_timeout(struct zd_usb *usb)
static void zd_tx_watchdog_handler(struct work_struct *work)
void zd_tx_watchdog_enable(struct zd_usb *usb)
void zd_tx_watchdog_disable(struct zd_usb *usb)
static void zd_rx_idle_timer_handler(struct work_struct *work)
static void zd_usb_reset_rx_idle_timer_tasklet(unsigned long param)
void zd_usb_reset_rx_idle_timer(struct zd_usb *usb)
static inline void init_usb_interrupt(struct zd_usb *usb)
static inline void init_usb_rx(struct zd_usb *usb)
static inline void init_usb_tx(struct zd_usb *usb)
void zd_usb_init(struct zd_usb *usb, struct ieee80211_hw *hw,
struct usb_interface *intf)
void zd_usb_clear(struct zd_usb *usb)
static const char *speed(enum usb_device_speed speed)
static int scnprint_id(struct usb_device *udev, char *buffer, size_t size)
int zd_usb_scnprint_id(struct zd_usb *usb, char *buffer, size_t size)
static void print_id(struct usb_device *udev)
#define print_id(udev) do  while (0)
static int eject_installer(struct usb_interface *intf)
int zd_usb_init_hw(struct zd_usb *usb)
static int probe(struct usb_interface *intf, const struct usb_device_id *id)
static void disconnect(struct usb_interface *intf)
static void zd_usb_resume(struct zd_usb *usb)
static void zd_usb_stop(struct zd_usb *usb)
static int pre_reset(struct usb_interface *intf)
static int post_reset(struct usb_interface *intf)
static struct usb_driver driver = ;
struct workqueue_struct *zd_workqueue;
static int __init usb_init(void)
static void __exit usb_exit(void)
module_init(usb_init);
module_exit(usb_exit);
static int zd_ep_regs_out_msg(struct usb_device *udev, void *data, int len,
int *actual_length, int timeout)
static int usb_int_regs_length(unsigned int count)
static void prepare_read_regs_int(struct zd_usb *usb)
static void disable_read_regs_int(struct zd_usb *usb)
static int get_results(struct zd_usb *usb, u16 *values,
struct usb_req_read_regs *req, unsigned int count)
int zd_usb_ioread16v(struct zd_usb *usb, u16 *values,
const zd_addr_t *addresses, unsigned int count)
static void iowrite16v_urb_complete(struct urb *urb)
static int zd_submit_waiting_urb(struct zd_usb *usb, bool last)
void zd_usb_iowrite16v_async_start(struct zd_usb *usb)
int zd_usb_iowrite16v_async_end(struct zd_usb *usb, unsigned int timeout)
int zd_usb_iowrite16v_async(struct zd_usb *usb, const struct zd_ioreq16 *ioreqs,
unsigned int count)
int zd_usb_iowrite16v(struct zd_usb *usb, const struct zd_ioreq16 *ioreqs,
unsigned int count)
int zd_usb_rfwrite(struct zd_usb *usb, u32 value, u8 bits)
