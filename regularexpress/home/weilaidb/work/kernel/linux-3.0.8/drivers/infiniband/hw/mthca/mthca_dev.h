#define MTHCA_DEV_H
#define DRV_NAME	"ib_mthca"
#define PFX		DRV_NAME ": "
#define DRV_VERSION	"1.0"
#define DRV_RELDATE	"April 4, 2008"
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
struct mthca_cmd ;
struct mthca_limits ;
struct mthca_alloc ;
struct mthca_array ;
struct mthca_uar_table ;
struct mthca_pd_table ;
struct mthca_buddy ;
struct mthca_mr_table ;
struct mthca_eq_table ;
struct mthca_cq_table ;
struct mthca_srq_table ;
struct mthca_qp_table ;
struct mthca_av_table ;
struct mthca_mcg_table ;
struct mthca_catas_err ;
extern struct mutex mthca_device_mutex;
struct mthca_dev ;
extern int mthca_debug_level;
#define mthca_dbg(mdev, format, arg...)					\
do  while (0)
#define mthca_dbg(mdev, format, arg...) do  while (0)
#define mthca_err(mdev, format, arg...) \
dev_err(&mdev->pdev->dev, format, ## arg)
#define mthca_info(mdev, format, arg...) \
dev_info(&mdev->pdev->dev, format, ## arg)
#define mthca_warn(mdev, format, arg...) \
dev_warn(&mdev->pdev->dev, format, ## arg)
extern void __buggy_use_of_MTHCA_GET(void);
extern void __buggy_use_of_MTHCA_PUT(void);
#define MTHCA_GET(dest, source, offset)                               \
do  while (0)
#define MTHCA_PUT(dest, source, offset)                               \
do  while (0)
int mthca_reset(struct mthca_dev *mdev);
u32 mthca_alloc(struct mthca_alloc *alloc);
void mthca_free(struct mthca_alloc *alloc, u32 obj);
int mthca_alloc_init(struct mthca_alloc *alloc, u32 num, u32 mask,
u32 reserved);
void mthca_alloc_cleanup(struct mthca_alloc *alloc);
void *mthca_array_get(struct mthca_array *array, int index);
int mthca_array_set(struct mthca_array *array, int index, void *value);
void mthca_array_clear(struct mthca_array *array, int index);
int mthca_array_init(struct mthca_array *array, int nent);
void mthca_array_cleanup(struct mthca_array *array, int nent);
int mthca_buf_alloc(struct mthca_dev *dev, int size, int max_direct,
union mthca_buf *buf, int *is_direct, struct mthca_pd *pd,
int hca_write, struct mthca_mr *mr);
void mthca_buf_free(struct mthca_dev *dev, int size, union mthca_buf *buf,
int is_direct, struct mthca_mr *mr);
int mthca_init_uar_table(struct mthca_dev *dev);
int mthca_init_pd_table(struct mthca_dev *dev);
int mthca_init_mr_table(struct mthca_dev *dev);
int mthca_init_eq_table(struct mthca_dev *dev);
int mthca_init_cq_table(struct mthca_dev *dev);
int mthca_init_srq_table(struct mthca_dev *dev);
int mthca_init_qp_table(struct mthca_dev *dev);
int mthca_init_av_table(struct mthca_dev *dev);
int mthca_init_mcg_table(struct mthca_dev *dev);
void mthca_cleanup_uar_table(struct mthca_dev *dev);
void mthca_cleanup_pd_table(struct mthca_dev *dev);
void mthca_cleanup_mr_table(struct mthca_dev *dev);
void mthca_cleanup_eq_table(struct mthca_dev *dev);
void mthca_cleanup_cq_table(struct mthca_dev *dev);
void mthca_cleanup_srq_table(struct mthca_dev *dev);
void mthca_cleanup_qp_table(struct mthca_dev *dev);
void mthca_cleanup_av_table(struct mthca_dev *dev);
void mthca_cleanup_mcg_table(struct mthca_dev *dev);
int mthca_register_device(struct mthca_dev *dev);
void mthca_unregister_device(struct mthca_dev *dev);
void mthca_start_catas_poll(struct mthca_dev *dev);
void mthca_stop_catas_poll(struct mthca_dev *dev);
int __mthca_restart_one(struct pci_dev *pdev);
int mthca_catas_init(void);
void mthca_catas_cleanup(void);
int mthca_uar_alloc(struct mthca_dev *dev, struct mthca_uar *uar);
void mthca_uar_free(struct mthca_dev *dev, struct mthca_uar *uar);
int mthca_pd_alloc(struct mthca_dev *dev, int privileged, struct mthca_pd *pd);
void mthca_pd_free(struct mthca_dev *dev, struct mthca_pd *pd);
int mthca_write_mtt_size(struct mthca_dev *dev);
struct mthca_mtt *mthca_alloc_mtt(struct mthca_dev *dev, int size);
void mthca_free_mtt(struct mthca_dev *dev, struct mthca_mtt *mtt);
int mthca_write_mtt(struct mthca_dev *dev, struct mthca_mtt *mtt,
int start_index, u64 *buffer_list, int list_len);
int mthca_mr_alloc(struct mthca_dev *dev, u32 pd, int buffer_size_shift,
u64 iova, u64 total_size, u32 access, struct mthca_mr *mr);
int mthca_mr_alloc_notrans(struct mthca_dev *dev, u32 pd,
u32 access, struct mthca_mr *mr);
int mthca_mr_alloc_phys(struct mthca_dev *dev, u32 pd,
u64 *buffer_list, int buffer_size_shift,
int list_len, u64 iova, u64 total_size,
u32 access, struct mthca_mr *mr);
void mthca_free_mr(struct mthca_dev *dev,  struct mthca_mr *mr);
int mthca_fmr_alloc(struct mthca_dev *dev, u32 pd,
u32 access, struct mthca_fmr *fmr);
int mthca_tavor_map_phys_fmr(struct ib_fmr *ibfmr, u64 *page_list,
int list_len, u64 iova);
void mthca_tavor_fmr_unmap(struct mthca_dev *dev, struct mthca_fmr *fmr);
int mthca_arbel_map_phys_fmr(struct ib_fmr *ibfmr, u64 *page_list,
int list_len, u64 iova);
void mthca_arbel_fmr_unmap(struct mthca_dev *dev, struct mthca_fmr *fmr);
int mthca_free_fmr(struct mthca_dev *dev,  struct mthca_fmr *fmr);
int mthca_map_eq_icm(struct mthca_dev *dev, u64 icm_virt);
void mthca_unmap_eq_icm(struct mthca_dev *dev);
int mthca_poll_cq(struct ib_cq *ibcq, int num_entries,
struct ib_wc *entry);
int mthca_tavor_arm_cq(struct ib_cq *cq, enum ib_cq_notify_flags flags);
int mthca_arbel_arm_cq(struct ib_cq *cq, enum ib_cq_notify_flags flags);
int mthca_init_cq(struct mthca_dev *dev, int nent,
struct mthca_ucontext *ctx, u32 pdn,
struct mthca_cq *cq);
void mthca_free_cq(struct mthca_dev *dev,
struct mthca_cq *cq);
void mthca_cq_completion(struct mthca_dev *dev, u32 cqn);
void mthca_cq_event(struct mthca_dev *dev, u32 cqn,
enum ib_event_type event_type);
void mthca_cq_clean(struct mthca_dev *dev, struct mthca_cq *cq, u32 qpn,
struct mthca_srq *srq);
void mthca_cq_resize_copy_cqes(struct mthca_cq *cq);
int mthca_alloc_cq_buf(struct mthca_dev *dev, struct mthca_cq_buf *buf, int nent);
void mthca_free_cq_buf(struct mthca_dev *dev, struct mthca_cq_buf *buf, int cqe);
int mthca_alloc_srq(struct mthca_dev *dev, struct mthca_pd *pd,
struct ib_srq_attr *attr, struct mthca_srq *srq);
void mthca_free_srq(struct mthca_dev *dev, struct mthca_srq *srq);
int mthca_modify_srq(struct ib_srq *ibsrq, struct ib_srq_attr *attr,
enum ib_srq_attr_mask attr_mask, struct ib_udata *udata);
int mthca_query_srq(struct ib_srq *srq, struct ib_srq_attr *srq_attr);
int mthca_max_srq_sge(struct mthca_dev *dev);
void mthca_srq_event(struct mthca_dev *dev, u32 srqn,
enum ib_event_type event_type);
void mthca_free_srq_wqe(struct mthca_srq *srq, u32 wqe_addr);
int mthca_tavor_post_srq_recv(struct ib_srq *srq, struct ib_recv_wr *wr,
struct ib_recv_wr **bad_wr);
int mthca_arbel_post_srq_recv(struct ib_srq *srq, struct ib_recv_wr *wr,
struct ib_recv_wr **bad_wr);
void mthca_qp_event(struct mthca_dev *dev, u32 qpn,
enum ib_event_type event_type);
int mthca_query_qp(struct ib_qp *ibqp, struct ib_qp_attr *qp_attr, int qp_attr_mask,
struct ib_qp_init_attr *qp_init_attr);
int mthca_modify_qp(struct ib_qp *ibqp, struct ib_qp_attr *attr, int attr_mask,
struct ib_udata *udata);
int mthca_tavor_post_send(struct ib_qp *ibqp, struct ib_send_wr *wr,
struct ib_send_wr **bad_wr);
int mthca_tavor_post_receive(struct ib_qp *ibqp, struct ib_recv_wr *wr,
struct ib_recv_wr **bad_wr);
int mthca_arbel_post_send(struct ib_qp *ibqp, struct ib_send_wr *wr,
struct ib_send_wr **bad_wr);
int mthca_arbel_post_receive(struct ib_qp *ibqp, struct ib_recv_wr *wr,
struct ib_recv_wr **bad_wr);
void mthca_free_err_wqe(struct mthca_dev *dev, struct mthca_qp *qp, int is_send,
int index, int *dbd, __be32 *new_wqe);
int mthca_alloc_qp(struct mthca_dev *dev,
struct mthca_pd *pd,
struct mthca_cq *send_cq,
struct mthca_cq *recv_cq,
enum ib_qp_type type,
enum ib_sig_type send_policy,
struct ib_qp_cap *cap,
struct mthca_qp *qp);
int mthca_alloc_sqp(struct mthca_dev *dev,
struct mthca_pd *pd,
struct mthca_cq *send_cq,
struct mthca_cq *recv_cq,
enum ib_sig_type send_policy,
struct ib_qp_cap *cap,
int qpn,
int port,
struct mthca_sqp *sqp);
void mthca_free_qp(struct mthca_dev *dev, struct mthca_qp *qp);
int mthca_create_ah(struct mthca_dev *dev,
struct mthca_pd *pd,
struct ib_ah_attr *ah_attr,
struct mthca_ah *ah);
int mthca_destroy_ah(struct mthca_dev *dev, struct mthca_ah *ah);
int mthca_read_ah(struct mthca_dev *dev, struct mthca_ah *ah,
struct ib_ud_header *header);
int mthca_ah_query(struct ib_ah *ibah, struct ib_ah_attr *attr);
int mthca_ah_grh_present(struct mthca_ah *ah);
u8 mthca_get_rate(struct mthca_dev *dev, int static_rate, u8 port);
enum ib_rate mthca_rate_to_ib(struct mthca_dev *dev, u8 mthca_rate, u8 port);
int mthca_multicast_attach(struct ib_qp *ibqp, union ib_gid *gid, u16 lid);
int mthca_multicast_detach(struct ib_qp *ibqp, union ib_gid *gid, u16 lid);
int mthca_process_mad(struct ib_device *ibdev,
int mad_flags,
u8 port_num,
struct ib_wc *in_wc,
struct ib_grh *in_grh,
struct ib_mad *in_mad,
struct ib_mad *out_mad);
int mthca_create_agents(struct mthca_dev *dev);
void mthca_free_agents(struct mthca_dev *dev);
static inline struct mthca_dev *to_mdev(struct ib_device *ibdev)
static inline int mthca_is_memfree(struct mthca_dev *dev)
