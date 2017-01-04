HCI_TRANSPORT_HANDLE (*_HCI_TransportAttach)(void *HTCHandle, struct hci_transport_config_info *pInfo);
void (*_HCI_TransportDetach)(HCI_TRANSPORT_HANDLE HciTrans);
int    (*_HCI_TransportAddReceivePkts)(HCI_TRANSPORT_HANDLE HciTrans, struct htc_packet_queue *pQueue);
int    (*_HCI_TransportSendPkt)(HCI_TRANSPORT_HANDLE HciTrans, struct htc_packet *pPacket, bool Synchronous);
void        (*_HCI_TransportStop)(HCI_TRANSPORT_HANDLE HciTrans);
int    (*_HCI_TransportStart)(HCI_TRANSPORT_HANDLE HciTrans);
int    (*_HCI_TransportEnableDisableAsyncRecv)(HCI_TRANSPORT_HANDLE HciTrans, bool Enable);
int    (*_HCI_TransportRecvHCIEventSync)(HCI_TRANSPORT_HANDLE HciTrans,
struct htc_packet           *pPacket,
int                  MaxPollMS);
int    (*_HCI_TransportSetBaudRate)(HCI_TRANSPORT_HANDLE HciTrans, u32 Baud);
int    (*_HCI_TransportEnablePowerMgmt)(HCI_TRANSPORT_HANDLE HciTrans, bool Enable);
extern struct hci_transport_callbacks ar6kHciTransCallbacks;
int ar6000_register_hci_transport(struct hci_transport_callbacks *hciTransCallbacks)
int
ar6000_get_hif_dev(struct hif_device *device, void *config)
int ar6000_set_uart_config(struct hif_device *hifDevice,
u32 scale,
u32 step)
int ar6000_get_core_clock_config(struct hif_device *hifDevice, u32 *data)
EXPORT_SYMBOL(ar6000_register_hci_transport);
EXPORT_SYMBOL(ar6000_get_hif_dev);
EXPORT_SYMBOL(ar6000_set_uart_config);
EXPORT_SYMBOL(ar6000_get_core_clock_config);
EXPORT_SYMBOL(_HCI_TransportAttach);
EXPORT_SYMBOL(_HCI_TransportDetach);
EXPORT_SYMBOL(_HCI_TransportAddReceivePkts);
EXPORT_SYMBOL(_HCI_TransportSendPkt);
EXPORT_SYMBOL(_HCI_TransportStop);
EXPORT_SYMBOL(_HCI_TransportStart);
EXPORT_SYMBOL(_HCI_TransportEnableDisableAsyncRecv);
EXPORT_SYMBOL(_HCI_TransportRecvHCIEventSync);
EXPORT_SYMBOL(_HCI_TransportSetBaudRate);
EXPORT_SYMBOL(_HCI_TransportEnablePowerMgmt);
