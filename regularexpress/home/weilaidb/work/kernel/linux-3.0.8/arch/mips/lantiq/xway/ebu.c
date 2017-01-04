DEFINE_SPINLOCK(ebu_lock);
EXPORT_SYMBOL_GPL(ebu_lock);
static struct resource ltq_ebu_resource = ;
void __iomem *ltq_ebu_membase;
static int __init lantiq_ebu_init(void)
postcore_initcall(lantiq_ebu_init);
