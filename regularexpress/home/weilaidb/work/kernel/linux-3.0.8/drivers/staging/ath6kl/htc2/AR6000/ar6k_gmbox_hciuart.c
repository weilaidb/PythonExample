#define HCI_UART_COMMAND_PKT 0x01
#define HCI_UART_ACL_PKT     0x02
#define HCI_UART_SCO_PKT     0x03
#define HCI_UART_EVENT_PKT   0x04
#define HCI_RECV_WAIT_BUFFERS (1 << 0)
#define HCI_SEND_WAIT_CREDITS (1 << 0)
#define HCI_UART_BRIDGE_CREDIT_SIZE     128
#define CREDIT_POLL_COUNT       256
#define HCI_DELAY_PER_INTERVAL_MS 10
#define BTON_TIMEOUT_MS           500
#define BTOFF_TIMEOUT_MS          500
#define BAUD_TIMEOUT_MS           1
#define BTPWRSAV_TIMEOUT_MS       1
struct gmbox_proto_hci_uart ;
#define LOCK_HCI_RX(t)   A_MUTEX_LOCK(&(t)->HCIRxLock);
#define UNLOCK_HCI_RX(t) A_MUTEX_UNLOCK(&(t)->HCIRxLock);
#define LOCK_HCI_TX(t)   A_MUTEX_LOCK(&(t)->HCITxLock);
#define UNLOCK_HCI_TX(t) A_MUTEX_UNLOCK(&(t)->HCITxLock);
#define DO_HCI_RECV_INDICATION(p, pt)				\
do  while (0)
#define DO_HCI_SEND_INDICATION(p,pt) \
static int HCITrySend(struct gmbox_proto_hci_uart *pProt, struct htc_packet *pPacket, bool Synchronous);
static void HCIUartCleanup(struct gmbox_proto_hci_uart *pProtocol)
static int InitTxCreditState(struct gmbox_proto_hci_uart *pProt)
static int CreditsAvailableCallback(void *pContext, int Credits, bool CreditIRQEnabled)
static INLINE void NotifyTransportFailure(struct gmbox_proto_hci_uart  *pProt, int status)
static void FailureCallback(void *pContext, int Status)
static void StateDumpCallback(void *pContext)
static int HCIUartMessagePending(void *pContext, u8 LookAheadBytes[], int ValidBytes)
static void HCISendPacketCompletion(void *Context, struct htc_packet *pPacket)
static int SeekCreditsSynch(struct gmbox_proto_hci_uart *pProt)
static int HCITrySend(struct gmbox_proto_hci_uart *pProt, struct htc_packet *pPacket, bool Synchronous)
static void FlushSendQueue(struct gmbox_proto_hci_uart *pProt)
static void FlushRecvBuffers(struct gmbox_proto_hci_uart *pProt)
int GMboxProtocolInstall(struct ar6k_device *pDev)
void GMboxProtocolUninstall(struct ar6k_device *pDev)
static int NotifyTransportReady(struct gmbox_proto_hci_uart  *pProt)
HCI_TRANSPORT_HANDLE HCI_TransportAttach(void *HTCHandle, struct hci_transport_config_info *pInfo)
void HCI_TransportDetach(HCI_TRANSPORT_HANDLE HciTrans)
int HCI_TransportAddReceivePkts(HCI_TRANSPORT_HANDLE HciTrans, struct htc_packet_queue *pQueue)
int HCI_TransportSendPkt(HCI_TRANSPORT_HANDLE HciTrans, struct htc_packet *pPacket, bool Synchronous)
void HCI_TransportStop(HCI_TRANSPORT_HANDLE HciTrans)
int HCI_TransportStart(HCI_TRANSPORT_HANDLE HciTrans)
int HCI_TransportEnableDisableAsyncRecv(HCI_TRANSPORT_HANDLE HciTrans, bool Enable)
int HCI_TransportRecvHCIEventSync(HCI_TRANSPORT_HANDLE HciTrans,
struct htc_packet           *pPacket,
int                  MaxPollMS)
#define LSB_SCRATCH_IDX     4
#define MSB_SCRATCH_IDX     5
int HCI_TransportSetBaudRate(HCI_TRANSPORT_HANDLE HciTrans, u32 Baud)
int HCI_TransportEnablePowerMgmt(HCI_TRANSPORT_HANDLE HciTrans, bool Enable)
