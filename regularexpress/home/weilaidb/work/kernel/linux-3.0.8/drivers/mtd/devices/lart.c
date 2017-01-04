#define HAVE_PARTITIONS
#error This is for LART architecture only
static char module_name[] = "lart";
#define FLASH_BLOCKSIZE_PARAM		(4096 * BUSWIDTH)
#define FLASH_NUMBLOCKS_16m_PARAM	8
#define FLASH_NUMBLOCKS_8m_PARAM	8
#define FLASH_BLOCKSIZE_MAIN		(32768 * BUSWIDTH)
#define FLASH_NUMBLOCKS_16m_MAIN	31
#define FLASH_NUMBLOCKS_8m_MAIN		15
#define BUSWIDTH			4
#define FLASH_OFFSET		0xe8000000
#define NUM_BLOB_BLOCKS		FLASH_NUMBLOCKS_16m_PARAM
#define BLOB_START			0x00000000
#define BLOB_LEN			(NUM_BLOB_BLOCKS * FLASH_BLOCKSIZE_PARAM)
#define NUM_KERNEL_BLOCKS	7
#define KERNEL_START		(BLOB_START + BLOB_LEN)
#define KERNEL_LEN			(NUM_KERNEL_BLOCKS * FLASH_BLOCKSIZE_MAIN)
#define NUM_INITRD_BLOCKS	24
#define INITRD_START		(KERNEL_START + KERNEL_LEN)
#define INITRD_LEN			(NUM_INITRD_BLOCKS * FLASH_BLOCKSIZE_MAIN)
#define READ_ARRAY			0x00FF00FF
#define READ_ID_CODES		0x00900090
#define ERASE_SETUP			0x00200020
#define ERASE_CONFIRM		0x00D000D0
#define PGM_SETUP			0x00400040
#define STATUS_READ			0x00700070
#define STATUS_CLEAR		0x00500050
#define STATUS_BUSY			0x00800080
#define STATUS_ERASE_ERR	0x00200020
#define STATUS_PGM_ERR		0x00100010
#define FLASH_MANUFACTURER			0x00890089
#define FLASH_DEVICE_8mbit_TOP		0x88f188f1
#define FLASH_DEVICE_8mbit_BOTTOM	0x88f288f2
#define FLASH_DEVICE_16mbit_TOP		0x88f388f3
#define FLASH_DEVICE_16mbit_BOTTOM	0x88f488f4
#define DATA_TO_FLASH(x)				\
(									\
(((x) & 0x08009000) >> 11)	+	\
(((x) & 0x00002000) >> 10)	+	\
(((x) & 0x04004000) >> 8)	+	\
(((x) & 0x00000010) >> 4)	+	\
(((x) & 0x91000820) >> 3)	+	\
(((x) & 0x22080080) >> 2)	+	\
((x) & 0x40000400)			+	\
(((x) & 0x00040040) << 1)	+	\
(((x) & 0x00110000) << 4)	+	\
(((x) & 0x00220100) << 5)	+	\
(((x) & 0x00800208) << 6)	+	\
(((x) & 0x00400004) << 9)	+	\
(((x) & 0x00000001) << 12)	+	\
(((x) & 0x00000002) << 13)		\
)
#define FLASH_TO_DATA(x)				\
(									\
(((x) & 0x00010012) << 11)	+	\
(((x) & 0x00000008) << 10)	+	\
(((x) & 0x00040040) << 8)	+	\
(((x) & 0x00000001) << 4)	+	\
(((x) & 0x12200104) << 3)	+	\
(((x) & 0x08820020) << 2)	+	\
((x) & 0x40000400)			+	\
(((x) & 0x00080080) >> 1)	+	\
(((x) & 0x01100000) >> 4)	+	\
(((x) & 0x04402000) >> 5)	+	\
(((x) & 0x20008200) >> 6)	+	\
(((x) & 0x80000800) >> 9)	+	\
(((x) & 0x00001000) >> 12)	+	\
(((x) & 0x00004000) >> 13)		\
)
#define ADDR_TO_FLASH_U2(x)				\
(									\
(((x) & 0x00000f00) >> 4)	+	\
(((x) & 0x00042000) << 1)	+	\
(((x) & 0x0009c003) << 2)	+	\
(((x) & 0x00021080) << 3)	+	\
(((x) & 0x00000010) << 4)	+	\
(((x) & 0x00000040) << 5)	+	\
(((x) & 0x00000024) << 7)	+	\
(((x) & 0x00000008) << 10)		\
)
#define FLASH_U2_TO_ADDR(x)				\
(									\
(((x) << 4) & 0x00000f00)	+	\
(((x) >> 1) & 0x00042000)	+	\
(((x) >> 2) & 0x0009c003)	+	\
(((x) >> 3) & 0x00021080)	+	\
(((x) >> 4) & 0x00000010)	+	\
(((x) >> 5) & 0x00000040)	+	\
(((x) >> 7) & 0x00000024)	+	\
(((x) >> 10) & 0x00000008)		\
)
#define ADDR_TO_FLASH_U3(x)				\
(									\
(((x) & 0x00000080) >> 3)	+	\
(((x) & 0x00000040) >> 1)	+	\
(((x) & 0x00052020) << 1)	+	\
(((x) & 0x00084f03) << 2)	+	\
(((x) & 0x00029010) << 3)	+	\
(((x) & 0x00000008) << 5)	+	\
(((x) & 0x00000004) << 7)		\
)
#define FLASH_U3_TO_ADDR(x)				\
(									\
(((x) << 3) & 0x00000080)	+	\
(((x) << 1) & 0x00000040)	+	\
(((x) >> 1) & 0x00052020)	+	\
(((x) >> 2) & 0x00084f03)	+	\
(((x) >> 3) & 0x00029010)	+	\
(((x) >> 5) & 0x00000008)	+	\
(((x) >> 7) & 0x00000004)		\
)
static __u8 read8 (__u32 offset)
static __u32 read32 (__u32 offset)
static void write32 (__u32 x,__u32 offset)
static int flash_probe (void)
static inline int erase_block (__u32 offset)
static int flash_erase (struct mtd_info *mtd,struct erase_info *instr)
static int flash_read (struct mtd_info *mtd,loff_t from,size_t len,size_t *retlen,u_char *buf)
static inline int write_dword (__u32 offset,__u32 x)
static int flash_write (struct mtd_info *mtd,loff_t to,size_t len,size_t *retlen,const u_char *buf)
static struct mtd_info mtd;
static struct mtd_erase_region_info erase_regions[] = ;
static struct mtd_partition lart_partitions[] = ;
static int __init lart_flash_init (void)
static void __exit lart_flash_exit (void)
module_init (lart_flash_init);
module_exit (lart_flash_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Abraham vd Merwe <abraham@2d3d.co.za>");
MODULE_DESCRIPTION("MTD driver for Intel 28F160F3 on LART board");
