#define G364_MEM_BASE   0xe4400000
#define G364_PORT_BASE  0xe4000000
#define ID_REG 		0xe4000000
#define BOOT_REG 	0xe4080000
#define TIMING_REG 	0xe4080108
#define DISPLAY_REG 	0xe4080118
#define VDISPLAY_REG 	0xe4080150
#define MASK_REG 	0xe4080200
#define CTLA_REG 	0xe4080300
#define CURS_TOGGLE 	0x800000
#define BIT_PER_PIX	0x700000
#define DELAY_SAMPLE    0x080000
#define PORT_INTER	0x040000
#define PIX_PIPE_DEL	0x030000
#define PIX_PIPE_DEL2	0x008000
#define TR_CYCLE_TOG	0x004000
#define VRAM_ADR_INC	0x003000
#define BLANK_OFF	0x000800
#define FORCE_BLANK	0x000400
#define BLK_FUN_SWTCH	0x000200
#define BLANK_IO	0x000100
#define BLANK_LEVEL	0x000080
#define A_VID_FORM	0x000040
#define D_SYNC_FORM	0x000020
#define FRAME_FLY_PAT	0x000010
#define OP_MODE		0x000008
#define INTL_STAND	0x000004
#define SCRN_FORM	0x000002
#define ENABLE_VTG	0x000001
#define TOP_REG 	0xe4080400
#define CURS_PAL_REG 	0xe4080508
#define CHKSUM_REG 	0xe4080600
#define CURS_POS_REG 	0xe4080638
#define CLR_PAL_REG 	0xe4080800
#define CURS_PAT_REG 	0xe4081000
#define MON_ID_REG 	0xe4100000
#define RESET_REG 	0xe4180000
static struct fb_info fb_info;
static struct fb_fix_screeninfo fb_fix __initdata = ;
static struct fb_var_screeninfo fb_var __initdata = ;
int g364fb_init(void);
static int g364fb_pan_display(struct fb_var_screeninfo *var,
struct fb_info *info);
static int g364fb_setcolreg(u_int regno, u_int red, u_int green,
u_int blue, u_int transp,
struct fb_info *info);
static int g364fb_cursor(struct fb_info *info, struct fb_cursor *cursor);
static int g364fb_blank(int blank, struct fb_info *info);
static struct fb_ops g364fb_ops = ;
int g364fb_cursor(struct fb_info *info, struct fb_cursor *cursor)
static int g364fb_pan_display(struct fb_var_screeninfo *var,
struct fb_info *info)
static int g364fb_blank(int blank, struct fb_info *info)
static int g364fb_setcolreg(u_int regno, u_int red, u_int green,
u_int blue, u_int transp, struct fb_info *info)
int __init g364fb_init(void)
module_init(g364fb_init);
MODULE_LICENSE("GPL");
