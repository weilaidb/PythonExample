static int irlan_provider_state_idle(struct irlan_cb *self, IRLAN_EVENT event,
struct sk_buff *skb);
static int irlan_provider_state_info(struct irlan_cb *self, IRLAN_EVENT event,
struct sk_buff *skb);
static int irlan_provider_state_open(struct irlan_cb *self, IRLAN_EVENT event,
struct sk_buff *skb);
static int irlan_provider_state_data(struct irlan_cb *self, IRLAN_EVENT event,
struct sk_buff *skb);
static int (*state[])(struct irlan_cb *self, IRLAN_EVENT event,
struct sk_buff *skb) =
;
void irlan_do_provider_event(struct irlan_cb *self, IRLAN_EVENT event,
struct sk_buff *skb)
static int irlan_provider_state_idle(struct irlan_cb *self, IRLAN_EVENT event,
struct sk_buff *skb)
static int irlan_provider_state_info(struct irlan_cb *self, IRLAN_EVENT event,
struct sk_buff *skb)
static int irlan_provider_state_open(struct irlan_cb *self, IRLAN_EVENT event,
struct sk_buff *skb)
static int irlan_provider_state_data(struct irlan_cb *self, IRLAN_EVENT event,
struct sk_buff *skb)
