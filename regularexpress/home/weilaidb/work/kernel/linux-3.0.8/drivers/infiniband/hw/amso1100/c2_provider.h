#define C2_PROVIDER_H
#define C2_MPT_FLAG_ATOMIC        (1 << 14)
#define C2_MPT_FLAG_REMOTE_WRITE  (1 << 13)
#define C2_MPT_FLAG_REMOTE_READ   (1 << 12)
#define C2_MPT_FLAG_LOCAL_WRITE   (1 << 11)
#define C2_MPT_FLAG_LOCAL_READ    (1 << 10)
struct c2_buf_list ;
struct c2_ucontext ;
struct c2_mtt;
struct c2_pd ;
struct c2_mr ;
struct c2_av;
enum c2_ah_type ;
struct c2_ah ;
struct c2_cq ;
struct c2_wq ;
struct iw_cm_id;
struct c2_qp ;
struct c2_cr_query_attrs ;
static inline struct c2_pd *to_c2pd(struct ib_pd *ibpd)
static inline struct c2_ucontext *to_c2ucontext(struct ib_ucontext *ibucontext)
static inline struct c2_mr *to_c2mr(struct ib_mr *ibmr)
static inline struct c2_ah *to_c2ah(struct ib_ah *ibah)
static inline struct c2_cq *to_c2cq(struct ib_cq *ibcq)
static inline struct c2_qp *to_c2qp(struct ib_qp *ibqp)
static inline int is_rnic_addr(struct net_device *netdev, u32 addr)
