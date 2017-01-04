#define N_HCI	15
#define HCIUARTSETPROTO		_IOW('U', 200, int)
#define HCIUARTGETPROTO		_IOR('U', 201, int)
#define HCIUARTGETDEVICE	_IOR('U', 202, int)
#define HCIUARTSETFLAGS		_IOW('U', 203, int)
#define HCIUARTGETFLAGS		_IOR('U', 204, int)
#define HCI_UART_MAX_PROTO	6
#define HCI_UART_H4	0
#define HCI_UART_BCSP	1
#define HCI_UART_3WIRE	2
#define HCI_UART_H4DS	3
#define HCI_UART_LL	4
#define HCI_UART_ATH3K	5
#define HCI_UART_RAW_DEVICE	0
struct hci_uart;
struct hci_uart_proto ;
struct hci_uart ;
#define HCI_UART_PROTO_SET	0
#define HCI_UART_SENDING	1
#define HCI_UART_TX_WAKEUP	2
int hci_uart_register_proto(struct hci_uart_proto *p);
int hci_uart_unregister_proto(struct hci_uart_proto *p);
int hci_uart_tx_wakeup(struct hci_uart *hu);
int h4_init(void);
int h4_deinit(void);
int bcsp_init(void);
int bcsp_deinit(void);
int ll_init(void);
int ll_deinit(void);
int ath_init(void);
int ath_deinit(void);
