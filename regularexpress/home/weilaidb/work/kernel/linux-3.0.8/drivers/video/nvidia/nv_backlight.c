#define MIN_LEVEL 0x158
#define MAX_LEVEL 0x534
#define LEVEL_STEP ((MAX_LEVEL - MIN_LEVEL) / FB_BACKLIGHT_MAX)
static int nvidia_bl_get_level_brightness(struct nvidia_par *par,
int level)
static int nvidia_bl_update_status(struct backlight_device *bd)
static int nvidia_bl_get_brightness(struct backlight_device *bd)
static const struct backlight_ops nvidia_bl_ops = ;
void nvidia_bl_init(struct nvidia_par *par)
void nvidia_bl_exit(struct nvidia_par *par)
