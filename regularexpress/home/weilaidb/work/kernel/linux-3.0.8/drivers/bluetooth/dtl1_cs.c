MODULE_AUTHOR("Marcel Holtmann <marcel@holtmann.org>");
MODULE_DESCRIPTION("Bluetooth driver for Nokia Connectivity Card DTL-1");
MODULE_LICENSE("GPL");
typedef struct dtl1_info_t  dtl1_info_t;
static int dtl1_config(struct pcmcia_device *link);
static void dtl1_release(struct pcmcia_device *link);
static void dtl1_detach(struct pcmcia_device *p_dev);
#define XMIT_SENDING  1
#define XMIT_WAKEUP   2
#define XMIT_WAITING  8
#define RECV_WAIT_NSH   0
#define RECV_WAIT_DATA  1
typedef struct  __packed nsh_t;
#define NSHL  4
static int dtl1_write(unsigned int iobase, int fifo_size, __u8 *buf, int len)
static void dtl1_write_wakeup(dtl1_info_t *info)
static void dtl1_control(dtl1_info_t *info, struct sk_buff *skb)
static void dtl1_receive(dtl1_info_t *info)
static irqreturn_t dtl1_interrupt(int irq, void *dev_inst)
static int dtl1_hci_open(struct hci_dev *hdev)
static int dtl1_hci_flush(struct hci_dev *hdev)
static int dtl1_hci_close(struct hci_dev *hdev)
static int dtl1_hci_send_frame(struct sk_buff *skb)
static void dtl1_hci_destruct(struct hci_dev *hdev)
static int dtl1_hci_ioctl(struct hci_dev *hdev, unsigned int cmd,  unsigned long arg)
static int dtl1_open(dtl1_info_t *info)
static int dtl1_close(dtl1_info_t *info)
static int dtl1_probe(struct pcmcia_device *link)
static void dtl1_detach(struct pcmcia_device *link)
static int dtl1_confcheck(struct pcmcia_device *p_dev, void *priv_data)
static int dtl1_config(struct pcmcia_device *link)
static void dtl1_release(struct pcmcia_device *link)
static const struct pcmcia_device_id dtl1_ids[] = ;
MODULE_DEVICE_TABLE(pcmcia, dtl1_ids);
static struct pcmcia_driver dtl1_driver = ;
static int __init init_dtl1_cs(void)
static void __exit exit_dtl1_cs(void)
module_init(init_dtl1_cs);
module_exit(exit_dtl1_cs);
