#define PFP_UCODE_SIZE 576
#define PM4_UCODE_SIZE 1792
#define RLC_UCODE_SIZE 768
#define R700_PFP_UCODE_SIZE 848
#define R700_PM4_UCODE_SIZE 1360
#define R700_RLC_UCODE_SIZE 1024
#define EVERGREEN_PFP_UCODE_SIZE 1120
#define EVERGREEN_PM4_UCODE_SIZE 1376
#define EVERGREEN_RLC_UCODE_SIZE 768
#define CAYMAN_RLC_UCODE_SIZE 1024
MODULE_FIRMWARE("radeon/R600_pfp.bin");
MODULE_FIRMWARE("radeon/R600_me.bin");
MODULE_FIRMWARE("radeon/RV610_pfp.bin");
MODULE_FIRMWARE("radeon/RV610_me.bin");
MODULE_FIRMWARE("radeon/RV630_pfp.bin");
MODULE_FIRMWARE("radeon/RV630_me.bin");
MODULE_FIRMWARE("radeon/RV620_pfp.bin");
MODULE_FIRMWARE("radeon/RV620_me.bin");
MODULE_FIRMWARE("radeon/RV635_pfp.bin");
MODULE_FIRMWARE("radeon/RV635_me.bin");
MODULE_FIRMWARE("radeon/RV670_pfp.bin");
MODULE_FIRMWARE("radeon/RV670_me.bin");
MODULE_FIRMWARE("radeon/RS780_pfp.bin");
MODULE_FIRMWARE("radeon/RS780_me.bin");
MODULE_FIRMWARE("radeon/RV770_pfp.bin");
MODULE_FIRMWARE("radeon/RV770_me.bin");
MODULE_FIRMWARE("radeon/RV730_pfp.bin");
MODULE_FIRMWARE("radeon/RV730_me.bin");
MODULE_FIRMWARE("radeon/RV710_pfp.bin");
MODULE_FIRMWARE("radeon/RV710_me.bin");
MODULE_FIRMWARE("radeon/R600_rlc.bin");
MODULE_FIRMWARE("radeon/R700_rlc.bin");
MODULE_FIRMWARE("radeon/CEDAR_pfp.bin");
MODULE_FIRMWARE("radeon/CEDAR_me.bin");
MODULE_FIRMWARE("radeon/CEDAR_rlc.bin");
MODULE_FIRMWARE("radeon/REDWOOD_pfp.bin");
MODULE_FIRMWARE("radeon/REDWOOD_me.bin");
MODULE_FIRMWARE("radeon/REDWOOD_rlc.bin");
MODULE_FIRMWARE("radeon/JUNIPER_pfp.bin");
MODULE_FIRMWARE("radeon/JUNIPER_me.bin");
MODULE_FIRMWARE("radeon/JUNIPER_rlc.bin");
MODULE_FIRMWARE("radeon/CYPRESS_pfp.bin");
MODULE_FIRMWARE("radeon/CYPRESS_me.bin");
MODULE_FIRMWARE("radeon/CYPRESS_rlc.bin");
MODULE_FIRMWARE("radeon/PALM_pfp.bin");
MODULE_FIRMWARE("radeon/PALM_me.bin");
MODULE_FIRMWARE("radeon/SUMO_rlc.bin");
MODULE_FIRMWARE("radeon/SUMO_pfp.bin");
MODULE_FIRMWARE("radeon/SUMO_me.bin");
MODULE_FIRMWARE("radeon/SUMO2_pfp.bin");
MODULE_FIRMWARE("radeon/SUMO2_me.bin");
int r600_debugfs_mc_info_init(struct radeon_device *rdev);
int r600_mc_wait_for_idle(struct radeon_device *rdev);
void r600_gpu_init(struct radeon_device *rdev);
void r600_fini(struct radeon_device *rdev);
void r600_irq_disable(struct radeon_device *rdev);
static void r600_pcie_gen2_enable(struct radeon_device *rdev);
int rv6xx_get_temp(struct radeon_device *rdev)
void r600_pm_get_dynpm_state(struct radeon_device *rdev)
static int r600_pm_get_type_index(struct radeon_device *rdev,
enum radeon_pm_state_type ps_type,
int instance)
void rs780_pm_init_profile(struct radeon_device *rdev)
void r600_pm_init_profile(struct radeon_device *rdev)
void r600_pm_misc(struct radeon_device *rdev)
bool r600_gui_idle(struct radeon_device *rdev)
bool r600_hpd_sense(struct radeon_device *rdev, enum radeon_hpd_id hpd)
void r600_hpd_set_polarity(struct radeon_device *rdev,
enum radeon_hpd_id hpd)
void r600_hpd_init(struct radeon_device *rdev)
void r600_hpd_fini(struct radeon_device *rdev)
void r600_pcie_gart_tlb_flush(struct radeon_device *rdev)
int r600_pcie_gart_init(struct radeon_device *rdev)
int r600_pcie_gart_enable(struct radeon_device *rdev)
void r600_pcie_gart_disable(struct radeon_device *rdev)
void r600_pcie_gart_fini(struct radeon_device *rdev)
void r600_agp_enable(struct radeon_device *rdev)
int r600_mc_wait_for_idle(struct radeon_device *rdev)
static void r600_mc_program(struct radeon_device *rdev)
static void r600_vram_gtt_location(struct radeon_device *rdev, struct radeon_mc *mc)
int r600_mc_init(struct radeon_device *rdev)
int r600_gpu_soft_reset(struct radeon_device *rdev)
bool r600_gpu_is_lockup(struct radeon_device *rdev)
int r600_asic_reset(struct radeon_device *rdev)
static u32 r600_get_tile_pipe_to_backend_map(u32 num_tile_pipes,
u32 num_backends,
u32 backend_disable_mask)
int r600_count_pipe_bits(uint32_t val)
void r600_gpu_init(struct radeon_device *rdev)
u32 r600_pciep_rreg(struct radeon_device *rdev, u32 reg)
void r600_pciep_wreg(struct radeon_device *rdev, u32 reg, u32 v)
void r600_cp_stop(struct radeon_device *rdev)
int r600_init_microcode(struct radeon_device *rdev)
static int r600_cp_load_microcode(struct radeon_device *rdev)
int r600_cp_start(struct radeon_device *rdev)
int r600_cp_resume(struct radeon_device *rdev)
void r600_cp_commit(struct radeon_device *rdev)
void r600_ring_init(struct radeon_device *rdev, unsigned ring_size)
void r600_cp_fini(struct radeon_device *rdev)
void r600_scratch_init(struct radeon_device *rdev)
int r600_ring_test(struct radeon_device *rdev)
void r600_fence_ring_emit(struct radeon_device *rdev,
struct radeon_fence *fence)
int r600_copy_blit(struct radeon_device *rdev,
uint64_t src_offset,
uint64_t dst_offset,
unsigned num_gpu_pages,
struct radeon_fence *fence)
int r600_set_surface_reg(struct radeon_device *rdev, int reg,
uint32_t tiling_flags, uint32_t pitch,
uint32_t offset, uint32_t obj_size)
void r600_clear_surface_reg(struct radeon_device *rdev, int reg)
int r600_startup(struct radeon_device *rdev)
void r600_vga_set_state(struct radeon_device *rdev, bool state)
int r600_resume(struct radeon_device *rdev)
int r600_suspend(struct radeon_device *rdev)
int r600_init(struct radeon_device *rdev)
void r600_fini(struct radeon_device *rdev)
void r600_ring_ib_execute(struct radeon_device *rdev, struct radeon_ib *ib)
int r600_ib_test(struct radeon_device *rdev)
void r600_ih_ring_init(struct radeon_device *rdev, unsigned ring_size)
static int r600_ih_ring_alloc(struct radeon_device *rdev)
static void r600_ih_ring_fini(struct radeon_device *rdev)
void r600_rlc_stop(struct radeon_device *rdev)
static void r600_rlc_start(struct radeon_device *rdev)
static int r600_rlc_init(struct radeon_device *rdev)
static void r600_enable_interrupts(struct radeon_device *rdev)
void r600_disable_interrupts(struct radeon_device *rdev)
static void r600_disable_interrupt_state(struct radeon_device *rdev)
int r600_irq_init(struct radeon_device *rdev)
void r600_irq_suspend(struct radeon_device *rdev)
void r600_irq_fini(struct radeon_device *rdev)
int r600_irq_set(struct radeon_device *rdev)
static inline void r600_irq_ack(struct radeon_device *rdev)
void r600_irq_disable(struct radeon_device *rdev)
static inline u32 r600_get_ih_wptr(struct radeon_device *rdev)
int r600_irq_process(struct radeon_device *rdev)
#if defined(CONFIG_DEBUG_FS)
static int r600_debugfs_cp_ring_info(struct seq_file *m, void *data)
static int r600_debugfs_mc_info(struct seq_file *m, void *data)
static struct drm_info_list r600_mc_info_list[] = ;
int r600_debugfs_mc_info_init(struct radeon_device *rdev)
void r600_ioctl_wait_idle(struct radeon_device *rdev, struct radeon_bo *bo)
void r600_set_pcie_lanes(struct radeon_device *rdev, int lanes)
int r600_get_pcie_lanes(struct radeon_device *rdev)
static void r600_pcie_gen2_enable(struct radeon_device *rdev)
