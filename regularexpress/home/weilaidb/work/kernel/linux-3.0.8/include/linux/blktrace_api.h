#define BLKTRACE_H
enum blktrace_cat ;
#define BLK_TC_SHIFT		(16)
#define BLK_TC_ACT(act)		((act) << BLK_TC_SHIFT)
enum blktrace_act ;
enum blktrace_notify ;
#define BLK_TA_QUEUE		(__BLK_TA_QUEUE | BLK_TC_ACT(BLK_TC_QUEUE))
#define BLK_TA_BACKMERGE	(__BLK_TA_BACKMERGE | BLK_TC_ACT(BLK_TC_QUEUE))
#define BLK_TA_FRONTMERGE	(__BLK_TA_FRONTMERGE | BLK_TC_ACT(BLK_TC_QUEUE))
#define	BLK_TA_GETRQ		(__BLK_TA_GETRQ | BLK_TC_ACT(BLK_TC_QUEUE))
#define	BLK_TA_SLEEPRQ		(__BLK_TA_SLEEPRQ | BLK_TC_ACT(BLK_TC_QUEUE))
#define	BLK_TA_REQUEUE		(__BLK_TA_REQUEUE | BLK_TC_ACT(BLK_TC_REQUEUE))
#define BLK_TA_ISSUE		(__BLK_TA_ISSUE | BLK_TC_ACT(BLK_TC_ISSUE))
#define BLK_TA_COMPLETE		(__BLK_TA_COMPLETE| BLK_TC_ACT(BLK_TC_COMPLETE))
#define BLK_TA_PLUG		(__BLK_TA_PLUG | BLK_TC_ACT(BLK_TC_QUEUE))
#define BLK_TA_UNPLUG_IO	(__BLK_TA_UNPLUG_IO | BLK_TC_ACT(BLK_TC_QUEUE))
#define BLK_TA_UNPLUG_TIMER	(__BLK_TA_UNPLUG_TIMER | BLK_TC_ACT(BLK_TC_QUEUE))
#define BLK_TA_INSERT		(__BLK_TA_INSERT | BLK_TC_ACT(BLK_TC_QUEUE))
#define BLK_TA_SPLIT		(__BLK_TA_SPLIT)
#define BLK_TA_BOUNCE		(__BLK_TA_BOUNCE)
#define BLK_TA_REMAP		(__BLK_TA_REMAP | BLK_TC_ACT(BLK_TC_QUEUE))
#define BLK_TA_ABORT		(__BLK_TA_ABORT | BLK_TC_ACT(BLK_TC_QUEUE))
#define BLK_TA_DRV_DATA	(__BLK_TA_DRV_DATA | BLK_TC_ACT(BLK_TC_DRV_DATA))
#define BLK_TN_PROCESS		(__BLK_TN_PROCESS | BLK_TC_ACT(BLK_TC_NOTIFY))
#define BLK_TN_TIMESTAMP	(__BLK_TN_TIMESTAMP | BLK_TC_ACT(BLK_TC_NOTIFY))
#define BLK_TN_MESSAGE		(__BLK_TN_MESSAGE | BLK_TC_ACT(BLK_TC_NOTIFY))
#define BLK_IO_TRACE_MAGIC	0x65617400
#define BLK_IO_TRACE_VERSION	0x07
struct blk_io_trace ;
struct blk_io_trace_remap ;
enum ;
#define BLKTRACE_BDEV_SIZE	32
struct blk_user_trace_setup ;
#if defined(CONFIG_BLK_DEV_IO_TRACE)
struct blk_trace ;
extern int blk_trace_ioctl(struct block_device *, unsigned, char __user *);
extern void blk_trace_shutdown(struct request_queue *);
extern int do_blk_trace_setup(struct request_queue *q, char *name,
dev_t dev, struct block_device *bdev,
struct blk_user_trace_setup *buts);
extern __attribute__((format(printf, 2, 3)))
void __trace_note_message(struct blk_trace *, const char *fmt, ...);
#define blk_add_trace_msg(q, fmt, ...)					\
do  while (0)
#define BLK_TN_MAX_MSG		128
extern void blk_add_driver_data(struct request_queue *q, struct request *rq,
void *data, size_t len);
extern int blk_trace_setup(struct request_queue *q, char *name, dev_t dev,
struct block_device *bdev,
char __user *arg);
extern int blk_trace_startstop(struct request_queue *q, int start);
extern int blk_trace_remove(struct request_queue *q);
extern void blk_trace_remove_sysfs(struct device *dev);
extern int blk_trace_init_sysfs(struct device *dev);
extern struct attribute_group blk_trace_attr_group;
# define blk_trace_ioctl(bdev, cmd, arg)		(-ENOTTY)
# define blk_trace_shutdown(q)				do  while (0)
# define do_blk_trace_setup(q, name, dev, bdev, buts)	(-ENOTTY)
# define blk_add_driver_data(q, rq, data, len)		do  while (0)
# define blk_trace_setup(q, name, dev, bdev, arg)	(-ENOTTY)
# define blk_trace_startstop(q, start)			(-ENOTTY)
# define blk_trace_remove(q)				(-ENOTTY)
# define blk_add_trace_msg(q, fmt, ...)			do  while (0)
# define blk_trace_remove_sysfs(dev)			do  while (0)
static inline int blk_trace_init_sysfs(struct device *dev)
struct compat_blk_user_trace_setup ;
#define BLKTRACESETUP32 _IOWR(0x12, 115, struct compat_blk_user_trace_setup)
#if defined(CONFIG_EVENT_TRACING) && defined(CONFIG_BLOCK)
static inline int blk_cmd_buf_len(struct request *rq)
extern void blk_dump_cmd(char *buf, struct request *rq);
extern void blk_fill_rwbs(char *rwbs, u32 rw, int bytes);
