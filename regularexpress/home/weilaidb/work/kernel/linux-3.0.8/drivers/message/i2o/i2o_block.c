#define OSM_NAME	"block-osm"
#define OSM_VERSION	"1.325"
#define OSM_DESCRIPTION	"I2O Block Device OSM"
static DEFINE_MUTEX(i2o_block_mutex);
static struct i2o_driver i2o_block_driver;
static struct i2o_block_mempool i2o_blk_req_pool;
static struct i2o_class_id i2o_block_class_id[] = ;
static void i2o_block_device_free(struct i2o_block_device *dev)
;
static int i2o_block_remove(struct device *dev)
;
static int i2o_block_device_flush(struct i2o_device *dev)
;
static int i2o_block_device_mount(struct i2o_device *dev, u32 media_id)
;
static int i2o_block_device_lock(struct i2o_device *dev, u32 media_id)
;
static int i2o_block_device_unlock(struct i2o_device *dev, u32 media_id)
;
static int i2o_block_device_power(struct i2o_block_device *dev, u8 op)
;
static inline struct i2o_block_request *i2o_block_request_alloc(void)
;
static inline void i2o_block_request_free(struct i2o_block_request *ireq)
;
static inline int i2o_block_sglist_alloc(struct i2o_controller *c,
struct i2o_block_request *ireq,
u32 ** mptr)
;
static inline void i2o_block_sglist_free(struct i2o_block_request *ireq)
;
static int i2o_block_prep_req_fn(struct request_queue *q, struct request *req)
;
static void i2o_block_delayed_request_fn(struct work_struct *work)
;
static void i2o_block_end_request(struct request *req, int error,
int nr_bytes)
;
static int i2o_block_reply(struct i2o_controller *c, u32 m,
struct i2o_message *msg)
;
static void i2o_block_event(struct work_struct *work)
;
#define	BLOCK_SIZE_528M		1081344
#define	BLOCK_SIZE_1G		2097152
#define	BLOCK_SIZE_21G		4403200
#define	BLOCK_SIZE_42G		8806400
#define	BLOCK_SIZE_84G		17612800
static void i2o_block_biosparam(unsigned long capacity, unsigned short *cyls,
unsigned char *hds, unsigned char *secs)
static int i2o_block_open(struct block_device *bdev, fmode_t mode)
;
static int i2o_block_release(struct gendisk *disk, fmode_t mode)
static int i2o_block_getgeo(struct block_device *bdev, struct hd_geometry *geo)
static int i2o_block_ioctl(struct block_device *bdev, fmode_t mode,
unsigned int cmd, unsigned long arg)
;
static unsigned int i2o_block_check_events(struct gendisk *disk,
unsigned int clearing)
static int i2o_block_transfer(struct request *req)
;
static void i2o_block_request_fn(struct request_queue *q)
;
static const struct block_device_operations i2o_block_fops = ;
static struct i2o_block_device *i2o_block_device_alloc(void)
;
static int i2o_block_probe(struct device *dev)
;
static struct i2o_driver i2o_block_driver = ;
static int __init i2o_block_init(void)
;
static void __exit i2o_block_exit(void)
;
MODULE_AUTHOR("Red Hat");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION(OSM_DESCRIPTION);
MODULE_VERSION(OSM_VERSION);
module_init(i2o_block_init);
module_exit(i2o_block_exit);
