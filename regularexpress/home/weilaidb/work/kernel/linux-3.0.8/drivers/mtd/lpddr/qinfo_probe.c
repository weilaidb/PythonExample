static int lpddr_chip_setup(struct map_info *map, struct lpddr_private *lpddr);
struct mtd_info *lpddr_probe(struct map_info *map);
static struct lpddr_private *lpddr_probe_chip(struct map_info *map);
static int lpddr_pfow_present(struct map_info *map,
struct lpddr_private *lpddr);
static struct qinfo_query_info qinfo_array[] = ;
static long lpddr_get_qinforec_pos(struct map_info *map, char *id_str)
static uint16_t lpddr_info_query(struct map_info *map, char *id_str)
static int lpddr_pfow_present(struct map_info *map, struct lpddr_private *lpddr)
static int lpddr_chip_setup(struct map_info *map, struct lpddr_private *lpddr)
static struct lpddr_private *lpddr_probe_chip(struct map_info *map)
struct mtd_info *lpddr_probe(struct map_info *map)
static struct mtd_chip_driver lpddr_chipdrv = ;
static int __init lpddr_probe_init(void)
static void __exit lpddr_probe_exit(void)
module_init(lpddr_probe_init);
module_exit(lpddr_probe_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Vasiliy Leonenko <vasiliy.leonenko@gmail.com>");
MODULE_DESCRIPTION("Driver to probe qinfo flash chips");
