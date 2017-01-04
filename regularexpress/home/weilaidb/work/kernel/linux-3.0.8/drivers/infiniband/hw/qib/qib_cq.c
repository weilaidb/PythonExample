void qib_cq_enter(struct qib_cq *cq, struct ib_wc *entry, int solicited)
int qib_poll_cq(struct ib_cq *ibcq, int num_entries, struct ib_wc *entry)
static void send_complete(struct work_struct *work)
struct ib_cq *qib_create_cq(struct ib_device *ibdev, int entries,
int comp_vector, struct ib_ucontext *context,
struct ib_udata *udata)
int qib_destroy_cq(struct ib_cq *ibcq)
int qib_req_notify_cq(struct ib_cq *ibcq, enum ib_cq_notify_flags notify_flags)
int qib_resize_cq(struct ib_cq *ibcq, int cqe, struct ib_udata *udata)
