#define DRV_NAME "rotary-encoder"
struct rotary_encoder ;
static int rotary_encoder_get_state(struct rotary_encoder_platform_data *pdata)
static void rotary_encoder_report_event(struct rotary_encoder *encoder)
static irqreturn_t rotary_encoder_irq(int irq, void *dev_id)
static irqreturn_t rotary_encoder_half_period_irq(int irq, void *dev_id)
static int __devinit rotary_encoder_probe(struct platform_device *pdev)
static int __devexit rotary_encoder_remove(struct platform_device *pdev)
static struct platform_driver rotary_encoder_driver = ;
static int __init rotary_encoder_init(void)
static void __exit rotary_encoder_exit(void)
module_init(rotary_encoder_init);
module_exit(rotary_encoder_exit);
MODULE_ALIAS("platform:" DRV_NAME);
MODULE_DESCRIPTION("GPIO rotary encoder driver");
MODULE_AUTHOR("Daniel Mack <daniel@caiaq.de>, Johan Hovold");
MODULE_LICENSE("GPL v2");
