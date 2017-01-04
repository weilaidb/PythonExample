#define DEFAULT_MODEDB_INDEX	0
static const struct fb_videomode mac_modedb[] = ;
static const struct mode_map  mac_modes[] = ;
static const struct monitor_map  mac_monitors[] = ;
int mac_vmode_to_var(int vmode, int cmode, struct fb_var_screeninfo *var)
EXPORT_SYMBOL(mac_vmode_to_var);
int mac_var_to_vmode(const struct fb_var_screeninfo *var, int *vmode,
int *cmode)
int mac_map_monitor_sense(int sense)
EXPORT_SYMBOL(mac_map_monitor_sense);
int mac_find_mode(struct fb_var_screeninfo *var, struct fb_info *info,
const char *mode_option, unsigned int default_bpp)
EXPORT_SYMBOL(mac_find_mode);
MODULE_LICENSE("GPL");
