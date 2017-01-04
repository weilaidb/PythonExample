#define HFS_DD_BLK		0
#define HFS_PMAP_BLK		1
#define HFS_MDB_BLK		2
#define HFS_DRVR_DESC_MAGIC	0x4552
#define HFS_OLD_PMAP_MAGIC	0x5453
#define HFS_NEW_PMAP_MAGIC	0x504D
#define HFS_SUPER_MAGIC		0x4244
#define HFS_MFS_SUPER_MAGIC	0xD2D7
struct new_pmap  __packed;
struct old_pmap  __packed;
static int hfs_parse_old_pmap(struct super_block *sb, struct old_pmap *pm,
sector_t *part_start, sector_t *part_size)
static int hfs_parse_new_pmap(struct super_block *sb, void *buf,
struct new_pmap *pm, sector_t *part_start, sector_t *part_size)
int hfs_part_find(struct super_block *sb,
sector_t *part_start, sector_t *part_size)
