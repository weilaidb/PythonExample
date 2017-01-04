enum ;
struct mthca_tavor_srq_context ;
struct mthca_arbel_srq_context ;
static void *get_wqe(struct mthca_srq *srq, int n)
static inline int *wqe_to_link(void *wqe)
static void mthca_tavor_init_srq_context(struct mthca_dev *dev,
struct mthca_pd *pd,
struct mthca_srq *srq,
struct mthca_tavor_srq_context *context)
static void mthca_arbel_init_srq_context(struct mthca_dev *dev,
struct mthca_pd *pd,
struct mthca_srq *srq,
struct mthca_arbel_srq_context *context)
static void mthca_free_srq_buf(struct mthca_dev *dev, struct mthca_srq *srq)
static int mthca_alloc_srq_buf(struct mthca_dev *dev, struct mthca_pd *pd,
struct mthca_srq *srq)
int mthca_alloc_srq(struct mthca_dev *dev, struct mthca_pd *pd,
struct ib_srq_attr *attr, struct mthca_srq *srq)
static inline int get_srq_refcount(struct mthca_dev *dev, struct mthca_srq *srq)
void mthca_free_srq(struct mthca_dev *dev, struct mthca_srq *srq)
int mthca_modify_srq(struct ib_srq *ibsrq, struct ib_srq_attr *attr,
enum ib_srq_attr_mask attr_mask, struct ib_udata *udata)
int mthca_query_srq(struct ib_srq *ibsrq, struct ib_srq_attr *srq_attr)
void mthca_srq_event(struct mthca_dev *dev, u32 srqn,
enum ib_event_type event_type)
void mthca_free_srq_wqe(struct mthca_srq *srq, u32 wqe_addr)
int mthca_tavor_post_srq_recv(struct ib_srq *ibsrq, struct ib_recv_wr *wr,
struct ib_recv_wr **bad_wr)
int mthca_arbel_post_srq_recv(struct ib_srq *ibsrq, struct ib_recv_wr *wr,
struct ib_recv_wr **bad_wr)
int mthca_max_srq_sge(struct mthca_dev *dev)
int mthca_init_srq_table(struct mthca_dev *dev)
void mthca_cleanup_srq_table(struct mthca_dev *dev)
