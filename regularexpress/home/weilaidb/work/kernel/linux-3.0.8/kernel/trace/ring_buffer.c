int ring_buffer_print_entry_header(struct trace_seq *s)
enum ;
enum ;
static unsigned long ring_buffer_flags __read_mostly = RB_BUFFERS_ON;
#define BUF_PAGE_HDR_SIZE offsetof(struct buffer_data_page, data)
void tracing_on(void)
EXPORT_SYMBOL_GPL(tracing_on);
void tracing_off(void)
EXPORT_SYMBOL_GPL(tracing_off);
void tracing_off_permanent(void)
int tracing_is_on(void)
EXPORT_SYMBOL_GPL(tracing_is_on);
#define RB_EVNT_HDR_SIZE (offsetof(struct ring_buffer_event, array))
#define RB_ALIGNMENT		4U
#define RB_MAX_SMALL_DATA	(RB_ALIGNMENT * RINGBUF_TYPE_DATA_TYPE_LEN_MAX)
#define RB_EVNT_MIN_SIZE	8U
#if !defined(CONFIG_64BIT) || defined(CONFIG_HAVE_EFFICIENT_UNALIGNED_ACCESS)
# define RB_FORCE_8BYTE_ALIGNMENT	0
# define RB_ARCH_ALIGNMENT		RB_ALIGNMENT
# define RB_FORCE_8BYTE_ALIGNMENT	1
# define RB_ARCH_ALIGNMENT		8U
#define RINGBUF_TYPE_DATA 0 ... RINGBUF_TYPE_DATA_TYPE_LEN_MAX
enum ;
#define skip_time_extend(event) \
((struct ring_buffer_event *)((char *)event + RB_LEN_TIME_EXTEND))
static inline int rb_null_event(struct ring_buffer_event *event)
static void rb_event_set_padding(struct ring_buffer_event *event)
static unsigned
rb_event_data_length(struct ring_buffer_event *event)
static inline unsigned
rb_event_length(struct ring_buffer_event *event)
static inline unsigned
rb_event_ts_length(struct ring_buffer_event *event)
unsigned ring_buffer_event_length(struct ring_buffer_event *event)
EXPORT_SYMBOL_GPL(ring_buffer_event_length);
static void *
rb_event_data(struct ring_buffer_event *event)
void *ring_buffer_event_data(struct ring_buffer_event *event)
EXPORT_SYMBOL_GPL(ring_buffer_event_data);
#define for_each_buffer_cpu(buffer, cpu)		\
for_each_cpu(cpu, buffer->cpumask)
#define TS_SHIFT	27
#define TS_MASK		((1ULL << TS_SHIFT) - 1)
#define TS_DELTA_TEST	(~TS_MASK)
#define RB_MISSED_EVENTS	(1 << 31)
#define RB_MISSED_STORED	(1 << 30)
struct buffer_data_page ;
struct buffer_page ;
#define RB_WRITE_MASK		0xfffff
#define RB_WRITE_INTCNT		(1 << 20)
static void rb_init_page(struct buffer_data_page *bpage)
size_t ring_buffer_page_len(void *page)
static void free_buffer_page(struct buffer_page *bpage)
static inline int test_time_stamp(u64 delta)
#define BUF_PAGE_SIZE (PAGE_SIZE - BUF_PAGE_HDR_SIZE)
#define BUF_MAX_DATA_SIZE (BUF_PAGE_SIZE - (sizeof(u32) * 2))
int ring_buffer_print_page_header(struct trace_seq *s)
struct ring_buffer_per_cpu ;
struct ring_buffer ;
struct ring_buffer_iter ;
#define RB_WARN_ON(b, cond)						\
()
#define DEBUG_SHIFT 0
static inline u64 rb_time_stamp(struct ring_buffer *buffer)
u64 ring_buffer_time_stamp(struct ring_buffer *buffer, int cpu)
EXPORT_SYMBOL_GPL(ring_buffer_time_stamp);
void ring_buffer_normalize_time_stamp(struct ring_buffer *buffer,
int cpu, u64 *ts)
EXPORT_SYMBOL_GPL(ring_buffer_normalize_time_stamp);
#define RB_PAGE_NORMAL		0UL
#define RB_PAGE_HEAD		1UL
#define RB_PAGE_UPDATE		2UL
#define RB_FLAG_MASK		3UL
#define RB_PAGE_MOVED		4UL
static struct list_head *rb_list_head(struct list_head *list)
static inline int
rb_is_head_page(struct ring_buffer_per_cpu *cpu_buffer,
struct buffer_page *page, struct list_head *list)
static int rb_is_reader_page(struct buffer_page *page)
static void rb_set_list_to_head(struct ring_buffer_per_cpu *cpu_buffer,
struct list_head *list)
static void rb_head_page_activate(struct ring_buffer_per_cpu *cpu_buffer)
static void rb_list_head_clear(struct list_head *list)
static void
rb_head_page_deactivate(struct ring_buffer_per_cpu *cpu_buffer)
static int rb_head_page_set(struct ring_buffer_per_cpu *cpu_buffer,
struct buffer_page *head,
struct buffer_page *prev,
int old_flag, int new_flag)
static int rb_head_page_set_update(struct ring_buffer_per_cpu *cpu_buffer,
struct buffer_page *head,
struct buffer_page *prev,
int old_flag)
static int rb_head_page_set_head(struct ring_buffer_per_cpu *cpu_buffer,
struct buffer_page *head,
struct buffer_page *prev,
int old_flag)
static int rb_head_page_set_normal(struct ring_buffer_per_cpu *cpu_buffer,
struct buffer_page *head,
struct buffer_page *prev,
int old_flag)
static inline void rb_inc_page(struct ring_buffer_per_cpu *cpu_buffer,
struct buffer_page **bpage)
static struct buffer_page *
rb_set_head_page(struct ring_buffer_per_cpu *cpu_buffer)
static int rb_head_page_replace(struct buffer_page *old,
struct buffer_page *new)
static int rb_tail_page_update(struct ring_buffer_per_cpu *cpu_buffer,
struct buffer_page *tail_page,
struct buffer_page *next_page)
static int rb_check_bpage(struct ring_buffer_per_cpu *cpu_buffer,
struct buffer_page *bpage)
static int rb_check_list(struct ring_buffer_per_cpu *cpu_buffer,
struct list_head *list)
static int rb_check_pages(struct ring_buffer_per_cpu *cpu_buffer)
static int rb_allocate_pages(struct ring_buffer_per_cpu *cpu_buffer,
unsigned nr_pages)
static struct ring_buffer_per_cpu *
rb_allocate_cpu_buffer(struct ring_buffer *buffer, int cpu)
static void rb_free_cpu_buffer(struct ring_buffer_per_cpu *cpu_buffer)
static int rb_cpu_notify(struct notifier_block *self,
unsigned long action, void *hcpu);
struct ring_buffer *__ring_buffer_alloc(unsigned long size, unsigned flags,
struct lock_class_key *key)
EXPORT_SYMBOL_GPL(__ring_buffer_alloc);
void
ring_buffer_free(struct ring_buffer *buffer)
EXPORT_SYMBOL_GPL(ring_buffer_free);
void ring_buffer_set_clock(struct ring_buffer *buffer,
u64 (*clock)(void))
static void rb_reset_cpu(struct ring_buffer_per_cpu *cpu_buffer);
static void
rb_remove_pages(struct ring_buffer_per_cpu *cpu_buffer, unsigned nr_pages)
static void
rb_insert_pages(struct ring_buffer_per_cpu *cpu_buffer,
struct list_head *pages, unsigned nr_pages)
int ring_buffer_resize(struct ring_buffer *buffer, unsigned long size)
EXPORT_SYMBOL_GPL(ring_buffer_resize);
void ring_buffer_change_overwrite(struct ring_buffer *buffer, int val)
EXPORT_SYMBOL_GPL(ring_buffer_change_overwrite);
static inline void *
__rb_data_page_index(struct buffer_data_page *bpage, unsigned index)
static inline void *__rb_page_index(struct buffer_page *bpage, unsigned index)
static inline struct ring_buffer_event *
rb_reader_event(struct ring_buffer_per_cpu *cpu_buffer)
static inline struct ring_buffer_event *
rb_iter_head_event(struct ring_buffer_iter *iter)
static inline unsigned long rb_page_write(struct buffer_page *bpage)
static inline unsigned rb_page_commit(struct buffer_page *bpage)
static inline unsigned long rb_page_entries(struct buffer_page *bpage)
static inline unsigned rb_page_size(struct buffer_page *bpage)
static inline unsigned
rb_commit_index(struct ring_buffer_per_cpu *cpu_buffer)
static inline unsigned
rb_event_index(struct ring_buffer_event *event)
static inline int
rb_event_is_commit(struct ring_buffer_per_cpu *cpu_buffer,
struct ring_buffer_event *event)
static void
rb_set_commit_to_write(struct ring_buffer_per_cpu *cpu_buffer)
static void rb_reset_reader_page(struct ring_buffer_per_cpu *cpu_buffer)
static void rb_inc_iter(struct ring_buffer_iter *iter)
static noinline struct ring_buffer_event *
rb_add_time_stamp(struct ring_buffer_event *event, u64 delta)
static void
rb_update_event(struct ring_buffer_per_cpu *cpu_buffer,
struct ring_buffer_event *event, unsigned length,
int add_timestamp, u64 delta)
static int
rb_handle_head_page(struct ring_buffer_per_cpu *cpu_buffer,
struct buffer_page *tail_page,
struct buffer_page *next_page)
static unsigned rb_calculate_event_length(unsigned length)
static inline void
rb_reset_tail(struct ring_buffer_per_cpu *cpu_buffer,
struct buffer_page *tail_page,
unsigned long tail, unsigned long length)
static noinline struct ring_buffer_event *
rb_move_tail(struct ring_buffer_per_cpu *cpu_buffer,
unsigned long length, unsigned long tail,
struct buffer_page *tail_page, u64 ts)
static struct ring_buffer_event *
__rb_reserve_next(struct ring_buffer_per_cpu *cpu_buffer,
unsigned long length, u64 ts,
u64 delta, int add_timestamp)
static inline int
rb_try_to_discard(struct ring_buffer_per_cpu *cpu_buffer,
struct ring_buffer_event *event)
static void rb_start_commit(struct ring_buffer_per_cpu *cpu_buffer)
static inline void rb_end_commit(struct ring_buffer_per_cpu *cpu_buffer)
static struct ring_buffer_event *
rb_reserve_next_event(struct ring_buffer *buffer,
struct ring_buffer_per_cpu *cpu_buffer,
unsigned long length)
#define TRACE_RECURSIVE_DEPTH 16
static noinline void trace_recursive_fail(void)
static inline int trace_recursive_lock(void)
static inline void trace_recursive_unlock(void)
#define trace_recursive_lock()		(0)
#define trace_recursive_unlock()	do  while (0)
struct ring_buffer_event *
ring_buffer_lock_reserve(struct ring_buffer *buffer, unsigned long length)
EXPORT_SYMBOL_GPL(ring_buffer_lock_reserve);
static void
rb_update_write_stamp(struct ring_buffer_per_cpu *cpu_buffer,
struct ring_buffer_event *event)
static void rb_commit(struct ring_buffer_per_cpu *cpu_buffer,
struct ring_buffer_event *event)
int ring_buffer_unlock_commit(struct ring_buffer *buffer,
struct ring_buffer_event *event)
EXPORT_SYMBOL_GPL(ring_buffer_unlock_commit);
static inline void rb_event_discard(struct ring_buffer_event *event)
static inline void
rb_decrement_entry(struct ring_buffer_per_cpu *cpu_buffer,
struct ring_buffer_event *event)
void ring_buffer_discard_commit(struct ring_buffer *buffer,
struct ring_buffer_event *event)
EXPORT_SYMBOL_GPL(ring_buffer_discard_commit);
int ring_buffer_write(struct ring_buffer *buffer,
unsigned long length,
void *data)
EXPORT_SYMBOL_GPL(ring_buffer_write);
static int rb_per_cpu_empty(struct ring_buffer_per_cpu *cpu_buffer)
void ring_buffer_record_disable(struct ring_buffer *buffer)
EXPORT_SYMBOL_GPL(ring_buffer_record_disable);
void ring_buffer_record_enable(struct ring_buffer *buffer)
EXPORT_SYMBOL_GPL(ring_buffer_record_enable);
void ring_buffer_record_disable_cpu(struct ring_buffer *buffer, int cpu)
EXPORT_SYMBOL_GPL(ring_buffer_record_disable_cpu);
void ring_buffer_record_enable_cpu(struct ring_buffer *buffer, int cpu)
EXPORT_SYMBOL_GPL(ring_buffer_record_enable_cpu);
static inline unsigned long
rb_num_of_entries(struct ring_buffer_per_cpu *cpu_buffer)
unsigned long ring_buffer_entries_cpu(struct ring_buffer *buffer, int cpu)
EXPORT_SYMBOL_GPL(ring_buffer_entries_cpu);
unsigned long ring_buffer_overrun_cpu(struct ring_buffer *buffer, int cpu)
EXPORT_SYMBOL_GPL(ring_buffer_overrun_cpu);
unsigned long
ring_buffer_commit_overrun_cpu(struct ring_buffer *buffer, int cpu)
EXPORT_SYMBOL_GPL(ring_buffer_commit_overrun_cpu);
unsigned long ring_buffer_entries(struct ring_buffer *buffer)
EXPORT_SYMBOL_GPL(ring_buffer_entries);
unsigned long ring_buffer_overruns(struct ring_buffer *buffer)
EXPORT_SYMBOL_GPL(ring_buffer_overruns);
static void rb_iter_reset(struct ring_buffer_iter *iter)
void ring_buffer_iter_reset(struct ring_buffer_iter *iter)
EXPORT_SYMBOL_GPL(ring_buffer_iter_reset);
int ring_buffer_iter_empty(struct ring_buffer_iter *iter)
EXPORT_SYMBOL_GPL(ring_buffer_iter_empty);
static void
rb_update_read_stamp(struct ring_buffer_per_cpu *cpu_buffer,
struct ring_buffer_event *event)
static void
rb_update_iter_read_stamp(struct ring_buffer_iter *iter,
struct ring_buffer_event *event)
static struct buffer_page *
rb_get_reader_page(struct ring_buffer_per_cpu *cpu_buffer)
static void rb_advance_reader(struct ring_buffer_per_cpu *cpu_buffer)
static void rb_advance_iter(struct ring_buffer_iter *iter)
static int rb_lost_events(struct ring_buffer_per_cpu *cpu_buffer)
static struct ring_buffer_event *
rb_buffer_peek(struct ring_buffer_per_cpu *cpu_buffer, u64 *ts,
unsigned long *lost_events)
EXPORT_SYMBOL_GPL(ring_buffer_peek);
static struct ring_buffer_event *
rb_iter_peek(struct ring_buffer_iter *iter, u64 *ts)
EXPORT_SYMBOL_GPL(ring_buffer_iter_peek);
static inline int rb_ok_to_lock(void)
struct ring_buffer_event *
ring_buffer_peek(struct ring_buffer *buffer, int cpu, u64 *ts,
unsigned long *lost_events)
struct ring_buffer_event *
ring_buffer_iter_peek(struct ring_buffer_iter *iter, u64 *ts)
struct ring_buffer_event *
ring_buffer_consume(struct ring_buffer *buffer, int cpu, u64 *ts,
unsigned long *lost_events)
EXPORT_SYMBOL_GPL(ring_buffer_consume);
struct ring_buffer_iter *
ring_buffer_read_prepare(struct ring_buffer *buffer, int cpu)
EXPORT_SYMBOL_GPL(ring_buffer_read_prepare);
void
ring_buffer_read_prepare_sync(void)
EXPORT_SYMBOL_GPL(ring_buffer_read_prepare_sync);
void
ring_buffer_read_start(struct ring_buffer_iter *iter)
EXPORT_SYMBOL_GPL(ring_buffer_read_start);
void
ring_buffer_read_finish(struct ring_buffer_iter *iter)
EXPORT_SYMBOL_GPL(ring_buffer_read_finish);
struct ring_buffer_event *
ring_buffer_read(struct ring_buffer_iter *iter, u64 *ts)
EXPORT_SYMBOL_GPL(ring_buffer_read);
unsigned long ring_buffer_size(struct ring_buffer *buffer)
EXPORT_SYMBOL_GPL(ring_buffer_size);
static void
rb_reset_cpu(struct ring_buffer_per_cpu *cpu_buffer)
void ring_buffer_reset_cpu(struct ring_buffer *buffer, int cpu)
EXPORT_SYMBOL_GPL(ring_buffer_reset_cpu);
void ring_buffer_reset(struct ring_buffer *buffer)
EXPORT_SYMBOL_GPL(ring_buffer_reset);
int ring_buffer_empty(struct ring_buffer *buffer)
EXPORT_SYMBOL_GPL(ring_buffer_empty);
int ring_buffer_empty_cpu(struct ring_buffer *buffer, int cpu)
EXPORT_SYMBOL_GPL(ring_buffer_empty_cpu);
int ring_buffer_swap_cpu(struct ring_buffer *buffer_a,
struct ring_buffer *buffer_b, int cpu)
EXPORT_SYMBOL_GPL(ring_buffer_swap_cpu);
void *ring_buffer_alloc_read_page(struct ring_buffer *buffer)
EXPORT_SYMBOL_GPL(ring_buffer_alloc_read_page);
void ring_buffer_free_read_page(struct ring_buffer *buffer, void *data)
EXPORT_SYMBOL_GPL(ring_buffer_free_read_page);
int ring_buffer_read_page(struct ring_buffer *buffer,
void **data_page, size_t len, int cpu, int full)
EXPORT_SYMBOL_GPL(ring_buffer_read_page);
static ssize_t
rb_simple_read(struct file *filp, char __user *ubuf,
size_t cnt, loff_t *ppos)
static ssize_t
rb_simple_write(struct file *filp, const char __user *ubuf,
size_t cnt, loff_t *ppos)
static const struct file_operations rb_simple_fops = ;
static __init int rb_init_debugfs(void)
fs_initcall(rb_init_debugfs);
static int rb_cpu_notify(struct notifier_block *self,
unsigned long action, void *hcpu)
