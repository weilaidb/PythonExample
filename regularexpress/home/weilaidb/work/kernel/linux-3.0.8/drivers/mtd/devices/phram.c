#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
struct phram_mtd_list ;
static LIST_HEAD(phram_list);
static int phram_erase(struct mtd_info *mtd, struct erase_info *instr)
static int phram_point(struct mtd_info *mtd, loff_t from, size_t len,
size_t *retlen, void **virt, resource_size_t *phys)
static void phram_unpoint(struct mtd_info *mtd, loff_t from, size_t len)
static int phram_read(struct mtd_info *mtd, loff_t from, size_t len,
size_t *retlen, u_char *buf)
static int phram_write(struct mtd_info *mtd, loff_t to, size_t len,
size_t *retlen, const u_char *buf)
static void unregister_devices(void)
static int register_device(char *name, unsigned long start, unsigned long len)
static int ustrtoul(const char *cp, char **endp, unsigned int base)
static int parse_num32(uint32_t *num32, const char *token)
static int parse_name(char **pname, const char *token)
static inline void kill_final_newline(char *str)
#define parse_err(fmt, args...) do  while (0)
static int phram_setup(const char *val, struct kernel_param *kp)
module_param_call(phram, phram_setup, NULL, NULL, 000);
MODULE_PARM_DESC(phram, "Memory region to map. \"phram=<name>,<start>,<length>\"");
static int __init init_phram(void)
static void __exit cleanup_phram(void)
module_init(init_phram);
module_exit(cleanup_phram);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Joern Engel <joern@wh.fh-wedel.de>");
MODULE_DESCRIPTION("MTD driver for physical RAM");
