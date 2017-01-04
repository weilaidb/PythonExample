void ipath_cq_enter(struct ipath_cq *cq, struct ib_wc *entry, int solicited)
int ipath_poll_cq(struct ib_cq *ibcq, int num_entries, struct ib_wc *entry)
static void send_complete(unsigned long data)
struct ib_cq *ipath_create_cq(struct ib_device *ibdev, int entries, int comp_vector,
struct ib_ucontext *context,
struct ib_udata *udata)
int ipath_destroy_cq(struct ib_cq *ibcq)
int ipath_req_notify_cq(struct ib_cq *ibcq, enum ib_cq_notify_flags notify_flags)
int ipath_resize_cq(struct ib_cq *ibcq, int cqe, struct ib_udata *udata)
