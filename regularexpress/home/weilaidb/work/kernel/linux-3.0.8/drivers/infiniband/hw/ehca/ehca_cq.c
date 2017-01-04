static struct kmem_cache *cq_cache;
int ehca_cq_assign_qp(struct ehca_cq *cq, struct ehca_qp *qp)
int ehca_cq_unassign_qp(struct ehca_cq *cq, unsigned int real_qp_num)
struct ehca_qp *ehca_cq_get_qp(struct ehca_cq *cq, int real_qp_num)
struct ib_cq *ehca_create_cq(struct ib_device *device, int cqe, int comp_vector,
struct ib_ucontext *context,
struct ib_udata *udata)
int ehca_destroy_cq(struct ib_cq *cq)
int ehca_resize_cq(struct ib_cq *cq, int cqe, struct ib_udata *udata)
int ehca_init_cq_cache(void)
void ehca_cleanup_cq_cache(void)
