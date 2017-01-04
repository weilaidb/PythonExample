#if !defined(CONFIG_NANDSIM_FIRST_ID_BYTE)  || \
!defined(CONFIG_NANDSIM_SECOND_ID_BYTE) || \
!defined(CONFIG_NANDSIM_THIRD_ID_BYTE)  || \
!defined(CONFIG_NANDSIM_FOURTH_ID_BYTE)
#define CONFIG_NANDSIM_FIRST_ID_BYTE  0x98
#define CONFIG_NANDSIM_SECOND_ID_BYTE 0x39
#define CONFIG_NANDSIM_THIRD_ID_BYTE  0xFF
#define CONFIG_NANDSIM_FOURTH_ID_BYTE 0xFF
#define CONFIG_NANDSIM_ACCESS_DELAY 25
#define CONFIG_NANDSIM_PROGRAMM_DELAY 200
#define CONFIG_NANDSIM_ERASE_DELAY 2
#define CONFIG_NANDSIM_OUTPUT_CYCLE 40
#define CONFIG_NANDSIM_INPUT_CYCLE  50
#define CONFIG_NANDSIM_BUS_WIDTH  8
#define CONFIG_NANDSIM_DO_DELAYS  0
#define CONFIG_NANDSIM_LOG        0
#define CONFIG_NANDSIM_DBG        0
#define CONFIG_NANDSIM_MAX_PARTS  32
static uint first_id_byte  = CONFIG_NANDSIM_FIRST_ID_BYTE;
static uint second_id_byte = CONFIG_NANDSIM_SECOND_ID_BYTE;
static uint third_id_byte  = CONFIG_NANDSIM_THIRD_ID_BYTE;
static uint fourth_id_byte = CONFIG_NANDSIM_FOURTH_ID_BYTE;
static uint access_delay   = CONFIG_NANDSIM_ACCESS_DELAY;
static uint programm_delay = CONFIG_NANDSIM_PROGRAMM_DELAY;
static uint erase_delay    = CONFIG_NANDSIM_ERASE_DELAY;
static uint output_cycle   = CONFIG_NANDSIM_OUTPUT_CYCLE;
static uint input_cycle    = CONFIG_NANDSIM_INPUT_CYCLE;
static uint bus_width      = CONFIG_NANDSIM_BUS_WIDTH;
static uint do_delays      = CONFIG_NANDSIM_DO_DELAYS;
static uint log            = CONFIG_NANDSIM_LOG;
static uint dbg            = CONFIG_NANDSIM_DBG;
static unsigned long parts[CONFIG_NANDSIM_MAX_PARTS];
static unsigned int parts_num;
static char *badblocks = NULL;
static char *weakblocks = NULL;
static char *weakpages = NULL;
static unsigned int bitflips = 0;
static char *gravepages = NULL;
static unsigned int rptwear = 0;
static unsigned int overridesize = 0;
static char *cache_file = NULL;
static unsigned int bbt;
static unsigned int bch;
module_param(first_id_byte,  uint, 0400);
module_param(second_id_byte, uint, 0400);
module_param(third_id_byte,  uint, 0400);
module_param(fourth_id_byte, uint, 0400);
module_param(access_delay,   uint, 0400);
module_param(programm_delay, uint, 0400);
module_param(erase_delay,    uint, 0400);
module_param(output_cycle,   uint, 0400);
module_param(input_cycle,    uint, 0400);
module_param(bus_width,      uint, 0400);
module_param(do_delays,      uint, 0400);
module_param(log,            uint, 0400);
module_param(dbg,            uint, 0400);
module_param_array(parts, ulong, &parts_num, 0400);
module_param(badblocks,      charp, 0400);
module_param(weakblocks,     charp, 0400);
module_param(weakpages,      charp, 0400);
module_param(bitflips,       uint, 0400);
module_param(gravepages,     charp, 0400);
module_param(rptwear,        uint, 0400);
module_param(overridesize,   uint, 0400);
module_param(cache_file,     charp, 0400);
module_param(bbt,	     uint, 0400);
module_param(bch,	     uint, 0400);
MODULE_PARM_DESC(first_id_byte,  "The first byte returned by NAND Flash 'read ID' command (manufacturer ID)");
MODULE_PARM_DESC(second_id_byte, "The second byte returned by NAND Flash 'read ID' command (chip ID)");
MODULE_PARM_DESC(third_id_byte,  "The third byte returned by NAND Flash 'read ID' command");
MODULE_PARM_DESC(fourth_id_byte, "The fourth byte returned by NAND Flash 'read ID' command");
MODULE_PARM_DESC(access_delay,   "Initial page access delay (microseconds)");
MODULE_PARM_DESC(programm_delay, "Page programm delay (microseconds");
MODULE_PARM_DESC(erase_delay,    "Sector erase delay (milliseconds)");
MODULE_PARM_DESC(output_cycle,   "Word output (from flash) time (nanoseconds)");
MODULE_PARM_DESC(input_cycle,    "Word input (to flash) time (nanoseconds)");
MODULE_PARM_DESC(bus_width,      "Chip's bus width (8- or 16-bit)");
MODULE_PARM_DESC(do_delays,      "Simulate NAND delays using busy-waits if not zero");
MODULE_PARM_DESC(log,            "Perform logging if not zero");
MODULE_PARM_DESC(dbg,            "Output debug information if not zero");
MODULE_PARM_DESC(parts,          "Partition sizes (in erase blocks) separated by commas");
MODULE_PARM_DESC(badblocks,      "Erase blocks that are initially marked bad, separated by commas");
MODULE_PARM_DESC(weakblocks,     "Weak erase blocks [: remaining erase cycles (defaults to 3)]"
" separated by commas e.g. 113:2 means eb 113"
" can be erased only twice before failing");
MODULE_PARM_DESC(weakpages,      "Weak pages [: maximum writes (defaults to 3)]"
" separated by commas e.g. 1401:2 means page 1401"
" can be written only twice before failing");
MODULE_PARM_DESC(bitflips,       "Maximum number of random bit flips per page (zero by default)");
MODULE_PARM_DESC(gravepages,     "Pages that lose data [: maximum reads (defaults to 3)]"
" separated by commas e.g. 1401:2 means page 1401"
" can be read only twice before failing");
MODULE_PARM_DESC(rptwear,        "Number of erases between reporting wear, if not zero");
MODULE_PARM_DESC(overridesize,   "Specifies the NAND Flash size overriding the ID bytes. "
"The size is specified in erase blocks and as the exponent of a power of two"
" e.g. 5 means a size of 32 erase blocks");
MODULE_PARM_DESC(cache_file,     "File to use to cache nand pages instead of memory");
MODULE_PARM_DESC(bbt,		 "0 OOB, 1 BBT with marker in OOB, 2 BBT with marker in data area");
MODULE_PARM_DESC(bch,		 "Enable BCH ecc and set how many bits should "
"be correctable in 512-byte blocks");
#define NS_LARGEST_PAGE_SIZE	4096
#define NS_OUTPUT_PREFIX "[nandsim]"
#define NS_LOG(args...) \
do  while(0)
#define NS_DBG(args...) \
do  while(0)
#define NS_WARN(args...) \
do  while(0)
#define NS_ERR(args...) \
do  while(0)
#define NS_INFO(args...) \
do  while(0)
#define NS_UDELAY(us) \
do  while(0)
#define NS_MDELAY(us) \
do  while(0)
#define NS_IS_INITIALIZED(ns) ((ns)->geom.totsz != 0)
#define NS_STATUS_OK(ns) (NAND_STATUS_READY | (NAND_STATUS_WP * ((ns)->lines.wp == 0)))
#define NS_STATUS_FAILED(ns) (NAND_STATUS_FAIL | NS_STATUS_OK(ns))
#define NS_RAW_OFFSET(ns) \
(((ns)->regs.row << (ns)->geom.pgshift) + ((ns)->regs.row * (ns)->geom.oobsz) + (ns)->regs.column)
#define NS_RAW_OFFSET_OOB(ns) (NS_RAW_OFFSET(ns) + ns->geom.pgsz)
#define STATE_CMD_READ0        0x00000001
#define STATE_CMD_READ1        0x00000002
#define STATE_CMD_READSTART    0x00000003
#define STATE_CMD_PAGEPROG     0x00000004
#define STATE_CMD_READOOB      0x00000005
#define STATE_CMD_ERASE1       0x00000006
#define STATE_CMD_STATUS       0x00000007
#define STATE_CMD_STATUS_M     0x00000008
#define STATE_CMD_SEQIN        0x00000009
#define STATE_CMD_READID       0x0000000A
#define STATE_CMD_ERASE2       0x0000000B
#define STATE_CMD_RESET        0x0000000C
#define STATE_CMD_RNDOUT       0x0000000D
#define STATE_CMD_RNDOUTSTART  0x0000000E
#define STATE_CMD_MASK         0x0000000F
#define STATE_ADDR_PAGE        0x00000010
#define STATE_ADDR_SEC         0x00000020
#define STATE_ADDR_COLUMN      0x00000030
#define STATE_ADDR_ZERO        0x00000040
#define STATE_ADDR_MASK        0x00000070
#define STATE_DATAIN           0x00000100
#define STATE_DATAIN_MASK      0x00000100
#define STATE_DATAOUT          0x00001000
#define STATE_DATAOUT_ID       0x00002000
#define STATE_DATAOUT_STATUS   0x00003000
#define STATE_DATAOUT_STATUS_M 0x00004000
#define STATE_DATAOUT_MASK     0x00007000
#define STATE_READY            0x00000000
#define STATE_UNKNOWN          0x10000000
#define ACTION_CPY       0x00100000
#define ACTION_PRGPAGE   0x00200000
#define ACTION_SECERASE  0x00300000
#define ACTION_ZEROOFF   0x00400000
#define ACTION_HALFOFF   0x00500000
#define ACTION_OOBOFF    0x00600000
#define ACTION_MASK      0x00700000
#define NS_OPER_NUM      13
#define NS_OPER_STATES   6
#define OPT_ANY          0xFFFFFFFF
#define OPT_PAGE256      0x00000001
#define OPT_PAGE512      0x00000002
#define OPT_PAGE2048     0x00000008
#define OPT_SMARTMEDIA   0x00000010
#define OPT_AUTOINCR     0x00000020
#define OPT_PAGE512_8BIT 0x00000040
#define OPT_PAGE4096     0x00000080
#define OPT_LARGEPAGE    (OPT_PAGE2048 | OPT_PAGE4096)
#define OPT_SMALLPAGE    (OPT_PAGE256  | OPT_PAGE512)
#define NS_STATE(x) ((x) & ~ACTION_MASK)
#define NS_MAX_PREVSTATES 1
#define NS_MAX_HELD_PAGES 16
union ns_mem ;
struct nandsim ;
static struct nandsim_operations  ops[NS_OPER_NUM] = ;
struct weak_block ;
static LIST_HEAD(weak_blocks);
struct weak_page ;
static LIST_HEAD(weak_pages);
struct grave_page ;
static LIST_HEAD(grave_pages);
static unsigned long *erase_block_wear = NULL;
static unsigned int wear_eb_count = 0;
static unsigned long total_wear = 0;
static unsigned int rptwear_cnt = 0;
static struct mtd_info *nsmtd;
static u_char ns_verify_buf[NS_LARGEST_PAGE_SIZE];
static int alloc_device(struct nandsim *ns)
static void free_device(struct nandsim *ns)
static char *get_partition_name(int i)
static uint64_t divide(uint64_t n, uint32_t d)
static int init_nandsim(struct mtd_info *mtd)
static void free_nandsim(struct nandsim *ns)
static int parse_badblocks(struct nandsim *ns, struct mtd_info *mtd)
static int parse_weakblocks(void)
static int erase_error(unsigned int erase_block_no)
static int parse_weakpages(void)
static int write_error(unsigned int page_no)
static int parse_gravepages(void)
static int read_error(unsigned int page_no)
static void free_lists(void)
static int setup_wear_reporting(struct mtd_info *mtd)
static void update_wear(unsigned int erase_block_no)
static char *get_state_name(uint32_t state)
static int check_command(int cmd)
static uint32_t get_state_by_command(unsigned command)
static inline void accept_addr_byte(struct nandsim *ns, u_char bt)
static inline void switch_to_ready_state(struct nandsim *ns, u_char status)
static int find_operation(struct nandsim *ns, uint32_t flag)
static void put_pages(struct nandsim *ns)
static int get_pages(struct nandsim *ns, struct file *file, size_t count, loff_t pos)
static int set_memalloc(void)
static void clear_memalloc(int memalloc)
static ssize_t read_file(struct nandsim *ns, struct file *file, void *buf, size_t count, loff_t *pos)
static ssize_t write_file(struct nandsim *ns, struct file *file, void *buf, size_t count, loff_t *pos)
static inline union ns_mem *NS_GET_PAGE(struct nandsim *ns)
static inline u_char *NS_PAGE_BYTE_OFF(struct nandsim *ns)
int do_read_error(struct nandsim *ns, int num)
void do_bit_flips(struct nandsim *ns, int num)
static void read_page(struct nandsim *ns, int num)
static void erase_sector(struct nandsim *ns)
static int prog_page(struct nandsim *ns, int num)
static int do_state_action(struct nandsim *ns, uint32_t action)
static void switch_state(struct nandsim *ns)
static u_char ns_nand_read_byte(struct mtd_info *mtd)
static void ns_nand_write_byte(struct mtd_info *mtd, u_char byte)
static void ns_hwcontrol(struct mtd_info *mtd, int cmd, unsigned int bitmask)
static int ns_device_ready(struct mtd_info *mtd)
static uint16_t ns_nand_read_word(struct mtd_info *mtd)
static void ns_nand_write_buf(struct mtd_info *mtd, const u_char *buf, int len)
static void ns_nand_read_buf(struct mtd_info *mtd, u_char *buf, int len)
static int ns_nand_verify_buf(struct mtd_info *mtd, const u_char *buf, int len)
static int __init ns_init_module(void)
module_init(ns_init_module);
static void __exit ns_cleanup_module(void)
module_exit(ns_cleanup_module);
MODULE_LICENSE ("GPL");
MODULE_AUTHOR ("Artem B. Bityuckiy");
MODULE_DESCRIPTION ("The NAND flash simulator");
