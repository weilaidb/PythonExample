static struct kmem_cache *pd_cache;
struct ib_pd *ehca_alloc_pd(struct ib_device *device,
struct ib_ucontext *context, struct ib_udata *udata)
int ehca_dealloc_pd(struct ib_pd *pd)
int ehca_init_pd_cache(void)
void ehca_cleanup_pd_cache(void)
