#define CONFIG_ONENAND_SIM_MANUFACTURER         0xec
#define CONFIG_ONENAND_SIM_DEVICE_ID            0x04
#define CONFIG_FLEXONENAND ((CONFIG_ONENAND_SIM_DEVICE_ID >> 9) & 1)
#define CONFIG_ONENAND_SIM_VERSION_ID           0x1e
#define CONFIG_ONENAND_SIM_TECHNOLOGY_ID CONFIG_FLEXONENAND
#define CONFIG_FLEXONENAND_SIM_DIE0_BOUNDARY	0x01
#define CONFIG_FLEXONENAND_SIM_DIE1_BOUNDARY	0x01
static int manuf_id	= CONFIG_ONENAND_SIM_MANUFACTURER;
static int device_id	= CONFIG_ONENAND_SIM_DEVICE_ID;
static int version_id	= CONFIG_ONENAND_SIM_VERSION_ID;
static int technology_id = CONFIG_ONENAND_SIM_TECHNOLOGY_ID;
static int boundary[] = ;
struct onenand_flash ;
#define ONENAND_CORE(flash)		(flash->data)
#define ONENAND_CORE_SPARE(flash, this, offset)				\
((flash->data) + (this->chipsize) + (offset >> 5))
#define ONENAND_MAIN_AREA(this, offset)					\
(this->base + ONENAND_DATARAM + offset)
#define ONENAND_SPARE_AREA(this, offset)				\
(this->base + ONENAND_SPARERAM + offset)
#define ONENAND_GET_WP_STATUS(this)					\
(readw(this->base + ONENAND_REG_WP_STATUS))
#define ONENAND_SET_WP_STATUS(v, this)					\
(writew(v, this->base + ONENAND_REG_WP_STATUS))
#define MAX_ONENAND_PAGESIZE		(4096 + 128)
static unsigned char *ffchars;
#if CONFIG_FLEXONENAND
#define PARTITION_NAME "Flex-OneNAND simulator partition"
#define PARTITION_NAME "OneNAND simulator partition"
static struct mtd_partition os_partitions[] = ;
struct onenand_info ;
static struct onenand_info *info;
#define DPRINTK(format, args...)					\
do  while (0)
static void onenand_lock_handle(struct onenand_chip *this, int cmd)
static void onenand_bootram_handle(struct onenand_chip *this, int cmd)
static void onenand_update_interrupt(struct onenand_chip *this, int cmd)
static int onenand_check_overwrite(void *dest, void *src, size_t count)
static void onenand_data_handle(struct onenand_chip *this, int cmd,
int dataram, unsigned int offset)
static void onenand_command_handle(struct onenand_chip *this, int cmd)
static void onenand_writew(unsigned short value, void __iomem * addr)
static int __init flash_init(struct onenand_flash *flash)
static void flash_exit(struct onenand_flash *flash)
static int __init onenand_sim_init(void)
static void __exit onenand_sim_exit(void)
module_init(onenand_sim_init);
module_exit(onenand_sim_exit);
MODULE_AUTHOR("Kyungmin Park <kyungmin.park@samsung.com>");
MODULE_DESCRIPTION("The OneNAND flash simulator");
MODULE_LICENSE("GPL");
