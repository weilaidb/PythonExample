#define VERSION "1.2"
struct h4_struct ;
#define H4_W4_PACKET_TYPE	0
#define H4_W4_EVENT_HDR		1
#define H4_W4_ACL_HDR		2
#define H4_W4_SCO_HDR		3
#define H4_W4_DATA		4
static int h4_open(struct hci_uart *hu)
static int h4_flush(struct hci_uart *hu)
static int h4_close(struct hci_uart *hu)
static int h4_enqueue(struct hci_uart *hu, struct sk_buff *skb)
static inline int h4_check_data_len(struct h4_struct *h4, int len)
static int h4_recv(struct hci_uart *hu, void *data, int count)
static struct sk_buff *h4_dequeue(struct hci_uart *hu)
static struct hci_uart_proto h4p = ;
int __init h4_init(void)
int __exit h4_deinit(void)
