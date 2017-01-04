#define RANDOM_SIZE 16
static int __c4iw_init_resource_fifo(struct kfifo *fifo,
spinlock_t *fifo_lock,
u32 nr, u32 skip_low,
u32 skip_high,
int random)
static int c4iw_init_resource_fifo(struct kfifo *fifo, spinlock_t * fifo_lock,
u32 nr, u32 skip_low, u32 skip_high)
static int c4iw_init_resource_fifo_random(struct kfifo *fifo,
spinlock_t *fifo_lock,
u32 nr, u32 skip_low, u32 skip_high)
static int c4iw_init_qid_fifo(struct c4iw_rdev *rdev)
int c4iw_init_resource(struct c4iw_rdev *rdev, u32 nr_tpt, u32 nr_pdid)
u32 c4iw_get_resource(struct kfifo *fifo, spinlock_t *lock)
void c4iw_put_resource(struct kfifo *fifo, u32 entry, spinlock_t *lock)
u32 c4iw_get_cqid(struct c4iw_rdev *rdev, struct c4iw_dev_ucontext *uctx)
void c4iw_put_cqid(struct c4iw_rdev *rdev, u32 qid,
struct c4iw_dev_ucontext *uctx)
u32 c4iw_get_qpid(struct c4iw_rdev *rdev, struct c4iw_dev_ucontext *uctx)
void c4iw_put_qpid(struct c4iw_rdev *rdev, u32 qid,
struct c4iw_dev_ucontext *uctx)
void c4iw_destroy_resource(struct c4iw_resource *rscp)
#define MIN_PBL_SHIFT 8
u32 c4iw_pblpool_alloc(struct c4iw_rdev *rdev, int size)
void c4iw_pblpool_free(struct c4iw_rdev *rdev, u32 addr, int size)
int c4iw_pblpool_create(struct c4iw_rdev *rdev)
void c4iw_pblpool_destroy(struct c4iw_rdev *rdev)
#define MIN_RQT_SHIFT 10
u32 c4iw_rqtpool_alloc(struct c4iw_rdev *rdev, int size)
void c4iw_rqtpool_free(struct c4iw_rdev *rdev, u32 addr, int size)
int c4iw_rqtpool_create(struct c4iw_rdev *rdev)
void c4iw_rqtpool_destroy(struct c4iw_rdev *rdev)
#define MIN_OCQP_SHIFT 12
u32 c4iw_ocqp_pool_alloc(struct c4iw_rdev *rdev, int size)
void c4iw_ocqp_pool_free(struct c4iw_rdev *rdev, u32 addr, int size)
int c4iw_ocqp_pool_create(struct c4iw_rdev *rdev)
void c4iw_ocqp_pool_destroy(struct c4iw_rdev *rdev)
