#define JZ_REG_ADC_ENABLE	0x00
#define JZ_REG_ADC_CFG		0x04
#define JZ_REG_ADC_CTRL		0x08
#define JZ_REG_ADC_STATUS	0x0c
#define JZ_REG_ADC_TOUCHSCREEN_BASE	0x10
#define JZ_REG_ADC_BATTERY_BASE	0x1c
#define JZ_REG_ADC_HWMON_BASE	0x20
#define JZ_ADC_ENABLE_TOUCH	BIT(2)
#define JZ_ADC_ENABLE_BATTERY	BIT(1)
#define JZ_ADC_ENABLE_ADCIN	BIT(0)
enum ;
struct jz4740_adc ;
static inline void jz4740_adc_irq_set_masked(struct jz4740_adc *adc, int irq,
bool masked)
static void jz4740_adc_irq_mask(struct irq_data *data)
static void jz4740_adc_irq_unmask(struct irq_data *data)
static void jz4740_adc_irq_ack(struct irq_data *data)
static struct irq_chip jz4740_adc_irq_chip = ;
static void jz4740_adc_irq_demux(unsigned int irq, struct irq_desc *desc)
static inline void jz4740_adc_clk_enable(struct jz4740_adc *adc)
static inline void jz4740_adc_clk_disable(struct jz4740_adc *adc)
static inline void jz4740_adc_set_enabled(struct jz4740_adc *adc, int engine,
bool enabled)
static int jz4740_adc_cell_enable(struct platform_device *pdev)
static int jz4740_adc_cell_disable(struct platform_device *pdev)
int jz4740_adc_set_config(struct device *dev, uint32_t mask, uint32_t val)
EXPORT_SYMBOL_GPL(jz4740_adc_set_config);
static struct resource jz4740_hwmon_resources[] = ;
static struct resource jz4740_battery_resources[] = ;
const struct mfd_cell jz4740_adc_cells[] = ;
static int __devinit jz4740_adc_probe(struct platform_device *pdev)
static int __devexit jz4740_adc_remove(struct platform_device *pdev)
struct platform_driver jz4740_adc_driver = ;
static int __init jz4740_adc_init(void)
module_init(jz4740_adc_init);
static void __exit jz4740_adc_exit(void)
module_exit(jz4740_adc_exit);
MODULE_DESCRIPTION("JZ4740 SoC ADC driver");
MODULE_AUTHOR("Lars-Peter Clausen <lars@metafoo.de>");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:jz4740-adc");
