#define HCILL_GO_TO_SLEEP_IND	0x30
#define HCILL_GO_TO_SLEEP_ACK	0x31
#define HCILL_WAKE_UP_IND	0x32
#define HCILL_WAKE_UP_ACK	0x33
#define HCILL_W4_PACKET_TYPE	0
#define HCILL_W4_EVENT_HDR	1
#define HCILL_W4_ACL_HDR	2
#define HCILL_W4_SCO_HDR	3
#define HCILL_W4_DATA		4
enum hcill_states_e ;
struct hcill_cmd  __packed;
struct ll_struct ;
static int send_hcill_cmd(u8 cmd, struct hci_uart *hu)
static int ll_open(struct hci_uart *hu)
static int ll_flush(struct hci_uart *hu)
static int ll_close(struct hci_uart *hu)
static void __ll_do_awake(struct ll_struct *ll)
static void ll_device_want_to_wakeup(struct hci_uart *hu)
static void ll_device_want_to_sleep(struct hci_uart *hu)
static void ll_device_woke_up(struct hci_uart *hu)
static int ll_enqueue(struct hci_uart *hu, struct sk_buff *skb)
static inline int ll_check_data_len(struct ll_struct *ll, int len)
static int ll_recv(struct hci_uart *hu, void *data, int count)
static struct sk_buff *ll_dequeue(struct hci_uart *hu)
static struct hci_uart_proto llp = ;
int __init ll_init(void)
int __exit ll_deinit(void)
