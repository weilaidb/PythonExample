#define	OPCODE_WREN		0x06
#define	OPCODE_RDSR		0x05
#define	OPCODE_WRSR		0x01
#define	OPCODE_NORM_READ	0x03
#define	OPCODE_FAST_READ	0x0b
#define	OPCODE_PP		0x02
#define	OPCODE_BE_4K		0x20
#define	OPCODE_BE_32K		0x52
#define	OPCODE_CHIP_ERASE	0xc7
#define	OPCODE_SE		0xd8
#define	OPCODE_RDID		0x9f
#define	OPCODE_BP		0x02
#define	OPCODE_WRDI		0x04
#define	OPCODE_AAI_WP		0xad
#define	OPCODE_EN4B		0xb7
#define	OPCODE_EX4B		0xe9
#define	OPCODE_BRWR		0x17
#define	SR_WIP			1
#define	SR_WEL			2
#define	SR_BP0			4
#define	SR_BP1			8
#define	SR_BP2			0x10
#define	SR_SRWD			0x80
#define	MAX_READY_WAIT_JIFFIES	(40 * HZ)
#define	MAX_CMD_SIZE		5
#define OPCODE_READ 	OPCODE_FAST_READ
#define FAST_READ_DUMMY_BYTE 1
#define OPCODE_READ 	OPCODE_NORM_READ
#define FAST_READ_DUMMY_BYTE 0
#define JEDEC_MFR(_jedec_id)	((_jedec_id) >> 16)
struct m25p ;
static inline struct m25p *mtd_to_m25p(struct mtd_info *mtd)
static int read_sr(struct m25p *flash)
static int write_sr(struct m25p *flash, u8 val)
static inline int write_enable(struct m25p *flash)
static inline int write_disable(struct m25p *flash)
static inline int set_4byte(struct m25p *flash, u32 jedec_id, int enable)
static int wait_till_ready(struct m25p *flash)
static int erase_chip(struct m25p *flash)
static void m25p_addr2cmd(struct m25p *flash, unsigned int addr, u8 *cmd)
static int m25p_cmdsz(struct m25p *flash)
static int erase_sector(struct m25p *flash, u32 offset)
static int m25p80_erase(struct mtd_info *mtd, struct erase_info *instr)
static int m25p80_read(struct mtd_info *mtd, loff_t from, size_t len,
size_t *retlen, u_char *buf)
static int m25p80_write(struct mtd_info *mtd, loff_t to, size_t len,
size_t *retlen, const u_char *buf)
static int sst_write(struct mtd_info *mtd, loff_t to, size_t len,
size_t *retlen, const u_char *buf)
struct flash_info ;
#define INFO(_jedec_id, _ext_id, _sector_size, _n_sectors, _flags)	\
((kernel_ulong_t)&(struct flash_info) )
#define CAT25_INFO(_sector_size, _n_sectors, _page_size, _addr_width)	\
((kernel_ulong_t)&(struct flash_info) )
static const struct spi_device_id m25p_ids[] = ;
MODULE_DEVICE_TABLE(spi, m25p_ids);
static const struct spi_device_id *__devinit jedec_probe(struct spi_device *spi)
static int __devinit m25p_probe(struct spi_device *spi)
static int __devexit m25p_remove(struct spi_device *spi)
static struct spi_driver m25p80_driver = ;
static int __init m25p80_init(void)
static void __exit m25p80_exit(void)
module_init(m25p80_init);
module_exit(m25p80_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Mike Lavender");
MODULE_DESCRIPTION("MTD SPI driver for ST M25Pxx flash chips");
