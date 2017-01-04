#define IOCONTEXT_H
struct cfq_queue;
struct cfq_io_context ;
struct io_context ;
static inline struct io_context *ioc_task_link(struct io_context *ioc)
struct task_struct;
int put_io_context(struct io_context *ioc);
void exit_io_context(struct task_struct *task);
struct io_context *get_io_context(gfp_t gfp_flags, int node);
struct io_context *alloc_io_context(gfp_t gfp_flags, int node);
static inline void exit_io_context(struct task_struct *task)
struct io_context;
static inline int put_io_context(struct io_context *ioc)
