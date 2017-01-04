#define DRV_NAME "lbtf_usb"
#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define INSANEDEBUG	0
#define lbtf_deb_usb2(...) do  while (0)
#define MESSAGE_HEADER_LEN	4
static char *lbtf_fw_name = "lbtf_usb.bin";
module_param_named(fw_name, lbtf_fw_name, charp, 0644);
MODULE_FIRMWARE("lbtf_usb.bin");
static struct usb_device_id if_usb_table[] = ;
MODULE_DEVICE_TABLE(usb, if_usb_table);
static void if_usb_receive(struct urb *urb);
static void if_usb_receive_fwload(struct urb *urb);
static int if_usb_prog_firmware(struct if_usb_card *cardp);
static int if_usb_host_to_card(struct lbtf_private *priv, uint8_t type,
uint8_t *payload, uint16_t nb);
static int usb_tx_block(struct if_usb_card *cardp, uint8_t *payload,
uint16_t nb, u8 data);
static void if_usb_free(struct if_usb_card *cardp);
static int if_usb_submit_rx_urb(struct if_usb_card *cardp);
static int if_usb_reset_device(struct if_usb_card *cardp);
static void if_usb_write_bulk_callback(struct urb *urb)
static void if_usb_free(struct if_usb_card *cardp)
static void if_usb_setup_firmware(struct lbtf_private *priv)
static void if_usb_fw_timeo(unsigned long priv)
static int if_usb_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static void if_usb_disconnect(struct usb_interface *intf)
static int if_usb_send_fw_pkt(struct if_usb_card *cardp)
static int if_usb_reset_device(struct if_usb_card *cardp)
EXPORT_SYMBOL_GPL(if_usb_reset_device);
static int usb_tx_block(struct if_usb_card *cardp, uint8_t *payload,
uint16_t nb, u8 data)
static int __if_usb_submit_rx_urb(struct if_usb_card *cardp,
void (*callbackfn)(struct urb *urb))
static int if_usb_submit_rx_urb_fwload(struct if_usb_card *cardp)
static int if_usb_submit_rx_urb(struct if_usb_card *cardp)
static void if_usb_receive_fwload(struct urb *urb)
#define MRVDRV_MIN_PKT_LEN	30
static inline void process_cmdtypedata(int recvlength, struct sk_buff *skb,
struct if_usb_card *cardp,
struct lbtf_private *priv)
static inline void process_cmdrequest(int recvlength, uint8_t *recvbuff,
struct sk_buff *skb,
struct if_usb_card *cardp,
struct lbtf_private *priv)
static void if_usb_receive(struct urb *urb)
static int if_usb_host_to_card(struct lbtf_private *priv, uint8_t type,
uint8_t *payload, uint16_t nb)
static int if_usb_issue_boot_command(struct if_usb_card *cardp, int ivalue)
static int check_fwfile_format(const u8 *data, u32 totlen)
static int if_usb_prog_firmware(struct if_usb_card *cardp)
EXPORT_SYMBOL_GPL(if_usb_prog_firmware);
#define if_usb_suspend NULL
#define if_usb_resume NULL
static struct usb_driver if_usb_driver = ;
static int __init if_usb_init_module(void)
static void __exit if_usb_exit_module(void)
module_init(if_usb_init_module);
module_exit(if_usb_exit_module);
MODULE_DESCRIPTION("8388 USB WLAN Thinfirm Driver");
MODULE_AUTHOR("Cozybit Inc.");
MODULE_LICENSE("GPL");
