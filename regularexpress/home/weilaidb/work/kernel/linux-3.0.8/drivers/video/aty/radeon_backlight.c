#define MAX_RADEON_LEVEL 0xFF
struct radeon_bl_privdata ;
static int radeon_bl_get_level_brightness(struct radeon_bl_privdata *pdata,
int level)
static int radeon_bl_update_status(struct backlight_device *bd)
static int radeon_bl_get_brightness(struct backlight_device *bd)
static const struct backlight_ops radeon_bl_data = ;
void radeonfb_bl_init(struct radeonfb_info *rinfo)
void radeonfb_bl_exit(struct radeonfb_info *rinfo)
