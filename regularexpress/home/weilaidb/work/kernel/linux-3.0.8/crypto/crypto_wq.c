struct workqueue_struct *kcrypto_wq;
EXPORT_SYMBOL_GPL(kcrypto_wq);
static int __init crypto_wq_init(void)
static void __exit crypto_wq_exit(void)
module_init(crypto_wq_init);
module_exit(crypto_wq_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Workqueue for crypto subsystem");
