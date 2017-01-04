#  error CONFIG_MTD_CFI_BE_BYTE_SWAP required
static inline u16 flash_read16(void __iomem *addr)
static inline void flash_write16(u16 d, void __iomem *addr)
#define	BYTE0(h)	((h) & 0xFF)
#define	BYTE1(h)	(((h) >> 8) & 0xFF)
static inline u16 flash_read16(const void __iomem *addr)
static inline void flash_write16(u16 d, void __iomem *addr)
#define	BYTE0(h)	(((h) >> 8) & 0xFF)
#define	BYTE1(h)	((h) & 0xFF)
static map_word ixp4xx_read16(struct map_info *map, unsigned long ofs)
static void ixp4xx_copy_from(struct map_info *map, void *to,
unsigned long from, ssize_t len)
static void ixp4xx_probe_write16(struct map_info *map, map_word d, unsigned long adr)
static void ixp4xx_write16(struct map_info *map, map_word d, unsigned long adr)
struct ixp4xx_flash_info ;
static const char *probes[] = ;
static int ixp4xx_flash_remove(struct platform_device *dev)
static int ixp4xx_flash_probe(struct platform_device *dev)
static struct platform_driver ixp4xx_flash_driver = ;
static int __init ixp4xx_flash_init(void)
static void __exit ixp4xx_flash_exit(void)
module_init(ixp4xx_flash_init);
module_exit(ixp4xx_flash_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("MTD map driver for Intel IXP4xx systems");
MODULE_AUTHOR("Deepak Saxena");
MODULE_ALIAS("platform:IXP4XX-Flash");
