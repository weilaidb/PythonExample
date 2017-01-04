#define OP_READ_CONTINUOUS	0xE8
#define OP_READ_PAGE		0xD2
#define OP_READ_STATUS		0xD7
#define OP_READ_BUFFER1		0xD4
#define OP_READ_BUFFER2		0xD6
#define OP_WRITE_BUFFER1	0x84
#define OP_WRITE_BUFFER2	0x87
#define OP_ERASE_PAGE		0x81
#define OP_ERASE_BLOCK		0x50
#define OP_TRANSFER_BUF1	0x53
#define OP_TRANSFER_BUF2	0x55
#define OP_MREAD_BUFFER1	0xD4
#define OP_MREAD_BUFFER2	0xD6
#define OP_MWERASE_BUFFER1	0x83
#define OP_MWERASE_BUFFER2	0x86
#define OP_MWRITE_BUFFER1	0x88
#define OP_MWRITE_BUFFER2	0x89
#define OP_PROGRAM_VIA_BUF1	0x82
#define OP_PROGRAM_VIA_BUF2	0x85
#define OP_COMPARE_BUF1		0x60
#define OP_COMPARE_BUF2		0x61
#define OP_REWRITE_VIA_BUF1	0x58
#define OP_REWRITE_VIA_BUF2	0x59
#define OP_READ_ID		0x9F
#define OP_READ_SECURITY	0x77
#define OP_WRITE_SECURITY_REVC	0x9A
#define OP_WRITE_SECURITY	0x9B
struct dataflash ;
static inline int dataflash_status(struct spi_device *spi)
static int dataflash_waitready(struct spi_device *spi)
static int dataflash_erase(struct mtd_info *mtd, struct erase_info *instr)
static int dataflash_read(struct mtd_info *mtd, loff_t from, size_t len,
size_t *retlen, u_char *buf)
static int dataflash_write(struct mtd_info *mtd, loff_t to, size_t len,
size_t * retlen, const u_char * buf)
static int dataflash_get_otp_info(struct mtd_info *mtd,
struct otp_info *info, size_t len)
static ssize_t otp_read(struct spi_device *spi, unsigned base,
uint8_t *buf, loff_t off, size_t len)
static int dataflash_read_fact_otp(struct mtd_info *mtd,
loff_t from, size_t len, size_t *retlen, u_char *buf)
static int dataflash_read_user_otp(struct mtd_info *mtd,
loff_t from, size_t len, size_t *retlen, u_char *buf)
static int dataflash_write_user_otp(struct mtd_info *mtd,
loff_t from, size_t len, size_t *retlen, u_char *buf)
static char *otp_setup(struct mtd_info *device, char revision)
static char *otp_setup(struct mtd_info *device, char revision)
static int __devinit
add_dataflash_otp(struct spi_device *spi, char *name,
int nr_pages, int pagesize, int pageoffset, char revision)
static inline int __devinit
add_dataflash(struct spi_device *spi, char *name,
int nr_pages, int pagesize, int pageoffset)
struct flash_info ;
static struct flash_info __devinitdata dataflash_data [] = ;
static struct flash_info *__devinit jedec_probe(struct spi_device *spi)
static int __devinit dataflash_probe(struct spi_device *spi)
static int __devexit dataflash_remove(struct spi_device *spi)
static struct spi_driver dataflash_driver = ;
static int __init dataflash_init(void)
module_init(dataflash_init);
static void __exit dataflash_exit(void)
module_exit(dataflash_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Andrew Victor, David Brownell");
MODULE_DESCRIPTION("MTD DataFlash driver");
MODULE_ALIAS("spi:mtd_dataflash");
