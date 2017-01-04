#undef CONFIG_IRLAN_GRATUITOUS_ARP
static void irlan_client_ctrl_disconnect_indication(void *instance, void *sap,
LM_REASON reason,
struct sk_buff *);
static int irlan_client_ctrl_data_indication(void *instance, void *sap,
struct sk_buff *skb);
static void irlan_client_ctrl_connect_confirm(void *instance, void *sap,
struct qos_info *qos,
__u32 max_sdu_size,
__u8 max_header_size,
struct sk_buff *);
static void irlan_check_response_param(struct irlan_cb *self, char *param,
char *value, int val_len);
static void irlan_client_open_ctrl_tsap(struct irlan_cb *self);
static void irlan_client_kick_timer_expired(void *data)
static void irlan_client_start_kick_timer(struct irlan_cb *self, int timeout)
void irlan_client_wakeup(struct irlan_cb *self, __u32 saddr, __u32 daddr)
void irlan_client_discovery_indication(discinfo_t *discovery,
DISCOVERY_MODE mode,
void *priv)
static int irlan_client_ctrl_data_indication(void *instance, void *sap,
struct sk_buff *skb)
static void irlan_client_ctrl_disconnect_indication(void *instance, void *sap,
LM_REASON reason,
struct sk_buff *userdata)
static void irlan_client_open_ctrl_tsap(struct irlan_cb *self)
static void irlan_client_ctrl_connect_confirm(void *instance, void *sap,
struct qos_info *qos,
__u32 max_sdu_size,
__u8 max_header_size,
struct sk_buff *skb)
static void print_ret_code(__u8 code)
void irlan_client_parse_response(struct irlan_cb *self, struct sk_buff *skb)
static void irlan_check_response_param(struct irlan_cb *self, char *param,
char *value, int val_len)
void irlan_client_get_value_confirm(int result, __u16 obj_id,
struct ias_value *value, void *priv)
