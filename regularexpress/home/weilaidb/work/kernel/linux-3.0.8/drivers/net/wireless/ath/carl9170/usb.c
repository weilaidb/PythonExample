MODULE_AUTHOR("Johannes Berg <johannes@sipsolutions.net>");
MODULE_AUTHOR("Christian Lamparter <chunkeey@googlemail.com>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Atheros AR9170 802.11n USB wireless");
MODULE_FIRMWARE(CARL9170FW_NAME);
MODULE_ALIAS("ar9170usb");
MODULE_ALIAS("arusb_lnx");
static struct usb_device_id carl9170_usb_ids[] = ;
MODULE_DEVICE_TABLE(usb, carl9170_usb_ids);
static void carl9170_usb_submit_data_urb(struct ar9170 *ar)
static void carl9170_usb_tx_data_complete(struct urb *urb)
static int carl9170_usb_submit_cmd_urb(struct ar9170 *ar)
static void carl9170_usb_cmd_complete(struct urb *urb)
static void carl9170_usb_rx_irq_complete(struct urb *urb)
static int carl9170_usb_submit_rx_urb(struct ar9170 *ar, gfp_t gfp)
static void carl9170_usb_rx_work(struct ar9170 *ar)
void carl9170_usb_handle_tx_err(struct ar9170 *ar)
static void carl9170_usb_tasklet(unsigned long data)
static void carl9170_usb_rx_complete(struct urb *urb)
static struct urb *carl9170_usb_alloc_rx_urb(struct ar9170 *ar, gfp_t gfp)
static int carl9170_usb_send_rx_irq_urb(struct ar9170 *ar)
static int carl9170_usb_init_rx_bulk_urbs(struct ar9170 *ar)
static int carl9170_usb_flush(struct ar9170 *ar)
static void carl9170_usb_cancel_urbs(struct ar9170 *ar)
int __carl9170_exec_cmd(struct ar9170 *ar, struct carl9170_cmd *cmd,
const bool free_buf)
int carl9170_exec_cmd(struct ar9170 *ar, const enum carl9170_cmd_oids cmd,
unsigned int plen, void *payload, unsigned int outlen, void *out)
void carl9170_usb_tx(struct ar9170 *ar, struct sk_buff *skb)
static void carl9170_release_firmware(struct ar9170 *ar)
void carl9170_usb_stop(struct ar9170 *ar)
int carl9170_usb_open(struct ar9170 *ar)
static int carl9170_usb_load_firmware(struct ar9170 *ar)
int carl9170_usb_restart(struct ar9170 *ar)
void carl9170_usb_reset(struct ar9170 *ar)
static int carl9170_usb_init_device(struct ar9170 *ar)
static void carl9170_usb_firmware_failed(struct ar9170 *ar)
static void carl9170_usb_firmware_finish(struct ar9170 *ar)
static void carl9170_usb_firmware_step2(const struct firmware *fw,
void *context)
static int carl9170_usb_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static void carl9170_usb_disconnect(struct usb_interface *intf)
static int carl9170_usb_suspend(struct usb_interface *intf,
pm_message_t message)
static int carl9170_usb_resume(struct usb_interface *intf)
static struct usb_driver carl9170_driver = ;
static int __init carl9170_usb_init(void)
static void __exit carl9170_usb_exit(void)
module_init(carl9170_usb_init);
module_exit(carl9170_usb_exit);
