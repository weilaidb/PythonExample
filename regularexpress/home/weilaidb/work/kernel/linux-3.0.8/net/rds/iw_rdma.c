struct rds_iw_mr ;
struct rds_iw_mr_pool ;
static int rds_iw_flush_mr_pool(struct rds_iw_mr_pool *pool, int free_all);
static void rds_iw_mr_pool_flush_worker(struct work_struct *work);
static int rds_iw_init_fastreg(struct rds_iw_mr_pool *pool, struct rds_iw_mr *ibmr);
static int rds_iw_map_fastreg(struct rds_iw_mr_pool *pool,
struct rds_iw_mr *ibmr,
struct scatterlist *sg, unsigned int nents);
static void rds_iw_free_fastreg(struct rds_iw_mr_pool *pool, struct rds_iw_mr *ibmr);
static unsigned int rds_iw_unmap_fastreg_list(struct rds_iw_mr_pool *pool,
struct list_head *unmap_list,
struct list_head *kill_list);
static void rds_iw_destroy_fastreg(struct rds_iw_mr_pool *pool, struct rds_iw_mr *ibmr);
static int rds_iw_get_device(struct rds_sock *rs, struct rds_iw_device **rds_iwdev, struct rdma_cm_id **cm_id)
{
struct rds_iw_device *iwdev;
struct rds_iw_cm_id *i_cm_id;
*rds_iwdev = NULL;
*cm_id = NULL;
list_for_each_entry(iwdev, &rds_iw_devices, list)
static int rds_iw_add_cm_id(struct rds_iw_device *rds_iwdev, struct rdma_cm_id *cm_id)
static void rds_iw_remove_cm_id(struct rds_iw_device *rds_iwdev,
struct rdma_cm_id *cm_id)
int rds_iw_update_cm_id(struct rds_iw_device *rds_iwdev, struct rdma_cm_id *cm_id)
void rds_iw_add_conn(struct rds_iw_device *rds_iwdev, struct rds_connection *conn)
void rds_iw_remove_conn(struct rds_iw_device *rds_iwdev, struct rds_connection *conn)
void __rds_iw_destroy_conns(struct list_head *list, spinlock_t *list_lock)
static void rds_iw_set_scatterlist(struct rds_iw_scatterlist *sg,
struct scatterlist *list, unsigned int sg_len)
static u64 *rds_iw_map_scatterlist(struct rds_iw_device *rds_iwdev,
struct rds_iw_scatterlist *sg)
struct rds_iw_mr_pool *rds_iw_create_mr_pool(struct rds_iw_device *rds_iwdev)
void rds_iw_get_mr_info(struct rds_iw_device *rds_iwdev, struct rds_info_rdma_connection *iinfo)
void rds_iw_destroy_mr_pool(struct rds_iw_mr_pool *pool)
static inline struct rds_iw_mr *rds_iw_reuse_fmr(struct rds_iw_mr_pool *pool)
static struct rds_iw_mr *rds_iw_alloc_mr(struct rds_iw_device *rds_iwdev)
void rds_iw_sync_mr(void *trans_private, int direction)
static inline unsigned int rds_iw_flush_goal(struct rds_iw_mr_pool *pool, int free_all)
static int rds_iw_flush_mr_pool(struct rds_iw_mr_pool *pool, int free_all)
static void rds_iw_mr_pool_flush_worker(struct work_struct *work)
void rds_iw_free_mr(void *trans_private, int invalidate)
void rds_iw_flush_mrs(void)
void *rds_iw_get_mr(struct scatterlist *sg, unsigned long nents,
struct rds_sock *rs, u32 *key_ret)
static int rds_iw_init_fastreg(struct rds_iw_mr_pool *pool,
struct rds_iw_mr *ibmr)
static int rds_iw_rdma_build_fastreg(struct rds_iw_mapping *mapping)
static int rds_iw_rdma_fastreg_inv(struct rds_iw_mr *ibmr)
static int rds_iw_map_fastreg(struct rds_iw_mr_pool *pool,
struct rds_iw_mr *ibmr,
struct scatterlist *sg,
unsigned int sg_len)
static void rds_iw_free_fastreg(struct rds_iw_mr_pool *pool,
struct rds_iw_mr *ibmr)
static unsigned int rds_iw_unmap_fastreg_list(struct rds_iw_mr_pool *pool,
struct list_head *unmap_list,
struct list_head *kill_list)
static void rds_iw_destroy_fastreg(struct rds_iw_mr_pool *pool,
struct rds_iw_mr *ibmr)
