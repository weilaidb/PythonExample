#define DEBUG
#define DBG(x...) printk(x)
#define DBG(x...)
#define NVRAM_SIZE		0x2000
#define CORE99_SIGNATURE	0x5a
#define CORE99_ADLER_START	0x14
#define SM_FLASH_STATUS_DONE	0x80
#define SM_FLASH_STATUS_ERR	0x38
#define SM_FLASH_CMD_ERASE_CONFIRM	0xd0
#define SM_FLASH_CMD_ERASE_SETUP	0x20
#define SM_FLASH_CMD_RESET		0xff
#define SM_FLASH_CMD_WRITE_SETUP	0x40
#define SM_FLASH_CMD_CLEAR_STATUS	0x50
#define SM_FLASH_CMD_READ_STATUS	0x70
struct chrp_header ;
struct core99_header ;
static int nvram_naddrs;
static volatile unsigned char __iomem *nvram_data;
static int is_core_99;
static int core99_bank = 0;
static int nvram_partitions[3];
static DEFINE_RAW_SPINLOCK(nv_lock);
static int (*core99_write_bank)(int bank, u8* datas);
static int (*core99_erase_bank)(int bank);
static char *nvram_image;
static unsigned char core99_nvram_read_byte(int addr)
static void core99_nvram_write_byte(int addr, unsigned char val)
static ssize_t core99_nvram_read(char *buf, size_t count, loff_t *index)
static ssize_t core99_nvram_write(char *buf, size_t count, loff_t *index)
static ssize_t core99_nvram_size(void)
static volatile unsigned char __iomem *nvram_addr;
static int nvram_mult;
static unsigned char direct_nvram_read_byte(int addr)
static void direct_nvram_write_byte(int addr, unsigned char val)
static unsigned char indirect_nvram_read_byte(int addr)
static void indirect_nvram_write_byte(int addr, unsigned char val)
static void pmu_nvram_complete(struct adb_request *req)
static unsigned char pmu_nvram_read_byte(int addr)
static void pmu_nvram_write_byte(int addr, unsigned char val)
static u8 chrp_checksum(struct chrp_header* hdr)
static u32 core99_calc_adler(u8 *buffer)
static u32 core99_check(u8* datas)
static int sm_erase_bank(int bank)
static int sm_write_bank(int bank, u8* datas)
static int amd_erase_bank(int bank)
static int amd_write_bank(int bank, u8* datas)
static void __init lookup_partitions(void)
static void core99_nvram_sync(void)
static int __init core99_nvram_setup(struct device_node *dp, unsigned long addr)
int __init pmac_nvram_init(void)
int pmac_get_partition(int partition)
u8 pmac_xpram_read(int xpaddr)
void pmac_xpram_write(int xpaddr, u8 data)
EXPORT_SYMBOL(pmac_get_partition);
EXPORT_SYMBOL(pmac_xpram_read);
EXPORT_SYMBOL(pmac_xpram_write);
