static int nr_queue_rx_frame(struct sock *sk, struct sk_buff *skb, int more)
static int nr_state1_machine(struct sock *sk, struct sk_buff *skb,
int frametype)
static int nr_state2_machine(struct sock *sk, struct sk_buff *skb,
int frametype)
static int nr_state3_machine(struct sock *sk, struct sk_buff *skb, int frametype)
int nr_process_rx_frame(struct sock *sk, struct sk_buff *skb)
