#define __NOUVEAU_PM_H__
int  nouveau_pm_init(struct drm_device *dev);
void nouveau_pm_fini(struct drm_device *dev);
void nouveau_pm_resume(struct drm_device *dev);
void nouveau_volt_init(struct drm_device *);
void nouveau_volt_fini(struct drm_device *);
int  nouveau_volt_vid_lookup(struct drm_device *, int voltage);
int  nouveau_volt_lvl_lookup(struct drm_device *, int vid);
int  nouveau_voltage_gpio_get(struct drm_device *);
int  nouveau_voltage_gpio_set(struct drm_device *, int voltage);
void nouveau_perf_init(struct drm_device *);
void nouveau_perf_fini(struct drm_device *);
void nouveau_mem_timing_init(struct drm_device *);
void nouveau_mem_timing_fini(struct drm_device *);
int nv04_pm_clock_get(struct drm_device *, u32 id);
void *nv04_pm_clock_pre(struct drm_device *, struct nouveau_pm_level *,
u32 id, int khz);
void nv04_pm_clock_set(struct drm_device *, void *);
int nv50_pm_clock_get(struct drm_device *, u32 id);
void *nv50_pm_clock_pre(struct drm_device *, struct nouveau_pm_level *,
u32 id, int khz);
void nv50_pm_clock_set(struct drm_device *, void *);
int nva3_pm_clock_get(struct drm_device *, u32 id);
void *nva3_pm_clock_pre(struct drm_device *, struct nouveau_pm_level *,
u32 id, int khz);
void nva3_pm_clock_set(struct drm_device *, void *);
void nouveau_temp_init(struct drm_device *dev);
void nouveau_temp_fini(struct drm_device *dev);
void nouveau_temp_safety_checks(struct drm_device *dev);
int nv40_temp_get(struct drm_device *dev);
int nv84_temp_get(struct drm_device *dev);
