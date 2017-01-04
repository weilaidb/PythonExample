static DEFINE_MUTEX(mem_lock);
u16 i2o_sg_tablesize(struct i2o_controller *c, u16 body_size)
EXPORT_SYMBOL_GPL(i2o_sg_tablesize);
dma_addr_t i2o_dma_map_single(struct i2o_controller *c, void *ptr,
size_t size,
enum dma_data_direction direction,
u32 ** sg_ptr)
EXPORT_SYMBOL_GPL(i2o_dma_map_single);
int i2o_dma_map_sg(struct i2o_controller *c, struct scatterlist *sg,
int sg_count, enum dma_data_direction direction, u32 ** sg_ptr)
EXPORT_SYMBOL_GPL(i2o_dma_map_sg);
int i2o_dma_alloc(struct device *dev, struct i2o_dma *addr, size_t len)
EXPORT_SYMBOL_GPL(i2o_dma_alloc);
void i2o_dma_free(struct device *dev, struct i2o_dma *addr)
EXPORT_SYMBOL_GPL(i2o_dma_free);
int i2o_dma_realloc(struct device *dev, struct i2o_dma *addr, size_t len)
EXPORT_SYMBOL_GPL(i2o_dma_realloc);
int i2o_pool_alloc(struct i2o_pool *pool, const char *name,
size_t size, int min_nr)
EXPORT_SYMBOL_GPL(i2o_pool_alloc);
void i2o_pool_free(struct i2o_pool *pool)
;
EXPORT_SYMBOL_GPL(i2o_pool_free);
