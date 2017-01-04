#define VERSION "0.10"
static struct usb_device_id bpa10x_table[] = ;
MODULE_DEVICE_TABLE(usb, bpa10x_table);
struct bpa10x_data ;
#define HCI_VENDOR_HDR_SIZE 5
struct hci_vendor_hdr  __packed;
static int bpa10x_recv(struct hci_dev *hdev, int queue, void *buf, int count)
static void bpa10x_tx_complete(struct urb *urb)
static void bpa10x_rx_complete(struct urb *urb)
static inline int bpa10x_submit_intr_urb(struct hci_dev *hdev)
static inline int bpa10x_submit_bulk_urb(struct hci_dev *hdev)
static int bpa10x_open(struct hci_dev *hdev)
static int bpa10x_close(struct hci_dev *hdev)
static int bpa10x_flush(struct hci_dev *hdev)
static int bpa10x_send_frame(struct sk_buff *skb)
static void bpa10x_destruct(struct hci_dev *hdev)
static int bpa10x_probe(struct usb_interface *intf, const struct usb_device_id *id)
static void bpa10x_disconnect(struct usb_interface *intf)
static struct usb_driver bpa10x_driver = ;
static int __init bpa10x_init(void)
static void __exit bpa10x_exit(void)
module_init(bpa10x_init);
module_exit(bpa10x_exit);
MODULE_AUTHOR("Marcel Holtmann <marcel@holtmann.org>");
MODULE_DESCRIPTION("Digianswer Bluetooth USB driver ver " VERSION);
MODULE_VERSION(VERSION);
MODULE_LICENSE("GPL");
