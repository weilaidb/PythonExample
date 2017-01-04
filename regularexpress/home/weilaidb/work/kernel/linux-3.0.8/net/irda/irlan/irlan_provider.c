static void irlan_provider_connect_indication(void *instance, void *sap,
struct qos_info *qos,
__u32 max_sdu_size,
__u8 max_header_size,
struct sk_buff *skb);
static int irlan_provider_data_indication(void *instance, void *sap,
struct sk_buff *skb)
static void irlan_provider_connect_indication(void *instance, void *sap,
struct qos_info *qos,
__u32 max_sdu_size,
__u8 max_header_size,
struct sk_buff *skb)
void irlan_provider_connect_response(struct irlan_cb *self,
struct tsap_cb *tsap)
static void irlan_provider_disconnect_indication(void *instance, void *sap,
LM_REASON reason,
struct sk_buff *userdata)
int irlan_parse_open_data_cmd(struct irlan_cb *self, struct sk_buff *skb)
int irlan_provider_parse_command(struct irlan_cb *self, int cmd,
struct sk_buff *skb)
void irlan_provider_send_reply(struct irlan_cb *self, int command,
int ret_code)
int irlan_provider_open_ctrl_tsap(struct irlan_cb *self)
