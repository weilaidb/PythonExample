#define _ZRAM_DRV_H_
static const unsigned max_num_devices = 32;
struct zobj_header ;
static const unsigned default_disksize_perc_ram = 25;
static const unsigned max_zpage_size = PAGE_SIZE / 4 * 3;
#define SECTOR_SHIFT		9
#define SECTOR_SIZE		(1 << SECTOR_SHIFT)
#define SECTORS_PER_PAGE_SHIFT	(PAGE_SHIFT - SECTOR_SHIFT)
#define SECTORS_PER_PAGE	(1 << SECTORS_PER_PAGE_SHIFT)
#define ZRAM_LOGICAL_BLOCK_SIZE	4096
enum zram_pageflags ;
struct table  __attribute__((aligned(4)));
struct zram_stats ;
struct zram ;
extern struct zram *devices;
extern unsigned int num_devices;
extern struct attribute_group zram_disk_attr_group;
extern int zram_init_device(struct zram *zram);
extern void zram_reset_device(struct zram *zram);
