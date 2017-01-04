#define VERSION "0.3"
static int txcrc = 1;
static int hciextn = 1;
#define BCSP_TXWINSIZE	4
#define BCSP_ACK_PKT	0x05
#define BCSP_LE_PKT	0x06
struct bcsp_struct ;
static const u16 crc_table[] = ;
#define BCSP_CRC_INIT(x) x = 0xffff
static void bcsp_crc_update(u16 *crc, u8 d)
static void bcsp_slip_msgdelim(struct sk_buff *skb)
static void bcsp_slip_one_byte(struct sk_buff *skb, u8 c)
static int bcsp_enqueue(struct hci_uart *hu, struct sk_buff *skb)
static struct sk_buff *bcsp_prepare_pkt(struct bcsp_struct *bcsp, u8 *data,
int len, int pkt_type)
static struct sk_buff *bcsp_dequeue(struct hci_uart *hu)
static int bcsp_flush(struct hci_uart *hu)
static void bcsp_pkt_cull(struct bcsp_struct *bcsp)
static void bcsp_handle_le_pkt(struct hci_uart *hu)
static inline void bcsp_unslip_one_byte(struct bcsp_struct *bcsp, unsigned char byte)
static void bcsp_complete_rx_pkt(struct hci_uart *hu)
static u16 bscp_get_crc(struct bcsp_struct *bcsp)
static int bcsp_recv(struct hci_uart *hu, void *data, int count)
static void bcsp_timed_event(unsigned long arg)
static int bcsp_open(struct hci_uart *hu)
static int bcsp_close(struct hci_uart *hu)
static struct hci_uart_proto bcsp = ;
int __init bcsp_init(void)
int __exit bcsp_deinit(void)
module_param(txcrc, bool, 0644);
MODULE_PARM_DESC(txcrc, "Transmit CRC with every BCSP packet");
module_param(hciextn, bool, 0644);
MODULE_PARM_DESC(hciextn, "Convert HCI Extensions into BCSP packets");
