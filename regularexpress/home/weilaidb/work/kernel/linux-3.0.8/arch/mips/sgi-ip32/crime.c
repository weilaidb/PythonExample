struct sgi_crime __iomem *crime;
struct sgi_mace __iomem *mace;
EXPORT_SYMBOL_GPL(mace);
void __init crime_init(void)
irqreturn_t crime_memerr_intr(unsigned int irq, void *dev_id)
irqreturn_t crime_cpuerr_intr(unsigned int irq, void *dev_id)
