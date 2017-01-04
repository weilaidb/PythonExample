#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define DRV_NAME "usb8xxx"
#define INSANEDEBUG	0
#define lbs_deb_usb2(...) do  while (0)
#define MESSAGE_HEADER_LEN	4
static char *lbs_fw_name = NULL;
module_param_named(fw_name, lbs_fw_name, charp, 0644);
MODULE_FIRMWARE("libertas/usb8388_v9.bin");
MODULE_FIRMWARE("libertas/usb8388_v5.bin");
MODULE_FIRMWARE("libertas/usb8388.bin");
MODULE_FIRMWARE("libertas/usb8682.bin");
MODULE_FIRMWARE("usb8388.bin");
enum ;
static struct usb_device_id if_usb_table[] = ;
MODULE_DEVICE_TABLE(usb, if_usb_table);
static void if_usb_receive(struct urb *urb);
static void if_usb_receive_fwload(struct urb *urb);
static int __if_usb_prog_firmware(struct if_usb_card *cardp,
const char *fwname, int cmd);
static int if_usb_prog_firmware(struct if_usb_card *cardp,
const char *fwname, int cmd);
static int if_usb_host_to_card(struct lbs_private *priv, uint8_t type,
uint8_t *payload, uint16_t nb);
static int usb_tx_block(struct if_usb_card *cardp, uint8_t *payload,
uint16_t nb);
static void if_usb_free(struct if_usb_card *cardp);
static int if_usb_submit_rx_urb(struct if_usb_card *cardp);
static int if_usb_reset_device(struct if_usb_card *cardp);
static ssize_t if_usb_firmware_set(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(lbs_flash_fw, 0200, NULL, if_usb_firmware_set);
static ssize_t if_usb_boot2_set(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(lbs_flash_boot2, 0200, NULL, if_usb_boot2_set);
static void if_usb_write_bulk_callback(struct urb *urb)
static void if_usb_free(struct if_usb_card *cardp)
static void if_usb_setup_firmware(struct lbs_private *priv)
static void if_usb_fw_timeo(unsigned long priv)
static void if_usb_reset_olpc_card(struct lbs_private *priv)
static int if_usb_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static void if_usb_disconnect(struct usb_interface *intf)
static int if_usb_send_fw_pkt(struct if_usb_card *cardp)
static int if_usb_reset_device(struct if_usb_card *cardp)
static int usb_tx_block(struct if_usb_card *cardp, uint8_t *payload, uint16_t nb)
static int __if_usb_submit_rx_urb(struct if_usb_card *cardp,
void (*callbackfn)(struct urb *urb))
static int if_usb_submit_rx_urb_fwload(struct if_usb_card *cardp)
static int if_usb_submit_rx_urb(struct if_usb_card *cardp)
static void if_usb_receive_fwload(struct urb *urb)
#define MRVDRV_MIN_PKT_LEN	30
static inline void process_cmdtypedata(int recvlength, struct sk_buff *skb,
struct if_usb_card *cardp,
struct lbs_private *priv)
static inline void process_cmdrequest(int recvlength, uint8_t *recvbuff,
struct sk_buff *skb,
struct if_usb_card *cardp,
struct lbs_private *priv)
static void if_usb_receive(struct urb *urb)
static int if_usb_host_to_card(struct lbs_private *priv, uint8_t type,
uint8_t *payload, uint16_t nb)
static int if_usb_issue_boot_command(struct if_usb_card *cardp, int ivalue)
static int check_fwfile_format(const uint8_t *data, uint32_t totlen)
static int if_usb_prog_firmware(struct if_usb_card *cardp,
const char *fwname, int cmd)
static const struct  fw_table[] = ;
static int get_fw(struct if_usb_card *cardp, const char *fwname)
static int __if_usb_prog_firmware(struct if_usb_card *cardp,
const char *fwname, int cmd)
static int if_usb_suspend(struct usb_interface *intf, pm_message_t message)
static int if_usb_resume(struct usb_interface *intf)
#define if_usb_suspend NULL
#define if_usb_resume NULL
static struct usb_driver if_usb_driver = ;
static int __init if_usb_init_module(void)
static void __exit if_usb_exit_module(void)
module_init(if_usb_init_module);
module_exit(if_usb_exit_module);
MODULE_DESCRIPTION("8388 USB WLAN Driver");
MODULE_AUTHOR("Marvell International Ltd. and Red Hat, Inc.");
MODULE_LICENSE("GPL");
