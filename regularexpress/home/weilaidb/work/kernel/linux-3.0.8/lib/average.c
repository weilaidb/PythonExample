void ewma_init(struct ewma *avg, unsigned long factor, unsigned long weight)
EXPORT_SYMBOL(ewma_init);
struct ewma *ewma_add(struct ewma *avg, unsigned long val)
EXPORT_SYMBOL(ewma_add);
