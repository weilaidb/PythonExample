#define REPROGRAM_PAR
#define WINDOW_ADDR_0	0x08800000
#define WINDOW_ADDR_1	0x09000000
#define WINDOW_ADDR_2	0x09800000
#define WINDOW_ADDR_0_BIOS	0x08400000
#define WINDOW_ADDR_1_BIOS	0x08c00000
#define WINDOW_ADDR_2_BIOS	0x09400000
#define WINDOW_ADDR_0	0x08400000
#define WINDOW_ADDR_1	0x08C00000
#define WINDOW_ADDR_2	0x09400000
#define WINDOW_SIZE_0	0x00800000
#define WINDOW_SIZE_1	0x00800000
#define WINDOW_SIZE_2	0x00080000
static struct map_info sc520cdp_map[] = ;
#define NUM_FLASH_BANKS	ARRAY_SIZE(sc520cdp_map)
static struct mtd_info *mymtd[NUM_FLASH_BANKS];
static struct mtd_info *merged_mtd;
#define SC520_MMCR_BASE		0xFFFEF000
#define SC520_MMCR_EXTENT	0x1000
#define SC520_PAR(x)		((0x88/sizeof(unsigned long)) + (x))
#define NUM_SC520_PAR		16
#define SC520_PAR_BOOTCS	(0x4<<29)
#define SC520_PAR_ROMCS0	(0x5<<29)
#define SC520_PAR_ROMCS1	(0x6<<29)
#define SC520_PAR_TRGDEV	(0x7<<29)
#define SC520_PAR_WRPROT	(1<<26)
#define SC520_PAR_NOCACHE	(1<<27)
#define SC520_PAR_NOEXEC	(1<<28)
#define SC520_PAR_PG_SIZ4	(0<<25)
#define SC520_PAR_PG_SIZ64	(1<<25)
#define SC520_PAR_ENTRY(trgdev, address, size) \
((trgdev) | SC520_PAR_NOCACHE | SC520_PAR_PG_SIZ64 | \
(address) >> 16 | (((size) >> 16) - 1) << 14)
struct sc520_par_table
;
static const struct sc520_par_table par_table[NUM_FLASH_BANKS] =
;
static void sc520cdp_setup_par(void)
static int __init init_sc520cdp(void)
static void __exit cleanup_sc520cdp(void)
module_init(init_sc520cdp);
module_exit(cleanup_sc520cdp);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Sysgo Real-Time Solutions GmbH");
MODULE_DESCRIPTION("MTD map driver for AMD SC520 Customer Development Platform");
