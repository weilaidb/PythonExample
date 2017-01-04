#define KB	1024U
#define MB	(KB*KB)
#define GB	(KB*MB)
#define MHz	(1000U*1000U)
#define GHz	(1000U*MHz)
#define BOARD_MODEL	"PrPMC2800"
#define BOARD_MODEL_MAX	32
#define EEPROM2_ADDR	0xa4
#define EEPROM3_ADDR	0xa8
BSS_STACK(16*KB);
static u8 *bridge_base;
typedef enum  prpmc2800_board_model;
typedef enum  prpmc2800_bridge_type;
struct prpmc2800_board_info ;
static struct prpmc2800_board_info prpmc2800_board_info[] = ;
static struct prpmc2800_board_info *prpmc2800_get_board_info(u8 *vpd)
static struct prpmc2800_board_info *prpmc2800_get_bip(void)
static void prpmc2800_bridge_setup(u32 mem_size)
static void prpmc2800_fixups(void)
#define MV64x60_MPP_CNTL_0	0xf000
#define MV64x60_MPP_CNTL_2	0xf008
#define MV64x60_GPP_IO_CNTL	0xf100
#define MV64x60_GPP_LEVEL_CNTL	0xf110
#define MV64x60_GPP_VALUE_SET	0xf118
static void prpmc2800_reset(void)
#define HEAP_SIZE	(16*MB)
static struct gunzip_state gzstate;
void platform_init(unsigned long r3, unsigned long r4, unsigned long r5,
unsigned long r6, unsigned long r7)
asm ("	.globl _zimage_start\n\
_zimage_start:\n\
mfmsr	10\n\
rlwinm	10,10,0,~(1<<15)\n\
sync\n\
mtmsr	10\n\
isync\n\
b _zimage_start_lib\n\
");
