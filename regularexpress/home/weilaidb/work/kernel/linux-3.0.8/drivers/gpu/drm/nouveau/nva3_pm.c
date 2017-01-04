struct nva3_pm_state ;
static int
nva3_pm_pll_offset(u32 id)
int
nva3_pm_clock_get(struct drm_device *dev, u32 id)
void *
nva3_pm_clock_pre(struct drm_device *dev, struct nouveau_pm_level *perflvl,
u32 id, int khz)
void
nva3_pm_clock_set(struct drm_device *dev, void *pre_state)
