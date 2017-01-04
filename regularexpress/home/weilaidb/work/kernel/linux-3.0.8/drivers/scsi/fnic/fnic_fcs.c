struct workqueue_struct *fnic_event_queue;
static void fnic_set_eth_mode(struct fnic *);
void fnic_handle_link(struct work_struct *work)
void fnic_handle_frame(struct work_struct *work)
static inline int fnic_import_rq_eth_pkt(struct fnic *fnic, struct sk_buff *skb)
void fnic_update_mac_locked(struct fnic *fnic, u8 *new)
void fnic_update_mac(struct fc_lport *lport, u8 *new)
void fnic_set_port_id(struct fc_lport *lport, u32 port_id, struct fc_frame *fp)
static void fnic_rq_cmpl_frame_recv(struct vnic_rq *rq, struct cq_desc
*cq_desc, struct vnic_rq_buf *buf,
int skipped __attribute__((unused)),
void *opaque)
static int fnic_rq_cmpl_handler_cont(struct vnic_dev *vdev,
struct cq_desc *cq_desc, u8 type,
u16 q_number, u16 completed_index,
void *opaque)
int fnic_rq_cmpl_handler(struct fnic *fnic, int rq_work_to_do)
int fnic_alloc_rq_frame(struct vnic_rq *rq)
void fnic_free_rq_buf(struct vnic_rq *rq, struct vnic_rq_buf *buf)
void fnic_eth_send(struct fcoe_ctlr *fip, struct sk_buff *skb)
static int fnic_send_frame(struct fnic *fnic, struct fc_frame *fp)
int fnic_send(struct fc_lport *lp, struct fc_frame *fp)
void fnic_flush_tx(struct fnic *fnic)
static void fnic_set_eth_mode(struct fnic *fnic)
static void fnic_wq_complete_frame_send(struct vnic_wq *wq,
struct cq_desc *cq_desc,
struct vnic_wq_buf *buf, void *opaque)
static int fnic_wq_cmpl_handler_cont(struct vnic_dev *vdev,
struct cq_desc *cq_desc, u8 type,
u16 q_number, u16 completed_index,
void *opaque)
int fnic_wq_cmpl_handler(struct fnic *fnic, int work_to_do)
void fnic_free_wq_buf(struct vnic_wq *wq, struct vnic_wq_buf *buf)
