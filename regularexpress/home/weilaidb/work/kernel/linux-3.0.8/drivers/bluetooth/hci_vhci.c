#define VERSION "1.3"
struct vhci_data ;
static int vhci_open_dev(struct hci_dev *hdev)
static int vhci_close_dev(struct hci_dev *hdev)
static int vhci_flush(struct hci_dev *hdev)
static int vhci_send_frame(struct sk_buff *skb)
static void vhci_destruct(struct hci_dev *hdev)
static inline ssize_t vhci_get_user(struct vhci_data *data,
const char __user *buf, size_t count)
static inline ssize_t vhci_put_user(struct vhci_data *data,
struct sk_buff *skb, char __user *buf, int count)
static ssize_t vhci_read(struct file *file,
char __user *buf, size_t count, loff_t *pos)
static ssize_t vhci_write(struct file *file,
const char __user *buf, size_t count, loff_t *pos)
static unsigned int vhci_poll(struct file *file, poll_table *wait)
static int vhci_open(struct inode *inode, struct file *file)
static int vhci_release(struct inode *inode, struct file *file)
static const struct file_operations vhci_fops = ;
static struct miscdevice vhci_miscdev= ;
static int __init vhci_init(void)
static void __exit vhci_exit(void)
module_init(vhci_init);
module_exit(vhci_exit);
MODULE_AUTHOR("Marcel Holtmann <marcel@holtmann.org>");
MODULE_DESCRIPTION("Bluetooth virtual HCI driver ver " VERSION);
MODULE_VERSION(VERSION);
MODULE_LICENSE("GPL");
