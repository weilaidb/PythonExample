#define COH901318_LLI_H
struct device;
struct coh901318_pool ;
struct device;
int coh901318_pool_create(struct coh901318_pool *pool,
struct device *dev,
size_t lli_nbr, size_t align);
int coh901318_pool_destroy(struct coh901318_pool *pool);
struct coh901318_lli *
coh901318_lli_alloc(struct coh901318_pool *pool,
unsigned int len);
void coh901318_lli_free(struct coh901318_pool *pool,
struct coh901318_lli **lli);
int
coh901318_lli_fill_memcpy(struct coh901318_pool *pool,
struct coh901318_lli *lli,
dma_addr_t src, unsigned int size,
dma_addr_t dst, u32 ctrl_chained, u32 ctrl_last);
int
coh901318_lli_fill_single(struct coh901318_pool *pool,
struct coh901318_lli *lli,
dma_addr_t buf, unsigned int size,
dma_addr_t dev_addr, u32 ctrl_chained, u32 ctrl_last,
enum dma_data_direction dir);
int
coh901318_lli_fill_sg(struct coh901318_pool *pool,
struct coh901318_lli *lli,
struct scatterlist *sg, unsigned int nents,
dma_addr_t dev_addr, u32 ctrl_chained,
u32 ctrl, u32 ctrl_last,
enum dma_data_direction dir, u32 ctrl_irq_mask);
