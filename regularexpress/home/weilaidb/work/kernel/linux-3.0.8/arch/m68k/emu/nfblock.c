static long nfhd_id;
enum ;
static inline s32 nfhd_read_write(u32 major, u32 minor, u32 rwflag, u32 recno,
u32 count, u32 buf)
static inline s32 nfhd_get_capacity(u32 major, u32 minor, u32 *blocks,
u32 *blocksize)
static LIST_HEAD(nfhd_list);
static int major_num;
module_param(major_num, int, 0);
struct nfhd_device ;
static int nfhd_make_request(struct request_queue *queue, struct bio *bio)
static int nfhd_getgeo(struct block_device *bdev, struct hd_geometry *geo)
static const struct block_device_operations nfhd_ops = ;
static int __init nfhd_init_one(int id, u32 blocks, u32 bsize)
static int __init nfhd_init(void)
static void __exit nfhd_exit(void)
module_init(nfhd_init);
module_exit(nfhd_exit);
MODULE_LICENSE("GPL");
