struct dm355evm_keys ;
static const struct key_entry dm355evm_keys[] = ;
static irqreturn_t dm355evm_keys_irq(int irq, void *_keys)
static int __devinit dm355evm_keys_probe(struct platform_device *pdev)
static int __devexit dm355evm_keys_remove(struct platform_device *pdev)
static struct platform_driver dm355evm_keys_driver = ;
static int __init dm355evm_keys_init(void)
module_init(dm355evm_keys_init);
static void __exit dm355evm_keys_exit(void)
module_exit(dm355evm_keys_exit);
MODULE_LICENSE("GPL");
