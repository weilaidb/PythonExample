#define _LINUX_BLKDEV_H
struct scsi_ioctl_command;
struct request_queue;
struct elevator_queue;
struct request_pm_state;
struct blk_trace;
struct request;
struct sg_io_hdr;
#define BLKDEV_MIN_RQ	4
#define BLKDEV_MAX_RQ	128
struct request;
typedef void (rq_end_io_fn)(struct request *, int);
struct request_list ;
enum rq_cmd_type_bits ;
#define BLK_MAX_CDB	16
struct request ;
static inline unsigned short req_get_ioprio(struct request *req)
struct request_pm_state
;
typedef void (request_fn_proc) (struct request_queue *q);
typedef int (make_request_fn) (struct request_queue *q, struct bio *bio);
typedef int (prep_rq_fn) (struct request_queue *, struct request *);
typedef void (unprep_rq_fn) (struct request_queue *, struct request *);
struct bio_vec;
struct bvec_merge_data ;
typedef int (merge_bvec_fn) (struct request_queue *, struct bvec_merge_data *,
struct bio_vec *);
typedef void (softirq_done_fn)(struct request *);
typedef int (dma_drain_needed_fn)(struct request *);
typedef int (lld_busy_fn) (struct request_queue *q);
enum blk_eh_timer_return ;
typedef enum blk_eh_timer_return (rq_timed_out_fn)(struct request *);
enum blk_queue_state ;
struct blk_queue_tag ;
#define BLK_SCSI_MAX_CMDS	(256)
#define BLK_SCSI_CMD_PER_LONG	(BLK_SCSI_MAX_CMDS / (sizeof(long) * 8))
struct queue_limits ;
struct request_queue
;
#define QUEUE_FLAG_QUEUED	1
#define QUEUE_FLAG_STOPPED	2
#define	QUEUE_FLAG_SYNCFULL	3
#define QUEUE_FLAG_ASYNCFULL	4
#define QUEUE_FLAG_DEAD		5
#define QUEUE_FLAG_ELVSWITCH	6
#define QUEUE_FLAG_BIDI		7
#define QUEUE_FLAG_NOMERGES     8
#define QUEUE_FLAG_SAME_COMP	9
#define QUEUE_FLAG_FAIL_IO     10
#define QUEUE_FLAG_STACKABLE   11
#define QUEUE_FLAG_NONROT      12
#define QUEUE_FLAG_VIRT        QUEUE_FLAG_NONROT
#define QUEUE_FLAG_IO_STAT     13
#define QUEUE_FLAG_DISCARD     14
#define QUEUE_FLAG_NOXMERGES   15
#define QUEUE_FLAG_ADD_RANDOM  16
#define QUEUE_FLAG_SECDISCARD  17
#define QUEUE_FLAG_DEFAULT	((1 << QUEUE_FLAG_IO_STAT) |		\
(1 << QUEUE_FLAG_STACKABLE)	|	\
(1 << QUEUE_FLAG_SAME_COMP)	|	\
(1 << QUEUE_FLAG_ADD_RANDOM))
static inline int queue_is_locked(struct request_queue *q)
static inline void queue_flag_set_unlocked(unsigned int flag,
struct request_queue *q)
static inline int queue_flag_test_and_clear(unsigned int flag,
struct request_queue *q)
static inline int queue_flag_test_and_set(unsigned int flag,
struct request_queue *q)
static inline void queue_flag_set(unsigned int flag, struct request_queue *q)
static inline void queue_flag_clear_unlocked(unsigned int flag,
struct request_queue *q)
static inline int queue_in_flight(struct request_queue *q)
static inline void queue_flag_clear(unsigned int flag, struct request_queue *q)
#define blk_queue_tagged(q)	test_bit(QUEUE_FLAG_QUEUED, &(q)->queue_flags)
#define blk_queue_stopped(q)	test_bit(QUEUE_FLAG_STOPPED, &(q)->queue_flags)
#define blk_queue_nomerges(q)	test_bit(QUEUE_FLAG_NOMERGES, &(q)->queue_flags)
#define blk_queue_noxmerges(q)	\
test_bit(QUEUE_FLAG_NOXMERGES, &(q)->queue_flags)
#define blk_queue_nonrot(q)	test_bit(QUEUE_FLAG_NONROT, &(q)->queue_flags)
#define blk_queue_io_stat(q)	test_bit(QUEUE_FLAG_IO_STAT, &(q)->queue_flags)
#define blk_queue_add_random(q)	test_bit(QUEUE_FLAG_ADD_RANDOM, &(q)->queue_flags)
#define blk_queue_stackable(q)	\
test_bit(QUEUE_FLAG_STACKABLE, &(q)->queue_flags)
#define blk_queue_discard(q)	test_bit(QUEUE_FLAG_DISCARD, &(q)->queue_flags)
#define blk_queue_secdiscard(q)	(blk_queue_discard(q) && \
test_bit(QUEUE_FLAG_SECDISCARD, &(q)->queue_flags))
#define blk_noretry_request(rq) \
((rq)->cmd_flags & (REQ_FAILFAST_DEV|REQ_FAILFAST_TRANSPORT| \
REQ_FAILFAST_DRIVER))
#define blk_account_rq(rq) \
(((rq)->cmd_flags & REQ_STARTED) && \
((rq)->cmd_type == REQ_TYPE_FS || \
((rq)->cmd_flags & REQ_DISCARD)))
#define blk_pm_request(rq)	\
((rq)->cmd_type == REQ_TYPE_PM_SUSPEND || \
(rq)->cmd_type == REQ_TYPE_PM_RESUME)
#define blk_rq_cpu_valid(rq)	((rq)->cpu != -1)
#define blk_bidi_rq(rq)		((rq)->next_rq != NULL)
#define blk_queued_rq(rq)	(!list_empty(&(rq)->queuelist))
#define list_entry_rq(ptr)	list_entry((ptr), struct request, queuelist)
#define rq_data_dir(rq)		((rq)->cmd_flags & 1)
static inline unsigned int blk_queue_cluster(struct request_queue *q)
static inline bool rw_is_sync(unsigned int rw_flags)
static inline bool rq_is_sync(struct request *rq)
static inline int blk_queue_full(struct request_queue *q, int sync)
static inline void blk_set_queue_full(struct request_queue *q, int sync)
static inline void blk_clear_queue_full(struct request_queue *q, int sync)
#define RQ_NOMERGE_FLAGS	\
(REQ_NOMERGE | REQ_STARTED | REQ_SOFTBARRIER | REQ_FLUSH | REQ_FUA)
#define rq_mergeable(rq)	\
(!((rq)->cmd_flags & RQ_NOMERGE_FLAGS) && \
(((rq)->cmd_flags & REQ_DISCARD) || \
(rq)->cmd_type == REQ_TYPE_FS))
#define BLKPREP_OK		0
#define BLKPREP_KILL		1
#define BLKPREP_DEFER		2
extern unsigned long blk_max_low_pfn, blk_max_pfn;
#if BITS_PER_LONG == 32
#define BLK_BOUNCE_HIGH		((u64)blk_max_low_pfn << PAGE_SHIFT)
#define BLK_BOUNCE_HIGH		-1ULL
#define BLK_BOUNCE_ANY		(-1ULL)
#define BLK_BOUNCE_ISA		(DMA_BIT_MASK(24))
#define BLK_DEFAULT_SG_TIMEOUT	(60 * HZ)
#define BLK_MIN_SG_TIMEOUT	(7 * HZ)
extern int init_emergency_isa_pool(void);
extern void blk_queue_bounce(struct request_queue *q, struct bio **bio);
static inline int init_emergency_isa_pool(void)
static inline void blk_queue_bounce(struct request_queue *q, struct bio **bio)
struct rq_map_data ;
struct req_iterator ;
#define for_each_bio(_bio)		\
for (; _bio; _bio = _bio->bi_next)
#define __rq_for_each_bio(_bio, rq)	\
if ((rq->bio))			\
for (_bio = (rq)->bio; _bio; _bio = _bio->bi_next)
#define rq_for_each_segment(bvl, _rq, _iter)			\
__rq_for_each_bio(_iter.bio, _rq)			\
bio_for_each_segment(bvl, _iter.bio, _iter.i)
#define rq_iter_last(rq, _iter)					\
(_iter.bio->bi_next == NULL && _iter.i == _iter.bio->bi_vcnt-1)
# error	"You should define ARCH_IMPLEMENTS_FLUSH_DCACHE_PAGE for your platform"
#if ARCH_IMPLEMENTS_FLUSH_DCACHE_PAGE
extern void rq_flush_dcache_pages(struct request *rq);
static inline void rq_flush_dcache_pages(struct request *rq)
extern int blk_register_queue(struct gendisk *disk);
extern void blk_unregister_queue(struct gendisk *disk);
extern void generic_make_request(struct bio *bio);
extern void blk_rq_init(struct request_queue *q, struct request *rq);
extern void blk_put_request(struct request *);
extern void __blk_put_request(struct request_queue *, struct request *);
extern struct request *blk_get_request(struct request_queue *, int, gfp_t);
extern struct request *blk_make_request(struct request_queue *, struct bio *,
gfp_t);
extern void blk_insert_request(struct request_queue *, struct request *, int, void *);
extern void blk_requeue_request(struct request_queue *, struct request *);
extern void blk_add_request_payload(struct request *rq, struct page *page,
unsigned int len);
extern int blk_rq_check_limits(struct request_queue *q, struct request *rq);
extern int blk_lld_busy(struct request_queue *q);
extern int blk_rq_prep_clone(struct request *rq, struct request *rq_src,
struct bio_set *bs, gfp_t gfp_mask,
int (*bio_ctr)(struct bio *, struct bio *, void *),
void *data);
extern void blk_rq_unprep_clone(struct request *rq);
extern int blk_insert_cloned_request(struct request_queue *q,
struct request *rq);
extern void blk_delay_queue(struct request_queue *, unsigned long);
extern void blk_recount_segments(struct request_queue *, struct bio *);
extern int scsi_cmd_ioctl(struct request_queue *, struct gendisk *, fmode_t,
unsigned int, void __user *);
extern int sg_scsi_ioctl(struct request_queue *, struct gendisk *, fmode_t,
struct scsi_ioctl_command __user *);
static inline void blk_clear_queue_congested(struct request_queue *q, int sync)
static inline void blk_set_queue_congested(struct request_queue *q, int sync)
extern void blk_start_queue(struct request_queue *q);
extern void blk_stop_queue(struct request_queue *q);
extern void blk_sync_queue(struct request_queue *q);
extern void __blk_stop_queue(struct request_queue *q);
extern void __blk_run_queue(struct request_queue *q);
extern void blk_run_queue(struct request_queue *);
extern void blk_run_queue_async(struct request_queue *q);
extern int blk_rq_map_user(struct request_queue *, struct request *,
struct rq_map_data *, void __user *, unsigned long,
gfp_t);
extern int blk_rq_unmap_user(struct bio *);
extern int blk_rq_map_kern(struct request_queue *, struct request *, void *, unsigned int, gfp_t);
extern int blk_rq_map_user_iov(struct request_queue *, struct request *,
struct rq_map_data *, struct sg_iovec *, int,
unsigned int, gfp_t);
extern int blk_execute_rq(struct request_queue *, struct gendisk *,
struct request *, int);
extern void blk_execute_rq_nowait(struct request_queue *, struct gendisk *,
struct request *, int, rq_end_io_fn *);
static inline struct request_queue *bdev_get_queue(struct block_device *bdev)
static inline sector_t blk_rq_pos(const struct request *rq)
static inline unsigned int blk_rq_bytes(const struct request *rq)
static inline int blk_rq_cur_bytes(const struct request *rq)
extern unsigned int blk_rq_err_bytes(const struct request *rq);
static inline unsigned int blk_rq_sectors(const struct request *rq)
static inline unsigned int blk_rq_cur_sectors(const struct request *rq)
extern struct request *blk_peek_request(struct request_queue *q);
extern void blk_start_request(struct request *rq);
extern struct request *blk_fetch_request(struct request_queue *q);
extern bool blk_update_request(struct request *rq, int error,
unsigned int nr_bytes);
extern bool blk_end_request(struct request *rq, int error,
unsigned int nr_bytes);
extern void blk_end_request_all(struct request *rq, int error);
extern bool blk_end_request_cur(struct request *rq, int error);
extern bool blk_end_request_err(struct request *rq, int error);
extern bool __blk_end_request(struct request *rq, int error,
unsigned int nr_bytes);
extern void __blk_end_request_all(struct request *rq, int error);
extern bool __blk_end_request_cur(struct request *rq, int error);
extern bool __blk_end_request_err(struct request *rq, int error);
extern void blk_complete_request(struct request *);
extern void __blk_complete_request(struct request *);
extern void blk_abort_request(struct request *);
extern void blk_abort_queue(struct request_queue *);
extern void blk_unprep_request(struct request *);
extern struct request_queue *blk_init_queue_node(request_fn_proc *rfn,
spinlock_t *lock, int node_id);
extern struct request_queue *blk_init_allocated_queue_node(struct request_queue *,
request_fn_proc *,
spinlock_t *, int node_id);
extern struct request_queue *blk_init_queue(request_fn_proc *, spinlock_t *);
extern struct request_queue *blk_init_allocated_queue(struct request_queue *,
request_fn_proc *, spinlock_t *);
extern void blk_cleanup_queue(struct request_queue *);
extern void blk_queue_make_request(struct request_queue *, make_request_fn *);
extern void blk_queue_bounce_limit(struct request_queue *, u64);
extern void blk_limits_max_hw_sectors(struct queue_limits *, unsigned int);
extern void blk_queue_max_hw_sectors(struct request_queue *, unsigned int);
extern void blk_queue_max_segments(struct request_queue *, unsigned short);
extern void blk_queue_max_segment_size(struct request_queue *, unsigned int);
extern void blk_queue_max_discard_sectors(struct request_queue *q,
unsigned int max_discard_sectors);
extern void blk_queue_logical_block_size(struct request_queue *, unsigned short);
extern void blk_queue_physical_block_size(struct request_queue *, unsigned int);
extern void blk_queue_alignment_offset(struct request_queue *q,
unsigned int alignment);
extern void blk_limits_io_min(struct queue_limits *limits, unsigned int min);
extern void blk_queue_io_min(struct request_queue *q, unsigned int min);
extern void blk_limits_io_opt(struct queue_limits *limits, unsigned int opt);
extern void blk_queue_io_opt(struct request_queue *q, unsigned int opt);
extern void blk_set_default_limits(struct queue_limits *lim);
extern int blk_stack_limits(struct queue_limits *t, struct queue_limits *b,
sector_t offset);
extern int bdev_stack_limits(struct queue_limits *t, struct block_device *bdev,
sector_t offset);
extern void disk_stack_limits(struct gendisk *disk, struct block_device *bdev,
sector_t offset);
extern void blk_queue_stack_limits(struct request_queue *t, struct request_queue *b);
extern void blk_queue_dma_pad(struct request_queue *, unsigned int);
extern void blk_queue_update_dma_pad(struct request_queue *, unsigned int);
extern int blk_queue_dma_drain(struct request_queue *q,
dma_drain_needed_fn *dma_drain_needed,
void *buf, unsigned int size);
extern void blk_queue_lld_busy(struct request_queue *q, lld_busy_fn *fn);
extern void blk_queue_segment_boundary(struct request_queue *, unsigned long);
extern void blk_queue_prep_rq(struct request_queue *, prep_rq_fn *pfn);
extern void blk_queue_unprep_rq(struct request_queue *, unprep_rq_fn *ufn);
extern void blk_queue_merge_bvec(struct request_queue *, merge_bvec_fn *);
extern void blk_queue_dma_alignment(struct request_queue *, int);
extern void blk_queue_update_dma_alignment(struct request_queue *, int);
extern void blk_queue_softirq_done(struct request_queue *, softirq_done_fn *);
extern void blk_queue_rq_timed_out(struct request_queue *, rq_timed_out_fn *);
extern void blk_queue_rq_timeout(struct request_queue *, unsigned int);
extern void blk_queue_flush(struct request_queue *q, unsigned int flush);
extern void blk_queue_flush_queueable(struct request_queue *q, bool queueable);
extern struct backing_dev_info *blk_get_backing_dev_info(struct block_device *bdev);
extern int blk_rq_map_sg(struct request_queue *, struct request *, struct scatterlist *);
extern void blk_dump_rq_flags(struct request *, char *);
extern long nr_blockdev_pages(void);
int blk_get_queue(struct request_queue *);
struct request_queue *blk_alloc_queue(gfp_t);
struct request_queue *blk_alloc_queue_node(gfp_t, int);
extern void blk_put_queue(struct request_queue *);
struct blk_plug ;
struct blk_plug_cb ;
extern void blk_start_plug(struct blk_plug *);
extern void blk_finish_plug(struct blk_plug *);
extern void blk_flush_plug_list(struct blk_plug *, bool);
static inline void blk_flush_plug(struct task_struct *tsk)
static inline void blk_schedule_flush_plug(struct task_struct *tsk)
static inline bool blk_needs_flush_plug(struct task_struct *tsk)
#define blk_rq_tagged(rq)		((rq)->cmd_flags & REQ_QUEUED)
extern int blk_queue_start_tag(struct request_queue *, struct request *);
extern struct request *blk_queue_find_tag(struct request_queue *, int);
extern void blk_queue_end_tag(struct request_queue *, struct request *);
extern int blk_queue_init_tags(struct request_queue *, int, struct blk_queue_tag *);
extern void blk_queue_free_tags(struct request_queue *);
extern int blk_queue_resize_tags(struct request_queue *, int);
extern void blk_queue_invalidate_tags(struct request_queue *);
extern struct blk_queue_tag *blk_init_tags(int);
extern void blk_free_tags(struct blk_queue_tag *);
static inline struct request *blk_map_queue_find_tag(struct blk_queue_tag *bqt,
int tag)
#define BLKDEV_DISCARD_SECURE  0x01
extern int blkdev_issue_flush(struct block_device *, gfp_t, sector_t *);
extern int blkdev_issue_discard(struct block_device *bdev, sector_t sector,
sector_t nr_sects, gfp_t gfp_mask, unsigned long flags);
extern int blkdev_issue_zeroout(struct block_device *bdev, sector_t sector,
sector_t nr_sects, gfp_t gfp_mask);
static inline int sb_issue_discard(struct super_block *sb, sector_t block,
sector_t nr_blocks, gfp_t gfp_mask, unsigned long flags)
static inline int sb_issue_zeroout(struct super_block *sb, sector_t block,
sector_t nr_blocks, gfp_t gfp_mask)
extern int blk_verify_command(unsigned char *cmd, fmode_t has_write_perm);
enum blk_default_limits ;
#define blkdev_entry_to_request(entry) list_entry((entry), struct request, queuelist)
static inline unsigned long queue_bounce_pfn(struct request_queue *q)
static inline unsigned long queue_segment_boundary(struct request_queue *q)
static inline unsigned int queue_max_sectors(struct request_queue *q)
static inline unsigned int queue_max_hw_sectors(struct request_queue *q)
static inline unsigned short queue_max_segments(struct request_queue *q)
static inline unsigned int queue_max_segment_size(struct request_queue *q)
static inline unsigned short queue_logical_block_size(struct request_queue *q)
static inline unsigned short bdev_logical_block_size(struct block_device *bdev)
static inline unsigned int queue_physical_block_size(struct request_queue *q)
static inline unsigned int bdev_physical_block_size(struct block_device *bdev)
static inline unsigned int queue_io_min(struct request_queue *q)
static inline int bdev_io_min(struct block_device *bdev)
static inline unsigned int queue_io_opt(struct request_queue *q)
static inline int bdev_io_opt(struct block_device *bdev)
static inline int queue_alignment_offset(struct request_queue *q)
static inline int queue_limit_alignment_offset(struct queue_limits *lim, sector_t sector)
static inline int bdev_alignment_offset(struct block_device *bdev)
static inline int queue_discard_alignment(struct request_queue *q)
static inline int queue_limit_discard_alignment(struct queue_limits *lim, sector_t sector)
static inline unsigned int queue_discard_zeroes_data(struct request_queue *q)
static inline unsigned int bdev_discard_zeroes_data(struct block_device *bdev)
static inline int queue_dma_alignment(struct request_queue *q)
static inline int blk_rq_aligned(struct request_queue *q, unsigned long addr,
unsigned int len)
static inline unsigned int blksize_bits(unsigned int size)
static inline unsigned int block_size(struct block_device *bdev)
static inline bool queue_flush_queueable(struct request_queue *q)
typedef struct  Sector;
unsigned char *read_dev_sector(struct block_device *, sector_t, Sector *);
static inline void put_dev_sector(Sector p)
struct work_struct;
int kblockd_schedule_work(struct request_queue *q, struct work_struct *work);
static inline void set_start_time_ns(struct request *req)
static inline void set_io_start_time_ns(struct request *req)
static inline uint64_t rq_start_time_ns(struct request *req)
static inline uint64_t rq_io_start_time_ns(struct request *req)
static inline void set_start_time_ns(struct request *req)
static inline void set_io_start_time_ns(struct request *req)
static inline uint64_t rq_start_time_ns(struct request *req)
static inline uint64_t rq_io_start_time_ns(struct request *req)
extern int blk_throtl_init(struct request_queue *q);
extern void blk_throtl_exit(struct request_queue *q);
extern int blk_throtl_bio(struct request_queue *q, struct bio **bio);
static inline int blk_throtl_bio(struct request_queue *q, struct bio **bio)
static inline int blk_throtl_init(struct request_queue *q)
static inline int blk_throtl_exit(struct request_queue *q)
#define MODULE_ALIAS_BLOCKDEV(major,minor) \
MODULE_ALIAS("block-major-" __stringify(major) "-" __stringify(minor))
#define MODULE_ALIAS_BLOCKDEV_MAJOR(major) \
MODULE_ALIAS("block-major-" __stringify(major) "-*")
#if defined(CONFIG_BLK_DEV_INTEGRITY)
#define INTEGRITY_FLAG_READ	2
#define INTEGRITY_FLAG_WRITE	4
struct blk_integrity_exchg ;
typedef void (integrity_gen_fn) (struct blk_integrity_exchg *);
typedef int (integrity_vrfy_fn) (struct blk_integrity_exchg *);
typedef void (integrity_set_tag_fn) (void *, void *, unsigned int);
typedef void (integrity_get_tag_fn) (void *, void *, unsigned int);
struct blk_integrity ;
extern bool blk_integrity_is_initialized(struct gendisk *);
extern int blk_integrity_register(struct gendisk *, struct blk_integrity *);
extern void blk_integrity_unregister(struct gendisk *);
extern int blk_integrity_compare(struct gendisk *, struct gendisk *);
extern int blk_rq_map_integrity_sg(struct request_queue *, struct bio *,
struct scatterlist *);
extern int blk_rq_count_integrity_sg(struct request_queue *, struct bio *);
extern int blk_integrity_merge_rq(struct request_queue *, struct request *,
struct request *);
extern int blk_integrity_merge_bio(struct request_queue *, struct request *,
struct bio *);
static inline
struct blk_integrity *bdev_get_integrity(struct block_device *bdev)
static inline struct blk_integrity *blk_get_integrity(struct gendisk *disk)
static inline int blk_integrity_rq(struct request *rq)
static inline void blk_queue_max_integrity_segments(struct request_queue *q,
unsigned int segs)
static inline unsigned short
queue_max_integrity_segments(struct request_queue *q)
#define blk_integrity_rq(rq)			(0)
#define blk_rq_count_integrity_sg(a, b)		(0)
#define blk_rq_map_integrity_sg(a, b, c)	(0)
#define bdev_get_integrity(a)			(0)
#define blk_get_integrity(a)			(0)
#define blk_integrity_compare(a, b)		(0)
#define blk_integrity_register(a, b)		(0)
#define blk_integrity_unregister(a)		do  while (0)
#define blk_queue_max_integrity_segments(a, b)	do  while (0)
#define queue_max_integrity_segments(a)		(0)
#define blk_integrity_merge_rq(a, b, c)		(0)
#define blk_integrity_merge_bio(a, b, c)	(0)
#define blk_integrity_is_initialized(a)		(0)
struct block_device_operations ;
extern int __blkdev_driver_ioctl(struct block_device *, fmode_t, unsigned int,
unsigned long);
#define buffer_heads_over_limit 0
static inline long nr_blockdev_pages(void)
struct blk_plug ;
static inline void blk_start_plug(struct blk_plug *plug)
static inline void blk_finish_plug(struct blk_plug *plug)
static inline void blk_flush_plug(struct task_struct *task)
static inline void blk_schedule_flush_plug(struct task_struct *task)
static inline bool blk_needs_flush_plug(struct task_struct *tsk)
