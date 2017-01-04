static struct kfifo rhdl_fifo;
static spinlock_t rhdl_fifo_lock;
#define RANDOM_SIZE 16
static int __cxio_init_resource_fifo(struct kfifo *fifo,
spinlock_t *fifo_lock,
u32 nr, u32 skip_low,
u32 skip_high,
int random)
static int cxio_init_resource_fifo(struct kfifo *fifo, spinlock_t * fifo_lock,
u32 nr, u32 skip_low, u32 skip_high)
static int cxio_init_resource_fifo_random(struct kfifo *fifo,
spinlock_t * fifo_lock,
u32 nr, u32 skip_low, u32 skip_high)
static int cxio_init_qpid_fifo(struct cxio_rdev *rdev_p)
int cxio_hal_init_rhdl_resource(u32 nr_rhdl)
void cxio_hal_destroy_rhdl_resource(void)
int cxio_hal_init_resource(struct cxio_rdev *rdev_p,
u32 nr_tpt, u32 nr_pbl,
u32 nr_rqt, u32 nr_qpid, u32 nr_cqid, u32 nr_pdid)
static u32 cxio_hal_get_resource(struct kfifo *fifo, spinlock_t * lock)
static void cxio_hal_put_resource(struct kfifo *fifo, spinlock_t * lock,
u32 entry)
u32 cxio_hal_get_stag(struct cxio_hal_resource *rscp)
void cxio_hal_put_stag(struct cxio_hal_resource *rscp, u32 stag)
u32 cxio_hal_get_qpid(struct cxio_hal_resource *rscp)
void cxio_hal_put_qpid(struct cxio_hal_resource *rscp, u32 qpid)
u32 cxio_hal_get_cqid(struct cxio_hal_resource *rscp)
void cxio_hal_put_cqid(struct cxio_hal_resource *rscp, u32 cqid)
u32 cxio_hal_get_pdid(struct cxio_hal_resource *rscp)
void cxio_hal_put_pdid(struct cxio_hal_resource *rscp, u32 pdid)
void cxio_hal_destroy_resource(struct cxio_hal_resource *rscp)
#define MIN_PBL_SHIFT 8
u32 cxio_hal_pblpool_alloc(struct cxio_rdev *rdev_p, int size)
void cxio_hal_pblpool_free(struct cxio_rdev *rdev_p, u32 addr, int size)
int cxio_hal_pblpool_create(struct cxio_rdev *rdev_p)
void cxio_hal_pblpool_destroy(struct cxio_rdev *rdev_p)
#define MIN_RQT_SHIFT 10
#define RQT_CHUNK 2*1024*1024
u32 cxio_hal_rqtpool_alloc(struct cxio_rdev *rdev_p, int size)
void cxio_hal_rqtpool_free(struct cxio_rdev *rdev_p, u32 addr, int size)
int cxio_hal_rqtpool_create(struct cxio_rdev *rdev_p)
void cxio_hal_rqtpool_destroy(struct cxio_rdev *rdev_p)
