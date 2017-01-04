struct pcf50633_adc_request ;
struct pcf50633_adc_sync_request ;
#define PCF50633_MAX_ADC_FIFO_DEPTH 8
struct pcf50633_adc ;
static inline struct pcf50633_adc *__to_adc(struct pcf50633 *pcf)
static void adc_setup(struct pcf50633 *pcf, int channel, int avg)
static void trigger_next_adc_job_if_any(struct pcf50633 *pcf)
static int
adc_enqueue_request(struct pcf50633 *pcf, struct pcf50633_adc_request *req)
static void pcf50633_adc_sync_read_callback(struct pcf50633 *pcf, void *param,
int result)
int pcf50633_adc_sync_read(struct pcf50633 *pcf, int mux, int avg)
EXPORT_SYMBOL_GPL(pcf50633_adc_sync_read);
int pcf50633_adc_async_read(struct pcf50633 *pcf, int mux, int avg,
void (*callback)(struct pcf50633 *, void *, int),
void *callback_param)
EXPORT_SYMBOL_GPL(pcf50633_adc_async_read);
static int adc_result(struct pcf50633 *pcf)
static void pcf50633_adc_irq(int irq, void *data)
static int __devinit pcf50633_adc_probe(struct platform_device *pdev)
static int __devexit pcf50633_adc_remove(struct platform_device *pdev)
static struct platform_driver pcf50633_adc_driver = ;
static int __init pcf50633_adc_init(void)
module_init(pcf50633_adc_init);
static void __exit pcf50633_adc_exit(void)
module_exit(pcf50633_adc_exit);
MODULE_AUTHOR("Balaji Rao <balajirrao@openmoko.org>");
MODULE_DESCRIPTION("PCF50633 adc driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:pcf50633-adc");
