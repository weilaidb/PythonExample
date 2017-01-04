#define DEBUG
#if !defined(CONFIG_FB_AMIGA_OCS) && !defined(CONFIG_FB_AMIGA_ECS) && !defined(CONFIG_FB_AMIGA_AGA)
#define CONFIG_FB_AMIGA_OCS
#if !defined(CONFIG_FB_AMIGA_OCS)
#  define IS_OCS (0)
#elif defined(CONFIG_FB_AMIGA_ECS) || defined(CONFIG_FB_AMIGA_AGA)
#  define IS_OCS (chipset == TAG_OCS)
#  define CONFIG_FB_AMIGA_OCS_ONLY
#  define IS_OCS (1)
#if !defined(CONFIG_FB_AMIGA_ECS)
#  define IS_ECS (0)
#elif defined(CONFIG_FB_AMIGA_OCS) || defined(CONFIG_FB_AMIGA_AGA)
#  define IS_ECS (chipset == TAG_ECS)
#  define CONFIG_FB_AMIGA_ECS_ONLY
#  define IS_ECS (1)
#if !defined(CONFIG_FB_AMIGA_AGA)
#  define IS_AGA (0)
#elif defined(CONFIG_FB_AMIGA_OCS) || defined(CONFIG_FB_AMIGA_ECS)
#  define IS_AGA (chipset == TAG_AGA)
#  define CONFIG_FB_AMIGA_AGA_ONLY
#  define IS_AGA (1)
#  define DPRINTK(fmt, args...)	printk(KERN_DEBUG "%s: " fmt, __func__ , ## args)
#  define DPRINTK(fmt, args...)
#define CUSTOM_OFS(fld) ((long)&((struct CUSTOM*)0)->fld)
#define BPC0_HIRES	(0x8000)
#define BPC0_BPU2	(0x4000)
#define BPC0_BPU1	(0x2000)
#define BPC0_BPU0	(0x1000)
#define BPC0_HAM	(0x0800)
#define BPC0_DPF	(0x0400)
#define BPC0_COLOR	(0x0200)
#define BPC0_GAUD	(0x0100)
#define BPC0_UHRES	(0x0080)
#define BPC0_SHRES	(0x0040)
#define BPC0_BYPASS	(0x0020)
#define BPC0_BPU3	(0x0010)
#define BPC0_LPEN	(0x0008)
#define BPC0_LACE	(0x0004)
#define BPC0_ERSY	(0x0002)
#define BPC0_ECSENA	(0x0001)
#define BPC2_ZDBPSEL2	(0x4000)
#define BPC2_ZDBPSEL1	(0x2000)
#define BPC2_ZDBPSEL0	(0x1000)
#define BPC2_ZDBPEN	(0x0800)
#define BPC2_ZDCTEN	(0x0400)
#define BPC2_KILLEHB	(0x0200)
#define BPC2_RDRAM	(0x0100)
#define BPC2_SOGEN	(0x0080)
#define BPC2_PF2PRI	(0x0040)
#define BPC2_PF2P2	(0x0020)
#define BPC2_PF2P1	(0x0010)
#define BPC2_PF2P0	(0x0008)
#define BPC2_PF1P2	(0x0004)
#define BPC2_PF1P1	(0x0002)
#define BPC2_PF1P0	(0x0001)
#define BPC3_BANK2	(0x8000)
#define BPC3_BANK1	(0x4000)
#define BPC3_BANK0	(0x2000)
#define BPC3_PF2OF2	(0x1000)
#define BPC3_PF2OF1	(0x0800)
#define BPC3_PF2OF0	(0x0400)
#define BPC3_LOCT	(0x0200)
#define BPC3_SPRES1	(0x0080)
#define BPC3_SPRES0	(0x0040)
#define BPC3_BRDRBLNK	(0x0020)
#define BPC3_BRDRTRAN	(0x0010)
#define BPC3_ZDCLKEN	(0x0004)
#define BPC3_BRDRSPRT	(0x0002)
#define BPC3_EXTBLKEN	(0x0001)
#define BPC4_BPLAM7	(0x8000)
#define BPC4_BPLAM6	(0x4000)
#define BPC4_BPLAM5	(0x2000)
#define BPC4_BPLAM4	(0x1000)
#define BPC4_BPLAM3	(0x0800)
#define BPC4_BPLAM2	(0x0400)
#define BPC4_BPLAM1	(0x0200)
#define BPC4_BPLAM0	(0x0100)
#define BPC4_ESPRM7	(0x0080)
#define BPC4_ESPRM6	(0x0040)
#define BPC4_ESPRM5	(0x0020)
#define BPC4_ESPRM4	(0x0010)
#define BPC4_OSPRM7	(0x0008)
#define BPC4_OSPRM6	(0x0004)
#define BPC4_OSPRM5	(0x0002)
#define BPC4_OSPRM4	(0x0001)
#define BMC0_HARDDIS	(0x4000)
#define BMC0_LPENDIS	(0x2000)
#define BMC0_VARVBEN	(0x1000)
#define BMC0_LOLDIS	(0x0800)
#define BMC0_CSCBEN	(0x0400)
#define BMC0_VARVSYEN	(0x0200)
#define BMC0_VARHSYEN	(0x0100)
#define BMC0_VARBEAMEN	(0x0080)
#define BMC0_DUAL	(0x0040)
#define BMC0_PAL	(0x0020)
#define BMC0_VARCSYEN	(0x0010)
#define BMC0_BLANKEN	(0x0008)
#define BMC0_CSYTRUE	(0x0004)
#define BMC0_VSYTRUE	(0x0002)
#define BMC0_HSYTRUE	(0x0001)
#define FMODE_SSCAN2	(0x8000)
#define FMODE_BSCAN2	(0x4000)
#define FMODE_SPAGEM	(0x0008)
#define FMODE_SPR32	(0x0004)
#define FMODE_BPAGEM	(0x0002)
#define FMODE_BPL32	(0x0001)
enum ;
enum ;
enum ;
static u_long pixclock[3];
static u_short maxdepth[3];
static u_short maxfmode, chipset;
#define PAL_DIWSTRT_H	(360)
#define PAL_DIWSTRT_V	(48)
#define PAL_HTOTAL	(1816)
#define PAL_VTOTAL	(625)
#define NTSC_DIWSTRT_H	(360)
#define NTSC_DIWSTRT_V	(40)
#define NTSC_HTOTAL	(1816)
#define NTSC_VTOTAL	(525)
#define up2(v)		(((v)+1) & -2)
#define down2(v)	((v) & -2)
#define div2(v)		((v)>>1)
#define mod2(v)		((v) & 1)
#define up4(v)		(((v)+3) & -4)
#define down4(v)	((v) & -4)
#define mul4(v)		((v)<<2)
#define div4(v)		((v)>>2)
#define mod4(v)		((v) & 3)
#define up8(v)		(((v)+7) & -8)
#define down8(v)	((v) & -8)
#define div8(v)		((v)>>3)
#define mod8(v)		((v) & 7)
#define up16(v)		(((v)+15) & -16)
#define down16(v)	((v) & -16)
#define div16(v)	((v)>>4)
#define mod16(v)	((v) & 15)
#define up32(v)		(((v)+31) & -32)
#define down32(v)	((v) & -32)
#define div32(v)	((v)>>5)
#define mod32(v)	((v) & 31)
#define up64(v)		(((v)+63) & -64)
#define down64(v)	((v) & -64)
#define div64(v)	((v)>>6)
#define mod64(v)	((v) & 63)
#define upx(x,v)	(((v)+(x)-1) & -(x))
#define downx(x,v)	((v) & -(x))
#define modx(x,v)	((v) & ((x)-1))
#define DIVUL(x1, x2) ()
#define DIVUL(x1, x2) ((((long)((unsigned long long)x1 >> 8) / x2) << 8) + \
((((long)((unsigned long long)x1 >> 8) % x2) << 8) / x2))
#define highw(x)	((u_long)(x)>>16 & 0xffff)
#define loww(x)		((u_long)(x) & 0xffff)
#define custom		amiga_custom
#define VBlankOn()	custom.intena = IF_SETCLR|IF_COPER
#define VBlankOff()	custom.intena = IF_COPER
#define VIDEOMEMSIZE_AGA_2M	(1310720)
#define VIDEOMEMSIZE_AGA_1M	(786432)
#define VIDEOMEMSIZE_ECS_2M	(655360)
#define VIDEOMEMSIZE_ECS_1M	(393216)
#define VIDEOMEMSIZE_OCS	(262144)
#define SPRITEMEMSIZE		(64*64/4)
#define DUMMYSPRITEMEMSIZE	(8)
static u_long spritememory;
#define CHIPRAM_SAFETY_LIMIT	(16384)
static u_long videomemory;
static u_long min_fstrt = 192;
#define assignchunk(name, type, ptr, size) \
#define CMOVE(val, reg)		(CUSTOM_OFS(reg)<<16 | (val))
#define CMOVE2(val, reg)	((CUSTOM_OFS(reg)+2)<<16 | (val))
#define CWAIT(x, y)		(((y) & 0x1fe)<<23 | ((x) & 0x7f0)<<13 | 0x0001fffe)
#define CEND			(0xfffffffe)
typedef union  copins;
static struct copdisplay  copdisplay;
static u_short currentcop = 0;
#define FBIOGET_FCURSORINFO     0x4607
#define FBIOGET_VCURSORINFO     0x4608
#define FBIOPUT_VCURSORINFO     0x4609
#define FBIOGET_CURSORSTATE     0x460A
#define FBIOPUT_CURSORSTATE     0x460B
struct fb_fix_cursorinfo ;
struct fb_var_cursorinfo ;
struct fb_cursorstate ;
#define FB_CURSOR_OFF		0
#define FB_CURSOR_ON		1
#define FB_CURSOR_FLASH		2
static int cursorrate = 20;
static u_short cursorstate = -1;
static u_short cursormode = FB_CURSOR_OFF;
static u_short *lofsprite, *shfsprite, *dummysprite;
static struct amifb_par  currentpar;
static struct fb_info fb_info = ;
static u_char red0, green0, blue0;
#if defined(CONFIG_FB_AMIGA_ECS)
static u_short ecs_palette[32];
static u_short do_vmode_full = 0;
static u_short do_vmode_pan = 0;
static short do_blank = 0;
static u_short do_cursor = 0;
static u_short is_blanked = 0;
static u_short is_lace = 0;
static struct fb_videomode ami_modedb[] __initdata = ;
#define NUM_TOTAL_MODES  ARRAY_SIZE(ami_modedb)
static char *mode_option __initdata = NULL;
static int round_down_bpp = 1;
#define DEFMODE_PAL	    2
#define DEFMODE_NTSC	    0
#define DEFMODE_AMBER_PAL   3
#define DEFMODE_AMBER_NTSC  1
#define DEFMODE_AGA	    19
static int amifb_ilbm = 0;
static int amifb_inverse = 0;
#define hscroll2hw(hscroll) \
(((hscroll)<<12 & 0x3000) | ((hscroll)<<8 & 0xc300) | \
((hscroll)<<4 & 0x0c00) | ((hscroll)<<2 & 0x00f0) | ((hscroll)>>2 & 0x000f))
#define diwstrt2hw(diwstrt_h, diwstrt_v) \
(((diwstrt_v)<<7 & 0xff00) | ((diwstrt_h)>>2 & 0x00ff))
#define diwstop2hw(diwstop_h, diwstop_v) \
(((diwstop_v)<<7 & 0xff00) | ((diwstop_h)>>2 & 0x00ff))
#define diwhigh2hw(diwstrt_h, diwstrt_v, diwstop_h, diwstop_v) \
(((diwstop_h)<<3 & 0x2000) | ((diwstop_h)<<11 & 0x1800) | \
((diwstop_v)>>1 & 0x0700) | ((diwstrt_h)>>5 & 0x0020) | \
((diwstrt_h)<<3 & 0x0018) | ((diwstrt_v)>>9 & 0x0007))
#define ddfstrt2hw(ddfstrt)	div8(ddfstrt)
#define ddfstop2hw(ddfstop)	div8(ddfstop)
#define hsstrt2hw(hsstrt)	(div8(hsstrt))
#define hsstop2hw(hsstop)	(div8(hsstop))
#define htotal2hw(htotal)	(div8(htotal)-1)
#define vsstrt2hw(vsstrt)	(div2(vsstrt))
#define vsstop2hw(vsstop)	(div2(vsstop))
#define vtotal2hw(vtotal)	(div2(vtotal)-1)
#define hcenter2hw(htotal)	(div8(htotal))
#define hbstrt2hw(hbstrt)	(((hbstrt)<<8 & 0x0700) | ((hbstrt)>>3 & 0x00ff))
#define hbstop2hw(hbstop)	(((hbstop)<<8 & 0x0700) | ((hbstop)>>3 & 0x00ff))
#define vbstrt2hw(vbstrt)	(div2(vbstrt))
#define vbstop2hw(vbstop)	(div2(vbstop))
#define rgb2hw8_high(red, green, blue) \
(((red & 0xf0)<<4) | (green & 0xf0) | ((blue & 0xf0)>>4))
#define rgb2hw8_low(red, green, blue) \
(((red & 0x0f)<<8) | ((green & 0x0f)<<4) | (blue & 0x0f))
#define rgb2hw4(red, green, blue) \
(((red & 0xf0)<<4) | (green & 0xf0) | ((blue & 0xf0)>>4))
#define rgb2hw2(red, green, blue) \
(((red & 0xc0)<<4) | (green & 0xc0) | ((blue & 0xc0)>>4))
#define spr2hw_pos(start_v, start_h) \
(((start_v)<<7&0xff00) | ((start_h)>>3&0x00ff))
#define spr2hw_ctl(start_v, start_h, stop_v) \
(((stop_v)<<7&0xff00) | ((start_v)>>4&0x0040) | ((stop_v)>>5&0x0020) | \
((start_h)<<3&0x0018) | ((start_v)>>7&0x0004) | ((stop_v)>>8&0x0002) | \
((start_h)>>2&0x0001))
#define get_vbpos()	((u_short)((*(u_long volatile *)&custom.vposr >> 7) & 0xffe))
#define COPINITSIZE (sizeof(copins)*40)
enum ;
#define COPLISTSIZE (sizeof(copins)*64)
enum ;
static u_short bplpixmode[3] = ;
static u_short sprpixmode[3] = ;
static u_short bplfetchmode[3] = ;
static u_short sprfetchmode[3] = ;
int amifb_setup(char*);
static int amifb_check_var(struct fb_var_screeninfo *var,
struct fb_info *info);
static int amifb_set_par(struct fb_info *info);
static int amifb_setcolreg(unsigned regno, unsigned red, unsigned green,
unsigned blue, unsigned transp,
struct fb_info *info);
static int amifb_blank(int blank, struct fb_info *info);
static int amifb_pan_display(struct fb_var_screeninfo *var,
struct fb_info *info);
static void amifb_fillrect(struct fb_info *info,
const struct fb_fillrect *rect);
static void amifb_copyarea(struct fb_info *info,
const struct fb_copyarea *region);
static void amifb_imageblit(struct fb_info *info,
const struct fb_image *image);
static int amifb_ioctl(struct fb_info *info, unsigned int cmd, unsigned long arg);
static void amifb_deinit(struct platform_device *pdev);
static int flash_cursor(void);
static irqreturn_t amifb_interrupt(int irq, void *dev_id);
static u_long chipalloc(u_long size);
static void chipfree(void);
static int ami_decode_var(struct fb_var_screeninfo *var,
struct amifb_par *par);
static int ami_encode_var(struct fb_var_screeninfo *var,
struct amifb_par *par);
static void ami_pan_var(struct fb_var_screeninfo *var);
static int ami_update_par(void);
static void ami_update_display(void);
static void ami_init_display(void);
static void ami_do_blank(void);
static int ami_get_fix_cursorinfo(struct fb_fix_cursorinfo *fix);
static int ami_get_var_cursorinfo(struct fb_var_cursorinfo *var, u_char __user *data);
static int ami_set_var_cursorinfo(struct fb_var_cursorinfo *var, u_char __user *data);
static int ami_get_cursorstate(struct fb_cursorstate *state);
static int ami_set_cursorstate(struct fb_cursorstate *state);
static void ami_set_sprite(void);
static void ami_init_copper(void);
static void ami_reinit_copper(void);
static void ami_build_copper(void);
static void ami_rebuild_copper(void);
static struct fb_ops amifb_ops = ;
static void __init amifb_setup_mcap(char *spec)
int __init amifb_setup(char *options)
static int amifb_check_var(struct fb_var_screeninfo *var,
struct fb_info *info)
static int amifb_set_par(struct fb_info *info)
static int amifb_pan_display(struct fb_var_screeninfo *var,
struct fb_info *info)
#if BITS_PER_LONG == 32
#define BYTES_PER_LONG	4
#define SHIFT_PER_LONG	5
#elif BITS_PER_LONG == 64
#define BYTES_PER_LONG	8
#define SHIFT_PER_LONG	6
#define Please update me
static inline unsigned long comp(unsigned long a, unsigned long b,
unsigned long mask)
static inline unsigned long xor(unsigned long a, unsigned long b,
unsigned long mask)
static void bitcpy(unsigned long *dst, int dst_idx, const unsigned long *src,
int src_idx, u32 n)
static void bitcpy_rev(unsigned long *dst, int dst_idx,
const unsigned long *src, int src_idx, u32 n)
static void bitcpy_not(unsigned long *dst, int dst_idx,
const unsigned long *src, int src_idx, u32 n)
static void bitfill32(unsigned long *dst, int dst_idx, u32 pat, u32 n)
static void bitxor32(unsigned long *dst, int dst_idx, u32 pat, u32 n)
static inline void fill_one_line(int bpp, unsigned long next_plane,
unsigned long *dst, int dst_idx, u32 n,
u32 color)
static inline void xor_one_line(int bpp, unsigned long next_plane,
unsigned long *dst, int dst_idx, u32 n,
u32 color)
static void amifb_fillrect(struct fb_info *info,
const struct fb_fillrect *rect)
static inline void copy_one_line(int bpp, unsigned long next_plane,
unsigned long *dst, int dst_idx,
unsigned long *src, int src_idx, u32 n)
static inline void copy_one_line_rev(int bpp, unsigned long next_plane,
unsigned long *dst, int dst_idx,
unsigned long *src, int src_idx, u32 n)
static void amifb_copyarea(struct fb_info *info,
const struct fb_copyarea *area)
static inline void expand_one_line(int bpp, unsigned long next_plane,
unsigned long *dst, int dst_idx, u32 n,
const u8 *data, u32 bgcolor, u32 fgcolor)
static void amifb_imageblit(struct fb_info *info, const struct fb_image *image)
static int amifb_ioctl(struct fb_info *info,
unsigned int cmd, unsigned long arg)
static void *aligned_chipptr;
static inline u_long __init chipalloc(u_long size)
static inline void chipfree(void)
static int __init amifb_probe(struct platform_device *pdev)
static void amifb_deinit(struct platform_device *pdev)
static int amifb_blank(int blank, struct fb_info *info)
static int flash_cursor(void)
static irqreturn_t amifb_interrupt(int irq, void *dev_id)
static int ami_decode_var(struct fb_var_screeninfo *var,
struct amifb_par *par)
static int ami_encode_var(struct fb_var_screeninfo *var,
struct amifb_par *par)
static void ami_pan_var(struct fb_var_screeninfo *var)
static int ami_update_par(void)
static int amifb_setcolreg(u_int regno, u_int red, u_int green, u_int blue,
u_int transp, struct fb_info *info)
static void ami_update_display(void)
static void ami_init_display(void)
static void ami_do_blank(void)
static int ami_get_fix_cursorinfo(struct fb_fix_cursorinfo *fix)
static int ami_get_var_cursorinfo(struct fb_var_cursorinfo *var, u_char __user *data)
static int ami_set_var_cursorinfo(struct fb_var_cursorinfo *var, u_char __user *data)
static int ami_get_cursorstate(struct fb_cursorstate *state)
static int ami_set_cursorstate(struct fb_cursorstate *state)
static void ami_set_sprite(void)
static void __init ami_init_copper(void)
static void ami_reinit_copper(void)
static void ami_build_copper(void)
static void ami_rebuild_copper(void)
static int __exit amifb_remove(struct platform_device *pdev)
static struct platform_driver amifb_driver = ;
static int __init amifb_init(void)
module_init(amifb_init);
static void __exit amifb_exit(void)
module_exit(amifb_exit);
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:amiga-video");
