atomic_t nr_spu_contexts = ATOMIC_INIT(0);
struct spu_context *alloc_spu_context(struct spu_gang *gang)
void destroy_spu_context(struct kref *kref)
struct spu_context * get_spu_context(struct spu_context *ctx)
int put_spu_context(struct spu_context *ctx)
void spu_forget(struct spu_context *ctx)
void spu_unmap_mappings(struct spu_context *ctx)
int spu_acquire_saved(struct spu_context *ctx)
void spu_release_saved(struct spu_context *ctx)
