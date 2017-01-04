static int rs690_mc_wait_for_idle(struct radeon_device *rdev)
static void rs690_gpu_init(struct radeon_device *rdev)
union igp_info ;
void rs690_pm_info(struct radeon_device *rdev)
void rs690_mc_init(struct radeon_device *rdev)
void rs690_line_buffer_adjust(struct radeon_device *rdev,
struct drm_display_mode *mode1,
struct drm_display_mode *mode2)
struct rs690_watermark ;
void rs690_crtc_bandwidth_compute(struct radeon_device *rdev,
struct radeon_crtc *crtc,
struct rs690_watermark *wm)
void rs690_bandwidth_update(struct radeon_device *rdev)
uint32_t rs690_mc_rreg(struct radeon_device *rdev, uint32_t reg)
void rs690_mc_wreg(struct radeon_device *rdev, uint32_t reg, uint32_t v)
void rs690_mc_program(struct radeon_device *rdev)
static int rs690_startup(struct radeon_device *rdev)
int rs690_resume(struct radeon_device *rdev)
int rs690_suspend(struct radeon_device *rdev)
void rs690_fini(struct radeon_device *rdev)
int rs690_init(struct radeon_device *rdev)
