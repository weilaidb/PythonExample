const unsigned long *bcm63xx_regs_base;
EXPORT_SYMBOL(bcm63xx_regs_base);
const int *bcm63xx_irqs;
EXPORT_SYMBOL(bcm63xx_irqs);
static u16 bcm63xx_cpu_id;
static u16 bcm63xx_cpu_rev;
static unsigned int bcm63xx_cpu_freq;
static unsigned int bcm63xx_memory_size;
static const unsigned long bcm96338_regs_base[] = ;
static const int bcm96338_irqs[] = ;
static const unsigned long bcm96345_regs_base[] = ;
static const int bcm96345_irqs[] = ;
static const unsigned long bcm96348_regs_base[] = ;
static const int bcm96348_irqs[] = ;
static const unsigned long bcm96358_regs_base[] = ;
static const int bcm96358_irqs[] = ;
u16 __bcm63xx_get_cpu_id(void)
EXPORT_SYMBOL(__bcm63xx_get_cpu_id);
u16 bcm63xx_get_cpu_rev(void)
EXPORT_SYMBOL(bcm63xx_get_cpu_rev);
unsigned int bcm63xx_get_cpu_freq(void)
unsigned int bcm63xx_get_memory_size(void)
static unsigned int detect_cpu_clock(void)
static unsigned int detect_memory_size(void)
void __init bcm63xx_cpu_init(void)
