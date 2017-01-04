#define C2_MAX_ORD_PER_QP 128
#define C2_MAX_IRD_PER_QP 128
#define C2_HINT_MAKE(q_index, hint_count) (((q_index) << 16) | hint_count)
#define C2_HINT_GET_INDEX(hint) (((hint) & 0x7FFF0000) >> 16)
#define C2_HINT_GET_COUNT(hint) ((hint) & 0x0000FFFF)
#define NO_SUPPORT -1
static const u8 c2_opcode[] = ;
static int to_c2_state(enum ib_qp_state ib_state)
static int to_ib_state(enum c2_qp_state c2_state)
static const char *to_ib_state_str(int ib_state)
void c2_set_qp_state(struct c2_qp *qp, int c2_state)
#define C2_QP_NO_ATTR_CHANGE 0xFFFFFFFF
int c2_qp_modify(struct c2_dev *c2dev, struct c2_qp *qp,
struct ib_qp_attr *attr, int attr_mask)
int c2_qp_set_read_limits(struct c2_dev *c2dev, struct c2_qp *qp,
int ord, int ird)
static int destroy_qp(struct c2_dev *c2dev, struct c2_qp *qp)
static int c2_alloc_qpn(struct c2_dev *c2dev, struct c2_qp *qp)
static void c2_free_qpn(struct c2_dev *c2dev, int qpn)
struct c2_qp *c2_find_qpn(struct c2_dev *c2dev, int qpn)
int c2_alloc_qp(struct c2_dev *c2dev,
struct c2_pd *pd,
struct ib_qp_init_attr *qp_attrs, struct c2_qp *qp)
static inline void c2_lock_cqs(struct c2_cq *send_cq, struct c2_cq *recv_cq)
static inline void c2_unlock_cqs(struct c2_cq *send_cq, struct c2_cq *recv_cq)
void c2_free_qp(struct c2_dev *c2dev, struct c2_qp *qp)
static int
move_sgl(struct c2_data_addr * dst, struct ib_sge *src, int count, u32 * p_len,
u8 * actual_count)
static inline void c2_activity(struct c2_dev *c2dev, u32 mq_index, u16 shared)
static int qp_wr_post(struct c2_mq *q, union c2wr * wr, struct c2_qp *qp, u32 size)
int c2_post_send(struct ib_qp *ibqp, struct ib_send_wr *ib_wr,
struct ib_send_wr **bad_wr)
int c2_post_receive(struct ib_qp *ibqp, struct ib_recv_wr *ib_wr,
struct ib_recv_wr **bad_wr)
void __devinit c2_init_qp_table(struct c2_dev *c2dev)
void __devexit c2_cleanup_qp_table(struct c2_dev *c2dev)
