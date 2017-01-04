static struct kmem_cache *qp_cache;
#define QP_ATTR_QUERY_NOT_SUPPORTED (IB_QP_ACCESS_FLAGS       | \
IB_QP_EN_SQD_ASYNC_NOTIFY)
enum ehca_qp_state ;
enum ib_qp_statetrans ;
static inline enum ehca_qp_state ib2ehca_qp_state(enum ib_qp_state ib_qp_state)
static inline enum ib_qp_state ehca2ib_qp_state(enum ehca_qp_state
ehca_qp_state)
enum ehca_qp_type ;
static inline enum ehca_qp_type ib2ehcaqptype(enum ib_qp_type ibqptype)
static inline enum ib_qp_statetrans get_modqp_statetrans(int ib_fromstate,
int ib_tostate)
static inline int ibqptype2servicetype(enum ib_qp_type ibqptype)
static inline void queue2resp(struct ipzu_queue_resp *resp,
struct ipz_queue *queue)
static inline int init_qp_queue(struct ehca_shca *shca,
struct ehca_pd *pd,
struct ehca_qp *my_qp,
struct ipz_queue *queue,
int q_type,
u64 expected_hret,
struct ehca_alloc_queue_parms *parms,
int wqe_size)
static inline int ehca_calc_wqe_size(int act_nr_sge, int is_llqp)
static void ehca_determine_small_queue(struct ehca_alloc_queue_parms *queue,
int req_nr_sge, int is_llqp)
void ehca_add_to_err_list(struct ehca_qp *qp, int on_sq)
static void del_from_err_list(struct ehca_cq *cq, struct list_head *node)
static void reset_queue_map(struct ehca_queue_map *qmap)
static struct ehca_qp *internal_create_qp(
struct ib_pd *pd,
struct ib_qp_init_attr *init_attr,
struct ib_srq_init_attr *srq_init_attr,
struct ib_udata *udata, int is_srq)
struct ib_qp *ehca_create_qp(struct ib_pd *pd,
struct ib_qp_init_attr *qp_init_attr,
struct ib_udata *udata)
static int internal_destroy_qp(struct ib_device *dev, struct ehca_qp *my_qp,
struct ib_uobject *uobject);
struct ib_srq *ehca_create_srq(struct ib_pd *pd,
struct ib_srq_init_attr *srq_init_attr,
struct ib_udata *udata)
static int prepare_sqe_rts(struct ehca_qp *my_qp, struct ehca_shca *shca,
int *bad_wqe_cnt)
static int calc_left_cqes(u64 wqe_p, struct ipz_queue *ipz_queue,
struct ehca_queue_map *qmap)
static int check_for_left_cqes(struct ehca_qp *my_qp, struct ehca_shca *shca)
static int internal_modify_qp(struct ib_qp *ibqp,
struct ib_qp_attr *attr,
int attr_mask, int smi_reset2init)
int ehca_modify_qp(struct ib_qp *ibqp, struct ib_qp_attr *attr, int attr_mask,
struct ib_udata *udata)
void ehca_recover_sqp(struct ib_qp *sqp)
int ehca_query_qp(struct ib_qp *qp,
struct ib_qp_attr *qp_attr,
int qp_attr_mask, struct ib_qp_init_attr *qp_init_attr)
int ehca_modify_srq(struct ib_srq *ibsrq, struct ib_srq_attr *attr,
enum ib_srq_attr_mask attr_mask, struct ib_udata *udata)
int ehca_query_srq(struct ib_srq *srq, struct ib_srq_attr *srq_attr)
static int internal_destroy_qp(struct ib_device *dev, struct ehca_qp *my_qp,
struct ib_uobject *uobject)
int ehca_destroy_qp(struct ib_qp *qp)
int ehca_destroy_srq(struct ib_srq *srq)
int ehca_init_qp_cache(void)
void ehca_cleanup_qp_cache(void)
