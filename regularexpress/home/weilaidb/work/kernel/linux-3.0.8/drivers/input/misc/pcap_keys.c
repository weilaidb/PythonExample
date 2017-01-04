struct pcap_keys ;
static irqreturn_t pcap_keys_handler(int irq, void *_pcap_keys)
static int __devinit pcap_keys_probe(struct platform_device *pdev)
static int __devexit pcap_keys_remove(struct platform_device *pdev)
static struct platform_driver pcap_keys_device_driver = ;
static int __init pcap_keys_init(void)
;
static void __exit pcap_keys_exit(void)
;
module_init(pcap_keys_init);
module_exit(pcap_keys_exit);
MODULE_DESCRIPTION("Motorola PCAP2 input events driver");
MODULE_AUTHOR("Ilya Petrov <ilya.muromec@gmail.com>");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:pcap_keys");
