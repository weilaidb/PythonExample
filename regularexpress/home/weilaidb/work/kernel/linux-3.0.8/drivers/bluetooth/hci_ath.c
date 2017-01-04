struct ath_struct ;
static int ath_wakeup_ar3k(struct tty_struct *tty)
static void ath_hci_uart_work(struct work_struct *work)
static int ath_open(struct hci_uart *hu)
static int ath_flush(struct hci_uart *hu)
static int ath_close(struct hci_uart *hu)
#define HCI_OP_ATH_SLEEP 0xFC04
static int ath_enqueue(struct hci_uart *hu, struct sk_buff *skb)
static struct sk_buff *ath_dequeue(struct hci_uart *hu)
static int ath_recv(struct hci_uart *hu, void *data, int count)
static struct hci_uart_proto athp = ;
int __init ath_init(void)
int __exit ath_deinit(void)
