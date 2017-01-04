static int ircomm_state_idle(struct ircomm_cb *self, IRCOMM_EVENT event,
struct sk_buff *skb, struct ircomm_info *info);
static int ircomm_state_waiti(struct ircomm_cb *self, IRCOMM_EVENT event,
struct sk_buff *skb, struct ircomm_info *info);
static int ircomm_state_waitr(struct ircomm_cb *self, IRCOMM_EVENT event,
struct sk_buff *skb, struct ircomm_info *info);
static int ircomm_state_conn(struct ircomm_cb *self, IRCOMM_EVENT event,
struct sk_buff *skb, struct ircomm_info *info);
const char *const ircomm_state[] = ;
static const char *const ircomm_event[] = ;
static int (*state[])(struct ircomm_cb *self, IRCOMM_EVENT event,
struct sk_buff *skb, struct ircomm_info *info) =
;
static int ircomm_state_idle(struct ircomm_cb *self, IRCOMM_EVENT event,
struct sk_buff *skb, struct ircomm_info *info)
static int ircomm_state_waiti(struct ircomm_cb *self, IRCOMM_EVENT event,
struct sk_buff *skb, struct ircomm_info *info)
static int ircomm_state_waitr(struct ircomm_cb *self, IRCOMM_EVENT event,
struct sk_buff *skb, struct ircomm_info *info)
static int ircomm_state_conn(struct ircomm_cb *self, IRCOMM_EVENT event,
struct sk_buff *skb, struct ircomm_info *info)
int ircomm_do_event(struct ircomm_cb *self, IRCOMM_EVENT event,
struct sk_buff *skb, struct ircomm_info *info)
void ircomm_next_state(struct ircomm_cb *self, IRCOMM_STATE state)
