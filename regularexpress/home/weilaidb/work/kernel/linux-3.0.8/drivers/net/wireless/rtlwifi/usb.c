#define	REALTEK_USB_VENQT_READ			0xC0
#define	REALTEK_USB_VENQT_WRITE			0x40
#define REALTEK_USB_VENQT_CMD_REQ		0x05
#define	REALTEK_USB_VENQT_CMD_IDX		0x00
#define REALTEK_USB_VENQT_MAX_BUF_SIZE		254
static void usbctrl_async_callback(struct urb *urb)
static int _usbctrl_vendorreq_async_write(struct usb_device *udev, u8 request,
u16 value, u16 index, void *pdata,
u16 len)
static int _usbctrl_vendorreq_sync_read(struct usb_device *udev, u8 request,
u16 value, u16 index, void *pdata,
u16 len)
static u32 _usb_read_sync(struct usb_device *udev, u32 addr, u16 len)
static u8 _usb_read8_sync(struct rtl_priv *rtlpriv, u32 addr)
static u16 _usb_read16_sync(struct rtl_priv *rtlpriv, u32 addr)
static u32 _usb_read32_sync(struct rtl_priv *rtlpriv, u32 addr)
static void _usb_write_async(struct usb_device *udev, u32 addr, u32 val,
u16 len)
static void _usb_write8_async(struct rtl_priv *rtlpriv, u32 addr, u8 val)
static void _usb_write16_async(struct rtl_priv *rtlpriv, u32 addr, u16 val)
static void _usb_write32_async(struct rtl_priv *rtlpriv, u32 addr, u32 val)
static int _usb_nbytes_read_write(struct usb_device *udev, bool read, u32 addr,
u16 len, u8 *pdata)
static int _usb_readN_sync(struct rtl_priv *rtlpriv, u32 addr, u16 len,
u8 *pdata)
static int _usb_writeN_async(struct rtl_priv *rtlpriv, u32 addr, u16 len,
u8 *pdata)
static void _rtl_usb_io_handler_init(struct device *dev,
struct ieee80211_hw *hw)
static void _rtl_usb_io_handler_release(struct ieee80211_hw *hw)
static struct sk_buff *_none_usb_tx_aggregate_hdl(struct ieee80211_hw *hw,
struct sk_buff_head *list)
#define IS_HIGH_SPEED_USB(udev) \
((USB_SPEED_HIGH == (udev)->speed) ? true : false)
static int _rtl_usb_init_tx(struct ieee80211_hw *hw)
static int _rtl_usb_init_rx(struct ieee80211_hw *hw)
static int _rtl_usb_init(struct ieee80211_hw *hw)
static int _rtl_usb_init_sw(struct ieee80211_hw *hw)
#define __RADIO_TAP_SIZE_RSV	32
static void _rtl_rx_completed(struct urb *urb);
static struct sk_buff *_rtl_prep_rx_urb(struct ieee80211_hw *hw,
struct rtl_usb *rtlusb,
struct urb *urb,
gfp_t gfp_mask)
#undef __RADIO_TAP_SIZE_RSV
static void _rtl_usb_rx_process_agg(struct ieee80211_hw *hw,
struct sk_buff *skb)
static void _rtl_usb_rx_process_noagg(struct ieee80211_hw *hw,
struct sk_buff *skb)
static void _rtl_rx_pre_process(struct ieee80211_hw *hw, struct sk_buff *skb)
static void _rtl_rx_completed(struct urb *_urb)
static int _rtl_usb_receive(struct ieee80211_hw *hw)
static int rtl_usb_start(struct ieee80211_hw *hw)
static void rtl_usb_cleanup(struct ieee80211_hw *hw)
static void rtl_usb_deinit(struct ieee80211_hw *hw)
static void rtl_usb_stop(struct ieee80211_hw *hw)
static void _rtl_submit_tx_urb(struct ieee80211_hw *hw, struct urb *_urb)
static int _usb_tx_post(struct ieee80211_hw *hw, struct urb *urb,
struct sk_buff *skb)
static void _rtl_tx_complete(struct urb *urb)
static struct urb *_rtl_usb_tx_urb_setup(struct ieee80211_hw *hw,
struct sk_buff *skb, u32 ep_num)
static void _rtl_usb_transmit(struct ieee80211_hw *hw, struct sk_buff *skb,
enum rtl_txq qnum)
static void _rtl_usb_tx_preprocess(struct ieee80211_hw *hw, struct sk_buff *skb,
u16 hw_queue)
static int rtl_usb_tx(struct ieee80211_hw *hw, struct sk_buff *skb,
struct rtl_tcb_desc *dummy)
static bool rtl_usb_tx_chk_waitq_insert(struct ieee80211_hw *hw,
struct sk_buff *skb)
static struct rtl_intf_ops rtl_usb_ops = ;
int __devinit rtl_usb_probe(struct usb_interface *intf,
const struct usb_device_id *id)
EXPORT_SYMBOL(rtl_usb_probe);
void rtl_usb_disconnect(struct usb_interface *intf)
EXPORT_SYMBOL(rtl_usb_disconnect);
int rtl_usb_suspend(struct usb_interface *pusb_intf, pm_message_t message)
EXPORT_SYMBOL(rtl_usb_suspend);
int rtl_usb_resume(struct usb_interface *pusb_intf)
EXPORT_SYMBOL(rtl_usb_resume);
