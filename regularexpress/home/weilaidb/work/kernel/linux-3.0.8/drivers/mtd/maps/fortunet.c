#define MAX_NUM_REGIONS		4
#define MAX_NUM_PARTITIONS	8
#define DEF_WINDOW_ADDR_PHY	0x00000000
#define DEF_WINDOW_SIZE		0x00800000
#define MTD_FORTUNET_PK		"MTD FortuNet: "
#define MAX_NAME_SIZE		128
struct map_region
;
static struct map_region	map_regions[MAX_NUM_REGIONS];
static int			map_regions_set[MAX_NUM_REGIONS] = ;
static int			map_regions_parts[MAX_NUM_REGIONS] = ;
struct map_info default_map = ;
static char * __init get_string_option(char *dest,int dest_size,char *sor)
static int __init MTD_New_Region(char *line)
static int __init MTD_New_Partition(char *line)
__setup("MTD_Region=", MTD_New_Region);
__setup("MTD_Partition=", MTD_New_Partition);
__setup("MTD_Partion=", MTD_New_Partition);
static int __init init_fortunet(void)
static void __exit cleanup_fortunet(void)
module_init(init_fortunet);
module_exit(cleanup_fortunet);
MODULE_AUTHOR("FortuNet, Inc.");
MODULE_DESCRIPTION("MTD map driver for FortuNet boards");
