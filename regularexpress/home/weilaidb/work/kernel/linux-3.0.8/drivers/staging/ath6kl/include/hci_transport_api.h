#define _HCI_TRANSPORT_API_H_
typedef void *HCI_TRANSPORT_HANDLE;
typedef HTC_ENDPOINT_ID HCI_TRANSPORT_PACKET_TYPE;
#define HCI_COMMAND_TYPE   ENDPOINT_1
#define HCI_EVENT_TYPE     ENDPOINT_2
#define HCI_ACL_TYPE       ENDPOINT_3
#define HCI_PACKET_INVALID ENDPOINT_MAX
#define HCI_GET_PACKET_TYPE(pP)    (pP)->Endpoint
#define HCI_SET_PACKET_TYPE(pP,s)  (pP)->Endpoint = (s)
typedef void   (*HCI_TRANSPORT_SEND_PKT_COMPLETE)(void *, struct htc_packet *);
typedef void   (*HCI_TRANSPORT_RECV_PKT)(void *, struct htc_packet *);
typedef void   (*HCI_TRANSPORT_RECV_REFILL)(void *, HCI_TRANSPORT_PACKET_TYPE Type, int BuffersAvailable);
typedef struct htc_packet *(*HCI_TRANSPORT_RECV_ALLOC)(void *, HCI_TRANSPORT_PACKET_TYPE Type, int Length);
typedef enum _HCI_SEND_FULL_ACTION  HCI_SEND_FULL_ACTION;
typedef HCI_SEND_FULL_ACTION  (*HCI_TRANSPORT_SEND_FULL)(void *, struct htc_packet *);
struct hci_transport_properties ;
struct hci_transport_config_info ;
HCI_TRANSPORT_HANDLE HCI_TransportAttach(void *HTCHandle, struct hci_transport_config_info *pInfo);
void HCI_TransportDetach(HCI_TRANSPORT_HANDLE HciTrans);
int    HCI_TransportAddReceivePkts(HCI_TRANSPORT_HANDLE HciTrans, struct htc_packet_queue *pQueue);
int    HCI_TransportSendPkt(HCI_TRANSPORT_HANDLE HciTrans, struct htc_packet *pPacket, bool Synchronous);
void        HCI_TransportStop(HCI_TRANSPORT_HANDLE HciTrans);
int    HCI_TransportStart(HCI_TRANSPORT_HANDLE HciTrans);
int    HCI_TransportEnableDisableAsyncRecv(HCI_TRANSPORT_HANDLE HciTrans, bool Enable);
int    HCI_TransportRecvHCIEventSync(HCI_TRANSPORT_HANDLE HciTrans,
struct htc_packet           *pPacket,
int                  MaxPollMS);
int    HCI_TransportSetBaudRate(HCI_TRANSPORT_HANDLE HciTrans, u32 Baud);
int HCI_TransportEnablePowerMgmt(HCI_TRANSPORT_HANDLE HciTrans, bool Enable);
