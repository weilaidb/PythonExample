#define LO_MAGIC 0x68797548
#define dprintk(flags, fmt...)
#define dprintk(flags, fmt...) do  while (0)
#define DBG_IOCTL       0x0004
#define DBG_INIT        0x0010
#define DBG_EXIT        0x0020
#define DBG_BLKDEV      0x0100
#define DBG_RX          0x0200
#define DBG_TX          0x0400
static unsigned int debugflags;
static unsigned int nbds_max = 16;
static struct nbd_device *nbd_dev;
static int max_part;
static DEFINE_SPINLOCK(nbd_lock);
static const char *ioctl_cmd_to_ascii(int cmd)
static const char *nbdcmd_to_ascii(int cmd)
static void nbd_end_request(struct request *req)
static void sock_shutdown(struct nbd_device *lo, int lock)
static void nbd_xmit_timeout(unsigned long arg)
static int sock_xmit(struct nbd_device *lo, int send, void *buf, int size,
int msg_flags)
static inline int sock_send_bvec(struct nbd_device *lo, struct bio_vec *bvec,
int flags)
static int nbd_send_req(struct nbd_device *lo, struct request *req)
static struct request *nbd_find_request(struct nbd_device *lo,
struct request *xreq)
static inline int sock_recv_bvec(struct nbd_device *lo, struct bio_vec *bvec)
static struct request *nbd_read_stat(struct nbd_device *lo)
static ssize_t pid_show(struct device *dev,
struct device_attribute *attr, char *buf)
static struct device_attribute pid_attr = ;
static int nbd_do_it(struct nbd_device *lo)
static void nbd_clear_que(struct nbd_device *lo)
static void nbd_handle_req(struct nbd_device *lo, struct request *req)
static int nbd_thread(void *data)
static void do_nbd_request(struct request_queue *q)
static int __nbd_ioctl(struct block_device *bdev, struct nbd_device *lo,
unsigned int cmd, unsigned long arg)
static int nbd_ioctl(struct block_device *bdev, fmode_t mode,
unsigned int cmd, unsigned long arg)
static const struct block_device_operations nbd_fops =
;
static int __init nbd_init(void)
static void __exit nbd_cleanup(void)
module_init(nbd_init);
module_exit(nbd_cleanup);
MODULE_DESCRIPTION("Network Block Device");
MODULE_LICENSE("GPL");
module_param(nbds_max, int, 0444);
MODULE_PARM_DESC(nbds_max, "number of network block devices to initialize (default: 16)");
module_param(max_part, int, 0444);
MODULE_PARM_DESC(max_part, "number of partitions per device (default: 0)");
module_param(debugflags, int, 0644);
MODULE_PARM_DESC(debugflags, "flags for controlling debug output");
