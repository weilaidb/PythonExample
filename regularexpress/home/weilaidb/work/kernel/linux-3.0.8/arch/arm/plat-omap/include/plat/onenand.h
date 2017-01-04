#define ONENAND_SYNC_READ	(1 << 0)
#define ONENAND_SYNC_READWRITE	(1 << 1)
struct onenand_freq_info ;
struct omap_onenand_platform_data ;
#define ONENAND_MAX_PARTITIONS 8
#if defined(CONFIG_MTD_ONENAND_OMAP2) || \
defined(CONFIG_MTD_ONENAND_OMAP2_MODULE)
extern void gpmc_onenand_init(struct omap_onenand_platform_data *d);
#define board_onenand_data	NULL
static inline void gpmc_onenand_init(struct omap_onenand_platform_data *d)
