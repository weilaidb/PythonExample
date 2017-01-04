static struct input_dev *button_dev;
static struct platform_device *button_pdev;
static void cbe_powerbutton_handle_pmi(pmi_message_t pmi_msg)
static struct pmi_handler cbe_pmi_handler = ;
static int __init cbe_powerbutton_init(void)
static void __exit cbe_powerbutton_exit(void)
module_init(cbe_powerbutton_init);
module_exit(cbe_powerbutton_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Christian Krafft <krafft@de.ibm.com>");
