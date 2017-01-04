struct twl4030_madc_data ;
static struct twl4030_madc_data *twl4030_madc;
struct twl4030_prescale_divider_ratios ;
static const struct twl4030_prescale_divider_ratios
twl4030_divider_ratios[16] = ;
static int therm_tbl[] = ;
static
const struct twl4030_madc_conversion_method twl4030_conversion_methods[] = ;
static int twl4030_madc_channel_raw_read(struct twl4030_madc_data *madc, u8 reg)
static int twl4030battery_temperature(int raw_volt)
static int twl4030battery_current(int raw_volt)
static int twl4030_madc_read_channels(struct twl4030_madc_data *madc,
u8 reg_base, unsigned
long channels, int *buf)
static int twl4030_madc_enable_irq(struct twl4030_madc_data *madc, u8 id)
static int twl4030_madc_disable_irq(struct twl4030_madc_data *madc, u8 id)
static irqreturn_t twl4030_madc_threaded_irq_handler(int irq, void *_madc)
static int twl4030_madc_set_irq(struct twl4030_madc_data *madc,
struct twl4030_madc_request *req)
static int twl4030_madc_start_conversion(struct twl4030_madc_data *madc,
int conv_method)
static int twl4030_madc_wait_conversion_ready(struct twl4030_madc_data *madc,
unsigned int timeout_ms,
u8 status_reg)
int twl4030_madc_conversion(struct twl4030_madc_request *req)
EXPORT_SYMBOL_GPL(twl4030_madc_conversion);
int twl4030_get_madc_conversion(int channel_no)
EXPORT_SYMBOL_GPL(twl4030_get_madc_conversion);
static int twl4030_madc_set_current_generator(struct twl4030_madc_data *madc,
int chan, int on)
static int twl4030_madc_set_power(struct twl4030_madc_data *madc, int on)
static int __devinit twl4030_madc_probe(struct platform_device *pdev)
static int __devexit twl4030_madc_remove(struct platform_device *pdev)
static struct platform_driver twl4030_madc_driver = ;
static int __init twl4030_madc_init(void)
module_init(twl4030_madc_init);
static void __exit twl4030_madc_exit(void)
module_exit(twl4030_madc_exit);
MODULE_DESCRIPTION("TWL4030 ADC driver");
MODULE_LICENSE("GPL");
MODULE_AUTHOR("J Keerthy");
MODULE_ALIAS("platform:twl4030_madc");
