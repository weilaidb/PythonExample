#define DRIVER_NAME "at76c50x-usb"
#define DRIVER_VERSION	"0.17"
#define DRIVER_DESC "Atmel at76x USB Wireless LAN Driver"
#define DBG_PROGRESS		0x00000001
#define DBG_BSS_TABLE		0x00000002
#define DBG_IOCTL		0x00000004
#define DBG_MAC_STATE		0x00000008
#define DBG_TX_DATA		0x00000010
#define DBG_TX_DATA_CONTENT	0x00000020
#define DBG_TX_MGMT		0x00000040
#define DBG_RX_DATA		0x00000080
#define DBG_RX_DATA_CONTENT	0x00000100
#define DBG_RX_MGMT		0x00000200
#define DBG_RX_BEACON		0x00000400
#define DBG_RX_CTRL		0x00000800
#define DBG_RX_MGMT_CONTENT	0x00001000
#define DBG_RX_FRAGS		0x00002000
#define DBG_DEVSTART		0x00004000
#define DBG_URB			0x00008000
#define DBG_RX_ATMEL_HDR	0x00010000
#define DBG_PROC_ENTRY		0x00020000
#define DBG_PM			0x00040000
#define DBG_BSS_MATCH		0x00080000
#define DBG_PARAMS		0x00100000
#define DBG_WAIT_COMPLETE	0x00200000
#define DBG_RX_FRAGS_SKB	0x00400000
#define DBG_BSS_TABLE_RM	0x00800000
#define DBG_MONITOR_MODE	0x01000000
#define DBG_MIB			0x02000000
#define DBG_MGMT_TIMER		0x04000000
#define DBG_WE_EVENTS		0x08000000
#define DBG_FW			0x10000000
#define DBG_DFU			0x20000000
#define DBG_CMD			0x40000000
#define DBG_MAC80211		0x80000000
#define DBG_DEFAULTS		0
#define at76_dbg(bits, format, arg...)					\
do  while (0)
#define at76_dbg_dump(bits, buf, len, format, arg...)			\
do  while (0)
static uint at76_debug = DBG_DEFAULTS;
static struct mutex fw_mutex;
static struct fwentry firmwares[] = ;
MODULE_FIRMWARE("atmel_at76c503-i3861.bin");
MODULE_FIRMWARE("atmel_at76c503-i3863.bin");
MODULE_FIRMWARE("atmel_at76c503-rfmd.bin");
MODULE_FIRMWARE("atmel_at76c503-rfmd-acc.bin");
MODULE_FIRMWARE("atmel_at76c505-rfmd.bin");
MODULE_FIRMWARE("atmel_at76c505-rfmd2958.bin");
MODULE_FIRMWARE("atmel_at76c505a-rfmd2958.bin");
MODULE_FIRMWARE("atmel_at76c505amx-rfmd.bin");
#define USB_DEVICE_DATA(__ops)	.driver_info = (kernel_ulong_t)(__ops)
static struct usb_device_id dev_table[] = ;
MODULE_DEVICE_TABLE(usb, dev_table);
static const u8 hw_rates[] = ;
static const char *const preambles[] = ;
#define STATE_IDLE			0x00
#define STATE_DETACH			0x01
#define STATE_DFU_IDLE			0x02
#define STATE_DFU_DOWNLOAD_SYNC		0x03
#define STATE_DFU_DOWNLOAD_BUSY		0x04
#define STATE_DFU_DOWNLOAD_IDLE		0x05
#define STATE_DFU_MANIFEST_SYNC		0x06
#define STATE_DFU_MANIFEST		0x07
#define STATE_DFU_MANIFEST_WAIT_RESET	0x08
#define STATE_DFU_UPLOAD_IDLE		0x09
#define STATE_DFU_ERROR			0x0a
#define DFU_DETACH			0
#define DFU_DNLOAD			1
#define DFU_UPLOAD			2
#define DFU_GETSTATUS			3
#define DFU_CLRSTATUS			4
#define DFU_GETSTATE			5
#define DFU_ABORT			6
#define FW_BLOCK_SIZE 1024
struct dfu_status  __packed;
static inline int at76_is_intersil(enum board_type board)
static inline int at76_is_503rfmd(enum board_type board)
static inline int at76_is_505a(enum board_type board)
static int at76_load_int_fw_block(struct usb_device *udev, int blockno,
void *block, int size)
static int at76_dfu_get_status(struct usb_device *udev,
struct dfu_status *status)
static u8 at76_dfu_get_state(struct usb_device *udev, u8 *state)
static inline unsigned long at76_get_timeout(struct dfu_status *s)
static int at76_usbdfu_download(struct usb_device *udev, u8 *buf, u32 size,
int manifest_sync_timeout)
#define HEX2STR_BUFFERS 4
#define HEX2STR_MAX_LEN 64
#define BIN2HEX(x) ((x) < 10 ? '0' + (x) : (x) + 'A' - 10)
static char *hex2str(void *buf, int len)
static int tx_activity;
static void at76_ledtrig_tx_timerfunc(unsigned long data);
static DEFINE_TIMER(ledtrig_tx_timer, at76_ledtrig_tx_timerfunc, 0, 0);
DEFINE_LED_TRIGGER(ledtrig_tx);
static void at76_ledtrig_tx_timerfunc(unsigned long data)
static void at76_ledtrig_tx_activity(void)
static int at76_remap(struct usb_device *udev)
static int at76_get_op_mode(struct usb_device *udev)
static inline int at76_load_ext_fw_block(struct usb_device *udev, int blockno,
void *block, int size)
static inline int at76_get_hw_cfg(struct usb_device *udev,
union at76_hwcfg *buf, int buf_size)
static inline int at76_get_hw_cfg_intersil(struct usb_device *udev,
union at76_hwcfg *buf, int buf_size)
static int at76_get_hw_config(struct at76_priv *priv)
static struct reg_domain const *at76_get_reg_domain(u16 code)
static inline int at76_get_mib(struct usb_device *udev, u16 mib, void *buf,
int buf_size)
static inline int at76_get_cmd_status(struct usb_device *udev, u8 cmd)
#define MAKE_CMD_CASE(c) case (c): return #c
static const char *at76_get_cmd_string(u8 cmd_status)
static int at76_set_card_command(struct usb_device *udev, u8 cmd, void *buf,
int buf_size)
#define MAKE_CMD_STATUS_CASE(c)	case (c): return #c
static const char *at76_get_cmd_status_string(u8 cmd_status)
static int at76_wait_completion(struct at76_priv *priv, int cmd)
static int at76_set_mib(struct at76_priv *priv, struct set_mib_buffer *buf)
static int at76_set_radio(struct at76_priv *priv, int enable)
static int at76_set_pm_mode(struct at76_priv *priv)
static int at76_set_preamble(struct at76_priv *priv, u8 type)
static int at76_set_frag(struct at76_priv *priv, u16 size)
static int at76_set_rts(struct at76_priv *priv, u16 size)
static int at76_set_autorate_fallback(struct at76_priv *priv, int onoff)
static void at76_dump_mib_mac_addr(struct at76_priv *priv)
static void at76_dump_mib_mac_wep(struct at76_priv *priv)
static void at76_dump_mib_mac_mgmt(struct at76_priv *priv)
static void at76_dump_mib_mac(struct at76_priv *priv)
static void at76_dump_mib_phy(struct at76_priv *priv)
static void at76_dump_mib_local(struct at76_priv *priv)
static void at76_dump_mib_mdomain(struct at76_priv *priv)
static int at76_start_monitor(struct at76_priv *priv)
static inline int at76_calc_padding(int wlen)
static void at76_rx_callback(struct urb *urb)
static int at76_submit_rx_urb(struct at76_priv *priv)
static int at76_load_external_fw(struct usb_device *udev, struct fwentry *fwe)
static int at76_load_internal_fw(struct usb_device *udev, struct fwentry *fwe)
static int at76_startup_device(struct at76_priv *priv)
static void at76_work_set_promisc(struct work_struct *work)
static void at76_work_submit_rx(struct work_struct *work)
static void at76_rx_tasklet(unsigned long param)
static struct fwentry *at76_load_firmware(struct usb_device *udev,
enum board_type board_type)
static int at76_join(struct at76_priv *priv)
static void at76_work_join_bssid(struct work_struct *work)
static void at76_mac80211_tx_callback(struct urb *urb)
static void at76_mac80211_tx(struct ieee80211_hw *hw, struct sk_buff *skb)
static int at76_mac80211_start(struct ieee80211_hw *hw)
static void at76_mac80211_stop(struct ieee80211_hw *hw)
static int at76_add_interface(struct ieee80211_hw *hw,
struct ieee80211_vif *vif)
static void at76_remove_interface(struct ieee80211_hw *hw,
struct ieee80211_vif *vif)
static void at76_dwork_hw_scan(struct work_struct *work)
static int at76_hw_scan(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
struct cfg80211_scan_request *req)
static int at76_config(struct ieee80211_hw *hw, u32 changed)
static void at76_bss_info_changed(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
struct ieee80211_bss_conf *conf,
u32 changed)
static void at76_configure_filter(struct ieee80211_hw *hw,
unsigned int changed_flags,
unsigned int *total_flags, u64 multicast)
static int at76_set_key(struct ieee80211_hw *hw, enum set_key_cmd cmd,
struct ieee80211_vif *vif, struct ieee80211_sta *sta,
struct ieee80211_key_conf *key)
static const struct ieee80211_ops at76_ops = ;
static struct at76_priv *at76_alloc_new_device(struct usb_device *udev)
static int at76_alloc_urbs(struct at76_priv *priv,
struct usb_interface *interface)
static struct ieee80211_rate at76_rates[] = ;
static struct ieee80211_channel at76_channels[] = ;
static struct ieee80211_supported_band at76_supported_band = ;
static int at76_init_new_device(struct at76_priv *priv,
struct usb_interface *interface)
static void at76_delete_device(struct at76_priv *priv)
static int at76_probe(struct usb_interface *interface,
const struct usb_device_id *id)
static void at76_disconnect(struct usb_interface *interface)
static struct usb_driver at76_driver = ;
static int __init at76_mod_init(void)
static void __exit at76_mod_exit(void)
module_param_named(debug, at76_debug, uint, 0600);
MODULE_PARM_DESC(debug, "Debugging level");
module_init(at76_mod_init);
module_exit(at76_mod_exit);
MODULE_AUTHOR("Oliver Kurth <oku@masqmail.cx>");
MODULE_AUTHOR("Joerg Albert <joerg.albert@gmx.de>");
MODULE_AUTHOR("Alex <alex@foogod.com>");
MODULE_AUTHOR("Nick Jones");
MODULE_AUTHOR("Balint Seeber <n0_5p4m_p13453@hotmail.com>");
MODULE_AUTHOR("Pavel Roskin <proski@gnu.org>");
MODULE_AUTHOR("Guido Guenther <agx@sigxcpu.org>");
MODULE_AUTHOR("Kalle Valo <kalle.valo@iki.fi>");
MODULE_AUTHOR("Sebastian Smolorz <sesmo@gmx.net>");
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
