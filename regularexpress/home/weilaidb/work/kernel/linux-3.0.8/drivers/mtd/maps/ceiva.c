#define CONFIG_MTD_CEIVA_STATICMAP
#define MAX_SIZE_KiB                  (16 + 8 + 8 + 96 + (7*128))
#define BOOT_PARTITION_SIZE_KiB       (16)
#define PARAMS_PARTITION_SIZE_KiB     (8)
#define KERNEL_PARTITION_SIZE_KiB     (4*128)
#define ROOT_PARTITION_SIZE_KiB       (3*128) + (8*128)
static struct mtd_partition ceiva_partitions[] = ;
static int __init clps_static_partitions(struct mtd_partition **parts)
struct clps_info ;
#define NR_SUBMTD 4
static struct clps_info info[NR_SUBMTD];
static int __init clps_setup_mtd(struct clps_info *clps, int nr, struct mtd_info **rmtd)
static void __exit clps_destroy_mtd(struct clps_info *clps, struct mtd_info *mtd)
static int __init clps_setup_flash(void)
static struct mtd_partition *parsed_parts;
static const char *probes[] = ;
static void __init clps_locate_partitions(struct mtd_info *mtd)
static void __exit clps_destroy_partitions(void)
static struct mtd_info *mymtd;
static int __init clps_mtd_init(void)
static void __exit clps_mtd_cleanup(void)
module_init(clps_mtd_init);
module_exit(clps_mtd_cleanup);
MODULE_AUTHOR("Rob Scott");
MODULE_DESCRIPTION("Cirrus Logic JEDEC map driver");
MODULE_LICENSE("GPL");
