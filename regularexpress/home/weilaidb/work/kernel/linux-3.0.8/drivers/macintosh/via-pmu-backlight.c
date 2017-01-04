#define MAX_PMU_LEVEL 0xFF
static const struct backlight_ops pmu_backlight_data;
static DEFINE_SPINLOCK(pmu_backlight_lock);
static int sleeping, uses_pmu_bl;
static u8 bl_curve[FB_BACKLIGHT_LEVELS];
static void pmu_backlight_init_curve(u8 off, u8 min, u8 max)
static int pmu_backlight_curve_lookup(int value)
static int pmu_backlight_get_level_brightness(int level)
static int __pmu_backlight_update_status(struct backlight_device *bd)
static int pmu_backlight_update_status(struct backlight_device *bd)
static int pmu_backlight_get_brightness(struct backlight_device *bd)
static const struct backlight_ops pmu_backlight_data = ;
void pmu_backlight_set_sleep(int sleep)
void __init pmu_backlight_init()
