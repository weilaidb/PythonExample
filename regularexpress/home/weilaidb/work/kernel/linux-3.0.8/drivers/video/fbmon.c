#undef DEBUG
#define DPRINTK(fmt, args...) printk(fmt,## args)
#define DPRINTK(fmt, args...)
#define FBMON_FIX_HEADER  1
#define FBMON_FIX_INPUT   2
#define FBMON_FIX_TIMINGS 3
struct broken_edid ;
static const struct broken_edid brokendb[] = ;
static const unsigned char edid_v1_header[] = ;
static void copy_string(unsigned char *c, unsigned char *s)
static int edid_is_serial_block(unsigned char *block)
static int edid_is_ascii_block(unsigned char *block)
static int edid_is_limits_block(unsigned char *block)
static int edid_is_monitor_block(unsigned char *block)
static int edid_is_timing_block(unsigned char *block)
static int check_edid(unsigned char *edid)
static void fix_edid(unsigned char *edid, int fix)
static int edid_checksum(unsigned char *edid)
static int edid_check_header(unsigned char *edid)
static void parse_vendor_block(unsigned char *block, struct fb_monspecs *specs)
static void get_dpms_capabilities(unsigned char flags,
struct fb_monspecs *specs)
static void get_chroma(unsigned char *block, struct fb_monspecs *specs)
static void calc_mode_timings(int xres, int yres, int refresh,
struct fb_videomode *mode)
static int get_est_timing(unsigned char *block, struct fb_videomode *mode)
static int get_std_timing(unsigned char *block, struct fb_videomode *mode)
static int get_dst_timing(unsigned char *block,
struct fb_videomode *mode)
static void get_detailed_timing(unsigned char *block,
struct fb_videomode *mode)
static struct fb_videomode *fb_create_modedb(unsigned char *edid, int *dbsize)
void fb_destroy_modedb(struct fb_videomode *modedb)
static int fb_get_monitor_limits(unsigned char *edid, struct fb_monspecs *specs)
static void get_monspecs(unsigned char *edid, struct fb_monspecs *specs)
int fb_parse_edid(unsigned char *edid, struct fb_var_screeninfo *var)
void fb_edid_to_monspecs(unsigned char *edid, struct fb_monspecs *specs)
void fb_edid_add_monspecs(unsigned char *edid, struct fb_monspecs *specs)
#define FLYBACK                     550
#define V_FRONTPORCH                1
#define H_OFFSET                    40
#define H_SCALEFACTOR               20
#define H_BLANKSCALE                128
#define H_GRADIENT                  600
#define C_VAL                       30
#define M_VAL                       300
struct __fb_timings ;
static u32 fb_get_vblank(u32 hfreq)
static u32 fb_get_hblank_by_hfreq(u32 hfreq, u32 xres)
static u32 fb_get_hblank_by_dclk(u32 dclk, u32 xres)
static u32 fb_get_hfreq(u32 vfreq, u32 yres)
static void fb_timings_vfreq(struct __fb_timings *timings)
static void fb_timings_hfreq(struct __fb_timings *timings)
static void fb_timings_dclk(struct __fb_timings *timings)
int fb_get_mode(int flags, u32 val, struct fb_var_screeninfo *var, struct fb_info *info)
int fb_parse_edid(unsigned char *edid, struct fb_var_screeninfo *var)
void fb_edid_to_monspecs(unsigned char *edid, struct fb_monspecs *specs)
void fb_edid_add_monspecs(unsigned char *edid, struct fb_monspecs *specs)
void fb_destroy_modedb(struct fb_videomode *modedb)
int fb_get_mode(int flags, u32 val, struct fb_var_screeninfo *var,
struct fb_info *info)
int fb_validate_mode(const struct fb_var_screeninfo *var, struct fb_info *info)
#if defined(CONFIG_FIRMWARE_EDID) && defined(CONFIG_X86)
const unsigned char *fb_firmware_edid(struct device *device)
const unsigned char *fb_firmware_edid(struct device *device)
EXPORT_SYMBOL(fb_firmware_edid);
EXPORT_SYMBOL(fb_parse_edid);
EXPORT_SYMBOL(fb_edid_to_monspecs);
EXPORT_SYMBOL(fb_edid_add_monspecs);
EXPORT_SYMBOL(fb_get_mode);
EXPORT_SYMBOL(fb_validate_mode);
EXPORT_SYMBOL(fb_destroy_modedb);
