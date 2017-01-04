MODULE_AUTHOR("David S. Miller <davem@davemloft.net>");
MODULE_DESCRIPTION("Sparc Speaker beeper driver");
MODULE_LICENSE("GPL");
struct grover_beep_info ;
struct bbc_beep_info ;
struct sparcspkr_state ;
static u32 bbc_count_to_reg(struct bbc_beep_info *info, unsigned int count)
static int bbc_spkr_event(struct input_dev *dev, unsigned int type, unsigned int code, int value)
static int grover_spkr_event(struct input_dev *dev, unsigned int type, unsigned int code, int value)
static int __devinit sparcspkr_probe(struct device *dev)
static void sparcspkr_shutdown(struct platform_device *dev)
static int __devinit bbc_beep_probe(struct platform_device *op)
static int __devexit bbc_remove(struct platform_device *op)
static const struct of_device_id bbc_beep_match[] = ;
static struct platform_driver bbc_beep_driver = ;
static int __devinit grover_beep_probe(struct platform_device *op)
static int __devexit grover_remove(struct platform_device *op)
static const struct of_device_id grover_beep_match[] = ;
static struct platform_driver grover_beep_driver = ;
static int __init sparcspkr_init(void)
static void __exit sparcspkr_exit(void)
module_init(sparcspkr_init);
module_exit(sparcspkr_exit);
