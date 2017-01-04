#define _LINUX_SCATTERLIST_H
struct sg_table ;
#define SG_MAGIC	0x87654321
#define sg_is_chain(sg)		((sg)->page_link & 0x01)
#define sg_is_last(sg)		((sg)->page_link & 0x02)
#define sg_chain_ptr(sg)	\
((struct scatterlist *) ((sg)->page_link & ~0x03))
static inline void sg_assign_page(struct scatterlist *sg, struct page *page)
static inline void sg_set_page(struct scatterlist *sg, struct page *page,
unsigned int len, unsigned int offset)
static inline struct page *sg_page(struct scatterlist *sg)
static inline void sg_set_buf(struct scatterlist *sg, const void *buf,
unsigned int buflen)
#define for_each_sg(sglist, sg, nr, __i)	\
for (__i = 0, sg = (sglist); __i < (nr); __i++, sg = sg_next(sg))
static inline void sg_chain(struct scatterlist *prv, unsigned int prv_nents,
struct scatterlist *sgl)
static inline void sg_mark_end(struct scatterlist *sg)
static inline dma_addr_t sg_phys(struct scatterlist *sg)
static inline void *sg_virt(struct scatterlist *sg)
struct scatterlist *sg_next(struct scatterlist *);
struct scatterlist *sg_last(struct scatterlist *s, unsigned int);
void sg_init_table(struct scatterlist *, unsigned int);
void sg_init_one(struct scatterlist *, const void *, unsigned int);
typedef struct scatterlist *(sg_alloc_fn)(unsigned int, gfp_t);
typedef void (sg_free_fn)(struct scatterlist *, unsigned int);
void __sg_free_table(struct sg_table *, unsigned int, sg_free_fn *);
void sg_free_table(struct sg_table *);
int __sg_alloc_table(struct sg_table *, unsigned int, unsigned int, gfp_t,
sg_alloc_fn *);
int sg_alloc_table(struct sg_table *, unsigned int, gfp_t);
size_t sg_copy_from_buffer(struct scatterlist *sgl, unsigned int nents,
void *buf, size_t buflen);
size_t sg_copy_to_buffer(struct scatterlist *sgl, unsigned int nents,
void *buf, size_t buflen);
#define SG_MAX_SINGLE_ALLOC		(PAGE_SIZE / sizeof(struct scatterlist))
#define SG_MITER_ATOMIC		(1 << 0)
#define SG_MITER_TO_SG		(1 << 1)
#define SG_MITER_FROM_SG	(1 << 2)
struct sg_mapping_iter ;
void sg_miter_start(struct sg_mapping_iter *miter, struct scatterlist *sgl,
unsigned int nents, unsigned int flags);
bool sg_miter_next(struct sg_mapping_iter *miter);
void sg_miter_stop(struct sg_mapping_iter *miter);
