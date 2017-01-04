static struct drm_mm_node *
nv20_fb_alloc_tag(struct drm_device *dev, uint32_t size)
static void
nv20_fb_free_tag(struct drm_device *dev, struct drm_mm_node *mem)
void
nv10_fb_init_tile_region(struct drm_device *dev, int i, uint32_t addr,
uint32_t size, uint32_t pitch, uint32_t flags)
void
nv10_fb_free_tile_region(struct drm_device *dev, int i)
void
nv10_fb_set_tile_region(struct drm_device *dev, int i)
int
nv10_fb_init(struct drm_device *dev)
void
nv10_fb_takedown(struct drm_device *dev)
