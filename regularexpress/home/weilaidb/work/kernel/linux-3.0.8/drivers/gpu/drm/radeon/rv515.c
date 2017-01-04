int rv515_debugfs_pipes_info_init(struct radeon_device *rdev);
int rv515_debugfs_ga_info_init(struct radeon_device *rdev);
void rv515_gpu_init(struct radeon_device *rdev);
int rv515_mc_wait_for_idle(struct radeon_device *rdev);
void rv515_debugfs(struct radeon_device *rdev)
void rv515_ring_start(struct radeon_device *rdev)
int rv515_mc_wait_for_idle(struct radeon_device *rdev)
void rv515_vga_render_disable(struct radeon_device *rdev)
void rv515_gpu_init(struct radeon_device *rdev)
static void rv515_vram_get_type(struct radeon_device *rdev)
void rv515_mc_init(struct radeon_device *rdev)
uint32_t rv515_mc_rreg(struct radeon_device *rdev, uint32_t reg)
void rv515_mc_wreg(struct radeon_device *rdev, uint32_t reg, uint32_t v)
#if defined(CONFIG_DEBUG_FS)
static int rv515_debugfs_pipes_info(struct seq_file *m, void *data)
static int rv515_debugfs_ga_info(struct seq_file *m, void *data)
static struct drm_info_list rv515_pipes_info_list[] = ;
static struct drm_info_list rv515_ga_info_list[] = ;
int rv515_debugfs_pipes_info_init(struct radeon_device *rdev)
int rv515_debugfs_ga_info_init(struct radeon_device *rdev)
void rv515_mc_stop(struct radeon_device *rdev, struct rv515_mc_save *save)
void rv515_mc_resume(struct radeon_device *rdev, struct rv515_mc_save *save)
void rv515_mc_program(struct radeon_device *rdev)
void rv515_clock_startup(struct radeon_device *rdev)
static int rv515_startup(struct radeon_device *rdev)
int rv515_resume(struct radeon_device *rdev)
int rv515_suspend(struct radeon_device *rdev)
void rv515_set_safe_registers(struct radeon_device *rdev)
void rv515_fini(struct radeon_device *rdev)
int rv515_init(struct radeon_device *rdev)
void atom_rv515_force_tv_scaler(struct radeon_device *rdev, struct radeon_crtc *crtc)
struct rv515_watermark ;
void rv515_crtc_bandwidth_compute(struct radeon_device *rdev,
struct radeon_crtc *crtc,
struct rv515_watermark *wm)
void rv515_bandwidth_avivo_update(struct radeon_device *rdev)
void rv515_bandwidth_update(struct radeon_device *rdev)
