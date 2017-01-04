#define IRLAN_SERVER_H
void irlan_provider_ctrl_disconnect_indication(void *instance, void *sap,
LM_REASON reason,
struct sk_buff *skb);
void irlan_provider_connect_response(struct irlan_cb *, struct tsap_cb *);
int irlan_parse_open_data_cmd(struct irlan_cb *self, struct sk_buff *skb);
int irlan_provider_parse_command(struct irlan_cb *self, int cmd,
struct sk_buff *skb);
void irlan_provider_send_reply(struct irlan_cb *self, int command,
int ret_code);
int irlan_provider_open_ctrl_tsap(struct irlan_cb *self);
