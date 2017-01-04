static void post_qp_event(struct iwch_dev *rnicp, struct iwch_cq *chp,
struct respQ_msg_t *rsp_msg,
enum ib_event_type ib_event,
int send_term)
void iwch_ev_dispatch(struct cxio_rdev *rdev_p, struct sk_buff *skb)
