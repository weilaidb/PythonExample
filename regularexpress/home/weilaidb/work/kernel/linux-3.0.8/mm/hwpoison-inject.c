static struct dentry *hwpoison_dir;
static int hwpoison_inject(void *data, u64 val)
static int hwpoison_unpoison(void *data, u64 val)
DEFINE_SIMPLE_ATTRIBUTE(hwpoison_fops, NULL, hwpoison_inject, "%lli\n");
DEFINE_SIMPLE_ATTRIBUTE(unpoison_fops, NULL, hwpoison_unpoison, "%lli\n");
static void pfn_inject_exit(void)
static int pfn_inject_init(void)
module_init(pfn_inject_init);
module_exit(pfn_inject_exit);
MODULE_LICENSE("GPL");
