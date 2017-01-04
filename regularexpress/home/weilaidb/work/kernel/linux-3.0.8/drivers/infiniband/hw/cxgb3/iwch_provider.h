#define __IWCH_PROVIDER_H__
struct iwch_pd ;
static inline struct iwch_pd *to_iwch_pd(struct ib_pd *ibpd)
struct tpt_attributes ;
struct iwch_mr ;
typedef struct iwch_mw iwch_mw_handle;
static inline struct iwch_mr *to_iwch_mr(struct ib_mr *ibmr)
struct iwch_mw ;
static inline struct iwch_mw *to_iwch_mw(struct ib_mw *ibmw)
struct iwch_cq ;
static inline struct iwch_cq *to_iwch_cq(struct ib_cq *ibcq)
enum IWCH_QP_FLAGS ;
struct iwch_mpa_attributes ;
struct iwch_qp_attributes ;
struct iwch_qp ;
static inline int qp_quiesced(struct iwch_qp *qhp)
static inline struct iwch_qp *to_iwch_qp(struct ib_qp *ibqp)
void iwch_qp_add_ref(struct ib_qp *qp);
void iwch_qp_rem_ref(struct ib_qp *qp);
struct iwch_ucontext ;
static inline struct iwch_ucontext *to_iwch_ucontext(struct ib_ucontext *c)
struct iwch_mm_entry ;
static inline struct iwch_mm_entry *remove_mmap(struct iwch_ucontext *ucontext,
u32 key, unsigned len)
static inline void insert_mmap(struct iwch_ucontext *ucontext,
struct iwch_mm_entry *mm)
enum iwch_qp_attr_mask ;
int iwch_modify_qp(struct iwch_dev *rhp,
struct iwch_qp *qhp,
enum iwch_qp_attr_mask mask,
struct iwch_qp_attributes *attrs,
int internal);
enum iwch_qp_state ;
static inline int iwch_convert_state(enum ib_qp_state ib_state)
static inline u32 iwch_ib_to_tpt_access(int acc)
static inline u32 iwch_ib_to_tpt_bind_access(int acc)
enum iwch_mmid_state ;
enum iwch_qp_query_flags ;
u16 iwch_rqes_posted(struct iwch_qp *qhp);
int iwch_post_send(struct ib_qp *ibqp, struct ib_send_wr *wr,
struct ib_send_wr **bad_wr);
int iwch_post_receive(struct ib_qp *ibqp, struct ib_recv_wr *wr,
struct ib_recv_wr **bad_wr);
int iwch_bind_mw(struct ib_qp *qp,
struct ib_mw *mw,
struct ib_mw_bind *mw_bind);
int iwch_poll_cq(struct ib_cq *ibcq, int num_entries, struct ib_wc *wc);
int iwch_post_terminate(struct iwch_qp *qhp, struct respQ_msg_t *rsp_msg);
int iwch_post_zb_read(struct iwch_ep *ep);
int iwch_register_device(struct iwch_dev *dev);
void iwch_unregister_device(struct iwch_dev *dev);
void stop_read_rep_timer(struct iwch_qp *qhp);
int iwch_register_mem(struct iwch_dev *rhp, struct iwch_pd *php,
struct iwch_mr *mhp, int shift);
int iwch_reregister_mem(struct iwch_dev *rhp, struct iwch_pd *php,
struct iwch_mr *mhp,
int shift,
int npages);
int iwch_alloc_pbl(struct iwch_mr *mhp, int npages);
void iwch_free_pbl(struct iwch_mr *mhp);
int iwch_write_pbl(struct iwch_mr *mhp, __be64 *pages, int npages, int offset);
int build_phys_page_list(struct ib_phys_buf *buffer_list,
int num_phys_buf,
u64 *iova_start,
u64 *total_size,
int *npages,
int *shift,
__be64 **page_list);
#define IWCH_NODE_DESC "cxgb3 Chelsio Communications"
