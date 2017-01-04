#define __LINUX_MTD_GEN_PROBE_H__
struct chip_probe ;
struct mtd_info *mtd_do_chip_probe(struct map_info *map, struct chip_probe *cp);
