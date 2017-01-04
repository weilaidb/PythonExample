struct bcom_sram *bcom_sram = NULL;
EXPORT_SYMBOL_GPL(bcom_sram);
int bcom_sram_init(struct device_node *sram_node, char *owner)
EXPORT_SYMBOL_GPL(bcom_sram_init);
void bcom_sram_cleanup(void)
EXPORT_SYMBOL_GPL(bcom_sram_cleanup);
void* bcom_sram_alloc(int size, int align, phys_addr_t *phys)
EXPORT_SYMBOL_GPL(bcom_sram_alloc);
void bcom_sram_free(void *ptr)
EXPORT_SYMBOL_GPL(bcom_sram_free);
