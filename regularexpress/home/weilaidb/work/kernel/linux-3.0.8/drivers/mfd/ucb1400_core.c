unsigned int ucb1400_adc_read(struct snd_ac97 *ac97, u16 adc_channel,
int adcsync)
EXPORT_SYMBOL_GPL(ucb1400_adc_read);
static int ucb1400_core_probe(struct device *dev)
static int ucb1400_core_remove(struct device *dev)
static struct device_driver ucb1400_core_driver = ;
static int __init ucb1400_core_init(void)
static void __exit ucb1400_core_exit(void)
module_init(ucb1400_core_init);
module_exit(ucb1400_core_exit);
MODULE_DESCRIPTION("Philips UCB1400 driver");
MODULE_LICENSE("GPL");
