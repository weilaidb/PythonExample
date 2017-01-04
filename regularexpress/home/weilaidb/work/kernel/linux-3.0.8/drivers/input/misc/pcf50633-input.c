#define PCF50633_OOCSTAT_ONKEY	0x01
#define PCF50633_REG_OOCSTAT	0x12
#define PCF50633_REG_OOCMODE	0x10
struct pcf50633_input ;
static void
pcf50633_input_irq(int irq, void *data)
static int __devinit pcf50633_input_probe(struct platform_device *pdev)
static int __devexit pcf50633_input_remove(struct platform_device *pdev)
static struct platform_driver pcf50633_input_driver = ;
static int __init pcf50633_input_init(void)
module_init(pcf50633_input_init);
static void __exit pcf50633_input_exit(void)
module_exit(pcf50633_input_exit);
MODULE_AUTHOR("Balaji Rao <balajirrao@openmoko.org>");
MODULE_DESCRIPTION("PCF50633 input driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:pcf50633-input");
