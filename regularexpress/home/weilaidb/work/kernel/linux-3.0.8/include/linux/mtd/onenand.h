#define __LINUX_MTD_ONENAND_H
#define MAX_DIES		2
#define MAX_BUFFERRAM		2
extern int onenand_scan(struct mtd_info *mtd, int max_chips);
extern void onenand_release(struct mtd_info *mtd);
struct onenand_bufferram ;
struct onenand_chip ;
#define ONENAND_PAGES_PER_BLOCK        (1<<6)
#define ONENAND_CURRENT_BUFFERRAM(this)		(this->bufferram_index)
#define ONENAND_NEXT_BUFFERRAM(this)		(this->bufferram_index ^ 1)
#define ONENAND_SET_NEXT_BUFFERRAM(this)	(this->bufferram_index ^= 1)
#define ONENAND_SET_PREV_BUFFERRAM(this)	(this->bufferram_index ^= 1)
#define ONENAND_SET_BUFFERRAM0(this)		(this->bufferram_index = 0)
#define ONENAND_SET_BUFFERRAM1(this)		(this->bufferram_index = 1)
#define FLEXONENAND(this)						\
(this->device_id & DEVICE_IS_FLEXONENAND)
#define ONENAND_GET_SYS_CFG1(this)					\
(this->read_word(this->base + ONENAND_REG_SYS_CFG1))
#define ONENAND_SET_SYS_CFG1(v, this)					\
(this->write_word(v, this->base + ONENAND_REG_SYS_CFG1))
#define ONENAND_IS_DDP(this)						\
(this->device_id & ONENAND_DEVICE_IS_DDP)
#define ONENAND_IS_MLC(this)						\
(this->technology & ONENAND_TECHNOLOGY_IS_MLC)
#define ONENAND_IS_2PLANE(this)						\
(this->options & ONENAND_HAS_2PLANE)
#define ONENAND_IS_2PLANE(this)			(0)
#define ONENAND_IS_CACHE_PROGRAM(this)					\
(this->options & ONENAND_HAS_CACHE_PROGRAM)
#define ONENAND_CHECK_BYTE_ACCESS(addr)		(addr & 0x1)
#define ONENAND_HAS_CONT_LOCK		(0x0001)
#define ONENAND_HAS_UNLOCK_ALL		(0x0002)
#define ONENAND_HAS_2PLANE		(0x0004)
#define ONENAND_HAS_4KB_PAGE		(0x0008)
#define ONENAND_HAS_CACHE_PROGRAM	(0x0010)
#define ONENAND_SKIP_UNLOCK_CHECK	(0x0100)
#define ONENAND_PAGEBUF_ALLOC		(0x1000)
#define ONENAND_OOBBUF_ALLOC		(0x2000)
#define ONENAND_SKIP_INITIAL_UNLOCKING	(0x4000)
#define ONENAND_IS_4KB_PAGE(this)					\
(this->options & ONENAND_HAS_4KB_PAGE)
#define ONENAND_MFR_SAMSUNG	0xec
#define ONENAND_MFR_NUMONYX	0x20
struct onenand_manufacturers ;
int onenand_bbt_read_oob(struct mtd_info *mtd, loff_t from,
struct mtd_oob_ops *ops);
unsigned onenand_block(struct onenand_chip *this, loff_t addr);
loff_t onenand_addr(struct onenand_chip *this, int block);
int flexonenand_region(struct mtd_info *mtd, loff_t addr);
struct mtd_partition;
struct onenand_platform_data ;
