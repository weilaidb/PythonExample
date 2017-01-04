uint32_t radeon_legacy_get_engine_clock(struct radeon_device *rdev)
uint32_t radeon_legacy_get_memory_clock(struct radeon_device *rdev)
static bool __devinit radeon_read_clocks_OF(struct drm_device *dev)
static bool __devinit radeon_read_clocks_OF(struct drm_device *dev)
void radeon_get_clock_info(struct drm_device *dev)
static uint32_t calc_eng_mem_clock(struct radeon_device *rdev,
uint32_t req_clock,
int *fb_div, int *post_div)
void radeon_legacy_set_engine_clock(struct radeon_device *rdev,
uint32_t eng_clock)
void radeon_legacy_set_clock_gating(struct radeon_device *rdev, int enable)
