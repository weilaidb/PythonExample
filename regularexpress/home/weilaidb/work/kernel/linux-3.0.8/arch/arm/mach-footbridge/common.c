unsigned int mem_fclk_21285 = 50000000;
EXPORT_SYMBOL(mem_fclk_21285);
static int __init early_fclk(char *arg)
early_param("mem_fclk_21285", early_fclk);
static int __init parse_tag_memclk(const struct tag *tag)
__tagtable(ATAG_MEMCLK, parse_tag_memclk);
static const int fb_irq_mask[] = ;
static void fb_mask_irq(struct irq_data *d)
static void fb_unmask_irq(struct irq_data *d)
static struct irq_chip fb_chip = ;
static void __init __fb_init_irq(void)
void __init footbridge_init_irq(void)
static struct map_desc fb_common_io_desc[] __initdata = ;
static struct map_desc ebsa285_host_io_desc[] __initdata = ;
void __init footbridge_map_io(void)
static inline unsigned long fb_bus_sdram_offset(void)
unsigned long __virt_to_bus(unsigned long res)
EXPORT_SYMBOL(__virt_to_bus);
unsigned long __bus_to_virt(unsigned long res)
EXPORT_SYMBOL(__bus_to_virt);
unsigned long __pfn_to_bus(unsigned long pfn)
EXPORT_SYMBOL(__pfn_to_bus);
unsigned long __bus_to_pfn(unsigned long bus)
EXPORT_SYMBOL(__bus_to_pfn);
