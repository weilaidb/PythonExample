#define _RDS_IB_H
#define RDS_FMR_SIZE			256
#define RDS_FMR_POOL_SIZE		8192
#define RDS_IB_MAX_SGE			8
#define RDS_IB_RECV_SGE 		2
#define RDS_IB_DEFAULT_RECV_WR		1024
#define RDS_IB_DEFAULT_SEND_WR		256
#define RDS_IB_DEFAULT_RETRY_COUNT	2
#define RDS_IB_SUPPORTED_PROTOCOLS	0x00000003
#define RDS_IB_RECYCLE_BATCH_COUNT	32
extern struct rw_semaphore rds_ib_devices_lock;
extern struct list_head rds_ib_devices;
struct rds_page_frag ;
struct rds_ib_incoming ;
struct rds_ib_cache_head ;
struct rds_ib_refill_cache ;
struct rds_ib_connect_private ;
struct rds_ib_send_work ;
struct rds_ib_recv_work ;
struct rds_ib_work_ring ;
struct rds_ib_device;
struct rds_ib_connection ;
#define IB_GET_SEND_CREDITS(v)	((v) & 0xffff)
#define IB_GET_POST_CREDITS(v)	((v) >> 16)
#define IB_SET_SEND_CREDITS(v)	((v) & 0xffff)
#define IB_SET_POST_CREDITS(v)	((v) << 16)
struct rds_ib_ipaddr ;
struct rds_ib_device ;
#define pcidev_to_node(pcidev) pcibus_to_node(pcidev->bus)
#define ibdev_to_node(ibdev) pcidev_to_node(to_pci_dev(ibdev->dma_device))
#define rdsibdev_to_node(rdsibdev) ibdev_to_node(rdsibdev->dev)
#define IB_ACK_IN_FLIGHT	0
#define IB_ACK_REQUESTED	1
#define RDS_IB_ACK_WR_ID	(~(u64) 0)
struct rds_ib_statistics ;
extern struct workqueue_struct *rds_ib_wq;
static inline void rds_ib_dma_sync_sg_for_cpu(struct ib_device *dev,
struct scatterlist *sg, unsigned int sg_dma_len, int direction)
#define ib_dma_sync_sg_for_cpu	rds_ib_dma_sync_sg_for_cpu
static inline void rds_ib_dma_sync_sg_for_device(struct ib_device *dev,
struct scatterlist *sg, unsigned int sg_dma_len, int direction)
#define ib_dma_sync_sg_for_device	rds_ib_dma_sync_sg_for_device
extern struct rds_transport rds_ib_transport;
struct rds_ib_device *rds_ib_get_client_data(struct ib_device *device);
void rds_ib_dev_put(struct rds_ib_device *rds_ibdev);
extern struct ib_client rds_ib_client;
extern unsigned int fmr_message_size;
extern unsigned int rds_ib_retry_count;
extern spinlock_t ib_nodev_conns_lock;
extern struct list_head ib_nodev_conns;
int rds_ib_conn_alloc(struct rds_connection *conn, gfp_t gfp);
void rds_ib_conn_free(void *arg);
int rds_ib_conn_connect(struct rds_connection *conn);
void rds_ib_conn_shutdown(struct rds_connection *conn);
void rds_ib_state_change(struct sock *sk);
int rds_ib_listen_init(void);
void rds_ib_listen_stop(void);
void __rds_ib_conn_error(struct rds_connection *conn, const char *, ...);
int rds_ib_cm_handle_connect(struct rdma_cm_id *cm_id,
struct rdma_cm_event *event);
int rds_ib_cm_initiate_connect(struct rdma_cm_id *cm_id);
void rds_ib_cm_connect_complete(struct rds_connection *conn,
struct rdma_cm_event *event);
#define rds_ib_conn_error(conn, fmt...) \
__rds_ib_conn_error(conn, KERN_WARNING "RDS/IB: " fmt)
int rds_ib_update_ipaddr(struct rds_ib_device *rds_ibdev, __be32 ipaddr);
void rds_ib_add_conn(struct rds_ib_device *rds_ibdev, struct rds_connection *conn);
void rds_ib_remove_conn(struct rds_ib_device *rds_ibdev, struct rds_connection *conn);
void rds_ib_destroy_nodev_conns(void);
struct rds_ib_mr_pool *rds_ib_create_mr_pool(struct rds_ib_device *);
void rds_ib_get_mr_info(struct rds_ib_device *rds_ibdev, struct rds_info_rdma_connection *iinfo);
void rds_ib_destroy_mr_pool(struct rds_ib_mr_pool *);
void *rds_ib_get_mr(struct scatterlist *sg, unsigned long nents,
struct rds_sock *rs, u32 *key_ret);
void rds_ib_sync_mr(void *trans_private, int dir);
void rds_ib_free_mr(void *trans_private, int invalidate);
void rds_ib_flush_mrs(void);
int rds_ib_recv_init(void);
void rds_ib_recv_exit(void);
int rds_ib_recv(struct rds_connection *conn);
int rds_ib_recv_alloc_caches(struct rds_ib_connection *ic);
void rds_ib_recv_free_caches(struct rds_ib_connection *ic);
void rds_ib_recv_refill(struct rds_connection *conn, int prefill);
void rds_ib_inc_free(struct rds_incoming *inc);
int rds_ib_inc_copy_to_user(struct rds_incoming *inc, struct iovec *iov,
size_t size);
void rds_ib_recv_cq_comp_handler(struct ib_cq *cq, void *context);
void rds_ib_recv_tasklet_fn(unsigned long data);
void rds_ib_recv_init_ring(struct rds_ib_connection *ic);
void rds_ib_recv_clear_ring(struct rds_ib_connection *ic);
void rds_ib_recv_init_ack(struct rds_ib_connection *ic);
void rds_ib_attempt_ack(struct rds_ib_connection *ic);
void rds_ib_ack_send_complete(struct rds_ib_connection *ic);
u64 rds_ib_piggyb_ack(struct rds_ib_connection *ic);
void rds_ib_ring_init(struct rds_ib_work_ring *ring, u32 nr);
void rds_ib_ring_resize(struct rds_ib_work_ring *ring, u32 nr);
u32 rds_ib_ring_alloc(struct rds_ib_work_ring *ring, u32 val, u32 *pos);
void rds_ib_ring_free(struct rds_ib_work_ring *ring, u32 val);
void rds_ib_ring_unalloc(struct rds_ib_work_ring *ring, u32 val);
int rds_ib_ring_empty(struct rds_ib_work_ring *ring);
int rds_ib_ring_low(struct rds_ib_work_ring *ring);
u32 rds_ib_ring_oldest(struct rds_ib_work_ring *ring);
u32 rds_ib_ring_completed(struct rds_ib_work_ring *ring, u32 wr_id, u32 oldest);
extern wait_queue_head_t rds_ib_ring_empty_wait;
char *rds_ib_wc_status_str(enum ib_wc_status status);
void rds_ib_xmit_complete(struct rds_connection *conn);
int rds_ib_xmit(struct rds_connection *conn, struct rds_message *rm,
unsigned int hdr_off, unsigned int sg, unsigned int off);
void rds_ib_send_cq_comp_handler(struct ib_cq *cq, void *context);
void rds_ib_send_init_ring(struct rds_ib_connection *ic);
void rds_ib_send_clear_ring(struct rds_ib_connection *ic);
int rds_ib_xmit_rdma(struct rds_connection *conn, struct rm_rdma_op *op);
void rds_ib_send_add_credits(struct rds_connection *conn, unsigned int credits);
void rds_ib_advertise_credits(struct rds_connection *conn, unsigned int posted);
int rds_ib_send_grab_credits(struct rds_ib_connection *ic, u32 wanted,
u32 *adv_credits, int need_posted, int max_posted);
int rds_ib_xmit_atomic(struct rds_connection *conn, struct rm_atomic_op *op);
DECLARE_PER_CPU(struct rds_ib_statistics, rds_ib_stats);
#define rds_ib_stats_inc(member) rds_stats_inc_which(rds_ib_stats, member)
unsigned int rds_ib_stats_info_copy(struct rds_info_iterator *iter,
unsigned int avail);
int rds_ib_sysctl_init(void);
void rds_ib_sysctl_exit(void);
extern unsigned long rds_ib_sysctl_max_send_wr;
extern unsigned long rds_ib_sysctl_max_recv_wr;
extern unsigned long rds_ib_sysctl_max_unsig_wrs;
extern unsigned long rds_ib_sysctl_max_unsig_bytes;
extern unsigned long rds_ib_sysctl_max_recv_allocation;
extern unsigned int rds_ib_sysctl_flow_control;
