static struct kmem_cache *iocontext_cachep;
static void cfq_dtor(struct io_context *ioc)
int put_io_context(struct io_context *ioc)
EXPORT_SYMBOL(put_io_context);
static void cfq_exit(struct io_context *ioc)
void exit_io_context(struct task_struct *task)
struct io_context *alloc_io_context(gfp_t gfp_flags, int node)
struct io_context *current_io_context(gfp_t gfp_flags, int node)
struct io_context *get_io_context(gfp_t gfp_flags, int node)
EXPORT_SYMBOL(get_io_context);
static int __init blk_ioc_init(void)
subsys_initcall(blk_ioc_init);
