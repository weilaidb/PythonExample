static void *get_wqe(struct mlx4_ib_srq *srq, int n)
static void mlx4_ib_srq_event(struct mlx4_srq *srq, enum mlx4_event type)
struct ib_srq *mlx4_ib_create_srq(struct ib_pd *pd,
struct ib_srq_init_attr *init_attr,
struct ib_udata *udata)
int mlx4_ib_modify_srq(struct ib_srq *ibsrq, struct ib_srq_attr *attr,
enum ib_srq_attr_mask attr_mask, struct ib_udata *udata)
int mlx4_ib_query_srq(struct ib_srq *ibsrq, struct ib_srq_attr *srq_attr)
int mlx4_ib_destroy_srq(struct ib_srq *srq)
void mlx4_ib_free_srq_wqe(struct mlx4_ib_srq *srq, int wqe_index)
int mlx4_ib_post_srq_recv(struct ib_srq *ibsrq, struct ib_recv_wr *wr,
struct ib_recv_wr **bad_wr)
