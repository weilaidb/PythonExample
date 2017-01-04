#define VERSION "2.2"
static int reset = 0;
static struct hci_uart_proto *hup[HCI_UART_MAX_PROTO];
int hci_uart_register_proto(struct hci_uart_proto *p)
int hci_uart_unregister_proto(struct hci_uart_proto *p)
static struct hci_uart_proto *hci_uart_get_proto(unsigned int id)
static inline void hci_uart_tx_complete(struct hci_uart *hu, int pkt_type)
static inline struct sk_buff *hci_uart_dequeue(struct hci_uart *hu)
int hci_uart_tx_wakeup(struct hci_uart *hu)
static int hci_uart_open(struct hci_dev *hdev)
static int hci_uart_flush(struct hci_dev *hdev)
static int hci_uart_close(struct hci_dev *hdev)
static int hci_uart_send_frame(struct sk_buff *skb)
static void hci_uart_destruct(struct hci_dev *hdev)
static int hci_uart_tty_open(struct tty_struct *tty)
static void hci_uart_tty_close(struct tty_struct *tty)
static void hci_uart_tty_wakeup(struct tty_struct *tty)
static void hci_uart_tty_receive(struct tty_struct *tty, const u8 *data, char *flags, int count)
static int hci_uart_register_dev(struct hci_uart *hu)
static int hci_uart_set_proto(struct hci_uart *hu, int id)
static int hci_uart_tty_ioctl(struct tty_struct *tty, struct file * file,
unsigned int cmd, unsigned long arg)
static ssize_t hci_uart_tty_read(struct tty_struct *tty, struct file *file,
unsigned char __user *buf, size_t nr)
static ssize_t hci_uart_tty_write(struct tty_struct *tty, struct file *file,
const unsigned char *data, size_t count)
static unsigned int hci_uart_tty_poll(struct tty_struct *tty,
struct file *filp, poll_table *wait)
static int __init hci_uart_init(void)
static void __exit hci_uart_exit(void)
module_init(hci_uart_init);
module_exit(hci_uart_exit);
module_param(reset, bool, 0644);
MODULE_PARM_DESC(reset, "Send HCI reset command on initialization");
MODULE_AUTHOR("Marcel Holtmann <marcel@holtmann.org>");
MODULE_DESCRIPTION("Bluetooth HCI UART driver ver " VERSION);
MODULE_VERSION(VERSION);
MODULE_LICENSE("GPL");
MODULE_ALIAS_LDISC(N_HCI);
