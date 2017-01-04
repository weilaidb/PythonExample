#define _LINUX_RELAY_H
#define FIX_SIZE(x) ((((x) - 1) & PAGE_MASK) + PAGE_SIZE)
#define RELAYFS_CHANNEL_VERSION		7
struct rchan_buf
____cacheline_aligned;
struct rchan
;
struct rchan_callbacks
;
struct rchan *relay_open(const char *base_filename,
struct dentry *parent,
size_t subbuf_size,
size_t n_subbufs,
struct rchan_callbacks *cb,
void *private_data);
extern int relay_late_setup_files(struct rchan *chan,
const char *base_filename,
struct dentry *parent);
extern void relay_close(struct rchan *chan);
extern void relay_flush(struct rchan *chan);
extern void relay_subbufs_consumed(struct rchan *chan,
unsigned int cpu,
size_t consumed);
extern void relay_reset(struct rchan *chan);
extern int relay_buf_full(struct rchan_buf *buf);
extern size_t relay_switch_subbuf(struct rchan_buf *buf,
size_t length);
static inline void relay_write(struct rchan *chan,
const void *data,
size_t length)
static inline void __relay_write(struct rchan *chan,
const void *data,
size_t length)
static inline void *relay_reserve(struct rchan *chan, size_t length)
static inline void subbuf_start_reserve(struct rchan_buf *buf,
size_t length)
extern const struct file_operations relay_file_operations;
