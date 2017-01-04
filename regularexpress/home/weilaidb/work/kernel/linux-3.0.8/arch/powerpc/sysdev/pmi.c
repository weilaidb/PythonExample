struct pmi_data ;
static struct pmi_data *data;
static irqreturn_t pmi_irq_handler(int irq, void *dev_id)
static struct of_device_id pmi_match[] = ;
MODULE_DEVICE_TABLE(of, pmi_match);
static void pmi_notify_handlers(struct work_struct *work)
static int pmi_of_probe(struct platform_device *dev)
static int pmi_of_remove(struct platform_device *dev)
static struct platform_driver pmi_of_platform_driver = ;
static int __init pmi_module_init(void)
module_init(pmi_module_init);
static void __exit pmi_module_exit(void)
module_exit(pmi_module_exit);
int pmi_send_message(pmi_message_t msg)
EXPORT_SYMBOL_GPL(pmi_send_message);
int pmi_register_handler(struct pmi_handler *handler)
EXPORT_SYMBOL_GPL(pmi_register_handler);
void pmi_unregister_handler(struct pmi_handler *handler)
EXPORT_SYMBOL_GPL(pmi_unregister_handler);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Christian Krafft <krafft@de.ibm.com>");
MODULE_DESCRIPTION("IBM Platform Management Interrupt driver");
