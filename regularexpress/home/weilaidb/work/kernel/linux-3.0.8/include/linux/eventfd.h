#define _LINUX_EVENTFD_H
#define EFD_SEMAPHORE (1 << 0)
#define EFD_CLOEXEC O_CLOEXEC
#define EFD_NONBLOCK O_NONBLOCK
#define EFD_SHARED_FCNTL_FLAGS (O_CLOEXEC | O_NONBLOCK)
#define EFD_FLAGS_SET (EFD_SHARED_FCNTL_FLAGS | EFD_SEMAPHORE)
struct file *eventfd_file_create(unsigned int count, int flags);
struct eventfd_ctx *eventfd_ctx_get(struct eventfd_ctx *ctx);
void eventfd_ctx_put(struct eventfd_ctx *ctx);
struct file *eventfd_fget(int fd);
struct eventfd_ctx *eventfd_ctx_fdget(int fd);
struct eventfd_ctx *eventfd_ctx_fileget(struct file *file);
int eventfd_signal(struct eventfd_ctx *ctx, int n);
ssize_t eventfd_ctx_read(struct eventfd_ctx *ctx, int no_wait, __u64 *cnt);
int eventfd_ctx_remove_wait_queue(struct eventfd_ctx *ctx, wait_queue_t *wait,
__u64 *cnt);
static inline struct file *eventfd_file_create(unsigned int count, int flags)
static inline struct eventfd_ctx *eventfd_ctx_fdget(int fd)
static inline int eventfd_signal(struct eventfd_ctx *ctx, int n)
static inline void eventfd_ctx_put(struct eventfd_ctx *ctx)
static inline ssize_t eventfd_ctx_read(struct eventfd_ctx *ctx, int no_wait,
__u64 *cnt)
static inline int eventfd_ctx_remove_wait_queue(struct eventfd_ctx *ctx,
wait_queue_t *wait, __u64 *cnt)
