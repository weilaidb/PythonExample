struct ixp2000_flash_info ;
static inline unsigned long flash_bank_setup(struct map_info *map, unsigned long ofs)
static int erratum44_workaround = 0;
static inline unsigned long address_fix8_write(unsigned long addr)
#define address_fix8_write(x)	(x)
static map_word ixp2000_flash_read8(struct map_info *map, unsigned long ofs)
static void ixp2000_flash_copy_from(struct map_info *map, void *to,
unsigned long from, ssize_t len)
static void ixp2000_flash_write8(struct map_info *map, map_word d, unsigned long ofs)
static void ixp2000_flash_copy_to(struct map_info *map, unsigned long to,
const void *from, ssize_t len)
static int ixp2000_flash_remove(struct platform_device *dev)
static int ixp2000_flash_probe(struct platform_device *dev)
static struct platform_driver ixp2000_flash_driver = ;
static int __init ixp2000_flash_init(void)
static void __exit ixp2000_flash_exit(void)
module_init(ixp2000_flash_init);
module_exit(ixp2000_flash_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Deepak Saxena <dsaxena@plexity.net>");
MODULE_ALIAS("platform:IXP2000-Flash");
