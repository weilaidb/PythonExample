#define VERSION "1.2"
static struct usb_driver bfusb_driver;
static struct usb_device_id bfusb_table[] = ;
MODULE_DEVICE_TABLE(usb, bfusb_table);
#define BFUSB_MAX_BLOCK_SIZE	256
#define BFUSB_BLOCK_TIMEOUT	3000
#define BFUSB_TX_PROCESS	1
#define BFUSB_TX_WAKEUP		2
#define BFUSB_MAX_BULK_TX	2
#define BFUSB_MAX_BULK_RX	2
struct bfusb_data ;
struct bfusb_data_scb ;
static void bfusb_tx_complete(struct urb *urb);
static void bfusb_rx_complete(struct urb *urb);
static struct urb *bfusb_get_completed(struct bfusb_data *data)
static void bfusb_unlink_urbs(struct bfusb_data *data)
static int bfusb_send_bulk(struct bfusb_data *data, struct sk_buff *skb)
static void bfusb_tx_wakeup(struct bfusb_data *data)
static void bfusb_tx_complete(struct urb *urb)
static int bfusb_rx_submit(struct bfusb_data *data, struct urb *urb)
static inline int bfusb_recv_block(struct bfusb_data *data, int hdr, unsigned char *buf, int len)
static void bfusb_rx_complete(struct urb *urb)
static int bfusb_open(struct hci_dev *hdev)
static int bfusb_flush(struct hci_dev *hdev)
static int bfusb_close(struct hci_dev *hdev)
static int bfusb_send_frame(struct sk_buff *skb)
static void bfusb_destruct(struct hci_dev *hdev)
static int bfusb_ioctl(struct hci_dev *hdev, unsigned int cmd, unsigned long arg)
static int bfusb_load_firmware(struct bfusb_data *data,
const unsigned char *firmware, int count)
static int bfusb_probe(struct usb_interface *intf, const struct usb_device_id *id)
static void bfusb_disconnect(struct usb_interface *intf)
static struct usb_driver bfusb_driver = ;
static int __init bfusb_init(void)
static void __exit bfusb_exit(void)
module_init(bfusb_init);
module_exit(bfusb_exit);
MODULE_AUTHOR("Marcel Holtmann <marcel@holtmann.org>");
MODULE_DESCRIPTION("BlueFRITZ! USB driver ver " VERSION);
MODULE_VERSION(VERSION);
MODULE_LICENSE("GPL");
MODULE_FIRMWARE("bfubase.frm");
