struct scatterlist *sg_next(struct scatterlist *sg)
EXPORT_SYMBOL(sg_next);
struct scatterlist *sg_last(struct scatterlist *sgl, unsigned int nents)
EXPORT_SYMBOL(sg_last);
void sg_init_table(struct scatterlist *sgl, unsigned int nents)
EXPORT_SYMBOL(sg_init_table);
void sg_init_one(struct scatterlist *sg, const void *buf, unsigned int buflen)
EXPORT_SYMBOL(sg_init_one);
static struct scatterlist *sg_kmalloc(unsigned int nents, gfp_t gfp_mask)
static void sg_kfree(struct scatterlist *sg, unsigned int nents)
void __sg_free_table(struct sg_table *table, unsigned int max_ents,
sg_free_fn *free_fn)
EXPORT_SYMBOL(__sg_free_table);
void sg_free_table(struct sg_table *table)
EXPORT_SYMBOL(sg_free_table);
int __sg_alloc_table(struct sg_table *table, unsigned int nents,
unsigned int max_ents, gfp_t gfp_mask,
sg_alloc_fn *alloc_fn)
EXPORT_SYMBOL(__sg_alloc_table);
int sg_alloc_table(struct sg_table *table, unsigned int nents, gfp_t gfp_mask)
EXPORT_SYMBOL(sg_alloc_table);
void sg_miter_start(struct sg_mapping_iter *miter, struct scatterlist *sgl,
unsigned int nents, unsigned int flags)
EXPORT_SYMBOL(sg_miter_start);
bool sg_miter_next(struct sg_mapping_iter *miter)
EXPORT_SYMBOL(sg_miter_next);
void sg_miter_stop(struct sg_mapping_iter *miter)
EXPORT_SYMBOL(sg_miter_stop);
static size_t sg_copy_buffer(struct scatterlist *sgl, unsigned int nents,
void *buf, size_t buflen, int to_buffer)
size_t sg_copy_from_buffer(struct scatterlist *sgl, unsigned int nents,
void *buf, size_t buflen)
EXPORT_SYMBOL(sg_copy_from_buffer);
size_t sg_copy_to_buffer(struct scatterlist *sgl, unsigned int nents,
void *buf, size_t buflen)
EXPORT_SYMBOL(sg_copy_to_buffer);
