static struct mtd_info *check_cmd_set(struct map_info *, int);
static struct cfi_private *genprobe_ident_chips(struct map_info *map,
struct chip_probe *cp);
static int genprobe_new_chip(struct map_info *map, struct chip_probe *cp,
struct cfi_private *cfi);
struct mtd_info *mtd_do_chip_probe(struct map_info *map, struct chip_probe *cp)
EXPORT_SYMBOL(mtd_do_chip_probe);
static struct cfi_private *genprobe_ident_chips(struct map_info *map, struct chip_probe *cp)
static int genprobe_new_chip(struct map_info *map, struct chip_probe *cp,
struct cfi_private *cfi)
typedef struct mtd_info *cfi_cmdset_fn_t(struct map_info *, int);
extern cfi_cmdset_fn_t cfi_cmdset_0001;
extern cfi_cmdset_fn_t cfi_cmdset_0002;
extern cfi_cmdset_fn_t cfi_cmdset_0020;
static inline struct mtd_info *cfi_cmdset_unknown(struct map_info *map,
int primary)
static struct mtd_info *check_cmd_set(struct map_info *map, int primary)
MODULE_LICENSE("GPL");
MODULE_AUTHOR("David Woodhouse <dwmw2@infradead.org>");
MODULE_DESCRIPTION("Helper routines for flash chip probe code");
