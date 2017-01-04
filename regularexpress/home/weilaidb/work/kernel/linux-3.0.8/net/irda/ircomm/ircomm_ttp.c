static int ircomm_ttp_data_indication(void *instance, void *sap,
struct sk_buff *skb);
static void ircomm_ttp_connect_confirm(void *instance, void *sap,
struct qos_info *qos,
__u32 max_sdu_size,
__u8 max_header_size,
struct sk_buff *skb);
static void ircomm_ttp_connect_indication(void *instance, void *sap,
struct qos_info *qos,
__u32 max_sdu_size,
__u8 max_header_size,
struct sk_buff *skb);
static void ircomm_ttp_flow_indication(void *instance, void *sap,
LOCAL_FLOW cmd);
static void ircomm_ttp_disconnect_indication(void *instance, void *sap,
LM_REASON reason,
struct sk_buff *skb);
static int ircomm_ttp_data_request(struct ircomm_cb *self,
struct sk_buff *skb,
int clen);
static int ircomm_ttp_connect_request(struct ircomm_cb *self,
struct sk_buff *userdata,
struct ircomm_info *info);
static int ircomm_ttp_connect_response(struct ircomm_cb *self,
struct sk_buff *userdata);
static int ircomm_ttp_disconnect_request(struct ircomm_cb *self,
struct sk_buff *userdata,
struct ircomm_info *info);
int ircomm_open_tsap(struct ircomm_cb *self)
static int ircomm_ttp_connect_request(struct ircomm_cb *self,
struct sk_buff *userdata,
struct ircomm_info *info)
static int ircomm_ttp_connect_response(struct ircomm_cb *self,
struct sk_buff *userdata)
static int ircomm_ttp_data_request(struct ircomm_cb *self,
struct sk_buff *skb,
int clen)
static int ircomm_ttp_data_indication(void *instance, void *sap,
struct sk_buff *skb)
static void ircomm_ttp_connect_confirm(void *instance, void *sap,
struct qos_info *qos,
__u32 max_sdu_size,
__u8 max_header_size,
struct sk_buff *skb)
static void ircomm_ttp_connect_indication(void *instance, void *sap,
struct qos_info *qos,
__u32 max_sdu_size,
__u8 max_header_size,
struct sk_buff *skb)
static int ircomm_ttp_disconnect_request(struct ircomm_cb *self,
struct sk_buff *userdata,
struct ircomm_info *info)
static void ircomm_ttp_disconnect_indication(void *instance, void *sap,
LM_REASON reason,
struct sk_buff *skb)
static void ircomm_ttp_flow_indication(void *instance, void *sap,
LOCAL_FLOW cmd)
