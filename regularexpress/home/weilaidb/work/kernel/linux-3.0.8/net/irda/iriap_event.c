static void state_s_disconnect   (struct iriap_cb *self, IRIAP_EVENT event,
struct sk_buff *skb);
static void state_s_connecting   (struct iriap_cb *self, IRIAP_EVENT event,
struct sk_buff *skb);
static void state_s_call         (struct iriap_cb *self, IRIAP_EVENT event,
struct sk_buff *skb);
static void state_s_make_call    (struct iriap_cb *self, IRIAP_EVENT event,
struct sk_buff *skb);
static void state_s_calling      (struct iriap_cb *self, IRIAP_EVENT event,
struct sk_buff *skb);
static void state_s_outstanding  (struct iriap_cb *self, IRIAP_EVENT event,
struct sk_buff *skb);
static void state_s_replying     (struct iriap_cb *self, IRIAP_EVENT event,
struct sk_buff *skb);
static void state_s_wait_for_call(struct iriap_cb *self, IRIAP_EVENT event,
struct sk_buff *skb);
static void state_s_wait_active  (struct iriap_cb *self, IRIAP_EVENT event,
struct sk_buff *skb);
static void state_r_disconnect   (struct iriap_cb *self, IRIAP_EVENT event,
struct sk_buff *skb);
static void state_r_call         (struct iriap_cb *self, IRIAP_EVENT event,
struct sk_buff *skb);
static void state_r_waiting      (struct iriap_cb *self, IRIAP_EVENT event,
struct sk_buff *skb);
static void state_r_wait_active  (struct iriap_cb *self, IRIAP_EVENT event,
struct sk_buff *skb);
static void state_r_receiving    (struct iriap_cb *self, IRIAP_EVENT event,
struct sk_buff *skb);
static void state_r_execute      (struct iriap_cb *self, IRIAP_EVENT event,
struct sk_buff *skb);
static void state_r_returning    (struct iriap_cb *self, IRIAP_EVENT event,
struct sk_buff *skb);
static void (*iriap_state[])(struct iriap_cb *self, IRIAP_EVENT event,
struct sk_buff *skb) = ;
void iriap_next_client_state(struct iriap_cb *self, IRIAP_STATE state)
void iriap_next_call_state(struct iriap_cb *self, IRIAP_STATE state)
void iriap_next_server_state(struct iriap_cb *self, IRIAP_STATE state)
void iriap_next_r_connect_state(struct iriap_cb *self, IRIAP_STATE state)
void iriap_do_client_event(struct iriap_cb *self, IRIAP_EVENT event,
struct sk_buff *skb)
void iriap_do_call_event(struct iriap_cb *self, IRIAP_EVENT event,
struct sk_buff *skb)
void iriap_do_server_event(struct iriap_cb *self, IRIAP_EVENT event,
struct sk_buff *skb)
void iriap_do_r_connect_event(struct iriap_cb *self, IRIAP_EVENT event,
struct sk_buff *skb)
static void state_s_disconnect(struct iriap_cb *self, IRIAP_EVENT event,
struct sk_buff *skb)
static void state_s_connecting(struct iriap_cb *self, IRIAP_EVENT event,
struct sk_buff *skb)
static void state_s_call(struct iriap_cb *self, IRIAP_EVENT event,
struct sk_buff *skb)
static void state_s_make_call(struct iriap_cb *self, IRIAP_EVENT event,
struct sk_buff *skb)
static void state_s_calling(struct iriap_cb *self, IRIAP_EVENT event,
struct sk_buff *skb)
static void state_s_outstanding(struct iriap_cb *self, IRIAP_EVENT event,
struct sk_buff *skb)
static void state_s_replying(struct iriap_cb *self, IRIAP_EVENT event,
struct sk_buff *skb)
static void state_s_wait_for_call(struct iriap_cb *self, IRIAP_EVENT event,
struct sk_buff *skb)
static void state_s_wait_active(struct iriap_cb *self, IRIAP_EVENT event,
struct sk_buff *skb)
static void state_r_disconnect(struct iriap_cb *self, IRIAP_EVENT event,
struct sk_buff *skb)
static void state_r_call(struct iriap_cb *self, IRIAP_EVENT event,
struct sk_buff *skb)
static void state_r_waiting(struct iriap_cb *self, IRIAP_EVENT event,
struct sk_buff *skb)
static void state_r_wait_active(struct iriap_cb *self, IRIAP_EVENT event,
struct sk_buff *skb)
static void state_r_receiving(struct iriap_cb *self, IRIAP_EVENT event,
struct sk_buff *skb)
static void state_r_execute(struct iriap_cb *self, IRIAP_EVENT event,
struct sk_buff *skb)
static void state_r_returning(struct iriap_cb *self, IRIAP_EVENT event,
struct sk_buff *skb)
