atomic_t mod_qp_timouts;
atomic_t qps_created;
atomic_t sw_qps_destroyed;
static void nes_unregister_ofa_device(struct nes_ib_device *nesibdev);
static struct ib_mw *nes_alloc_mw(struct ib_pd *ibpd)
static int nes_dealloc_mw(struct ib_mw *ibmw)
static int nes_bind_mw(struct ib_qp *ibqp, struct ib_mw *ibmw,
struct ib_mw_bind *ibmw_bind)
static int alloc_fast_reg_mr(struct nes_device *nesdev, struct nes_pd *nespd,
u32 stag, u32 page_count)
static struct ib_mr *nes_alloc_fast_reg_mr(struct ib_pd *ibpd, int max_page_list_len)
static struct ib_fast_reg_page_list *nes_alloc_fast_reg_page_list(
struct ib_device *ibdev,
int page_list_len)
static void nes_free_fast_reg_page_list(struct ib_fast_reg_page_list *pifrpl)
static int nes_query_device(struct ib_device *ibdev, struct ib_device_attr *props)
static int nes_query_port(struct ib_device *ibdev, u8 port, struct ib_port_attr *props)
static int nes_modify_port(struct ib_device *ibdev, u8 port,
int port_modify_mask, struct ib_port_modify *props)
static int nes_query_pkey(struct ib_device *ibdev, u8 port, u16 index, u16 *pkey)
static int nes_query_gid(struct ib_device *ibdev, u8 port,
int index, union ib_gid *gid)
static struct ib_ucontext *nes_alloc_ucontext(struct ib_device *ibdev,
struct ib_udata *udata)
static int nes_dealloc_ucontext(struct ib_ucontext *context)
static int nes_mmap(struct ib_ucontext *context, struct vm_area_struct *vma)
static struct ib_pd *nes_alloc_pd(struct ib_device *ibdev,
struct ib_ucontext *context, struct ib_udata *udata)
static int nes_dealloc_pd(struct ib_pd *ibpd)
static struct ib_ah *nes_create_ah(struct ib_pd *pd, struct ib_ah_attr *ah_attr)
static int nes_destroy_ah(struct ib_ah *ah)
static inline u8 nes_get_encoded_size(int *size)
static int nes_setup_virt_qp(struct nes_qp *nesqp, struct nes_pbl *nespbl,
struct nes_vnic *nesvnic, int sq_size, int rq_size)
static int nes_setup_mmap_qp(struct nes_qp *nesqp, struct nes_vnic *nesvnic,
int sq_size, int rq_size)
static inline void nes_free_qp_mem(struct nes_device *nesdev,
struct nes_qp *nesqp, int virt_wqs)
static struct ib_qp *nes_create_qp(struct ib_pd *ibpd,
struct ib_qp_init_attr *init_attr, struct ib_udata *udata)
static void nes_clean_cq(struct nes_qp *nesqp, struct nes_cq *nescq)
static int nes_destroy_qp(struct ib_qp *ibqp)
static struct ib_cq *nes_create_cq(struct ib_device *ibdev, int entries,
int comp_vector,
struct ib_ucontext *context, struct ib_udata *udata)
static int nes_destroy_cq(struct ib_cq *ib_cq)
static u32 root_256(struct nes_device *nesdev,
struct nes_root_vpbl *root_vpbl,
struct nes_root_vpbl *new_root,
u16 pbl_count_4k)
static int nes_reg_mr(struct nes_device *nesdev, struct nes_pd *nespd,
u32 stag, u64 region_length, struct nes_root_vpbl *root_vpbl,
dma_addr_t single_buffer, u16 pbl_count_4k,
u16 residual_page_count_4k, int acc, u64 *iova_start,
u16 *actual_pbl_cnt, u8 *used_4k_pbls)
static struct ib_mr *nes_reg_phys_mr(struct ib_pd *ib_pd,
struct ib_phys_buf *buffer_list, int num_phys_buf, int acc,
u64 * iova_start)
static struct ib_mr *nes_get_dma_mr(struct ib_pd *pd, int acc)
static struct ib_mr *nes_reg_user_mr(struct ib_pd *pd, u64 start, u64 length,
u64 virt, int acc, struct ib_udata *udata)
static int nes_dereg_mr(struct ib_mr *ib_mr)
static ssize_t show_rev(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_fw_ver(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_hca(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_board(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(hw_rev, S_IRUGO, show_rev, NULL);
static DEVICE_ATTR(fw_ver, S_IRUGO, show_fw_ver, NULL);
static DEVICE_ATTR(hca_type, S_IRUGO, show_hca, NULL);
static DEVICE_ATTR(board_id, S_IRUGO, show_board, NULL);
static struct device_attribute *nes_dev_attributes[] = ;
static int nes_query_qp(struct ib_qp *ibqp, struct ib_qp_attr *attr,
int attr_mask, struct ib_qp_init_attr *init_attr)
int nes_hw_modify_qp(struct nes_device *nesdev, struct nes_qp *nesqp,
u32 next_iwarp_state, u32 termlen, u32 wait_completion)
int nes_modify_qp(struct ib_qp *ibqp, struct ib_qp_attr *attr,
int attr_mask, struct ib_udata *udata)
static int nes_multicast_attach(struct ib_qp *ibqp, union ib_gid *gid, u16 lid)
static int nes_multicast_detach(struct ib_qp *ibqp, union ib_gid *gid, u16 lid)
static int nes_process_mad(struct ib_device *ibdev, int mad_flags,
u8 port_num, struct ib_wc *in_wc, struct ib_grh *in_grh,
struct ib_mad *in_mad, struct ib_mad *out_mad)
static inline void
fill_wqe_sg_send(struct nes_hw_qp_wqe *wqe, struct ib_send_wr *ib_wr, u32 uselkey)
static int nes_post_send(struct ib_qp *ibqp, struct ib_send_wr *ib_wr,
struct ib_send_wr **bad_wr)
static int nes_post_recv(struct ib_qp *ibqp, struct ib_recv_wr *ib_wr,
struct ib_recv_wr **bad_wr)
static int nes_poll_cq(struct ib_cq *ibcq, int num_entries, struct ib_wc *entry)
static int nes_req_notify_cq(struct ib_cq *ibcq, enum ib_cq_notify_flags notify_flags)
struct nes_ib_device *nes_init_ofa_device(struct net_device *netdev)
static void nes_handle_delayed_event(unsigned long data)
void  nes_port_ibevent(struct nes_vnic *nesvnic)
void nes_destroy_ofa_device(struct nes_ib_device *nesibdev)
int nes_register_ofa_device(struct nes_ib_device *nesibdev)
static void nes_unregister_ofa_device(struct nes_ib_device *nesibdev)
