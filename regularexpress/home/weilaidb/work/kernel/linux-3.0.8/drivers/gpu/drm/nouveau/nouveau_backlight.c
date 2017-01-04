static int nv40_get_intensity(struct backlight_device *bd)
static int nv40_set_intensity(struct backlight_device *bd)
static const struct backlight_ops nv40_bl_ops = ;
static int nv50_get_intensity(struct backlight_device *bd)
static int nv50_set_intensity(struct backlight_device *bd)
static const struct backlight_ops nv50_bl_ops = ;
static int nouveau_nv40_backlight_init(struct drm_connector *connector)
static int nouveau_nv50_backlight_init(struct drm_connector *connector)
int nouveau_backlight_init(struct drm_connector *connector)
void nouveau_backlight_exit(struct drm_connector *connector)
