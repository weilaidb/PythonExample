#define _OS_INTFS_C_
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("rtl871x wireless lan driver");
MODULE_AUTHOR("Larry Finger");
static char ifname[IFNAMSIZ] = "wlan%d";
static int chip_version = RTL8712_2ndCUT;
static int rfintfs = HWPI;
static int lbkmode = RTL8712_AIR_TRX;
static int hci = RTL8712_USB;
static int ampdu_enable = 1;
static int video_mode = 1;
static int network_mode = Ndis802_11IBSS;
static int channel = 1;
static int wireless_mode = WIRELESS_11BG;
static int vrtl_carrier_sense = AUTO_VCS;
static int vcs_type = RTS_CTS;
static int frag_thresh = 2346;
static int preamble = PREAMBLE_LONG;
static int scan_mode = 1;
static int adhoc_tx_pwr = 1;
static int soft_ap;
static int smart_ps = 1;
static int power_mgnt = PS_MODE_ACTIVE;
static int radio_enable = 1;
static int long_retry_lmt = 7;
static int short_retry_lmt = 7;
static int busy_thresh = 40;
static int ack_policy = NORMAL_ACK;
static int mp_mode;
static int software_encrypt;
static int software_decrypt;
static int wmm_enable;
static int uapsd_enable;
static int uapsd_max_sp = NO_LIMIT;
static int uapsd_acbk_en;
static int uapsd_acbe_en;
static int uapsd_acvi_en;
static int uapsd_acvo_en;
static int ht_enable = 1;
static int cbw40_enable = 1;
static int rf_config = RTL8712_RF_1T2R;
static int low_power;
char *r8712_initmac;
static char *initmac;
static int wifi_test = 0;
module_param_string(ifname, ifname, sizeof(ifname), S_IRUGO|S_IWUSR);
module_param(wifi_test, int, 0644);
module_param(initmac, charp, 0644);
module_param(video_mode, int, 0644);
module_param(chip_version, int, 0644);
module_param(rfintfs, int, 0644);
module_param(lbkmode, int, 0644);
module_param(hci, int, 0644);
module_param(network_mode, int, 0644);
module_param(channel, int, 0644);
module_param(mp_mode, int, 0644);
module_param(wmm_enable, int, 0644);
module_param(vrtl_carrier_sense, int, 0644);
module_param(vcs_type, int, 0644);
module_param(busy_thresh, int, 0644);
module_param(ht_enable, int, 0644);
module_param(cbw40_enable, int, 0644);
module_param(ampdu_enable, int, 0644);
module_param(rf_config, int, 0644);
module_param(power_mgnt, int, 0644);
module_param(low_power, int, 0644);
MODULE_PARM_DESC(ifname, " Net interface name, wlan%d=default");
MODULE_PARM_DESC(initmac, "MAC-Address, default: use FUSE");
static uint loadparam(struct _adapter *padapter, struct  net_device *pnetdev);
static int netdev_open(struct net_device *pnetdev);
static int netdev_close(struct net_device *pnetdev);
static uint loadparam(struct _adapter *padapter, struct  net_device *pnetdev)
static int r871x_net_set_mac_address(struct net_device *pnetdev, void *p)
static struct net_device_stats *r871x_net_get_stats(struct net_device *pnetdev)
static const struct net_device_ops rtl8712_netdev_ops = ;
struct net_device *r8712_init_netdev(void)
static u32 start_drv_threads(struct _adapter *padapter)
void r8712_stop_drv_threads(struct _adapter *padapter)
static void start_drv_timers(struct _adapter *padapter)
static void stop_drv_timers(struct _adapter *padapter)
static u8 init_default_value(struct _adapter *padapter)
u8 r8712_init_drv_sw(struct _adapter *padapter)
u8 r8712_free_drv_sw(struct _adapter *padapter)
static void enable_video_mode(struct _adapter *padapter, int cbw40_value)
static int netdev_open(struct net_device *pnetdev)
static int netdev_close(struct net_device *pnetdev)
