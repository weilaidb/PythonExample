struct test_node ;
static LIST_HEAD(test_list);
static DEFINE_PER_CPU(void *, kmemleak_test_pointer);
static int __init kmemleak_test_init(void)
module_init(kmemleak_test_init);
static void __exit kmemleak_test_exit(void)
module_exit(kmemleak_test_exit);
MODULE_LICENSE("GPL");
