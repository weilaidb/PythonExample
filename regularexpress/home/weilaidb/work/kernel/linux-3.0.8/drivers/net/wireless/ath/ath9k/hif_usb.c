#define FIRMWARE_AR7010_1_1     "htc_7010.fw"
#define FIRMWARE_AR9271         "htc_9271.fw"
MODULE_FIRMWARE(FIRMWARE_AR7010_1_1);
MODULE_FIRMWARE(FIRMWARE_AR9271);
static struct usb_device_id ath9k_hif_usb_ids[] = ;
MODULE_DEVICE_TABLE(usb, ath9k_hif_usb_ids);
static int __hif_usb_tx(struct hif_device_usb *hif_dev);
static void hif_usb_regout_cb(struct urb *urb)
static int hif_usb_send_regout(struct hif_device_usb *hif_dev,
struct sk_buff *skb)
static void hif_usb_mgmt_cb(struct urb *urb)
static int hif_usb_send_mgmt(struct hif_device_usb *hif_dev,
struct sk_buff *skb)
static inline void ath9k_skb_queue_purge(struct hif_device_usb *hif_dev,
struct sk_buff_head *list)
static inline void ath9k_skb_queue_complete(struct hif_device_usb *hif_dev,
struct sk_buff_head *queue,
bool txok)
static void hif_usb_tx_cb(struct urb *urb)
static int __hif_usb_tx(struct hif_device_usb *hif_dev)
static int hif_usb_send_tx(struct hif_device_usb *hif_dev, struct sk_buff *skb)
static void hif_usb_start(void *hif_handle)
static void hif_usb_stop(void *hif_handle)
static int hif_usb_send(void *hif_handle, u8 pipe_id, struct sk_buff *skb)
static inline bool check_index(struct sk_buff *skb, u8 idx)
static void hif_usb_sta_drain(void *hif_handle, u8 idx)
static struct ath9k_htc_hif hif_usb = ;
static void ath9k_hif_usb_rx_stream(struct hif_device_usb *hif_dev,
struct sk_buff *skb)
static void ath9k_hif_usb_rx_cb(struct urb *urb)
static void ath9k_hif_usb_reg_in_cb(struct urb *urb)
static void ath9k_hif_usb_dealloc_tx_urbs(struct hif_device_usb *hif_dev)
static int ath9k_hif_usb_alloc_tx_urbs(struct hif_device_usb *hif_dev)
static void ath9k_hif_usb_dealloc_rx_urbs(struct hif_device_usb *hif_dev)
static int ath9k_hif_usb_alloc_rx_urbs(struct hif_device_usb *hif_dev)
static void ath9k_hif_usb_dealloc_reg_in_urbs(struct hif_device_usb *hif_dev)
static int ath9k_hif_usb_alloc_reg_in_urbs(struct hif_device_usb *hif_dev)
static int ath9k_hif_usb_alloc_urbs(struct hif_device_usb *hif_dev)
static void ath9k_hif_usb_dealloc_urbs(struct hif_device_usb *hif_dev)
static int ath9k_hif_usb_download_fw(struct hif_device_usb *hif_dev,
u32 drv_info)
static int ath9k_hif_usb_dev_init(struct hif_device_usb *hif_dev, u32 drv_info)
static void ath9k_hif_usb_dev_deinit(struct hif_device_usb *hif_dev)
static int send_eject_command(struct usb_interface *interface)
static int ath9k_hif_usb_probe(struct usb_interface *interface,
const struct usb_device_id *id)
static void ath9k_hif_usb_reboot(struct usb_device *udev)
static void ath9k_hif_usb_disconnect(struct usb_interface *interface)
static int ath9k_hif_usb_suspend(struct usb_interface *interface,
pm_message_t message)
static int ath9k_hif_usb_resume(struct usb_interface *interface)
static struct usb_driver ath9k_hif_usb_driver = ;
int ath9k_hif_usb_init(void)
void ath9k_hif_usb_exit(void)
