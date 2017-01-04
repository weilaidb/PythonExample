struct inet_timewait_death_row dccp_death_row = ;
EXPORT_SYMBOL_GPL(dccp_death_row);
void dccp_time_wait(struct sock *sk, int state, int timeo)
struct sock *dccp_create_openreq_child(struct sock *sk,
const struct request_sock *req,
const struct sk_buff *skb)
EXPORT_SYMBOL_GPL(dccp_create_openreq_child);
struct sock *dccp_check_req(struct sock *sk, struct sk_buff *skb,
struct request_sock *req,
struct request_sock **prev)
EXPORT_SYMBOL_GPL(dccp_check_req);
int dccp_child_process(struct sock *parent, struct sock *child,
struct sk_buff *skb)
EXPORT_SYMBOL_GPL(dccp_child_process);
void dccp_reqsk_send_ack(struct sock *sk, struct sk_buff *skb,
struct request_sock *rsk)
EXPORT_SYMBOL_GPL(dccp_reqsk_send_ack);
int dccp_reqsk_init(struct request_sock *req,
struct dccp_sock const *dp, struct sk_buff const *skb)
EXPORT_SYMBOL_GPL(dccp_reqsk_init);
