#define ATAFB_TT
#define ATAFB_STE
#define ATAFB_EXT
#define ATAFB_FALCON
#define SWITCH_ACIA 0x01
#define SWITCH_SND6 0x40
#define SWITCH_SND7 0x80
#define SWITCH_NONE 0x00
#define up(x, r) (((x) + (r) - 1) & ~((r)-1))
static int atafb_check_var(struct fb_var_screeninfo *var, struct fb_info *info);
static int atafb_set_par(struct fb_info *info);
static int atafb_setcolreg(unsigned int regno, unsigned int red, unsigned int green,
unsigned int blue, unsigned int transp,
struct fb_info *info);
static int atafb_blank(int blank, struct fb_info *info);
static int atafb_pan_display(struct fb_var_screeninfo *var,
struct fb_info *info);
static void atafb_fillrect(struct fb_info *info,
const struct fb_fillrect *rect);
static void atafb_copyarea(struct fb_info *info,
const struct fb_copyarea *region);
static void atafb_imageblit(struct fb_info *info, const struct fb_image *image);
static int atafb_ioctl(struct fb_info *info, unsigned int cmd,
unsigned long arg);
static int default_par;
static unsigned long default_mem_req;
static int hwscroll = -1;
static int use_hwscroll = 1;
static int sttt_xres = 640, st_yres = 400, tt_yres = 480;
static int sttt_xres_virtual = 640, sttt_yres_virtual = 400;
static int ovsc_offset, ovsc_addlen;
static struct atafb_par  current_par;
static int DontCalcRes = 0;
#define HHT hw.falcon.hht
#define HBB hw.falcon.hbb
#define HBE hw.falcon.hbe
#define HDB hw.falcon.hdb
#define HDE hw.falcon.hde
#define HSS hw.falcon.hss
#define VFT hw.falcon.vft
#define VBB hw.falcon.vbb
#define VBE hw.falcon.vbe
#define VDB hw.falcon.vdb
#define VDE hw.falcon.vde
#define VSS hw.falcon.vss
#define VCO_CLOCK25		0x04
#define VCO_CSYPOS		0x10
#define VCO_VSYPOS		0x20
#define VCO_HSYPOS		0x40
#define VCO_SHORTOFFS	0x100
#define VMO_DOUBLE		0x01
#define VMO_INTER		0x02
#define VMO_PREMASK		0x0c
static struct fb_info fb_info = ;
static void *screen_base;
static void *real_screen_base;
static int screen_len;
static int current_par_valid;
static int mono_moni;
static unsigned int external_xres;
static unsigned int external_xres_virtual;
static unsigned int external_yres;
static unsigned int external_depth;
static int external_pmode;
static void *external_addr;
static unsigned long external_len;
static unsigned long external_vgaiobase;
static unsigned int external_bitspercol = 6;
enum cardtype ;
static enum cardtype external_card_type = IS_VGA;
static int MV300_reg_1bit[2] = ;
static int MV300_reg_4bit[16] = ;
static int MV300_reg_8bit[256] = ;
static int *MV300_reg = MV300_reg_8bit;
static int inverse;
extern int fontheight_8x8;
extern int fontwidth_8x8;
extern unsigned char fontdata_8x8[];
extern int fontheight_8x16;
extern int fontwidth_8x16;
extern unsigned char fontdata_8x16[];
static struct fb_hwswitch  *fbhw;
static char *autodetect_names[] = ;
static char *stlow_names[] = ;
static char *stmid_names[] = ;
static char *sthigh_names[] = ;
static char *ttlow_names[] = ;
static char *ttmid_names[] = ;
static char *tthigh_names[] = ;
static char *vga2_names[] = ;
static char *vga4_names[] = ;
static char *vga16_names[] = ;
static char *vga256_names[] = ;
static char *falh2_names[] = ;
static char *falh16_names[] = ;
static char **fb_var_names[] = ;
static struct fb_var_screeninfo atafb_predefined[] = ;
static int num_atafb_predefined = ARRAY_SIZE(atafb_predefined);
static struct fb_videomode atafb_modedb[] __initdata = ;
#define NUM_TOTAL_MODES  ARRAY_SIZE(atafb_modedb)
static char *mode_option __initdata = NULL;
#define DEFMODE_TT	5
#define DEFMODE_F30	7
#define DEFMODE_STE	2
#define DEFMODE_EXT	6
static int get_video_mode(char *vname)
static int tt_encode_fix(struct fb_fix_screeninfo *fix, struct atafb_par *par)
static int tt_decode_var(struct fb_var_screeninfo *var, struct atafb_par *par)
static int tt_encode_var(struct fb_var_screeninfo *var, struct atafb_par *par)
static void tt_get_par(struct atafb_par *par)
static void tt_set_par(struct atafb_par *par)
static int tt_setcolreg(unsigned int regno, unsigned int red,
unsigned int green, unsigned int blue,
unsigned int transp, struct fb_info *info)
static int tt_detect(void)
static int mon_type;
static int f030_bus_width;
#define F_MON_SM	0
#define F_MON_SC	1
#define F_MON_VGA	2
#define F_MON_TV	3
static struct pixel_clock  f25 = , f32 = , fext = ;
static int vdl_prescale[4][3] = ;
static long h_syncs[4] = ;
static inline int hxx_prescale(struct falcon_hw *hw)
static int falcon_encode_fix(struct fb_fix_screeninfo *fix,
struct atafb_par *par)
static int falcon_decode_var(struct fb_var_screeninfo *var,
struct atafb_par *par)
static int falcon_encode_var(struct fb_var_screeninfo *var,
struct atafb_par *par)
static int f_change_mode;
static struct falcon_hw f_new_mode;
static int f_pan_display;
static void falcon_get_par(struct atafb_par *par)
static void falcon_set_par(struct atafb_par *par)
static irqreturn_t falcon_vbl_switcher(int irq, void *dummy)
static int falcon_pan_display(struct fb_var_screeninfo *var,
struct fb_info *info)
static int falcon_setcolreg(unsigned int regno, unsigned int red,
unsigned int green, unsigned int blue,
unsigned int transp, struct fb_info *info)
static int falcon_blank(int blank_mode)
static int falcon_detect(void)
static int stste_encode_fix(struct fb_fix_screeninfo *fix,
struct atafb_par *par)
static int stste_decode_var(struct fb_var_screeninfo *var,
struct atafb_par *par)
static int stste_encode_var(struct fb_var_screeninfo *var,
struct atafb_par *par)
static void stste_get_par(struct atafb_par *par)
static void stste_set_par(struct atafb_par *par)
static int stste_setcolreg(unsigned int regno, unsigned int red,
unsigned int green, unsigned int blue,
unsigned int transp, struct fb_info *info)
static int stste_detect(void)
static void stste_set_screen_base(void *s_base)
#define LINE_DELAY  (mono_moni ? 30 : 70)
#define SYNC_DELAY  (mono_moni ? 1500 : 2000)
static void st_ovsc_switch(void)
static int ext_encode_fix(struct fb_fix_screeninfo *fix, struct atafb_par *par)
static int ext_decode_var(struct fb_var_screeninfo *var, struct atafb_par *par)
static int ext_encode_var(struct fb_var_screeninfo *var, struct atafb_par *par)
static void ext_get_par(struct atafb_par *par)
static void ext_set_par(struct atafb_par *par)
#define OUTB(port,val) \
*((unsigned volatile char *) ((port)+external_vgaiobase)) = (val)
#define INB(port) \
(*((unsigned volatile char *) ((port)+external_vgaiobase)))
#define DACDelay				\
do  while (0)
static int ext_setcolreg(unsigned int regno, unsigned int red,
unsigned int green, unsigned int blue,
unsigned int transp, struct fb_info *info)
static int ext_detect(void)
static void set_screen_base(void *s_base)
static int pan_display(struct fb_var_screeninfo *var, struct fb_info *info)
static struct fb_hwswitch tt_switch = ;
static struct fb_hwswitch falcon_switch = ;
static struct fb_hwswitch st_switch = ;
static struct fb_hwswitch ext_switch = ;
static void ata_get_par(struct atafb_par *par)
static void ata_set_par(struct atafb_par *par)
static int do_fb_set_var(struct fb_var_screeninfo *var, int isactive)
static int atafb_get_fix(struct fb_fix_screeninfo *fix, struct fb_info *info)
static int atafb_get_var(struct fb_var_screeninfo *var, struct fb_info *info)
static void atafb_set_disp(struct fb_info *info)
static int atafb_setcolreg(u_int regno, u_int red, u_int green, u_int blue,
u_int transp, struct fb_info *info)
static int
atafb_pan_display(struct fb_var_screeninfo *var, struct fb_info *info)
#if BITS_PER_LONG == 32
#define BYTES_PER_LONG	4
#define SHIFT_PER_LONG	5
#elif BITS_PER_LONG == 64
#define BYTES_PER_LONG	8
#define SHIFT_PER_LONG	6
#define Please update me
static void atafb_fillrect(struct fb_info *info, const struct fb_fillrect *rect)
static void atafb_copyarea(struct fb_info *info, const struct fb_copyarea *area)
static void atafb_imageblit(struct fb_info *info, const struct fb_image *image)
static int
atafb_ioctl(struct fb_info *info, unsigned int cmd, unsigned long arg)
static int atafb_blank(int blank, struct fb_info *info)
static int atafb_check_var(struct fb_var_screeninfo *var, struct fb_info *info)
static int atafb_set_par(struct fb_info *info)
static struct fb_ops atafb_ops = ;
static void check_default_par(int detected_mode)
static void __init atafb_setup_ext(char *spec)
static void __init atafb_setup_int(char *spec)
static void __init atafb_setup_mcap(char *spec)
static void __init atafb_setup_user(char *spec)
int __init atafb_setup(char *options)
int __init atafb_init(void)
module_init(atafb_init);
MODULE_LICENSE("GPL");
int cleanup_module(void)
