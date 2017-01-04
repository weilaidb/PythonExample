struct cryptomgr_param ;
struct crypto_test_param ;
static int cryptomgr_probe(void *data)
static int cryptomgr_schedule_probe(struct crypto_larval *larval)
static int cryptomgr_test(void *data)
static int cryptomgr_schedule_test(struct crypto_alg *alg)
static int cryptomgr_notify(struct notifier_block *this, unsigned long msg,
void *data)
static struct notifier_block cryptomgr_notifier = ;
static int __init cryptomgr_init(void)
static void __exit cryptomgr_exit(void)
subsys_initcall(cryptomgr_init);
module_exit(cryptomgr_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Crypto Algorithm Manager");
