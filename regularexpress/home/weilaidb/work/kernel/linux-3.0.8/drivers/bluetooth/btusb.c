#define VERSION "0.6"
static int ignore_dga;
static int ignore_csr;
static int ignore_sniffer;
static int disable_scofix;
static int force_scofix;
static int reset = 1;
static struct usb_driver btusb_driver;
#define BTUSB_IGNORE		0x01
#define BTUSB_DIGIANSWER	0x02
#define BTUSB_CSR		0x04
#define BTUSB_SNIFFER		0x08
#define BTUSB_BCM92035		0x10
#define BTUSB_BROKEN_ISOC	0x20
#define BTUSB_WRONG_SCO_MTU	0x40
static struct usb_device_id btusb_table[] = ;
MODULE_DEVICE_TABLE(usb, btusb_table);
static struct usb_device_id blacklist_table[] = ;
#define BTUSB_MAX_ISOC_FRAMES	10
#define BTUSB_INTR_RUNNING	0
#define BTUSB_BULK_RUNNING	1
#define BTUSB_ISOC_RUNNING	2
#define BTUSB_SUSPENDING	3
#define BTUSB_DID_ISO_RESUME	4
struct btusb_data ;
static int inc_tx(struct btusb_data *data)
static void btusb_intr_complete(struct urb *urb)
static int btusb_submit_intr_urb(struct hci_dev *hdev, gfp_t mem_flags)
static void btusb_bulk_complete(struct urb *urb)
static int btusb_submit_bulk_urb(struct hci_dev *hdev, gfp_t mem_flags)
static void btusb_isoc_complete(struct urb *urb)
static inline void __fill_isoc_descriptor(struct urb *urb, int len, int mtu)
static int btusb_submit_isoc_urb(struct hci_dev *hdev, gfp_t mem_flags)
static void btusb_tx_complete(struct urb *urb)
static void btusb_isoc_tx_complete(struct urb *urb)
static int btusb_open(struct hci_dev *hdev)
static void btusb_stop_traffic(struct btusb_data *data)
static int btusb_close(struct hci_dev *hdev)
static int btusb_flush(struct hci_dev *hdev)
static int btusb_send_frame(struct sk_buff *skb)
static void btusb_destruct(struct hci_dev *hdev)
static void btusb_notify(struct hci_dev *hdev, unsigned int evt)
static inline int __set_isoc_interface(struct hci_dev *hdev, int altsetting)
static void btusb_work(struct work_struct *work)
static void btusb_waker(struct work_struct *work)
static int btusb_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static void btusb_disconnect(struct usb_interface *intf)
static int btusb_suspend(struct usb_interface *intf, pm_message_t message)
static void play_deferred(struct btusb_data *data)
static int btusb_resume(struct usb_interface *intf)
static struct usb_driver btusb_driver = ;
static int __init btusb_init(void)
static void __exit btusb_exit(void)
module_init(btusb_init);
module_exit(btusb_exit);
module_param(ignore_dga, bool, 0644);
MODULE_PARM_DESC(ignore_dga, "Ignore devices with id 08fd:0001");
module_param(ignore_csr, bool, 0644);
MODULE_PARM_DESC(ignore_csr, "Ignore devices with id 0a12:0001");
module_param(ignore_sniffer, bool, 0644);
MODULE_PARM_DESC(ignore_sniffer, "Ignore devices with id 0a12:0002");
module_param(disable_scofix, bool, 0644);
MODULE_PARM_DESC(disable_scofix, "Disable fixup of wrong SCO buffer size");
module_param(force_scofix, bool, 0644);
MODULE_PARM_DESC(force_scofix, "Force fixup of wrong SCO buffers size");
module_param(reset, bool, 0644);
MODULE_PARM_DESC(reset, "Send HCI reset command on initialization");
MODULE_AUTHOR("Marcel Holtmann <marcel@holtmann.org>");
MODULE_DESCRIPTION("Generic Bluetooth USB driver ver " VERSION);
MODULE_VERSION(VERSION);
MODULE_LICENSE("GPL");
