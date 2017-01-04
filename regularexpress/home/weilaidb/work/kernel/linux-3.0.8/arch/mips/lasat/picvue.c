#define PVC_BUSY		0x80
#define PVC_NLINES		2
#define PVC_DISPMEM		80
#define PVC_LINELEN		PVC_DISPMEM / PVC_NLINES
struct pvc_defs *picvue;
static void pvc_reg_write(u32 val)
static u32 pvc_reg_read(void)
static void pvc_write_byte(u32 data, u8 byte)
static u8 pvc_read_byte(u32 data)
static u8 pvc_read_data(void)
#define TIMEOUT 1000
static int pvc_wait(void)
#define MODE_INST 0
#define MODE_DATA 1
static void pvc_write(u8 byte, int mode)
void pvc_write_string(const unsigned char *str, u8 addr, int line)
void pvc_write_string_centered(const unsigned char *str, int line)
void pvc_dump_string(const unsigned char *str)
#define BM_SIZE			8
#define MAX_PROGRAMMABLE_CHARS	8
int pvc_program_cg(int charnum, u8 bitmap[BM_SIZE])
#define FUNC_SET_CMD	0x20
#define  EIGHT_BYTE	(1 << 4)
#define  FOUR_BYTE	0
#define  TWO_LINES	(1 << 3)
#define  ONE_LINE	0
#define  LARGE_FONT	(1 << 2)
#define  SMALL_FONT	0
static void pvc_funcset(u8 cmd)
#define ENTRYMODE_CMD		0x4
#define  AUTO_INC		(1 << 1)
#define  AUTO_DEC		0
#define  CURSOR_FOLLOWS_DISP	(1 << 0)
static void pvc_entrymode(u8 cmd)
#define DISP_CNT_CMD	0x08
#define  DISP_OFF	0
#define  DISP_ON	(1 << 2)
#define  CUR_ON		(1 << 1)
#define  CUR_BLINK	(1 << 0)
void pvc_dispcnt(u8 cmd)
#define MOVE_CMD	0x10
#define  DISPLAY	(1 << 3)
#define  CURSOR		0
#define  RIGHT		(1 << 2)
#define  LEFT		0
void pvc_move(u8 cmd)
#define CLEAR_CMD	0x1
void pvc_clear(void)
#define HOME_CMD	0x2
void pvc_home(void)
int pvc_init(void)
module_init(pvc_init);
MODULE_LICENSE("GPL");
