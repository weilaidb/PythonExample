#define _NILFS_SEGBUF_H
struct nilfs_segsum_info ;
struct nilfs_segment_buffer ;
#define NILFS_LIST_SEGBUF(head)  \
list_entry((head), struct nilfs_segment_buffer, sb_list)
#define NILFS_NEXT_SEGBUF(segbuf)  NILFS_LIST_SEGBUF((segbuf)->sb_list.next)
#define NILFS_PREV_SEGBUF(segbuf)  NILFS_LIST_SEGBUF((segbuf)->sb_list.prev)
#define NILFS_LAST_SEGBUF(head)    NILFS_LIST_SEGBUF((head)->prev)
#define NILFS_FIRST_SEGBUF(head)   NILFS_LIST_SEGBUF((head)->next)
#define NILFS_SEGBUF_IS_LAST(segbuf, head)  ((segbuf)->sb_list.next == (head))
#define nilfs_for_each_segbuf_before(s, t, h) \
for ((s) = NILFS_FIRST_SEGBUF(h); (s) != (t); \
(s) = NILFS_NEXT_SEGBUF(s))
#define NILFS_SEGBUF_FIRST_BH(head)  \
(list_entry((head)->next, struct buffer_head, b_assoc_buffers))
#define NILFS_SEGBUF_NEXT_BH(bh)  \
(list_entry((bh)->b_assoc_buffers.next, struct buffer_head, \
b_assoc_buffers))
#define NILFS_SEGBUF_BH_IS_LAST(bh, head)  ((bh)->b_assoc_buffers.next == head)
extern struct kmem_cache *nilfs_segbuf_cachep;
struct nilfs_segment_buffer *nilfs_segbuf_new(struct super_block *);
void nilfs_segbuf_free(struct nilfs_segment_buffer *);
void nilfs_segbuf_map(struct nilfs_segment_buffer *, __u64, unsigned long,
struct the_nilfs *);
void nilfs_segbuf_map_cont(struct nilfs_segment_buffer *segbuf,
struct nilfs_segment_buffer *prev);
void nilfs_segbuf_set_next_segnum(struct nilfs_segment_buffer *, __u64,
struct the_nilfs *);
int nilfs_segbuf_reset(struct nilfs_segment_buffer *, unsigned, time_t, __u64);
int nilfs_segbuf_extend_segsum(struct nilfs_segment_buffer *);
int nilfs_segbuf_extend_payload(struct nilfs_segment_buffer *,
struct buffer_head **);
void nilfs_segbuf_fill_in_segsum(struct nilfs_segment_buffer *);
static inline int nilfs_segbuf_simplex(struct nilfs_segment_buffer *segbuf)
static inline int nilfs_segbuf_empty(struct nilfs_segment_buffer *segbuf)
static inline void
nilfs_segbuf_add_segsum_buffer(struct nilfs_segment_buffer *segbuf,
struct buffer_head *bh)
static inline void
nilfs_segbuf_add_payload_buffer(struct nilfs_segment_buffer *segbuf,
struct buffer_head *bh)
static inline void
nilfs_segbuf_add_file_buffer(struct nilfs_segment_buffer *segbuf,
struct buffer_head *bh)
void nilfs_clear_logs(struct list_head *logs);
void nilfs_truncate_logs(struct list_head *logs,
struct nilfs_segment_buffer *last);
int nilfs_write_logs(struct list_head *logs, struct the_nilfs *nilfs);
int nilfs_wait_on_logs(struct list_head *logs);
void nilfs_add_checksums_on_logs(struct list_head *logs, u32 seed);
static inline void nilfs_destroy_logs(struct list_head *logs)
