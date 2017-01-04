struct mpc85xx_cache_sram *cache_sram;
void *mpc85xx_cache_sram_alloc(unsigned int size,
phys_addr_t *phys, unsigned int align)
EXPORT_SYMBOL(mpc85xx_cache_sram_alloc);
void mpc85xx_cache_sram_free(void *ptr)
EXPORT_SYMBOL(mpc85xx_cache_sram_free);
int __init instantiate_cache_sram(struct platform_device *dev,
struct sram_parameters sram_params)
void remove_cache_sram(struct platform_device *dev)
