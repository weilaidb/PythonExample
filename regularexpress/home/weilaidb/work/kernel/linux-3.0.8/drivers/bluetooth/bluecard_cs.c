MODULE_AUTHOR("Marcel Holtmann <marcel@holtmann.org>");
MODULE_DESCRIPTION("Bluetooth driver for the Anycom BlueCard (LSE039/LSE041)");
MODULE_LICENSE("GPL");
typedef struct bluecard_info_t  bluecard_info_t;
static int bluecard_config(struct pcmcia_device *link);
static void bluecard_release(struct pcmcia_device *link);
static void bluecard_detach(struct pcmcia_device *p_dev);
#define DEFAULT_BAUD_RATE  230400
#define CARD_READY             1
#define CARD_HAS_PCCARD_ID     4
#define CARD_HAS_POWER_LED     5
#define CARD_HAS_ACTIVITY_LED  6
#define XMIT_SENDING         1
#define XMIT_WAKEUP          2
#define XMIT_BUFFER_NUMBER   5
#define XMIT_BUF_ONE_READY   6
#define XMIT_BUF_TWO_READY   7
#define XMIT_SENDING_READY   8
#define RECV_WAIT_PACKET_TYPE   0
#define RECV_WAIT_EVENT_HEADER  1
#define RECV_WAIT_ACL_HEADER    2
#define RECV_WAIT_SCO_HEADER    3
#define RECV_WAIT_DATA          4
#define PKT_BAUD_RATE_57600   0x80
#define PKT_BAUD_RATE_115200  0x81
#define PKT_BAUD_RATE_230400  0x82
#define PKT_BAUD_RATE_460800  0x83
#define REG_COMMAND     0x20
#define REG_INTERRUPT   0x21
#define REG_CONTROL     0x22
#define REG_RX_CONTROL  0x24
#define REG_CARD_RESET  0x30
#define REG_LED_CTRL    0x30
#define REG_COMMAND_TX_BUF_ONE  0x01
#define REG_COMMAND_TX_BUF_TWO  0x02
#define REG_COMMAND_RX_BUF_ONE  0x04
#define REG_COMMAND_RX_BUF_TWO  0x08
#define REG_COMMAND_RX_WIN_ONE  0x00
#define REG_COMMAND_RX_WIN_TWO  0x10
#define REG_CONTROL_BAUD_RATE_57600   0x00
#define REG_CONTROL_BAUD_RATE_115200  0x01
#define REG_CONTROL_BAUD_RATE_230400  0x02
#define REG_CONTROL_BAUD_RATE_460800  0x03
#define REG_CONTROL_RTS               0x04
#define REG_CONTROL_BT_ON             0x08
#define REG_CONTROL_BT_RESET          0x10
#define REG_CONTROL_BT_RES_PU         0x20
#define REG_CONTROL_INTERRUPT         0x40
#define REG_CONTROL_CARD_RESET        0x80
#define RTS_LEVEL_SHIFT_BITS  0x02
static void bluecard_activity_led_timeout(u_long arg)
static void bluecard_enable_activity_led(bluecard_info_t *info)
static int bluecard_write(unsigned int iobase, unsigned int offset, __u8 *buf, int len)
static void bluecard_write_wakeup(bluecard_info_t *info)
static int bluecard_read(unsigned int iobase, unsigned int offset, __u8 *buf, int size)
static void bluecard_receive(bluecard_info_t *info, unsigned int offset)
static irqreturn_t bluecard_interrupt(int irq, void *dev_inst)
static int bluecard_hci_set_baud_rate(struct hci_dev *hdev, int baud)
static int bluecard_hci_flush(struct hci_dev *hdev)
static int bluecard_hci_open(struct hci_dev *hdev)
static int bluecard_hci_close(struct hci_dev *hdev)
static int bluecard_hci_send_frame(struct sk_buff *skb)
static void bluecard_hci_destruct(struct hci_dev *hdev)
static int bluecard_hci_ioctl(struct hci_dev *hdev, unsigned int cmd, unsigned long arg)
static int bluecard_open(bluecard_info_t *info)
static int bluecard_close(bluecard_info_t *info)
static int bluecard_probe(struct pcmcia_device *link)
static void bluecard_detach(struct pcmcia_device *link)
static int bluecard_config(struct pcmcia_device *link)
static void bluecard_release(struct pcmcia_device *link)
static const struct pcmcia_device_id bluecard_ids[] = ;
MODULE_DEVICE_TABLE(pcmcia, bluecard_ids);
static struct pcmcia_driver bluecard_driver = ;
static int __init init_bluecard_cs(void)
static void __exit exit_bluecard_cs(void)
module_init(init_bluecard_cs);
module_exit(exit_bluecard_cs);
