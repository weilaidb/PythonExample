#define DRV_NAME "altera_ps2"
struct ps2if ;
static irqreturn_t altera_ps2_rxint(int irq, void *dev_id)
static int altera_ps2_write(struct serio *io, unsigned char val)
static int altera_ps2_open(struct serio *io)
static void altera_ps2_close(struct serio *io)
static int __devinit altera_ps2_probe(struct platform_device *pdev)
static int __devexit altera_ps2_remove(struct platform_device *pdev)
static const struct of_device_id altera_ps2_match[] = ;
MODULE_DEVICE_TABLE(of, altera_ps2_match);
#define altera_ps2_match NULL
static struct platform_driver altera_ps2_driver = ;
static int __init altera_ps2_init(void)
module_init(altera_ps2_init);
static void __exit altera_ps2_exit(void)
module_exit(altera_ps2_exit);
MODULE_DESCRIPTION("Altera University Program PS2 controller driver");
MODULE_AUTHOR("Thomas Chou <thomas@wytron.com.tw>");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:" DRV_NAME);
