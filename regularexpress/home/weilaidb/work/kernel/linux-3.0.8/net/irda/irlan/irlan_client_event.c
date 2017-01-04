static int irlan_client_state_idle (struct irlan_cb *self, IRLAN_EVENT event,
struct sk_buff *skb);
static int irlan_client_state_query(struct irlan_cb *self, IRLAN_EVENT event,
struct sk_buff *skb);
static int irlan_client_state_conn (struct irlan_cb *self, IRLAN_EVENT event,
struct sk_buff *skb);
static int irlan_client_state_info (struct irlan_cb *self, IRLAN_EVENT event,
struct sk_buff *skb);
static int irlan_client_state_media(struct irlan_cb *self, IRLAN_EVENT event,
struct sk_buff *skb);
static int irlan_client_state_open (struct irlan_cb *self, IRLAN_EVENT event,
struct sk_buff *skb);
static int irlan_client_state_wait (struct irlan_cb *self, IRLAN_EVENT event,
struct sk_buff *skb);
static int irlan_client_state_arb  (struct irlan_cb *self, IRLAN_EVENT event,
struct sk_buff *skb);
static int irlan_client_state_data (struct irlan_cb *self, IRLAN_EVENT event,
struct sk_buff *skb);
static int irlan_client_state_close(struct irlan_cb *self, IRLAN_EVENT event,
struct sk_buff *skb);
static int irlan_client_state_sync (struct irlan_cb *self, IRLAN_EVENT event,
struct sk_buff *skb);
static int (*state[])(struct irlan_cb *, IRLAN_EVENT event, struct sk_buff *) =
;
void irlan_do_client_event(struct irlan_cb *self, IRLAN_EVENT event,
struct sk_buff *skb)
static int irlan_client_state_idle(struct irlan_cb *self, IRLAN_EVENT event,
struct sk_buff *skb)
static int irlan_client_state_query(struct irlan_cb *self, IRLAN_EVENT event,
struct sk_buff *skb)
static int irlan_client_state_conn(struct irlan_cb *self, IRLAN_EVENT event,
struct sk_buff *skb)
static int irlan_client_state_info(struct irlan_cb *self, IRLAN_EVENT event,
struct sk_buff *skb)
static int irlan_client_state_media(struct irlan_cb *self, IRLAN_EVENT event,
struct sk_buff *skb)
static int irlan_client_state_open(struct irlan_cb *self, IRLAN_EVENT event,
struct sk_buff *skb)
static int irlan_client_state_wait(struct irlan_cb *self, IRLAN_EVENT event,
struct sk_buff *skb)
static int irlan_client_state_arb(struct irlan_cb *self, IRLAN_EVENT event,
struct sk_buff *skb)
static int irlan_client_state_data(struct irlan_cb *self, IRLAN_EVENT event,
struct sk_buff *skb)
static int irlan_client_state_close(struct irlan_cb *self, IRLAN_EVENT event,
struct sk_buff *skb)
static int irlan_client_state_sync(struct irlan_cb *self, IRLAN_EVENT event,
struct sk_buff *skb)
