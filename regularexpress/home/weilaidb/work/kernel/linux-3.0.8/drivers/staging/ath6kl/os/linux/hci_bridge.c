#define  ATH_DEBUG_HCI_BRIDGE    ATH_DEBUG_MAKE_MODULE_MASK(6)
#define  ATH_DEBUG_HCI_RECV      ATH_DEBUG_MAKE_MODULE_MASK(7)
#define  ATH_DEBUG_HCI_SEND      ATH_DEBUG_MAKE_MODULE_MASK(8)
#define  ATH_DEBUG_HCI_DUMP      ATH_DEBUG_MAKE_MODULE_MASK(9)
#if defined(CONFIG_BT_MODULE) || defined(CONFIG_BT)
#define CONFIG_BLUEZ_HCI_BRIDGE
unsigned int ar3khcibaud = 0;
unsigned int hciuartscale = 0;
unsigned int hciuartstep = 0;
module_param(ar3khcibaud, int, 0644);
module_param(hciuartscale, int, 0644);
module_param(hciuartstep, int, 0644);
extern unsigned int ar3khcibaud;
extern unsigned int hciuartscale;
extern unsigned int hciuartstep;
struct ar6k_hci_bridge_info ;
#define MAX_ACL_RECV_BUFS           16
#define MAX_EVT_RECV_BUFS           8
#define MAX_HCI_WRITE_QUEUE_DEPTH   32
#define MAX_ACL_RECV_LENGTH         1200
#define MAX_EVT_RECV_LENGTH         257
#define TX_PACKET_RSV_OFFSET        32
#define NUM_HTC_PACKET_STRUCTS     ((MAX_ACL_RECV_BUFS + MAX_EVT_RECV_BUFS + MAX_HCI_WRITE_QUEUE_DEPTH) * 2)
#define HCI_GET_OP_CODE(p)          (((u16)((p)[1])) << 8) | ((u16)((p)[0]))
extern unsigned int setupbtdev;
struct ar3k_config_info      ar3kconfig;
struct ar6k_hci_bridge_info *g_pHcidevInfo;
static int bt_setup_hci(struct ar6k_hci_bridge_info *pHcidevInfo);
static void     bt_cleanup_hci(struct ar6k_hci_bridge_info *pHcidevInfo);
static int bt_register_hci(struct ar6k_hci_bridge_info *pHcidevInfo);
static bool   bt_indicate_recv(struct ar6k_hci_bridge_info      *pHcidevInfo,
HCI_TRANSPORT_PACKET_TYPE Type,
struct sk_buff            *skb);
static struct sk_buff *bt_alloc_buffer(struct ar6k_hci_bridge_info *pHcidevInfo, int Length);
static void     bt_free_buffer(struct ar6k_hci_bridge_info *pHcidevInfo, struct sk_buff *skb);
int ar6000_setup_hci(void *ar);
void     ar6000_cleanup_hci(void *ar);
int hci_test_send(void *ar, struct sk_buff *skb);
int ar6000_setup_hci(struct ar6_softc *ar);
void     ar6000_cleanup_hci(struct ar6_softc *ar);
int hci_test_send(struct ar6_softc *ar, struct sk_buff *skb);
#define LOCK_BRIDGE(dev)   spin_lock_bh(&(dev)->BridgeLock)
#define UNLOCK_BRIDGE(dev) spin_unlock_bh(&(dev)->BridgeLock)
static inline void FreeBtOsBuf(struct ar6k_hci_bridge_info *pHcidevInfo, void *osbuf)
static void FreeHTCStruct(struct ar6k_hci_bridge_info *pHcidevInfo, struct htc_packet *pPacket)
static struct htc_packet * AllocHTCStruct(struct ar6k_hci_bridge_info *pHcidevInfo)
#define BLOCK_ROUND_UP_PWR2(x, align)    (((int) (x) + ((align)-1)) & ~((align)-1))
static void RefillRecvBuffers(struct ar6k_hci_bridge_info      *pHcidevInfo,
HCI_TRANSPORT_PACKET_TYPE Type,
int                       NumBuffers)
#define HOST_INTEREST_ITEM_ADDRESS(ar, item) \
(((ar)->arTargetType == TARGET_TYPE_AR6002) ? AR6002_HOST_INTEREST_ITEM_ADDRESS(item) : \
(((ar)->arTargetType == TARGET_TYPE_AR6003) ? AR6003_HOST_INTEREST_ITEM_ADDRESS(item) : 0))
static int ar6000_hci_transport_ready(HCI_TRANSPORT_HANDLE     HCIHandle,
struct hci_transport_properties *pProps,
void                     *pContext)
static void ar6000_hci_transport_failure(void *pContext, int Status)
static void ar6000_hci_transport_removed(void *pContext)
static void ar6000_hci_send_complete(void *pContext, struct htc_packet *pPacket)
static void ar6000_hci_pkt_recv(void *pContext, struct htc_packet *pPacket)
{
struct ar6k_hci_bridge_info *pHcidevInfo = (struct ar6k_hci_bridge_info *)pContext;
struct sk_buff       *skb;
A_ASSERT(pHcidevInfo != NULL);
skb = (struct sk_buff *)pPacket->pPktContext;
A_ASSERT(skb != NULL);
do
static void  ar6000_hci_pkt_refill(void *pContext, HCI_TRANSPORT_PACKET_TYPE Type, int BuffersAvailable)
static HCI_SEND_FULL_ACTION  ar6000_hci_pkt_send_full(void *pContext, struct htc_packet *pPacket)
int ar6000_setup_hci(void *ar)
int ar6000_setup_hci(struct ar6_softc *ar)
void  ar6000_cleanup_hci(void *ar)
void  ar6000_cleanup_hci(struct ar6_softc *ar)
int hci_test_send(void *ar, struct sk_buff *skb)
int hci_test_send(struct ar6_softc *ar, struct sk_buff *skb)
void ar6000_set_default_ar3kconfig(struct ar6_softc *ar, void *ar3kconfig)
static int bt_open(struct hci_dev *hdev)
static int bt_close(struct hci_dev *hdev)
static int bt_send_frame(struct sk_buff *skb)
static int bt_ioctl(struct hci_dev *hdev, unsigned int cmd, unsigned long arg)
static int bt_flush(struct hci_dev *hdev)
static void bt_destruct(struct hci_dev *hdev)
static int bt_setup_hci(struct ar6k_hci_bridge_info *pHcidevInfo)
static void bt_cleanup_hci(struct ar6k_hci_bridge_info *pHcidevInfo)
static int bt_register_hci(struct ar6k_hci_bridge_info *pHcidevInfo)
static bool bt_indicate_recv(struct ar6k_hci_bridge_info      *pHcidevInfo,
HCI_TRANSPORT_PACKET_TYPE Type,
struct                    sk_buff *skb)
static struct sk_buff* bt_alloc_buffer(struct ar6k_hci_bridge_info *pHcidevInfo, int Length)
static void bt_free_buffer(struct ar6k_hci_bridge_info *pHcidevInfo, struct sk_buff *skb)
static int bt_setup_hci(struct ar6k_hci_bridge_info *pHcidevInfo)
static void bt_cleanup_hci(struct ar6k_hci_bridge_info *pHcidevInfo)
static int bt_register_hci(struct ar6k_hci_bridge_info *pHcidevInfo)
static bool bt_indicate_recv(struct ar6k_hci_bridge_info      *pHcidevInfo,
HCI_TRANSPORT_PACKET_TYPE Type,
struct                    sk_buff *skb)
static struct sk_buff* bt_alloc_buffer(struct ar6k_hci_bridge_info *pHcidevInfo, int Length)
static void bt_free_buffer(struct ar6k_hci_bridge_info *pHcidevInfo, struct sk_buff *skb)
int ar6000_setup_hci(void *ar)
int ar6000_setup_hci(struct ar6_softc *ar)
void ar6000_cleanup_hci(void *ar)
void ar6000_cleanup_hci(struct ar6_softc *ar)
void ar6000_set_default_ar3kconfig(struct ar6_softc *ar, void *ar3kconfig)
int hci_test_send(void *ar, struct sk_buff *skb)
int hci_test_send(struct ar6_softc *ar, struct sk_buff *skb)
static int __init
hcibridge_init_module(void)
static void __exit
hcibridge_cleanup_module(void)
module_init(hcibridge_init_module);
module_exit(hcibridge_cleanup_module);
MODULE_LICENSE("Dual BSD/GPL");
