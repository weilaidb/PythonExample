#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#if defined(CONFIG_VLAN_8021Q) || defined(CONFIG_VLAN_8021Q_MODULE)
#define BCM_VLAN 1
#define DRV_MODULE_NAME		"cnic"
static char version[] __devinitdata =
"Broadcom NetXtreme II CNIC Driver " DRV_MODULE_NAME " v" CNIC_MODULE_VERSION " (" CNIC_MODULE_RELDATE ")\n";
MODULE_AUTHOR("Michael Chan <mchan@broadcom.com> and John(Zongxi) "
"Chen (zongxi@broadcom.com");
MODULE_DESCRIPTION("Broadcom NetXtreme II CNIC Driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(CNIC_MODULE_VERSION);
static LIST_HEAD(cnic_dev_list);
static LIST_HEAD(cnic_udev_list);
static DEFINE_RWLOCK(cnic_dev_lock);
static DEFINE_MUTEX(cnic_lock);
static struct cnic_ulp_ops __rcu *cnic_ulp_tbl[MAX_CNIC_ULP_TYPE];
static inline struct cnic_ulp_ops *cnic_ulp_tbl_prot(int type)
static int cnic_service_bnx2(void *, void *);
static int cnic_service_bnx2x(void *, void *);
static int cnic_ctl(void *, struct cnic_ctl_info *);
static struct cnic_ops cnic_bnx2_ops = ;
static struct cnic_ops cnic_bnx2x_ops = ;
static struct workqueue_struct *cnic_wq;
static void cnic_shutdown_rings(struct cnic_dev *);
static void cnic_init_rings(struct cnic_dev *);
static int cnic_cm_set_pg(struct cnic_sock *);
static int cnic_uio_open(struct uio_info *uinfo, struct inode *inode)
static int cnic_uio_close(struct uio_info *uinfo, struct inode *inode)
static inline void cnic_hold(struct cnic_dev *dev)
static inline void cnic_put(struct cnic_dev *dev)
static inline void csk_hold(struct cnic_sock *csk)
static inline void csk_put(struct cnic_sock *csk)
static struct cnic_dev *cnic_from_netdev(struct net_device *netdev)
static inline void ulp_get(struct cnic_ulp_ops *ulp_ops)
static inline void ulp_put(struct cnic_ulp_ops *ulp_ops)
static void cnic_ctx_wr(struct cnic_dev *dev, u32 cid_addr, u32 off, u32 val)
static void cnic_ctx_tbl_wr(struct cnic_dev *dev, u32 off, dma_addr_t addr)
static void cnic_ring_ctl(struct cnic_dev *dev, u32 cid, u32 cl_id, int start)
static void cnic_reg_wr_ind(struct cnic_dev *dev, u32 off, u32 val)
static u32 cnic_reg_rd_ind(struct cnic_dev *dev, u32 off)
static int cnic_in_use(struct cnic_sock *csk)
static void cnic_spq_completion(struct cnic_dev *dev, int cmd, u32 count)
static int cnic_get_l5_cid(struct cnic_local *cp, u32 cid, u32 *l5_cid)
static int cnic_send_nlmsg(struct cnic_local *cp, u32 type,
struct cnic_sock *csk)
static void cnic_cm_upcall(struct cnic_local *, struct cnic_sock *, u8);
static int cnic_iscsi_nl_msg_recv(struct cnic_dev *dev, u32 msg_type,
char *buf, u16 len)
static int cnic_offld_prep(struct cnic_sock *csk)
static int cnic_close_prep(struct cnic_sock *csk)
static int cnic_abort_prep(struct cnic_sock *csk)
int cnic_register_driver(int ulp_type, struct cnic_ulp_ops *ulp_ops)
int cnic_unregister_driver(int ulp_type)
static int cnic_start_hw(struct cnic_dev *);
static void cnic_stop_hw(struct cnic_dev *);
static int cnic_register_device(struct cnic_dev *dev, int ulp_type,
void *ulp_ctx)
EXPORT_SYMBOL(cnic_register_driver);
static int cnic_unregister_device(struct cnic_dev *dev, int ulp_type)
EXPORT_SYMBOL(cnic_unregister_driver);
static int cnic_init_id_tbl(struct cnic_id_tbl *id_tbl, u32 size, u32 start_id,
u32 next)
static void cnic_free_id_tbl(struct cnic_id_tbl *id_tbl)
static int cnic_alloc_id(struct cnic_id_tbl *id_tbl, u32 id)
static u32 cnic_alloc_new_id(struct cnic_id_tbl *id_tbl)
static void cnic_free_id(struct cnic_id_tbl *id_tbl, u32 id)
static void cnic_free_dma(struct cnic_dev *dev, struct cnic_dma *dma)
static void cnic_setup_page_tbl(struct cnic_dev *dev, struct cnic_dma *dma)
static void cnic_setup_page_tbl_le(struct cnic_dev *dev, struct cnic_dma *dma)
static int cnic_alloc_dma(struct cnic_dev *dev, struct cnic_dma *dma,
int pages, int use_pg_tbl)
static void cnic_free_context(struct cnic_dev *dev)
static void __cnic_free_uio(struct cnic_uio_dev *udev)
static void cnic_free_uio(struct cnic_uio_dev *udev)
static void cnic_free_resc(struct cnic_dev *dev)
static int cnic_alloc_context(struct cnic_dev *dev)
static int cnic_alloc_kcq(struct cnic_dev *dev, struct kcq_info *info)
static int cnic_alloc_uio_rings(struct cnic_dev *dev, int pages)
static int cnic_init_uio(struct cnic_dev *dev)
static int cnic_alloc_bnx2_resc(struct cnic_dev *dev)
static int cnic_alloc_bnx2x_context(struct cnic_dev *dev)
static int cnic_alloc_bnx2x_resc(struct cnic_dev *dev)
static inline u32 cnic_kwq_avail(struct cnic_local *cp)
static int cnic_submit_bnx2_kwqes(struct cnic_dev *dev, struct kwqe *wqes[],
u32 num_wqes)
static void *cnic_get_kwqe_16_data(struct cnic_local *cp, u32 l5_cid,
union l5cm_specific_data *l5_data)
static int cnic_submit_kwqe_16(struct cnic_dev *dev, u32 cmd, u32 cid,
u32 type, union l5cm_specific_data *l5_data)
static void cnic_reply_bnx2x_kcqes(struct cnic_dev *dev, int ulp_type,
struct kcqe *cqes[], u32 num_cqes)
static int cnic_bnx2x_iscsi_init1(struct cnic_dev *dev, struct kwqe *kwqe)
static int cnic_bnx2x_iscsi_init2(struct cnic_dev *dev, struct kwqe *kwqe)
static void cnic_free_bnx2x_conn_resc(struct cnic_dev *dev, u32 l5_cid)
static int cnic_alloc_bnx2x_conn_resc(struct cnic_dev *dev, u32 l5_cid)
static void *cnic_get_bnx2x_ctx(struct cnic_dev *dev, u32 cid, int init,
struct regpair *ctx_addr)
static int cnic_setup_bnx2x_ctx(struct cnic_dev *dev, struct kwqe *wqes[],
u32 num)
static int cnic_bnx2x_iscsi_ofld1(struct cnic_dev *dev, struct kwqe *wqes[],
u32 num, int *work)
static int cnic_bnx2x_iscsi_update(struct cnic_dev *dev, struct kwqe *kwqe)
static int cnic_bnx2x_destroy_ramrod(struct cnic_dev *dev, u32 l5_cid)
static int cnic_bnx2x_iscsi_destroy(struct cnic_dev *dev, struct kwqe *kwqe)
static void cnic_init_storm_conn_bufs(struct cnic_dev *dev,
struct l4_kwq_connect_req1 *kwqe1,
struct l4_kwq_connect_req3 *kwqe3,
struct l5cm_active_conn_buffer *conn_buf)
static void cnic_init_bnx2x_mac(struct cnic_dev *dev)
static void cnic_bnx2x_set_tcp_timestamp(struct cnic_dev *dev, int tcp_ts)
static int cnic_bnx2x_connect(struct cnic_dev *dev, struct kwqe *wqes[],
u32 num, int *work)
static int cnic_bnx2x_close(struct cnic_dev *dev, struct kwqe *kwqe)
static int cnic_bnx2x_reset(struct cnic_dev *dev, struct kwqe *kwqe)
static int cnic_bnx2x_offload_pg(struct cnic_dev *dev, struct kwqe *kwqe)
static int cnic_bnx2x_update_pg(struct cnic_dev *dev, struct kwqe *kwqe)
static int cnic_bnx2x_fcoe_stat(struct cnic_dev *dev, struct kwqe *kwqe)
static int cnic_bnx2x_fcoe_init1(struct cnic_dev *dev, struct kwqe *wqes[],
u32 num, int *work)
static int cnic_bnx2x_fcoe_ofld1(struct cnic_dev *dev, struct kwqe *wqes[],
u32 num, int *work)
static int cnic_bnx2x_fcoe_enable(struct cnic_dev *dev, struct kwqe *kwqe)
static int cnic_bnx2x_fcoe_disable(struct cnic_dev *dev, struct kwqe *kwqe)
static int cnic_bnx2x_fcoe_destroy(struct cnic_dev *dev, struct kwqe *kwqe)
static int cnic_bnx2x_fcoe_fw_destroy(struct cnic_dev *dev, struct kwqe *kwqe)
static int cnic_submit_bnx2x_iscsi_kwqes(struct cnic_dev *dev,
struct kwqe *wqes[], u32 num_wqes)
static int cnic_submit_bnx2x_fcoe_kwqes(struct cnic_dev *dev,
struct kwqe *wqes[], u32 num_wqes)
static int cnic_submit_bnx2x_kwqes(struct cnic_dev *dev, struct kwqe *wqes[],
u32 num_wqes)
static inline u32 cnic_get_kcqe_layer_mask(u32 opflag)
static void service_kcqes(struct cnic_dev *dev, int num_cqes)
static u16 cnic_bnx2_next_idx(u16 idx)
static u16 cnic_bnx2_hw_idx(u16 idx)
static u16 cnic_bnx2x_next_idx(u16 idx)
static u16 cnic_bnx2x_hw_idx(u16 idx)
static int cnic_get_kcqes(struct cnic_dev *dev, struct kcq_info *info)
static int cnic_l2_completion(struct cnic_local *cp)
static void cnic_chk_pkt_rings(struct cnic_local *cp)
static u32 cnic_service_bnx2_queues(struct cnic_dev *dev)
static int cnic_service_bnx2(void *data, void *status_blk)
static void cnic_service_bnx2_msix(unsigned long data)
static void cnic_doirq(struct cnic_dev *dev)
static irqreturn_t cnic_irq(int irq, void *dev_instance)
static inline void cnic_ack_bnx2x_int(struct cnic_dev *dev, u8 id, u8 storm,
u16 index, u8 op, u8 update)
static void cnic_ack_igu_sb(struct cnic_dev *dev, u8 igu_sb_id, u8 segment,
u16 index, u8 op, u8 update)
static void cnic_ack_bnx2x_msix(struct cnic_dev *dev)
static void cnic_ack_bnx2x_e2_msix(struct cnic_dev *dev)
static u32 cnic_service_bnx2x_kcq(struct cnic_dev *dev, struct kcq_info *info)
static void cnic_service_bnx2x_bh(unsigned long data)
static int cnic_service_bnx2x(void *data, void *status_blk)
static void cnic_ulp_stop_one(struct cnic_local *cp, int if_type)
static void cnic_ulp_stop(struct cnic_dev *dev)
static void cnic_ulp_start(struct cnic_dev *dev)
static int cnic_ctl(void *data, struct cnic_ctl_info *info)
static void cnic_ulp_init(struct cnic_dev *dev)
static void cnic_ulp_exit(struct cnic_dev *dev)
static int cnic_cm_offload_pg(struct cnic_sock *csk)
static int cnic_cm_update_pg(struct cnic_sock *csk)
static int cnic_cm_upload_pg(struct cnic_sock *csk)
static int cnic_cm_conn_req(struct cnic_sock *csk)
static int cnic_cm_close_req(struct cnic_sock *csk)
static int cnic_cm_abort_req(struct cnic_sock *csk)
static int cnic_cm_create(struct cnic_dev *dev, int ulp_type, u32 cid,
u32 l5_cid, struct cnic_sock **csk, void *context)
static void cnic_cm_cleanup(struct cnic_sock *csk)
static void cnic_close_conn(struct cnic_sock *csk)
static int cnic_cm_destroy(struct cnic_sock *csk)
static inline u16 cnic_get_vlan(struct net_device *dev,
struct net_device **vlan_dev)
static int cnic_get_v4_route(struct sockaddr_in *dst_addr,
struct dst_entry **dst)
static int cnic_get_v6_route(struct sockaddr_in6 *dst_addr,
struct dst_entry **dst)
static struct cnic_dev *cnic_cm_select_dev(struct sockaddr_in *dst_addr,
int ulp_type)
static int cnic_resolve_addr(struct cnic_sock *csk, struct cnic_sockaddr *saddr)
static int cnic_get_route(struct cnic_sock *csk, struct cnic_sockaddr *saddr)
static void cnic_init_csk_state(struct cnic_sock *csk)
static int cnic_cm_connect(struct cnic_sock *csk, struct cnic_sockaddr *saddr)
static int cnic_cm_abort(struct cnic_sock *csk)
static int cnic_cm_close(struct cnic_sock *csk)
static void cnic_cm_upcall(struct cnic_local *cp, struct cnic_sock *csk,
u8 opcode)
static int cnic_cm_set_pg(struct cnic_sock *csk)
static void cnic_cm_process_offld_pg(struct cnic_dev *dev, struct l4_kcq *kcqe)
static void cnic_process_fcoe_term_conn(struct cnic_dev *dev, struct kcqe *kcqe)
static void cnic_cm_process_kcqe(struct cnic_dev *dev, struct kcqe *kcqe)
static void cnic_cm_indicate_kcqe(void *data, struct kcqe *kcqe[], u32 num)
static struct cnic_ulp_ops cm_ulp_ops = ;
static void cnic_cm_free_mem(struct cnic_dev *dev)
static int cnic_cm_alloc_mem(struct cnic_dev *dev)
static int cnic_ready_to_close(struct cnic_sock *csk, u32 opcode)
static void cnic_close_bnx2_conn(struct cnic_sock *csk, u32 opcode)
static void cnic_cm_stop_bnx2_hw(struct cnic_dev *dev)
static int cnic_cm_init_bnx2_hw(struct cnic_dev *dev)
static void cnic_close_bnx2x_conn(struct cnic_sock *csk, u32 opcode)
static void cnic_cm_stop_bnx2x_hw(struct cnic_dev *dev)
static int cnic_cm_init_bnx2x_hw(struct cnic_dev *dev)
static void cnic_delete_task(struct work_struct *work)
static int cnic_cm_open(struct cnic_dev *dev)
static int cnic_cm_shutdown(struct cnic_dev *dev)
static void cnic_init_context(struct cnic_dev *dev, u32 cid)
static int cnic_setup_5709_context(struct cnic_dev *dev, int valid)
static void cnic_free_irq(struct cnic_dev *dev)
static int cnic_request_irq(struct cnic_dev *dev)
static int cnic_init_bnx2_irq(struct cnic_dev *dev)
static void cnic_enable_bnx2_int(struct cnic_dev *dev)
static void cnic_disable_bnx2_int_sync(struct cnic_dev *dev)
static void cnic_init_bnx2_tx_ring(struct cnic_dev *dev)
static void cnic_init_bnx2_rx_ring(struct cnic_dev *dev)
static void cnic_shutdown_bnx2_rx_ring(struct cnic_dev *dev)
static void cnic_set_bnx2_mac(struct cnic_dev *dev)
static int cnic_start_bnx2_hw(struct cnic_dev *dev)
static void cnic_setup_bnx2x_context(struct cnic_dev *dev)
static int cnic_init_bnx2x_irq(struct cnic_dev *dev)
static inline void cnic_storm_memset_hc_disable(struct cnic_dev *dev,
u16 sb_id, u8 sb_index,
u8 disable)
static void cnic_enable_bnx2x_int(struct cnic_dev *dev)
static void cnic_disable_bnx2x_int_sync(struct cnic_dev *dev)
static void cnic_init_bnx2x_tx_ring(struct cnic_dev *dev,
struct client_init_ramrod_data *data)
static void cnic_init_bnx2x_rx_ring(struct cnic_dev *dev,
struct client_init_ramrod_data *data)
static void cnic_init_bnx2x_kcq(struct cnic_dev *dev)
static int cnic_start_bnx2x_hw(struct cnic_dev *dev)
static void cnic_init_rings(struct cnic_dev *dev)
static void cnic_shutdown_rings(struct cnic_dev *dev)
static int cnic_register_netdev(struct cnic_dev *dev)
static void cnic_unregister_netdev(struct cnic_dev *dev)
static int cnic_start_hw(struct cnic_dev *dev)
static void cnic_stop_bnx2_hw(struct cnic_dev *dev)
static void cnic_stop_bnx2x_hw(struct cnic_dev *dev)
static void cnic_stop_hw(struct cnic_dev *dev)
static void cnic_free_dev(struct cnic_dev *dev)
static struct cnic_dev *cnic_alloc_dev(struct net_device *dev,
struct pci_dev *pdev)
static struct cnic_dev *init_bnx2_cnic(struct net_device *dev)
static struct cnic_dev *init_bnx2x_cnic(struct net_device *dev)
static struct cnic_dev *is_cnic_dev(struct net_device *dev)
static int cnic_netdev_event(struct notifier_block *this, unsigned long event,
void *ptr)
static struct notifier_block cnic_netdev_notifier = ;
static void cnic_release(void)
static int __init cnic_init(void)
static void __exit cnic_exit(void)
module_init(cnic_init);
module_exit(cnic_exit);
