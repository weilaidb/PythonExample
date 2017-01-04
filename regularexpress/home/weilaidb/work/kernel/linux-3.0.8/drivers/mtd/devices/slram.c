#define SLRAM_MAX_DEVICES_PARAMS 6
#define SLRAM_BLK_SZ 0x4000
#define T(fmt, args...) printk(KERN_DEBUG fmt, ## args)
#define E(fmt, args...) printk(KERN_NOTICE fmt, ## args)
typedef struct slram_priv  slram_priv_t;
typedef struct slram_mtd_list  slram_mtd_list_t;
static char *map[SLRAM_MAX_DEVICES_PARAMS];
module_param_array(map, charp, NULL, 0);
MODULE_PARM_DESC(map, "List of memory regions to map. \"map=<name>, <start>, <length / end>\"");
static char *map;
static slram_mtd_list_t *slram_mtdlist = NULL;
static int slram_erase(struct mtd_info *, struct erase_info *);
static int slram_point(struct mtd_info *, loff_t, size_t, size_t *, void **,
resource_size_t *);
static void slram_unpoint(struct mtd_info *, loff_t, size_t);
static int slram_read(struct mtd_info *, loff_t, size_t, size_t *, u_char *);
static int slram_write(struct mtd_info *, loff_t, size_t, size_t *, const u_char *);
static int slram_erase(struct mtd_info *mtd, struct erase_info *instr)
static int slram_point(struct mtd_info *mtd, loff_t from, size_t len,
size_t *retlen, void **virt, resource_size_t *phys)
static void slram_unpoint(struct mtd_info *mtd, loff_t from, size_t len)
static int slram_read(struct mtd_info *mtd, loff_t from, size_t len,
size_t *retlen, u_char *buf)
static int slram_write(struct mtd_info *mtd, loff_t to, size_t len,
size_t *retlen, const u_char *buf)
static int register_device(char *name, unsigned long start, unsigned long length)
static void unregister_devices(void)
static unsigned long handle_unit(unsigned long value, char *unit)
static int parse_cmdline(char *devname, char *szstart, char *szlength)
static int __init mtd_slram_setup(char *str)
__setup("slram=", mtd_slram_setup);
static int __init init_slram(void)
static void __exit cleanup_slram(void)
module_init(init_slram);
module_exit(cleanup_slram);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Jochen Schaeuble <psionic@psionic.de>");
MODULE_DESCRIPTION("MTD driver for uncached system RAM");
