extern void evergreen_mc_stop(struct radeon_device *rdev, struct evergreen_mc_save *save);
extern void evergreen_mc_resume(struct radeon_device *rdev, struct evergreen_mc_save *save);
extern int evergreen_mc_wait_for_idle(struct radeon_device *rdev);
extern void evergreen_mc_program(struct radeon_device *rdev);
extern void evergreen_irq_suspend(struct radeon_device *rdev);
extern int evergreen_mc_init(struct radeon_device *rdev);
extern void evergreen_fix_pci_max_read_req_size(struct radeon_device *rdev);
#define EVERGREEN_PFP_UCODE_SIZE 1120
#define EVERGREEN_PM4_UCODE_SIZE 1376
#define EVERGREEN_RLC_UCODE_SIZE 768
#define BTC_MC_UCODE_SIZE 6024
#define CAYMAN_PFP_UCODE_SIZE 2176
#define CAYMAN_PM4_UCODE_SIZE 2176
#define CAYMAN_RLC_UCODE_SIZE 1024
#define CAYMAN_MC_UCODE_SIZE 6037
MODULE_FIRMWARE("radeon/BARTS_pfp.bin");
MODULE_FIRMWARE("radeon/BARTS_me.bin");
MODULE_FIRMWARE("radeon/BARTS_mc.bin");
MODULE_FIRMWARE("radeon/BTC_rlc.bin");
MODULE_FIRMWARE("radeon/TURKS_pfp.bin");
MODULE_FIRMWARE("radeon/TURKS_me.bin");
MODULE_FIRMWARE("radeon/TURKS_mc.bin");
MODULE_FIRMWARE("radeon/CAICOS_pfp.bin");
MODULE_FIRMWARE("radeon/CAICOS_me.bin");
MODULE_FIRMWARE("radeon/CAICOS_mc.bin");
MODULE_FIRMWARE("radeon/CAYMAN_pfp.bin");
MODULE_FIRMWARE("radeon/CAYMAN_me.bin");
MODULE_FIRMWARE("radeon/CAYMAN_mc.bin");
MODULE_FIRMWARE("radeon/CAYMAN_rlc.bin");
#define BTC_IO_MC_REGS_SIZE 29
static const u32 barts_io_mc_regs[BTC_IO_MC_REGS_SIZE][2] = ;
static const u32 turks_io_mc_regs[BTC_IO_MC_REGS_SIZE][2] = ;
static const u32 caicos_io_mc_regs[BTC_IO_MC_REGS_SIZE][2] = ;
static const u32 cayman_io_mc_regs[BTC_IO_MC_REGS_SIZE][2] = ;
int ni_mc_load_microcode(struct radeon_device *rdev)
int ni_init_microcode(struct radeon_device *rdev)
static u32 cayman_get_tile_pipe_to_backend_map(struct radeon_device *rdev,
u32 num_tile_pipes,
u32 num_backends_per_asic,
u32 *backend_disable_mask_per_asic,
u32 num_shader_engines)
static u32 cayman_get_disable_mask_per_asic(struct radeon_device *rdev,
u32 disable_mask_per_se,
u32 max_disable_mask_per_se,
u32 num_shader_engines)
static void cayman_gpu_init(struct radeon_device *rdev)
void cayman_pcie_gart_tlb_flush(struct radeon_device *rdev)
int cayman_pcie_gart_enable(struct radeon_device *rdev)
void cayman_pcie_gart_disable(struct radeon_device *rdev)
void cayman_pcie_gart_fini(struct radeon_device *rdev)
static void cayman_cp_enable(struct radeon_device *rdev, bool enable)
static int cayman_cp_load_microcode(struct radeon_device *rdev)
static int cayman_cp_start(struct radeon_device *rdev)
static void cayman_cp_fini(struct radeon_device *rdev)
int cayman_cp_resume(struct radeon_device *rdev)
bool cayman_gpu_is_lockup(struct radeon_device *rdev)
static int cayman_gpu_soft_reset(struct radeon_device *rdev)
int cayman_asic_reset(struct radeon_device *rdev)
static int cayman_startup(struct radeon_device *rdev)
int cayman_resume(struct radeon_device *rdev)
int cayman_suspend(struct radeon_device *rdev)
int cayman_init(struct radeon_device *rdev)
void cayman_fini(struct radeon_device *rdev)
