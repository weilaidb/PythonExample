#if !defined(IB_VERBS_H)
#define IB_VERBS_H
extern struct workqueue_struct *ib_wq;
union ib_gid ;
enum rdma_node_type ;
enum rdma_transport_type ;
enum rdma_transport_type
rdma_node_get_transport(enum rdma_node_type node_type) __attribute_const__;
enum rdma_link_layer ;
enum ib_device_cap_flags ;
enum ib_atomic_cap ;
struct ib_device_attr ;
enum ib_mtu ;
static inline int ib_mtu_enum_to_int(enum ib_mtu mtu)
enum ib_port_state ;
enum ib_port_cap_flags ;
enum ib_port_width ;
static inline int ib_width_enum_to_int(enum ib_port_width width)
struct ib_protocol_stats ;
struct iw_protocol_stats ;
union rdma_protocol_stats ;
struct ib_port_attr ;
enum ib_device_modify_flags ;
struct ib_device_modify ;
enum ib_port_modify_flags ;
struct ib_port_modify ;
enum ib_event_type ;
struct ib_event ;
struct ib_event_handler ;
#define INIT_IB_EVENT_HANDLER(_ptr, _device, _handler)		\
do  while (0)
struct ib_global_route ;
struct ib_grh ;
enum ;
#define IB_LID_PERMISSIVE	cpu_to_be16(0xFFFF)
enum ib_ah_flags ;
enum ib_rate ;
int ib_rate_to_mult(enum ib_rate rate) __attribute_const__;
enum ib_rate mult_to_ib_rate(int mult) __attribute_const__;
struct ib_ah_attr ;
enum ib_wc_status ;
enum ib_wc_opcode ;
enum ib_wc_flags ;
struct ib_wc ;
enum ib_cq_notify_flags ;
enum ib_srq_attr_mask ;
struct ib_srq_attr ;
struct ib_srq_init_attr ;
struct ib_qp_cap ;
enum ib_sig_type ;
enum ib_qp_type ;
enum ib_qp_create_flags ;
struct ib_qp_init_attr ;
enum ib_rnr_timeout ;
enum ib_qp_attr_mask ;
enum ib_qp_state ;
enum ib_mig_state ;
struct ib_qp_attr ;
enum ib_wr_opcode ;
enum ib_send_flags ;
struct ib_sge ;
struct ib_fast_reg_page_list ;
struct ib_send_wr ;
struct ib_recv_wr ;
enum ib_access_flags ;
struct ib_phys_buf ;
struct ib_mr_attr ;
enum ib_mr_rereg_flags ;
struct ib_mw_bind ;
struct ib_fmr_attr ;
struct ib_ucontext ;
struct ib_uobject ;
struct ib_udata ;
struct ib_pd ;
struct ib_ah ;
typedef void (*ib_comp_handler)(struct ib_cq *cq, void *cq_context);
struct ib_cq ;
struct ib_srq ;
struct ib_qp ;
struct ib_mr ;
struct ib_mw ;
struct ib_fmr ;
struct ib_mad;
struct ib_grh;
enum ib_process_mad_flags ;
enum ib_mad_result ;
#define IB_DEVICE_NAME_MAX 64
struct ib_cache ;
struct ib_dma_mapping_ops ;
struct iw_cm_verbs;
struct ib_device ;
struct ib_client ;
struct ib_device *ib_alloc_device(size_t size);
void ib_dealloc_device(struct ib_device *device);
int ib_register_device(struct ib_device *device,
int (*port_callback)(struct ib_device *,
u8, struct kobject *));
void ib_unregister_device(struct ib_device *device);
int ib_register_client   (struct ib_client *client);
void ib_unregister_client(struct ib_client *client);
void *ib_get_client_data(struct ib_device *device, struct ib_client *client);
void  ib_set_client_data(struct ib_device *device, struct ib_client *client,
void *data);
static inline int ib_copy_from_udata(void *dest, struct ib_udata *udata, size_t len)
static inline int ib_copy_to_udata(struct ib_udata *udata, void *src, size_t len)
int ib_modify_qp_is_ok(enum ib_qp_state cur_state, enum ib_qp_state next_state,
enum ib_qp_type type, enum ib_qp_attr_mask mask);
int ib_register_event_handler  (struct ib_event_handler *event_handler);
int ib_unregister_event_handler(struct ib_event_handler *event_handler);
void ib_dispatch_event(struct ib_event *event);
int ib_query_device(struct ib_device *device,
struct ib_device_attr *device_attr);
int ib_query_port(struct ib_device *device,
u8 port_num, struct ib_port_attr *port_attr);
enum rdma_link_layer rdma_port_get_link_layer(struct ib_device *device,
u8 port_num);
int ib_query_gid(struct ib_device *device,
u8 port_num, int index, union ib_gid *gid);
int ib_query_pkey(struct ib_device *device,
u8 port_num, u16 index, u16 *pkey);
int ib_modify_device(struct ib_device *device,
int device_modify_mask,
struct ib_device_modify *device_modify);
int ib_modify_port(struct ib_device *device,
u8 port_num, int port_modify_mask,
struct ib_port_modify *port_modify);
int ib_find_gid(struct ib_device *device, union ib_gid *gid,
u8 *port_num, u16 *index);
int ib_find_pkey(struct ib_device *device,
u8 port_num, u16 pkey, u16 *index);
struct ib_pd *ib_alloc_pd(struct ib_device *device);
int ib_dealloc_pd(struct ib_pd *pd);
struct ib_ah *ib_create_ah(struct ib_pd *pd, struct ib_ah_attr *ah_attr);
int ib_init_ah_from_wc(struct ib_device *device, u8 port_num, struct ib_wc *wc,
struct ib_grh *grh, struct ib_ah_attr *ah_attr);
struct ib_ah *ib_create_ah_from_wc(struct ib_pd *pd, struct ib_wc *wc,
struct ib_grh *grh, u8 port_num);
int ib_modify_ah(struct ib_ah *ah, struct ib_ah_attr *ah_attr);
int ib_query_ah(struct ib_ah *ah, struct ib_ah_attr *ah_attr);
int ib_destroy_ah(struct ib_ah *ah);
struct ib_srq *ib_create_srq(struct ib_pd *pd,
struct ib_srq_init_attr *srq_init_attr);
int ib_modify_srq(struct ib_srq *srq,
struct ib_srq_attr *srq_attr,
enum ib_srq_attr_mask srq_attr_mask);
int ib_query_srq(struct ib_srq *srq,
struct ib_srq_attr *srq_attr);
int ib_destroy_srq(struct ib_srq *srq);
static inline int ib_post_srq_recv(struct ib_srq *srq,
struct ib_recv_wr *recv_wr,
struct ib_recv_wr **bad_recv_wr)
struct ib_qp *ib_create_qp(struct ib_pd *pd,
struct ib_qp_init_attr *qp_init_attr);
int ib_modify_qp(struct ib_qp *qp,
struct ib_qp_attr *qp_attr,
int qp_attr_mask);
int ib_query_qp(struct ib_qp *qp,
struct ib_qp_attr *qp_attr,
int qp_attr_mask,
struct ib_qp_init_attr *qp_init_attr);
int ib_destroy_qp(struct ib_qp *qp);
static inline int ib_post_send(struct ib_qp *qp,
struct ib_send_wr *send_wr,
struct ib_send_wr **bad_send_wr)
static inline int ib_post_recv(struct ib_qp *qp,
struct ib_recv_wr *recv_wr,
struct ib_recv_wr **bad_recv_wr)
struct ib_cq *ib_create_cq(struct ib_device *device,
ib_comp_handler comp_handler,
void (*event_handler)(struct ib_event *, void *),
void *cq_context, int cqe, int comp_vector);
int ib_resize_cq(struct ib_cq *cq, int cqe);
int ib_modify_cq(struct ib_cq *cq, u16 cq_count, u16 cq_period);
int ib_destroy_cq(struct ib_cq *cq);
static inline int ib_poll_cq(struct ib_cq *cq, int num_entries,
struct ib_wc *wc)
int ib_peek_cq(struct ib_cq *cq, int wc_cnt);
static inline int ib_req_notify_cq(struct ib_cq *cq,
enum ib_cq_notify_flags flags)
static inline int ib_req_ncomp_notif(struct ib_cq *cq, int wc_cnt)
struct ib_mr *ib_get_dma_mr(struct ib_pd *pd, int mr_access_flags);
static inline int ib_dma_mapping_error(struct ib_device *dev, u64 dma_addr)
static inline u64 ib_dma_map_single(struct ib_device *dev,
void *cpu_addr, size_t size,
enum dma_data_direction direction)
static inline void ib_dma_unmap_single(struct ib_device *dev,
u64 addr, size_t size,
enum dma_data_direction direction)
static inline u64 ib_dma_map_single_attrs(struct ib_device *dev,
void *cpu_addr, size_t size,
enum dma_data_direction direction,
struct dma_attrs *attrs)
static inline void ib_dma_unmap_single_attrs(struct ib_device *dev,
u64 addr, size_t size,
enum dma_data_direction direction,
struct dma_attrs *attrs)
static inline u64 ib_dma_map_page(struct ib_device *dev,
struct page *page,
unsigned long offset,
size_t size,
enum dma_data_direction direction)
static inline void ib_dma_unmap_page(struct ib_device *dev,
u64 addr, size_t size,
enum dma_data_direction direction)
static inline int ib_dma_map_sg(struct ib_device *dev,
struct scatterlist *sg, int nents,
enum dma_data_direction direction)
static inline void ib_dma_unmap_sg(struct ib_device *dev,
struct scatterlist *sg, int nents,
enum dma_data_direction direction)
static inline int ib_dma_map_sg_attrs(struct ib_device *dev,
struct scatterlist *sg, int nents,
enum dma_data_direction direction,
struct dma_attrs *attrs)
static inline void ib_dma_unmap_sg_attrs(struct ib_device *dev,
struct scatterlist *sg, int nents,
enum dma_data_direction direction,
struct dma_attrs *attrs)
static inline u64 ib_sg_dma_address(struct ib_device *dev,
struct scatterlist *sg)
static inline unsigned int ib_sg_dma_len(struct ib_device *dev,
struct scatterlist *sg)
static inline void ib_dma_sync_single_for_cpu(struct ib_device *dev,
u64 addr,
size_t size,
enum dma_data_direction dir)
static inline void ib_dma_sync_single_for_device(struct ib_device *dev,
u64 addr,
size_t size,
enum dma_data_direction dir)
static inline void *ib_dma_alloc_coherent(struct ib_device *dev,
size_t size,
u64 *dma_handle,
gfp_t flag)
static inline void ib_dma_free_coherent(struct ib_device *dev,
size_t size, void *cpu_addr,
u64 dma_handle)
struct ib_mr *ib_reg_phys_mr(struct ib_pd *pd,
struct ib_phys_buf *phys_buf_array,
int num_phys_buf,
int mr_access_flags,
u64 *iova_start);
int ib_rereg_phys_mr(struct ib_mr *mr,
int mr_rereg_mask,
struct ib_pd *pd,
struct ib_phys_buf *phys_buf_array,
int num_phys_buf,
int mr_access_flags,
u64 *iova_start);
int ib_query_mr(struct ib_mr *mr, struct ib_mr_attr *mr_attr);
int ib_dereg_mr(struct ib_mr *mr);
struct ib_mr *ib_alloc_fast_reg_mr(struct ib_pd *pd, int max_page_list_len);
struct ib_fast_reg_page_list *ib_alloc_fast_reg_page_list(
struct ib_device *device, int page_list_len);
void ib_free_fast_reg_page_list(struct ib_fast_reg_page_list *page_list);
static inline void ib_update_fast_reg_key(struct ib_mr *mr, u8 newkey)
struct ib_mw *ib_alloc_mw(struct ib_pd *pd);
static inline int ib_bind_mw(struct ib_qp *qp,
struct ib_mw *mw,
struct ib_mw_bind *mw_bind)
int ib_dealloc_mw(struct ib_mw *mw);
struct ib_fmr *ib_alloc_fmr(struct ib_pd *pd,
int mr_access_flags,
struct ib_fmr_attr *fmr_attr);
static inline int ib_map_phys_fmr(struct ib_fmr *fmr,
u64 *page_list, int list_len,
u64 iova)
int ib_unmap_fmr(struct list_head *fmr_list);
int ib_dealloc_fmr(struct ib_fmr *fmr);
int ib_attach_mcast(struct ib_qp *qp, union ib_gid *gid, u16 lid);
int ib_detach_mcast(struct ib_qp *qp, union ib_gid *gid, u16 lid);
