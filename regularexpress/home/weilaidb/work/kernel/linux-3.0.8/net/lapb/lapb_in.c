static void lapb_state0_machine(struct lapb_cb *lapb, struct sk_buff *skb,
struct lapb_frame *frame)
static void lapb_state1_machine(struct lapb_cb *lapb, struct sk_buff *skb,
struct lapb_frame *frame)
static void lapb_state2_machine(struct lapb_cb *lapb, struct sk_buff *skb,
struct lapb_frame *frame)
static void lapb_state3_machine(struct lapb_cb *lapb, struct sk_buff *skb,
struct lapb_frame *frame)
static void lapb_state4_machine(struct lapb_cb *lapb, struct sk_buff *skb,
struct lapb_frame *frame)
void lapb_data_input(struct lapb_cb *lapb, struct sk_buff *skb)
