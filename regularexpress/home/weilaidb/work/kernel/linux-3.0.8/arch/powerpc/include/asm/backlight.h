#define __ASM_POWERPC_BACKLIGHT_H
extern struct backlight_device *pmac_backlight;
extern struct mutex pmac_backlight_mutex;
extern int pmac_backlight_curve_lookup(struct fb_info *info, int value);
extern int pmac_has_backlight_type(const char *type);
extern void pmac_backlight_key(int direction);
static inline void pmac_backlight_key_up(void)
static inline void pmac_backlight_key_down(void)
extern void pmac_backlight_set_legacy_brightness_pmu(int brightness);
extern int pmac_backlight_set_legacy_brightness(int brightness);
extern int pmac_backlight_get_legacy_brightness(void);
extern void pmac_backlight_enable(void);
extern void pmac_backlight_disable(void);
