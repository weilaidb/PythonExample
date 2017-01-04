#define _ZD_USB_H
#define ZD_USB_TX_HIGH  5
#define ZD_USB_TX_LOW   2
#define ZD_TX_TIMEOUT		(HZ * 5)
#define ZD_TX_WATCHDOG_INTERVAL	round_jiffies_relative(HZ)
#define ZD_RX_IDLE_INTERVAL	round_jiffies_relative(30 * HZ)
enum devicetype ;
enum endpoints ;
enum ;
enum control_requests ;
struct usb_req_read_regs  __packed;
struct reg_data  __packed;
struct usb_req_write_regs  __packed;
enum ;
struct usb_req_rfwrite  __packed;
enum usb_int_id ;
enum usb_int_flags ;
struct usb_int_header  __packed;
struct usb_int_regs  __packed;
struct usb_int_retry_fail  __packed;
struct read_regs_int ;
struct zd_ioreq16 ;
struct zd_ioreq32 ;
struct zd_usb_interrupt ;
static inline struct usb_int_regs *get_read_regs(struct zd_usb_interrupt *intr)
#define RX_URBS_COUNT 5
struct zd_usb_rx ;
struct zd_usb_tx ;
struct zd_usb ;
#define zd_usb_dev(usb) (&usb->intf->dev)
static inline struct usb_device *zd_usb_to_usbdev(struct zd_usb *usb)
static inline struct ieee80211_hw *zd_intf_to_hw(struct usb_interface *intf)
static inline struct ieee80211_hw *zd_usb_to_hw(struct zd_usb *usb)
void zd_usb_init(struct zd_usb *usb, struct ieee80211_hw *hw,
struct usb_interface *intf);
int zd_usb_init_hw(struct zd_usb *usb);
void zd_usb_clear(struct zd_usb *usb);
int zd_usb_scnprint_id(struct zd_usb *usb, char *buffer, size_t size);
void zd_tx_watchdog_enable(struct zd_usb *usb);
void zd_tx_watchdog_disable(struct zd_usb *usb);
int zd_usb_enable_int(struct zd_usb *usb);
void zd_usb_disable_int(struct zd_usb *usb);
int zd_usb_enable_rx(struct zd_usb *usb);
void zd_usb_disable_rx(struct zd_usb *usb);
void zd_usb_reset_rx_idle_timer(struct zd_usb *usb);
void zd_usb_enable_tx(struct zd_usb *usb);
void zd_usb_disable_tx(struct zd_usb *usb);
int zd_usb_tx(struct zd_usb *usb, struct sk_buff *skb);
int zd_usb_ioread16v(struct zd_usb *usb, u16 *values,
const zd_addr_t *addresses, unsigned int count);
static inline int zd_usb_ioread16(struct zd_usb *usb, u16 *value,
const zd_addr_t addr)
void zd_usb_iowrite16v_async_start(struct zd_usb *usb);
int zd_usb_iowrite16v_async_end(struct zd_usb *usb, unsigned int timeout);
int zd_usb_iowrite16v_async(struct zd_usb *usb, const struct zd_ioreq16 *ioreqs,
unsigned int count);
int zd_usb_iowrite16v(struct zd_usb *usb, const struct zd_ioreq16 *ioreqs,
unsigned int count);
int zd_usb_rfwrite(struct zd_usb *usb, u32 value, u8 bits);
int zd_usb_read_fw(struct zd_usb *usb, zd_addr_t addr, u8 *data, u16 len);
extern struct workqueue_struct *zd_workqueue;
