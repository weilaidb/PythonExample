enum ;
enum ;
enum ;
struct mthca_cq_context  __attribute__((packed));
#define MTHCA_CQ_STATUS_OK          ( 0 << 28)
#define MTHCA_CQ_STATUS_OVERFLOW    ( 9 << 28)
#define MTHCA_CQ_STATUS_WRITE_FAIL  (10 << 28)
#define MTHCA_CQ_FLAG_TR            ( 1 << 18)
#define MTHCA_CQ_FLAG_OI            ( 1 << 17)
#define MTHCA_CQ_STATE_DISARMED     ( 0 <<  8)
#define MTHCA_CQ_STATE_ARMED        ( 1 <<  8)
#define MTHCA_CQ_STATE_ARMED_SOL    ( 4 <<  8)
#define MTHCA_EQ_STATE_FIRED        (10 <<  8)
enum ;
enum ;
struct mthca_cqe ;
struct mthca_err_cqe ;
#define MTHCA_CQ_ENTRY_OWNER_SW      (0 << 7)
#define MTHCA_CQ_ENTRY_OWNER_HW      (1 << 7)
#define MTHCA_TAVOR_CQ_DB_INC_CI       (1 << 24)
#define MTHCA_TAVOR_CQ_DB_REQ_NOT      (2 << 24)
#define MTHCA_TAVOR_CQ_DB_REQ_NOT_SOL  (3 << 24)
#define MTHCA_TAVOR_CQ_DB_SET_CI       (4 << 24)
#define MTHCA_TAVOR_CQ_DB_REQ_NOT_MULT (5 << 24)
#define MTHCA_ARBEL_CQ_DB_REQ_NOT_SOL  (1 << 24)
#define MTHCA_ARBEL_CQ_DB_REQ_NOT      (2 << 24)
#define MTHCA_ARBEL_CQ_DB_REQ_NOT_MULT (3 << 24)
static inline struct mthca_cqe *get_cqe_from_buf(struct mthca_cq_buf *buf,
int entry)
static inline struct mthca_cqe *get_cqe(struct mthca_cq *cq, int entry)
static inline struct mthca_cqe *cqe_sw(struct mthca_cqe *cqe)
static inline struct mthca_cqe *next_cqe_sw(struct mthca_cq *cq)
static inline void set_cqe_hw(struct mthca_cqe *cqe)
static void dump_cqe(struct mthca_dev *dev, void *cqe_ptr)
static inline void update_cons_index(struct mthca_dev *dev, struct mthca_cq *cq,
int incr)
void mthca_cq_completion(struct mthca_dev *dev, u32 cqn)
void mthca_cq_event(struct mthca_dev *dev, u32 cqn,
enum ib_event_type event_type)
static inline int is_recv_cqe(struct mthca_cqe *cqe)
void mthca_cq_clean(struct mthca_dev *dev, struct mthca_cq *cq, u32 qpn,
struct mthca_srq *srq)
void mthca_cq_resize_copy_cqes(struct mthca_cq *cq)
int mthca_alloc_cq_buf(struct mthca_dev *dev, struct mthca_cq_buf *buf, int nent)
void mthca_free_cq_buf(struct mthca_dev *dev, struct mthca_cq_buf *buf, int cqe)
static void handle_error_cqe(struct mthca_dev *dev, struct mthca_cq *cq,
struct mthca_qp *qp, int wqe_index, int is_send,
struct mthca_err_cqe *cqe,
struct ib_wc *entry, int *free_cqe)
static inline int mthca_poll_one(struct mthca_dev *dev,
struct mthca_cq *cq,
struct mthca_qp **cur_qp,
int *freed,
struct ib_wc *entry)
int mthca_poll_cq(struct ib_cq *ibcq, int num_entries,
struct ib_wc *entry)
int mthca_tavor_arm_cq(struct ib_cq *cq, enum ib_cq_notify_flags flags)
int mthca_arbel_arm_cq(struct ib_cq *ibcq, enum ib_cq_notify_flags flags)
int mthca_init_cq(struct mthca_dev *dev, int nent,
struct mthca_ucontext *ctx, u32 pdn,
struct mthca_cq *cq)
static inline int get_cq_refcount(struct mthca_dev *dev, struct mthca_cq *cq)
void mthca_free_cq(struct mthca_dev *dev,
struct mthca_cq *cq)
int mthca_init_cq_table(struct mthca_dev *dev)
void mthca_cleanup_cq_table(struct mthca_dev *dev)
