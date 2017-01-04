static DEFINE_PER_CPU(unsigned long, clean_list_grace);
#define CLEAN_LIST_BUSY_BIT 0
struct rds_ib_mr ;
struct rds_ib_mr_pool ;
static int rds_ib_flush_mr_pool(struct rds_ib_mr_pool *pool, int free_all, struct rds_ib_mr **);
static void rds_ib_teardown_mr(struct rds_ib_mr *ibmr);
static void rds_ib_mr_pool_flush_worker(struct work_struct *work);
static struct rds_ib_device *rds_ib_get_device(__be32 ipaddr)
static int rds_ib_add_ipaddr(struct rds_ib_device *rds_ibdev, __be32 ipaddr)
static void rds_ib_remove_ipaddr(struct rds_ib_device *rds_ibdev, __be32 ipaddr)
int rds_ib_update_ipaddr(struct rds_ib_device *rds_ibdev, __be32 ipaddr)
void rds_ib_add_conn(struct rds_ib_device *rds_ibdev, struct rds_connection *conn)
void rds_ib_remove_conn(struct rds_ib_device *rds_ibdev, struct rds_connection *conn)
void rds_ib_destroy_nodev_conns(void)
struct rds_ib_mr_pool *rds_ib_create_mr_pool(struct rds_ib_device *rds_ibdev)
void rds_ib_get_mr_info(struct rds_ib_device *rds_ibdev, struct rds_info_rdma_connection *iinfo)
void rds_ib_destroy_mr_pool(struct rds_ib_mr_pool *pool)
static void refill_local(struct rds_ib_mr_pool *pool, struct xlist_head *xl,
struct rds_ib_mr **ibmr_ret)
static inline struct rds_ib_mr *rds_ib_reuse_fmr(struct rds_ib_mr_pool *pool)
static inline void wait_clean_list_grace(void)
static struct rds_ib_mr *rds_ib_alloc_fmr(struct rds_ib_device *rds_ibdev)
static int rds_ib_map_fmr(struct rds_ib_device *rds_ibdev, struct rds_ib_mr *ibmr,
struct scatterlist *sg, unsigned int nents)
void rds_ib_sync_mr(void *trans_private, int direction)
static void __rds_ib_teardown_mr(struct rds_ib_mr *ibmr)
static void rds_ib_teardown_mr(struct rds_ib_mr *ibmr)
static inline unsigned int rds_ib_flush_goal(struct rds_ib_mr_pool *pool, int free_all)
static void xlist_append_to_list(struct xlist_head *xlist, struct list_head *list)
static void list_append_to_xlist(struct rds_ib_mr_pool *pool,
struct list_head *list, struct xlist_head *xlist,
struct xlist_head **tail_ret)
static int rds_ib_flush_mr_pool(struct rds_ib_mr_pool *pool,
int free_all, struct rds_ib_mr **ibmr_ret)
static void rds_ib_mr_pool_flush_worker(struct work_struct *work)
void rds_ib_free_mr(void *trans_private, int invalidate)
void rds_ib_flush_mrs(void)
void *rds_ib_get_mr(struct scatterlist *sg, unsigned long nents,
struct rds_sock *rs, u32 *key_ret)
