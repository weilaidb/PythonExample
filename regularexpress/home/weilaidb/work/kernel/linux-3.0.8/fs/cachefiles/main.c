unsigned cachefiles_debug;
module_param_named(debug, cachefiles_debug, uint, S_IWUSR | S_IRUGO);
MODULE_PARM_DESC(cachefiles_debug, "CacheFiles debugging mask");
MODULE_DESCRIPTION("Mounted-filesystem based cache");
MODULE_AUTHOR("Red Hat, Inc.");
MODULE_LICENSE("GPL");
struct kmem_cache *cachefiles_object_jar;
static struct miscdevice cachefiles_dev = ;
static void cachefiles_object_init_once(void *_object)
static int __init cachefiles_init(void)
fs_initcall(cachefiles_init);
static void __exit cachefiles_exit(void)
module_exit(cachefiles_exit);
