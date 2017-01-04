#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define ILSEL_BASE	0xb8100004
#define ILSEL_LEVELS	15
static unsigned long ilsel_level_map;
static inline unsigned int ilsel_offset(unsigned int bit)
static inline unsigned long mk_ilsel_addr(unsigned int bit)
static inline unsigned int mk_ilsel_shift(unsigned int bit)
static void __ilsel_enable(ilsel_source_t set, unsigned int bit)
int ilsel_enable(ilsel_source_t set)
EXPORT_SYMBOL_GPL(ilsel_enable);
int ilsel_enable_fixed(ilsel_source_t set, unsigned int level)
EXPORT_SYMBOL_GPL(ilsel_enable_fixed);
void ilsel_disable(unsigned int irq)
EXPORT_SYMBOL_GPL(ilsel_disable);
