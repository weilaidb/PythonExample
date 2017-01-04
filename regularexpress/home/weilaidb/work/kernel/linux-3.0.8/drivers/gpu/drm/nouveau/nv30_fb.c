void
nv30_fb_init_tile_region(struct drm_device *dev, int i, uint32_t addr,
uint32_t size, uint32_t pitch, uint32_t flags)
void
nv30_fb_free_tile_region(struct drm_device *dev, int i)
static int
calc_bias(struct drm_device *dev, int k, int i, int j)
static int
calc_ref(struct drm_device *dev, int l, int k, int i)
int
nv30_fb_init(struct drm_device *dev)
void
nv30_fb_takedown(struct drm_device *dev)
