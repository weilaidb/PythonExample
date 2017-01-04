static struct fb_var_screeninfo radeonfb_default_var = ;
static char *radeon_get_mon_name(int type)
#if defined(CONFIG_PPC_OF) || defined(CONFIG_SPARC)
static int __devinit radeon_parse_montype_prop(struct device_node *dp, u8 **out_EDID,
int hdno)
static int __devinit radeon_probe_OF_head(struct radeonfb_info *rinfo, int head_no,
u8 **out_EDID)
static int __devinit radeon_get_panel_info_BIOS(struct radeonfb_info *rinfo)
static void __devinit radeon_parse_connector_info(struct radeonfb_info *rinfo)
static int __devinit radeon_crt_is_connected(struct radeonfb_info *rinfo, int is_crt_dac)
static int __devinit radeon_parse_monitor_layout(struct radeonfb_info *rinfo,
const char *monitor_layout)
void __devinit radeon_probe_screens(struct radeonfb_info *rinfo,
const char *monitor_layout, int ignore_edid)
static void radeon_fixup_panel_info(struct radeonfb_info *rinfo)
static void radeon_var_to_panel_info(struct radeonfb_info *rinfo, struct fb_var_screeninfo *var)
static void radeon_videomode_to_var(struct fb_var_screeninfo *var,
const struct fb_videomode *mode)
void __devinit radeon_check_modes(struct radeonfb_info *rinfo, const char *mode_option)
static int radeon_compare_modes(const struct fb_var_screeninfo *var,
const struct fb_videomode *mode)
int  radeon_match_mode(struct radeonfb_info *rinfo,
struct fb_var_screeninfo *dest,
const struct fb_var_screeninfo *src)
