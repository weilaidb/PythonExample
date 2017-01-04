#define __EHCA_CLASSES_H__
struct ehca_module;
struct ehca_qp;
struct ehca_cq;
struct ehca_eq;
struct ehca_mr;
struct ehca_mw;
struct ehca_pd;
struct ehca_av;
#define EHCA_EQE_CACHE_SIZE 20
#define EHCA_MAX_NUM_QUEUES 0xffff
struct ehca_eqe_cache_entry ;
struct ehca_eq ;
struct ehca_sma_attr ;
struct ehca_sport ;
#define HCA_CAP_MR_PGSIZE_4K  0x80000000
#define HCA_CAP_MR_PGSIZE_64K 0x40000000
#define HCA_CAP_MR_PGSIZE_1M  0x20000000
#define HCA_CAP_MR_PGSIZE_16M 0x10000000
struct ehca_shca ;
struct ehca_pd ;
enum ehca_ext_qp_type ;
struct ehca_mod_qp_parm ;
#define EHCA_MOD_QP_PARM_MAX 4
#define QMAP_IDX_MASK 0xFFFFULL
struct ehca_qmap_entry ;
struct ehca_queue_map ;
static inline unsigned int next_index(unsigned int cur_index, unsigned int limit)
struct ehca_qp ;
#define IS_SRQ(qp) (qp->ext_type == EQPT_SRQ)
#define HAS_SQ(qp) (qp->ext_type != EQPT_SRQ)
#define HAS_RQ(qp) (qp->ext_type != EQPT_SRQBASE)
#define QP_HASHTAB_LEN 8
struct ehca_cq ;
enum ehca_mr_flag ;
struct ehca_mr ;
struct ehca_mw ;
enum ehca_mr_pgi_type ;
struct ehca_mr_pginfo ;
struct ehca_mr_hipzout_parms ;
struct ehca_mw_hipzout_parms ;
struct ehca_av ;
struct ehca_ucontext ;
int ehca_init_pd_cache(void);
void ehca_cleanup_pd_cache(void);
int ehca_init_cq_cache(void);
void ehca_cleanup_cq_cache(void);
int ehca_init_qp_cache(void);
void ehca_cleanup_qp_cache(void);
int ehca_init_av_cache(void);
void ehca_cleanup_av_cache(void);
int ehca_init_mrmw_cache(void);
void ehca_cleanup_mrmw_cache(void);
int ehca_init_small_qp_cache(void);
void ehca_cleanup_small_qp_cache(void);
extern rwlock_t ehca_qp_idr_lock;
extern rwlock_t ehca_cq_idr_lock;
extern struct idr ehca_qp_idr;
extern struct idr ehca_cq_idr;
extern spinlock_t shca_list_lock;
extern int ehca_static_rate;
extern int ehca_port_act_time;
extern int ehca_use_hp_mr;
extern int ehca_scaling_code;
extern int ehca_lock_hcalls;
extern int ehca_nr_ports;
extern int ehca_max_cq;
extern int ehca_max_qp;
struct ipzu_queue_resp ;
struct ehca_create_cq_resp ;
struct ehca_create_qp_resp ;
struct ehca_alloc_cq_parms ;
enum ehca_service_type ;
enum ehca_ll_comp_flags ;
struct ehca_alloc_queue_parms ;
struct ehca_alloc_qp_parms ;
int ehca_cq_assign_qp(struct ehca_cq *cq, struct ehca_qp *qp);
int ehca_cq_unassign_qp(struct ehca_cq *cq, unsigned int qp_num);
struct ehca_qp *ehca_cq_get_qp(struct ehca_cq *cq, int qp_num);
