void nr_output(struct sock *sk, struct sk_buff *skb)
static void nr_send_iframe(struct sock *sk, struct sk_buff *skb)
void nr_send_nak_frame(struct sock *sk)
void nr_kick(struct sock *sk)
void nr_transmit_buffer(struct sock *sk, struct sk_buff *skb)
void nr_establish_data_link(struct sock *sk)
void nr_enquiry_response(struct sock *sk)
void nr_check_iframes_acked(struct sock *sk, unsigned short nr)