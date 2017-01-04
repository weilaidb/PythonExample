static int ircomm_lmp_connect_request(struct ircomm_cb *self,
struct sk_buff *userdata,
struct ircomm_info *info)
static int ircomm_lmp_connect_response(struct ircomm_cb *self,
struct sk_buff *userdata)
static int ircomm_lmp_disconnect_request(struct ircomm_cb *self,
struct sk_buff *userdata,
struct ircomm_info *info)
static void ircomm_lmp_flow_control(struct sk_buff *skb)
static int ircomm_lmp_data_request(struct ircomm_cb *self,
struct sk_buff *skb,
int not_used)
static int ircomm_lmp_data_indication(void *instance, void *sap,
struct sk_buff *skb)
static void ircomm_lmp_connect_confirm(void *instance, void *sap,
struct qos_info *qos,
__u32 max_seg_size,
__u8 max_header_size,
struct sk_buff *skb)
static void ircomm_lmp_connect_indication(void *instance, void *sap,
struct qos_info *qos,
__u32 max_seg_size,
__u8 max_header_size,
struct sk_buff *skb)
static void ircomm_lmp_disconnect_indication(void *instance, void *sap,
LM_REASON reason,
struct sk_buff *skb)
int ircomm_open_lsap(struct ircomm_cb *self)
