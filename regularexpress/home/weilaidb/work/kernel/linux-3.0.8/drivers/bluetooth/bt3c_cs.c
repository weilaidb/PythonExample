MODULE_AUTHOR("Marcel Holtmann <marcel@holtmann.org>");
MODULE_DESCRIPTION("Bluetooth driver for the 3Com Bluetooth PCMCIA card");
MODULE_LICENSE("GPL");
MODULE_FIRMWARE("BT3CPCC.bin");
typedef struct bt3c_info_t  bt3c_info_t;
static int bt3c_config(struct pcmcia_device *link);
static void bt3c_release(struct pcmcia_device *link);
static void bt3c_detach(struct pcmcia_device *p_dev);
#define XMIT_SENDING  1
#define XMIT_WAKEUP   2
#define XMIT_WAITING  8
#define RECV_WAIT_PACKET_TYPE   0
#define RECV_WAIT_EVENT_HEADER  1
#define RECV_WAIT_ACL_HEADER    2
#define RECV_WAIT_SCO_HEADER    3
#define RECV_WAIT_DATA          4
#define DATA_L   0
#define DATA_H   1
#define ADDR_L   2
#define ADDR_H   3
#define CONTROL  4
static inline void bt3c_address(unsigned int iobase, unsigned short addr)
static inline void bt3c_put(unsigned int iobase, unsigned short value)
static inline void bt3c_io_write(unsigned int iobase, unsigned short addr, unsigned short value)
static inline unsigned short bt3c_get(unsigned int iobase)
static inline unsigned short bt3c_read(unsigned int iobase, unsigned short addr)
static int bt3c_write(unsigned int iobase, int fifo_size, __u8 *buf, int len)
static void bt3c_write_wakeup(bt3c_info_t *info)
static void bt3c_receive(bt3c_info_t *info)
static irqreturn_t bt3c_interrupt(int irq, void *dev_inst)
static int bt3c_hci_flush(struct hci_dev *hdev)
static int bt3c_hci_open(struct hci_dev *hdev)
static int bt3c_hci_close(struct hci_dev *hdev)
static int bt3c_hci_send_frame(struct sk_buff *skb)
static void bt3c_hci_destruct(struct hci_dev *hdev)
static int bt3c_hci_ioctl(struct hci_dev *hdev, unsigned int cmd, unsigned long arg)
static int bt3c_load_firmware(bt3c_info_t *info, const unsigned char *firmware,
int count)
static int bt3c_open(bt3c_info_t *info)
static int bt3c_close(bt3c_info_t *info)
static int bt3c_probe(struct pcmcia_device *link)
static void bt3c_detach(struct pcmcia_device *link)
static int bt3c_check_config(struct pcmcia_device *p_dev, void *priv_data)
static int bt3c_check_config_notpicky(struct pcmcia_device *p_dev,
void *priv_data)
static int bt3c_config(struct pcmcia_device *link)
static void bt3c_release(struct pcmcia_device *link)
static const struct pcmcia_device_id bt3c_ids[] = ;
MODULE_DEVICE_TABLE(pcmcia, bt3c_ids);
static struct pcmcia_driver bt3c_driver = ;
static int __init init_bt3c_cs(void)
static void __exit exit_bt3c_cs(void)
module_init(init_bt3c_cs);
module_exit(exit_bt3c_cs);
