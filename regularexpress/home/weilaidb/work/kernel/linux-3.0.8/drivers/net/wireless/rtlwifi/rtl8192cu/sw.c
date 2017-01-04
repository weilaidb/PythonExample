MODULE_AUTHOR("Georgia		<georgia@realtek.com>");
MODULE_AUTHOR("Ziv Huang	<ziv_huang@realtek.com>");
MODULE_AUTHOR("Larry Finger	<Larry.Finger@lwfinger.net>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Realtek 8192C/8188C 802.11n USB wireless");
MODULE_FIRMWARE("rtlwifi/rtl8192cufw.bin");
static int rtl92cu_init_sw_vars(struct ieee80211_hw *hw)
static void rtl92cu_deinit_sw_vars(struct ieee80211_hw *hw)
static struct rtl_hal_ops rtl8192cu_hal_ops = ;
static struct rtl_mod_params rtl92cu_mod_params = ;
static struct rtl_hal_usbint_cfg rtl92cu_interface_cfg = ;
static struct rtl_hal_cfg rtl92cu_hal_cfg = ;
#define USB_VENDER_ID_REALTEK		0x0bda
static struct usb_device_id rtl8192c_usb_ids[] = ;
MODULE_DEVICE_TABLE(usb, rtl8192c_usb_ids);
static struct usb_driver rtl8192cu_driver = ;
static int __init rtl8192cu_init(void)
static void __exit rtl8192cu_exit(void)
module_init(rtl8192cu_init);
module_exit(rtl8192cu_exit);
