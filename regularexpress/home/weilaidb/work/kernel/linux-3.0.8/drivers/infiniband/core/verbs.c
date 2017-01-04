int ib_rate_to_mult(enum ib_rate rate)
EXPORT_SYMBOL(ib_rate_to_mult);
enum ib_rate mult_to_ib_rate(int mult)
EXPORT_SYMBOL(mult_to_ib_rate);
enum rdma_transport_type
rdma_node_get_transport(enum rdma_node_type node_type)
EXPORT_SYMBOL(rdma_node_get_transport);
enum rdma_link_layer rdma_port_get_link_layer(struct ib_device *device, u8 port_num)
EXPORT_SYMBOL(rdma_port_get_link_layer);
struct ib_pd *ib_alloc_pd(struct ib_device *device)
EXPORT_SYMBOL(ib_alloc_pd);
int ib_dealloc_pd(struct ib_pd *pd)
EXPORT_SYMBOL(ib_dealloc_pd);
struct ib_ah *ib_create_ah(struct ib_pd *pd, struct ib_ah_attr *ah_attr)
EXPORT_SYMBOL(ib_create_ah);
int ib_init_ah_from_wc(struct ib_device *device, u8 port_num, struct ib_wc *wc,
struct ib_grh *grh, struct ib_ah_attr *ah_attr)
EXPORT_SYMBOL(ib_init_ah_from_wc);
struct ib_ah *ib_create_ah_from_wc(struct ib_pd *pd, struct ib_wc *wc,
struct ib_grh *grh, u8 port_num)
EXPORT_SYMBOL(ib_create_ah_from_wc);
int ib_modify_ah(struct ib_ah *ah, struct ib_ah_attr *ah_attr)
EXPORT_SYMBOL(ib_modify_ah);
int ib_query_ah(struct ib_ah *ah, struct ib_ah_attr *ah_attr)
EXPORT_SYMBOL(ib_query_ah);
int ib_destroy_ah(struct ib_ah *ah)
EXPORT_SYMBOL(ib_destroy_ah);
struct ib_srq *ib_create_srq(struct ib_pd *pd,
struct ib_srq_init_attr *srq_init_attr)
EXPORT_SYMBOL(ib_create_srq);
int ib_modify_srq(struct ib_srq *srq,
struct ib_srq_attr *srq_attr,
enum ib_srq_attr_mask srq_attr_mask)
EXPORT_SYMBOL(ib_modify_srq);
int ib_query_srq(struct ib_srq *srq,
struct ib_srq_attr *srq_attr)
EXPORT_SYMBOL(ib_query_srq);
int ib_destroy_srq(struct ib_srq *srq)
EXPORT_SYMBOL(ib_destroy_srq);
struct ib_qp *ib_create_qp(struct ib_pd *pd,
struct ib_qp_init_attr *qp_init_attr)
EXPORT_SYMBOL(ib_create_qp);
static const struct  qp_state_table[IB_QPS_ERR + 1][IB_QPS_ERR + 1] = ;
int ib_modify_qp_is_ok(enum ib_qp_state cur_state, enum ib_qp_state next_state,
enum ib_qp_type type, enum ib_qp_attr_mask mask)
EXPORT_SYMBOL(ib_modify_qp_is_ok);
int ib_modify_qp(struct ib_qp *qp,
struct ib_qp_attr *qp_attr,
int qp_attr_mask)
EXPORT_SYMBOL(ib_modify_qp);
int ib_query_qp(struct ib_qp *qp,
struct ib_qp_attr *qp_attr,
int qp_attr_mask,
struct ib_qp_init_attr *qp_init_attr)
EXPORT_SYMBOL(ib_query_qp);
int ib_destroy_qp(struct ib_qp *qp)
EXPORT_SYMBOL(ib_destroy_qp);
struct ib_cq *ib_create_cq(struct ib_device *device,
ib_comp_handler comp_handler,
void (*event_handler)(struct ib_event *, void *),
void *cq_context, int cqe, int comp_vector)
EXPORT_SYMBOL(ib_create_cq);
int ib_modify_cq(struct ib_cq *cq, u16 cq_count, u16 cq_period)
EXPORT_SYMBOL(ib_modify_cq);
int ib_destroy_cq(struct ib_cq *cq)
EXPORT_SYMBOL(ib_destroy_cq);
int ib_resize_cq(struct ib_cq *cq, int cqe)
EXPORT_SYMBOL(ib_resize_cq);
struct ib_mr *ib_get_dma_mr(struct ib_pd *pd, int mr_access_flags)
EXPORT_SYMBOL(ib_get_dma_mr);
struct ib_mr *ib_reg_phys_mr(struct ib_pd *pd,
struct ib_phys_buf *phys_buf_array,
int num_phys_buf,
int mr_access_flags,
u64 *iova_start)
EXPORT_SYMBOL(ib_reg_phys_mr);
int ib_rereg_phys_mr(struct ib_mr *mr,
int mr_rereg_mask,
struct ib_pd *pd,
struct ib_phys_buf *phys_buf_array,
int num_phys_buf,
int mr_access_flags,
u64 *iova_start)
EXPORT_SYMBOL(ib_rereg_phys_mr);
int ib_query_mr(struct ib_mr *mr, struct ib_mr_attr *mr_attr)
EXPORT_SYMBOL(ib_query_mr);
int ib_dereg_mr(struct ib_mr *mr)
EXPORT_SYMBOL(ib_dereg_mr);
struct ib_mr *ib_alloc_fast_reg_mr(struct ib_pd *pd, int max_page_list_len)
EXPORT_SYMBOL(ib_alloc_fast_reg_mr);
struct ib_fast_reg_page_list *ib_alloc_fast_reg_page_list(struct ib_device *device,
int max_page_list_len)
EXPORT_SYMBOL(ib_alloc_fast_reg_page_list);
void ib_free_fast_reg_page_list(struct ib_fast_reg_page_list *page_list)
EXPORT_SYMBOL(ib_free_fast_reg_page_list);
struct ib_mw *ib_alloc_mw(struct ib_pd *pd)
EXPORT_SYMBOL(ib_alloc_mw);
int ib_dealloc_mw(struct ib_mw *mw)
EXPORT_SYMBOL(ib_dealloc_mw);
struct ib_fmr *ib_alloc_fmr(struct ib_pd *pd,
int mr_access_flags,
struct ib_fmr_attr *fmr_attr)
EXPORT_SYMBOL(ib_alloc_fmr);
int ib_unmap_fmr(struct list_head *fmr_list)
EXPORT_SYMBOL(ib_unmap_fmr);
int ib_dealloc_fmr(struct ib_fmr *fmr)
EXPORT_SYMBOL(ib_dealloc_fmr);
int ib_attach_mcast(struct ib_qp *qp, union ib_gid *gid, u16 lid)
EXPORT_SYMBOL(ib_attach_mcast);
int ib_detach_mcast(struct ib_qp *qp, union ib_gid *gid, u16 lid)
EXPORT_SYMBOL(ib_detach_mcast);
