static void print_cfi_ident(struct cfi_ident *);
static int cfi_probe_chip(struct map_info *map, __u32 base,
unsigned long *chip_map, struct cfi_private *cfi);
static int cfi_chip_setup(struct map_info *map, struct cfi_private *cfi);
struct mtd_info *cfi_probe(struct map_info *map);
#define xip_disable()	local_irq_disable()
#define xip_allowed(base, map) \
do  while (0)
#define xip_enable(base, map, cfi) \
do  while (0)
#define xip_disable_qry(base, map, cfi) \
do  while (0)
#define xip_disable()			do  while (0)
#define xip_allowed(base, map)		do  while (0)
#define xip_enable(base, map, cfi)	do  while (0)
#define xip_disable_qry(base, map, cfi) do  while (0)
static int __xipram cfi_probe_chip(struct map_info *map, __u32 base,
unsigned long *chip_map, struct cfi_private *cfi)
static int __xipram cfi_chip_setup(struct map_info *map,
struct cfi_private *cfi)
static char *vendorname(__u16 vendor)
static void print_cfi_ident(struct cfi_ident *cfip)
static struct chip_probe cfi_chip_probe = ;
struct mtd_info *cfi_probe(struct map_info *map)
static struct mtd_chip_driver cfi_chipdrv = ;
static int __init cfi_probe_init(void)
static void __exit cfi_probe_exit(void)
module_init(cfi_probe_init);
module_exit(cfi_probe_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("David Woodhouse <dwmw2@infradead.org> et al.");
MODULE_DESCRIPTION("Probe code for CFI-compliant flash chips");
