#define MTHCA_PROVIDER_H
#define MTHCA_MPT_FLAG_ATOMIC        (1 << 14)
#define MTHCA_MPT_FLAG_REMOTE_WRITE  (1 << 13)
#define MTHCA_MPT_FLAG_REMOTE_READ   (1 << 12)
#define MTHCA_MPT_FLAG_LOCAL_WRITE   (1 << 11)
#define MTHCA_MPT_FLAG_LOCAL_READ    (1 << 10)
struct mthca_buf_list ;
union mthca_buf ;
struct mthca_uar ;
struct mthca_user_db_table;
struct mthca_ucontext ;
struct mthca_mtt;
struct mthca_mr ;
struct mthca_fmr ;
struct mthca_pd ;
struct mthca_eq ;
struct mthca_av;
enum mthca_ah_type ;
struct mthca_ah ;
struct mthca_cq_buf ;
struct mthca_cq_resize ;
struct mthca_cq ;
struct mthca_srq ;
struct mthca_wq ;
struct mthca_qp ;
struct mthca_sqp ;
static inline struct mthca_ucontext *to_mucontext(struct ib_ucontext *ibucontext)
static inline struct mthca_fmr *to_mfmr(struct ib_fmr *ibmr)
static inline struct mthca_mr *to_mmr(struct ib_mr *ibmr)
static inline struct mthca_pd *to_mpd(struct ib_pd *ibpd)
static inline struct mthca_ah *to_mah(struct ib_ah *ibah)
static inline struct mthca_cq *to_mcq(struct ib_cq *ibcq)
static inline struct mthca_srq *to_msrq(struct ib_srq *ibsrq)
static inline struct mthca_qp *to_mqp(struct ib_qp *ibqp)
static inline struct mthca_sqp *to_msqp(struct mthca_qp *qp)
