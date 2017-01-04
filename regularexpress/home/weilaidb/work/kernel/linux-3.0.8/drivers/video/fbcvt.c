#define FB_CVT_CELLSIZE               8
#define FB_CVT_GTF_C                 40
#define FB_CVT_GTF_J                 20
#define FB_CVT_GTF_K                128
#define FB_CVT_GTF_M                600
#define FB_CVT_MIN_VSYNC_BP         550
#define FB_CVT_MIN_VPORCH             3
#define FB_CVT_MIN_BPORCH             6
#define FB_CVT_RB_MIN_VBLANK        460
#define FB_CVT_RB_HBLANK            160
#define FB_CVT_RB_V_FPORCH            3
#define FB_CVT_FLAG_REDUCED_BLANK 1
#define FB_CVT_FLAG_MARGINS       2
#define FB_CVT_FLAG_INTERLACED    4
struct fb_cvt_data ;
static const unsigned char fb_cvt_vbi_tab[] = ;
static u32 fb_cvt_hperiod(struct fb_cvt_data *cvt)
static u32 fb_cvt_ideal_duty_cycle(struct fb_cvt_data *cvt)
static u32 fb_cvt_hblank(struct fb_cvt_data *cvt)
static u32 fb_cvt_hsync(struct fb_cvt_data *cvt)
static u32 fb_cvt_vbi_lines(struct fb_cvt_data *cvt)
static u32 fb_cvt_vtotal(struct fb_cvt_data *cvt)
static u32 fb_cvt_pixclock(struct fb_cvt_data *cvt)
static u32 fb_cvt_aspect_ratio(struct fb_cvt_data *cvt)
static void fb_cvt_print_name(struct fb_cvt_data *cvt)
static void fb_cvt_convert_to_mode(struct fb_cvt_data *cvt,
struct fb_videomode *mode)
int fb_find_mode_cvt(struct fb_videomode *mode, int margins, int rb)
