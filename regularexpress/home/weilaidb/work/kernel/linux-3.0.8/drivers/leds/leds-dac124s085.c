struct dac124s085_led ;
struct dac124s085 ;
#define REG_WRITE		(0 << 12)
#define REG_WRITE_UPDATE	(1 << 12)
#define ALL_WRITE_UPDATE	(2 << 12)
#define POWER_DOWN_OUTPUT	(3 << 12)
static void dac124s085_led_work(struct work_struct *work)
static void dac124s085_set_brightness(struct led_classdev *ldev,
enum led_brightness brightness)
static int dac124s085_probe(struct spi_device *spi)
static int dac124s085_remove(struct spi_device *spi)
static struct spi_driver dac124s085_driver = ;
static int __init dac124s085_leds_init(void)
static void __exit dac124s085_leds_exit(void)
module_init(dac124s085_leds_init);
module_exit(dac124s085_leds_exit);
MODULE_AUTHOR("Guennadi Liakhovetski <lg@denx.de>");
MODULE_DESCRIPTION("DAC124S085 LED driver");
MODULE_LICENSE("GPL v2");
MODULE_ALIAS("spi:dac124s085");
