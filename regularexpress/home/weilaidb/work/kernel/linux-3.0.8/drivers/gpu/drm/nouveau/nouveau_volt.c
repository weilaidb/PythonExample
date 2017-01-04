static const enum dcb_gpio_tag vidtag[] = ;
static int nr_vidtag = sizeof(vidtag) / sizeof(vidtag[0]);
int
nouveau_voltage_gpio_get(struct drm_device *dev)
int
nouveau_voltage_gpio_set(struct drm_device *dev, int voltage)
int
nouveau_volt_vid_lookup(struct drm_device *dev, int voltage)
int
nouveau_volt_lvl_lookup(struct drm_device *dev, int vid)
void
nouveau_volt_init(struct drm_device *dev)
void
nouveau_volt_fini(struct drm_device *dev)
