#define _BSD_SOURCE
#define cpu_to_le16(x)  htole16(x)
#define cpu_to_le32(x)  htole32(x)
#define le32_to_cpu(x)  le32toh(x)
#define le16_to_cpu(x)  le16toh(x)
static inline __u16 get_unaligned_le16(const void *_ptr)
static inline __u32 get_unaligned_le32(const void *_ptr)
static inline void put_unaligned_le16(__u16 val, void *_ptr)
static inline void put_unaligned_le32(__u32 val, void *_ptr)
static const char argv0[] = "ffs-test";
static unsigned verbosity = 7;
static void _msg(unsigned level, const char *fmt, ...)
#define die(...)  (_msg(2, __VA_ARGS__), exit(1))
#define err(...)   _msg(3, __VA_ARGS__)
#define warn(...)  _msg(4, __VA_ARGS__)
#define note(...)  _msg(5, __VA_ARGS__)
#define info(...)  _msg(6, __VA_ARGS__)
#define debug(...) _msg(7, __VA_ARGS__)
#define die_on(cond, ...) do  while (0)
static const struct  __attribute__((packed)) descriptors = ;
#define STR_INTERFACE_ "Source/Sink"
static const struct  __attribute__((packed)) strings = ;
#define STR_INTERFACE strings.lang0.str1
struct thread;
static ssize_t read_wrap(struct thread *t, void *buf, size_t nbytes);
static ssize_t write_wrap(struct thread *t, const void *buf, size_t nbytes);
static ssize_t ep0_consume(struct thread *t, const void *buf, size_t nbytes);
static ssize_t fill_in_buf(struct thread *t, void *buf, size_t nbytes);
static ssize_t empty_out_buf(struct thread *t, const void *buf, size_t nbytes);
static struct thread  threads[] = ;
static void init_thread(struct thread *t)
static void cleanup_thread(void *arg)
static void *start_thread_helper(void *arg)
static void start_thread(struct thread *t)
static void join_thread(struct thread *t)
static ssize_t read_wrap(struct thread *t, void *buf, size_t nbytes)
static ssize_t write_wrap(struct thread *t, const void *buf, size_t nbytes)
enum pattern ;
static enum pattern pattern;
static ssize_t
fill_in_buf(struct thread *ignore, void *buf, size_t nbytes)
static ssize_t
empty_out_buf(struct thread *ignore, const void *buf, size_t nbytes)
static void handle_setup(const struct usb_ctrlrequest *setup)
static ssize_t
ep0_consume(struct thread *ignore, const void *buf, size_t nbytes)
static void ep0_init(struct thread *t)
int main(void)
