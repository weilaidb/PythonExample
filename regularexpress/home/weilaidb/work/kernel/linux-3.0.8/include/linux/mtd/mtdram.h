#define __MTD_MTDRAM_H__
int mtdram_init_device(struct mtd_info *mtd, void *mapped_address,
unsigned long size, char *name);
