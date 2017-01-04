int ipath_post_srq_receive(struct ib_srq *ibsrq, struct ib_recv_wr *wr,
struct ib_recv_wr **bad_wr)
struct ib_srq *ipath_create_srq(struct ib_pd *ibpd,
struct ib_srq_init_attr *srq_init_attr,
struct ib_udata *udata)
int ipath_modify_srq(struct ib_srq *ibsrq, struct ib_srq_attr *attr,
enum ib_srq_attr_mask attr_mask,
struct ib_udata *udata)
int ipath_query_srq(struct ib_srq *ibsrq, struct ib_srq_attr *attr)
int ipath_destroy_srq(struct ib_srq *ibsrq)
