#define DELTA_H
struct delta_index;
extern struct delta_index *
create_delta_index(const void *buf, unsigned long bufsize);
extern void free_delta_index(struct delta_index *index);
extern unsigned long sizeof_delta_index(struct delta_index *index);
extern void *
create_delta(const struct delta_index *index,
const void *buf, unsigned long bufsize,
unsigned long *delta_size, unsigned long max_delta_size);
static inline void *
diff_delta(const void *src_buf, unsigned long src_bufsize,
const void *trg_buf, unsigned long trg_bufsize,
unsigned long *delta_size, unsigned long max_delta_size)
extern void *patch_delta(const void *src_buf, unsigned long src_size,
const void *delta_buf, unsigned long delta_size,
unsigned long *dst_size);
#define DELTA_SIZE_MIN	4
static inline unsigned long get_delta_hdr_size(const unsigned char **datap,
const unsigned char *top)
