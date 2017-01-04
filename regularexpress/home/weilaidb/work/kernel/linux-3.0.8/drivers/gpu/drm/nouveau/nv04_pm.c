struct nv04_pm_state ;
int
nv04_pm_clock_get(struct drm_device *dev, u32 id)
void *
nv04_pm_clock_pre(struct drm_device *dev, struct nouveau_pm_level *perflvl,
u32 id, int khz)
void
nv04_pm_clock_set(struct drm_device *dev, void *pre_state)
