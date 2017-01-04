struct gen_pool *gen_pool_create(int min_alloc_order, int nid)
EXPORT_SYMBOL(gen_pool_create);
int gen_pool_add_virt(struct gen_pool *pool, unsigned long virt, phys_addr_t phys,
size_t size, int nid)
EXPORT_SYMBOL(gen_pool_add_virt);
phys_addr_t gen_pool_virt_to_phys(struct gen_pool *pool, unsigned long addr)
EXPORT_SYMBOL(gen_pool_virt_to_phys);
void gen_pool_destroy(struct gen_pool *pool)
EXPORT_SYMBOL(gen_pool_destroy);
unsigned long gen_pool_alloc(struct gen_pool *pool, size_t size)
EXPORT_SYMBOL(gen_pool_alloc);
void gen_pool_free(struct gen_pool *pool, unsigned long addr, size_t size)
EXPORT_SYMBOL(gen_pool_free);
