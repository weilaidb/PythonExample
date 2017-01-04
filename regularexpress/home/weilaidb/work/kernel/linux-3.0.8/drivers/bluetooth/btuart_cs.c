MODULE_AUTHOR("Marcel Holtmann <marcel@holtmann.org>");
MODULE_DESCRIPTION("Bluetooth driver for Bluetooth PCMCIA cards with HCI UART interface");
MODULE_LICENSE("GPL");
typedef struct btuart_info_t  btuart_info_t;
static int btuart_config(struct pcmcia_device *link);
static void btuart_release(struct pcmcia_device *link);
static void btuart_detach(struct pcmcia_device *p_dev);
#define SPEED_MAX  115200
#define DEFAULT_BAUD_RATE  115200
#define XMIT_SENDING	1
#define XMIT_WAKEUP	2
#define XMIT_WAITING	8
#define RECV_WAIT_PACKET_TYPE	0
#define RECV_WAIT_EVENT_HEADER	1
#define RECV_WAIT_ACL_HEADER	2
#define RECV_WAIT_SCO_HEADER	3
#define RECV_WAIT_DATA		4
static int btuart_write(unsigned int iobase, int fifo_size, __u8 *buf, int len)
static void btuart_write_wakeup(btuart_info_t *info)
static void btuart_receive(btuart_info_t *info)
static irqreturn_t btuart_interrupt(int irq, void *dev_inst)
static void btuart_change_speed(btuart_info_t *info, unsigned int speed)
static int btuart_hci_flush(struct hci_dev *hdev)
static int btuart_hci_open(struct hci_dev *hdev)
static int btuart_hci_close(struct hci_dev *hdev)
static int btuart_hci_send_frame(struct sk_buff *skb)
static void btuart_hci_destruct(struct hci_dev *hdev)
static int btuart_hci_ioctl(struct hci_dev *hdev, unsigned int cmd, unsigned long arg)
static int btuart_open(btuart_info_t *info)
static int btuart_close(btuart_info_t *info)
static int btuart_probe(struct pcmcia_device *link)
static void btuart_detach(struct pcmcia_device *link)
static int btuart_check_config(struct pcmcia_device *p_dev, void *priv_data)
static int btuart_check_config_notpicky(struct pcmcia_device *p_dev,
void *priv_data)
static int btuart_config(struct pcmcia_device *link)
static void btuart_release(struct pcmcia_device *link)
static const struct pcmcia_device_id btuart_ids[] = ;
MODULE_DEVICE_TABLE(pcmcia, btuart_ids);
static struct pcmcia_driver btuart_driver = ;
static int __init init_btuart_cs(void)
static void __exit exit_btuart_cs(void)
module_init(init_btuart_cs);
module_exit(exit_btuart_cs);
