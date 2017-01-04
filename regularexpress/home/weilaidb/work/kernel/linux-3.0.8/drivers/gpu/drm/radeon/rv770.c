#define R700_PFP_UCODE_SIZE 848
#define R700_PM4_UCODE_SIZE 1360
static void rv770_gpu_init(struct radeon_device *rdev);
void rv770_fini(struct radeon_device *rdev);
static void rv770_pcie_gen2_enable(struct radeon_device *rdev);
u32 rv770_page_flip(struct radeon_device *rdev, int crtc_id, u64 crtc_base)
int rv770_get_temp(struct radeon_device *rdev)
void rv770_pm_misc(struct radeon_device *rdev)
int rv770_pcie_gart_enable(struct radeon_device *rdev)
void rv770_pcie_gart_disable(struct radeon_device *rdev)
void rv770_pcie_gart_fini(struct radeon_device *rdev)
void rv770_agp_enable(struct radeon_device *rdev)
static void rv770_mc_program(struct radeon_device *rdev)
void r700_cp_stop(struct radeon_device *rdev)
static int rv770_cp_load_microcode(struct radeon_device *rdev)
void r700_cp_fini(struct radeon_device *rdev)
static u32 r700_get_tile_pipe_to_backend_map(struct radeon_device *rdev,
u32 num_tile_pipes,
u32 num_backends,
u32 backend_disable_mask)
static void rv770_gpu_init(struct radeon_device *rdev)
static int rv770_vram_scratch_init(struct radeon_device *rdev)
static void rv770_vram_scratch_fini(struct radeon_device *rdev)
void r700_vram_gtt_location(struct radeon_device *rdev, struct radeon_mc *mc)
int rv770_mc_init(struct radeon_device *rdev)
static int rv770_startup(struct radeon_device *rdev)
int rv770_resume(struct radeon_device *rdev)
int rv770_suspend(struct radeon_device *rdev)
int rv770_init(struct radeon_device *rdev)
void rv770_fini(struct radeon_device *rdev)
static void rv770_pcie_gen2_enable(struct radeon_device *rdev)
