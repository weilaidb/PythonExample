struct platram_info ;
static inline struct platram_info *to_platram_info(struct platform_device *dev)
static inline void platram_setrw(struct platram_info *info, int to)
static int platram_remove(struct platform_device *pdev)
static int platram_probe(struct platform_device *pdev)
MODULE_ALIAS("platform:mtd-ram");
static struct platform_driver platram_driver = ;
static int __init platram_init(void)
static void __exit platram_exit(void)
module_init(platram_init);
module_exit(platram_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Ben Dooks <ben@simtec.co.uk>");
MODULE_DESCRIPTION("MTD platform RAM map driver");
