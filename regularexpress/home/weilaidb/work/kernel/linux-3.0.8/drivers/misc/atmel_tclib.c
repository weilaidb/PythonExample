#define ATMEL_TC_IOMEM_SIZE	256
#if defined(CONFIG_AVR32)
const u8 atmel_tc_divisors[5] = ;
EXPORT_SYMBOL(atmel_tc_divisors);
#elif defined(CONFIG_ARCH_AT91)
const u8 atmel_tc_divisors[5] = ;
EXPORT_SYMBOL(atmel_tc_divisors);
static DEFINE_SPINLOCK(tc_list_lock);
static LIST_HEAD(tc_list);
struct atmel_tc *atmel_tc_alloc(unsigned block, const char *name)
EXPORT_SYMBOL_GPL(atmel_tc_alloc);
void atmel_tc_free(struct atmel_tc *tc)
EXPORT_SYMBOL_GPL(atmel_tc_free);
static int __init tc_probe(struct platform_device *pdev)
static struct platform_driver tc_driver = ;
static int __init tc_init(void)
arch_initcall(tc_init);
