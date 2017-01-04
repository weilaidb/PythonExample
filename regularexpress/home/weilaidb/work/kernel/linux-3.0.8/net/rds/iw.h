#define _RDS_IW_H
#define RDS_FASTREG_SIZE		20
#define RDS_FASTREG_POOL_SIZE		2048
#define RDS_IW_MAX_SGE			8
#define RDS_IW_RECV_SGE 		2
#define RDS_IW_DEFAULT_RECV_WR		1024
#define RDS_IW_DEFAULT_SEND_WR		256
#define RDS_IW_SUPPORTED_PROTOCOLS	0x00000003
extern struct list_head rds_iw_devices;
#define RDS_PAGE_LAST_OFF (((PAGE_SIZE  / RDS_FRAG_SIZE) - 1) * RDS_FRAG_SIZE)
struct rds_page_frag ;
struct rds_iw_incoming ;
struct rds_iw_connect_private ;
struct rds_iw_scatterlist ;
struct rds_iw_mapping ;
struct rds_iw_send_work ;
struct rds_iw_recv_work ;
struct rds_iw_work_ring ;
struct rds_iw_device;
struct rds_iw_connection ;
#define IB_GET_SEND_CREDITS(v)	((v) & 0xffff)
#define IB_GET_POST_CREDITS(v)	((v) >> 16)
#define IB_SET_SEND_CREDITS(v)	((v) & 0xffff)
#define IB_SET_POST_CREDITS(v)	((v) << 16)
struct rds_iw_cm_id ;
struct rds_iw_device ;
#define IB_ACK_IN_FLIGHT	0
#define IB_ACK_REQUESTED	1
#define RDS_IW_ACK_WR_ID	((u64)0xffffffffffffffffULL)
#define RDS_IW_FAST_REG_WR_ID	((u64)0xefefefefefefefefULL)
#define RDS_IW_LOCAL_INV_WR_ID	((u64)0xdfdfdfdfdfdfdfdfULL)
struct rds_iw_statistics ;
extern struct workqueue_struct *rds_iw_wq;
static inline void rds_iw_dma_sync_sg_for_cpu(struct ib_device *dev,
struct scatterlist *sg, unsigned int sg_dma_len, int direction)
#define ib_dma_sync_sg_for_cpu	rds_iw_dma_sync_sg_for_cpu
static inline void rds_iw_dma_sync_sg_for_device(struct ib_device *dev,
struct scatterlist *sg, unsigned int sg_dma_len, int direction)
#define ib_dma_sync_sg_for_device	rds_iw_dma_sync_sg_for_device
static inline u32 rds_iw_local_dma_lkey(struct rds_iw_connection *ic)
extern struct rds_transport rds_iw_transport;
extern struct ib_client rds_iw_client;
extern unsigned int fastreg_pool_size;
extern unsigned int fastreg_message_size;
extern spinlock_t iw_nodev_conns_lock;
extern struct list_head iw_nodev_conns;
int rds_iw_conn_alloc(struct rds_connection *conn, gfp_t gfp);
void rds_iw_conn_free(void *arg);
int rds_iw_conn_connect(struct rds_connection *conn);
void rds_iw_conn_shutdown(struct rds_connection *conn);
void rds_iw_state_change(struct sock *sk);
int rds_iw_listen_init(void);
void rds_iw_listen_stop(void);
void __rds_iw_conn_error(struct rds_connection *conn, const char *, ...);
int rds_iw_cm_handle_connect(struct rdma_cm_id *cm_id,
struct rdma_cm_event *event);
int rds_iw_cm_initiate_connect(struct rdma_cm_id *cm_id);
void rds_iw_cm_connect_complete(struct rds_connection *conn,
struct rdma_cm_event *event);
#define rds_iw_conn_error(conn, fmt...) \
__rds_iw_conn_error(conn, KERN_WARNING "RDS/IW: " fmt)
int rds_iw_update_cm_id(struct rds_iw_device *rds_iwdev, struct rdma_cm_id *cm_id);
void rds_iw_add_conn(struct rds_iw_device *rds_iwdev, struct rds_connection *conn);
void rds_iw_remove_conn(struct rds_iw_device *rds_iwdev, struct rds_connection *conn);
void __rds_iw_destroy_conns(struct list_head *list, spinlock_t *list_lock);
static inline void rds_iw_destroy_nodev_conns(void)
static inline void rds_iw_destroy_conns(struct rds_iw_device *rds_iwdev)
struct rds_iw_mr_pool *rds_iw_create_mr_pool(struct rds_iw_device *);
void rds_iw_get_mr_info(struct rds_iw_device *rds_iwdev, struct rds_info_rdma_connection *iinfo);
void rds_iw_destroy_mr_pool(struct rds_iw_mr_pool *);
void *rds_iw_get_mr(struct scatterlist *sg, unsigned long nents,
struct rds_sock *rs, u32 *key_ret);
void rds_iw_sync_mr(void *trans_private, int dir);
void rds_iw_free_mr(void *trans_private, int invalidate);
void rds_iw_flush_mrs(void);
int rds_iw_recv_init(void);
void rds_iw_recv_exit(void);
int rds_iw_recv(struct rds_connection *conn);
int rds_iw_recv_refill(struct rds_connection *conn, gfp_t kptr_gfp,
gfp_t page_gfp, int prefill);
void rds_iw_inc_free(struct rds_incoming *inc);
int rds_iw_inc_copy_to_user(struct rds_incoming *inc, struct iovec *iov,
size_t size);
void rds_iw_recv_cq_comp_handler(struct ib_cq *cq, void *context);
void rds_iw_recv_tasklet_fn(unsigned long data);
void rds_iw_recv_init_ring(struct rds_iw_connection *ic);
void rds_iw_recv_clear_ring(struct rds_iw_connection *ic);
void rds_iw_recv_init_ack(struct rds_iw_connection *ic);
void rds_iw_attempt_ack(struct rds_iw_connection *ic);
void rds_iw_ack_send_complete(struct rds_iw_connection *ic);
u64 rds_iw_piggyb_ack(struct rds_iw_connection *ic);
void rds_iw_ring_init(struct rds_iw_work_ring *ring, u32 nr);
void rds_iw_ring_resize(struct rds_iw_work_ring *ring, u32 nr);
u32 rds_iw_ring_alloc(struct rds_iw_work_ring *ring, u32 val, u32 *pos);
void rds_iw_ring_free(struct rds_iw_work_ring *ring, u32 val);
void rds_iw_ring_unalloc(struct rds_iw_work_ring *ring, u32 val);
int rds_iw_ring_empty(struct rds_iw_work_ring *ring);
int rds_iw_ring_low(struct rds_iw_work_ring *ring);
u32 rds_iw_ring_oldest(struct rds_iw_work_ring *ring);
u32 rds_iw_ring_completed(struct rds_iw_work_ring *ring, u32 wr_id, u32 oldest);
extern wait_queue_head_t rds_iw_ring_empty_wait;
void rds_iw_xmit_complete(struct rds_connection *conn);
int rds_iw_xmit(struct rds_connection *conn, struct rds_message *rm,
unsigned int hdr_off, unsigned int sg, unsigned int off);
void rds_iw_send_cq_comp_handler(struct ib_cq *cq, void *context);
void rds_iw_send_init_ring(struct rds_iw_connection *ic);
void rds_iw_send_clear_ring(struct rds_iw_connection *ic);
int rds_iw_xmit_rdma(struct rds_connection *conn, struct rm_rdma_op *op);
void rds_iw_send_add_credits(struct rds_connection *conn, unsigned int credits);
void rds_iw_advertise_credits(struct rds_connection *conn, unsigned int posted);
int rds_iw_send_grab_credits(struct rds_iw_connection *ic, u32 wanted,
u32 *adv_credits, int need_posted, int max_posted);
DECLARE_PER_CPU(struct rds_iw_statistics, rds_iw_stats);
#define rds_iw_stats_inc(member) rds_stats_inc_which(rds_iw_stats, member)
unsigned int rds_iw_stats_info_copy(struct rds_info_iterator *iter,
unsigned int avail);
int rds_iw_sysctl_init(void);
void rds_iw_sysctl_exit(void);
extern unsigned long rds_iw_sysctl_max_send_wr;
extern unsigned long rds_iw_sysctl_max_recv_wr;
extern unsigned long rds_iw_sysctl_max_unsig_wrs;
extern unsigned long rds_iw_sysctl_max_unsig_bytes;
extern unsigned long rds_iw_sysctl_max_recv_allocation;
extern unsigned int rds_iw_sysctl_flow_control;
static inline struct ib_sge *
rds_iw_header_sge(struct rds_iw_connection *ic, struct ib_sge *sge)
static inline struct ib_sge *
rds_iw_data_sge(struct rds_iw_connection *ic, struct ib_sge *sge)
