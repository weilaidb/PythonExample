#define MAX_READY_WAIT_JIFFIES	msecs_to_jiffies(3000)
#define SST25L_CMD_WRSR		0x01
#define SST25L_CMD_WRDI		0x04
#define SST25L_CMD_RDSR		0x05
#define SST25L_CMD_WREN		0x06
#define SST25L_CMD_READ		0x03
#define SST25L_CMD_EWSR		0x50
#define SST25L_CMD_SECTOR_ERASE	0x20
#define SST25L_CMD_READ_ID	0x90
#define SST25L_CMD_AAI_PROGRAM	0xaf
#define SST25L_STATUS_BUSY	(1 << 0)
#define SST25L_STATUS_WREN	(1 << 1)
#define SST25L_STATUS_BP0	(1 << 2)
#define SST25L_STATUS_BP1	(1 << 3)
struct sst25l_flash ;
struct flash_info ;
#define to_sst25l_flash(x) container_of(x, struct sst25l_flash, mtd)
static struct flash_info __devinitdata sst25l_flash_info[] = ;
static int sst25l_status(struct sst25l_flash *flash, int *status)
static int sst25l_write_enable(struct sst25l_flash *flash, int enable)
static int sst25l_wait_till_ready(struct sst25l_flash *flash)
static int sst25l_erase_sector(struct sst25l_flash *flash, uint32_t offset)
static int sst25l_erase(struct mtd_info *mtd, struct erase_info *instr)
static int sst25l_read(struct mtd_info *mtd, loff_t from, size_t len,
size_t *retlen, unsigned char *buf)
static int sst25l_write(struct mtd_info *mtd, loff_t to, size_t len,
size_t *retlen, const unsigned char *buf)
static struct flash_info *__devinit sst25l_match_device(struct spi_device *spi)
static int __devinit sst25l_probe(struct spi_device *spi)
static int __devexit sst25l_remove(struct spi_device *spi)
static struct spi_driver sst25l_driver = ;
static int __init sst25l_init(void)
static void __exit sst25l_exit(void)
module_init(sst25l_init);
module_exit(sst25l_exit);
MODULE_DESCRIPTION("MTD SPI driver for SST25L Flash chips");
MODULE_AUTHOR("Andre Renaud <andre@bluewatersys.com>, "
"Ryan Mallon <ryan@bluewatersys.com>");
MODULE_LICENSE("GPL");
