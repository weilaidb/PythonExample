#define C2_CQ_MSG_SIZE ((sizeof(struct c2wr_ce) + 32-1) & ~(32-1))
static struct c2_cq *c2_cq_get(struct c2_dev *c2dev, int cqn)
static void c2_cq_put(struct c2_cq *cq)
void c2_cq_event(struct c2_dev *c2dev, u32 mq_index)
void c2_cq_clean(struct c2_dev *c2dev, struct c2_qp *qp, u32 mq_index)
static inline enum ib_wc_status c2_cqe_status_to_openib(u8 status)
static inline int c2_poll_one(struct c2_dev *c2dev,
struct c2_cq *cq, struct ib_wc *entry)
int c2_poll_cq(struct ib_cq *ibcq, int num_entries, struct ib_wc *entry)
int c2_arm_cq(struct ib_cq *ibcq, enum ib_cq_notify_flags notify_flags)
static void c2_free_cq_buf(struct c2_dev *c2dev, struct c2_mq *mq)
static int c2_alloc_cq_buf(struct c2_dev *c2dev, struct c2_mq *mq, int q_size,
int msg_size)
int c2_init_cq(struct c2_dev *c2dev, int entries,
struct c2_ucontext *ctx, struct c2_cq *cq)
void c2_free_cq(struct c2_dev *c2dev, struct c2_cq *cq)
