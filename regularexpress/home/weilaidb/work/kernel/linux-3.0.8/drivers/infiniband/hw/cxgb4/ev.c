static void post_qp_event(struct c4iw_dev *dev, struct c4iw_cq *chp,
struct c4iw_qp *qhp,
struct t4_cqe *err_cqe,
enum ib_event_type ib_event)
void c4iw_ev_dispatch(struct c4iw_dev *dev, struct t4_cqe *err_cqe)
int c4iw_ev_handler(struct c4iw_dev *dev, u32 qid)
