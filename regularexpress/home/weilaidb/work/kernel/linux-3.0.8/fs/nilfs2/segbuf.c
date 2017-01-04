struct nilfs_write_info ;
static int nilfs_segbuf_write(struct nilfs_segment_buffer *segbuf,
struct the_nilfs *nilfs);
static int nilfs_segbuf_wait(struct nilfs_segment_buffer *segbuf);
struct nilfs_segment_buffer *nilfs_segbuf_new(struct super_block *sb)
void nilfs_segbuf_free(struct nilfs_segment_buffer *segbuf)
void nilfs_segbuf_map(struct nilfs_segment_buffer *segbuf, __u64 segnum,
unsigned long offset, struct the_nilfs *nilfs)
void nilfs_segbuf_map_cont(struct nilfs_segment_buffer *segbuf,
struct nilfs_segment_buffer *prev)
void nilfs_segbuf_set_next_segnum(struct nilfs_segment_buffer *segbuf,
__u64 nextnum, struct the_nilfs *nilfs)
int nilfs_segbuf_extend_segsum(struct nilfs_segment_buffer *segbuf)
int nilfs_segbuf_extend_payload(struct nilfs_segment_buffer *segbuf,
struct buffer_head **bhp)
int nilfs_segbuf_reset(struct nilfs_segment_buffer *segbuf, unsigned flags,
time_t ctime, __u64 cno)
void nilfs_segbuf_fill_in_segsum(struct nilfs_segment_buffer *segbuf)
static void
nilfs_segbuf_fill_in_segsum_crc(struct nilfs_segment_buffer *segbuf, u32 seed)
static void nilfs_segbuf_fill_in_data_crc(struct nilfs_segment_buffer *segbuf,
u32 seed)
static void
nilfs_segbuf_fill_in_super_root_crc(struct nilfs_segment_buffer *segbuf,
u32 seed)
static void nilfs_release_buffers(struct list_head *list)
static void nilfs_segbuf_clear(struct nilfs_segment_buffer *segbuf)
void nilfs_clear_logs(struct list_head *logs)
void nilfs_truncate_logs(struct list_head *logs,
struct nilfs_segment_buffer *last)
int nilfs_write_logs(struct list_head *logs, struct the_nilfs *nilfs)
int nilfs_wait_on_logs(struct list_head *logs)
void nilfs_add_checksums_on_logs(struct list_head *logs, u32 seed)
static void nilfs_end_bio_write(struct bio *bio, int err)
static int nilfs_segbuf_submit_bio(struct nilfs_segment_buffer *segbuf,
struct nilfs_write_info *wi, int mode)
static struct bio *nilfs_alloc_seg_bio(struct the_nilfs *nilfs, sector_t start,
int nr_vecs)
static void nilfs_segbuf_prepare_write(struct nilfs_segment_buffer *segbuf,
struct nilfs_write_info *wi)
static int nilfs_segbuf_submit_bh(struct nilfs_segment_buffer *segbuf,
struct nilfs_write_info *wi,
struct buffer_head *bh, int mode)
static int nilfs_segbuf_write(struct nilfs_segment_buffer *segbuf,
struct the_nilfs *nilfs)
static int nilfs_segbuf_wait(struct nilfs_segment_buffer *segbuf)
