#define EVERGREEN_PFP_UCODE_SIZE 1120
#define EVERGREEN_PM4_UCODE_SIZE 1376
static void evergreen_gpu_init(struct radeon_device *rdev);
void evergreen_fini(struct radeon_device *rdev);
static void evergreen_pcie_gen2_enable(struct radeon_device *rdev);
void evergreen_fix_pci_max_read_req_size(struct radeon_device *rdev)
void evergreen_pre_page_flip(struct radeon_device *rdev, int crtc)
void evergreen_post_page_flip(struct radeon_device *rdev, int crtc)
u32 evergreen_page_flip(struct radeon_device *rdev, int crtc_id, u64 crtc_base)
int evergreen_get_temp(struct radeon_device *rdev)
int sumo_get_temp(struct radeon_device *rdev)
void evergreen_pm_misc(struct radeon_device *rdev)
void evergreen_pm_prepare(struct radeon_device *rdev)
void evergreen_pm_finish(struct radeon_device *rdev)
bool evergreen_hpd_sense(struct radeon_device *rdev, enum radeon_hpd_id hpd)
void evergreen_hpd_set_polarity(struct radeon_device *rdev,
enum radeon_hpd_id hpd)
void evergreen_hpd_init(struct radeon_device *rdev)
void evergreen_hpd_fini(struct radeon_device *rdev)
static u32 evergreen_line_buffer_adjust(struct radeon_device *rdev,
struct radeon_crtc *radeon_crtc,
struct drm_display_mode *mode,
struct drm_display_mode *other_mode)
static u32 evergreen_get_number_of_dram_channels(struct radeon_device *rdev)
struct evergreen_wm_params ;
static u32 evergreen_dram_bandwidth(struct evergreen_wm_params *wm)
static u32 evergreen_dram_bandwidth_for_display(struct evergreen_wm_params *wm)
static u32 evergreen_data_return_bandwidth(struct evergreen_wm_params *wm)
static u32 evergreen_dmif_request_bandwidth(struct evergreen_wm_params *wm)
static u32 evergreen_available_bandwidth(struct evergreen_wm_params *wm)
static u32 evergreen_average_bandwidth(struct evergreen_wm_params *wm)
static u32 evergreen_latency_watermark(struct evergreen_wm_params *wm)
static bool evergreen_average_bandwidth_vs_dram_bandwidth_for_display(struct evergreen_wm_params *wm)
;
static bool evergreen_average_bandwidth_vs_available_bandwidth(struct evergreen_wm_params *wm)
;
static bool evergreen_check_latency_hiding(struct evergreen_wm_params *wm)
static void evergreen_program_watermarks(struct radeon_device *rdev,
struct radeon_crtc *radeon_crtc,
u32 lb_size, u32 num_heads)
void evergreen_bandwidth_update(struct radeon_device *rdev)
int evergreen_mc_wait_for_idle(struct radeon_device *rdev)
void evergreen_pcie_gart_tlb_flush(struct radeon_device *rdev)
int evergreen_pcie_gart_enable(struct radeon_device *rdev)
void evergreen_pcie_gart_disable(struct radeon_device *rdev)
void evergreen_pcie_gart_fini(struct radeon_device *rdev)
void evergreen_agp_enable(struct radeon_device *rdev)
void evergreen_mc_stop(struct radeon_device *rdev, struct evergreen_mc_save *save)
void evergreen_mc_resume(struct radeon_device *rdev, struct evergreen_mc_save *save)
void evergreen_mc_program(struct radeon_device *rdev)
void evergreen_ring_ib_execute(struct radeon_device *rdev, struct radeon_ib *ib)
static int evergreen_cp_load_microcode(struct radeon_device *rdev)
static int evergreen_cp_start(struct radeon_device *rdev)
int evergreen_cp_resume(struct radeon_device *rdev)
static u32 evergreen_get_tile_pipe_to_backend_map(struct radeon_device *rdev,
u32 num_tile_pipes,
u32 num_backends,
u32 backend_disable_mask)
static void evergreen_gpu_init(struct radeon_device *rdev)
int evergreen_mc_init(struct radeon_device *rdev)
bool evergreen_gpu_is_lockup(struct radeon_device *rdev)
static int evergreen_gpu_soft_reset(struct radeon_device *rdev)
int evergreen_asic_reset(struct radeon_device *rdev)
u32 evergreen_get_vblank_counter(struct radeon_device *rdev, int crtc)
void evergreen_disable_interrupt_state(struct radeon_device *rdev)
int evergreen_irq_set(struct radeon_device *rdev)
static inline void evergreen_irq_ack(struct radeon_device *rdev)
void evergreen_irq_disable(struct radeon_device *rdev)
void evergreen_irq_suspend(struct radeon_device *rdev)
static inline u32 evergreen_get_ih_wptr(struct radeon_device *rdev)
int evergreen_irq_process(struct radeon_device *rdev)
static int evergreen_startup(struct radeon_device *rdev)
int evergreen_resume(struct radeon_device *rdev)
int evergreen_suspend(struct radeon_device *rdev)
int evergreen_copy_blit(struct radeon_device *rdev,
uint64_t src_offset,
uint64_t dst_offset,
unsigned num_gpu_pages,
struct radeon_fence *fence)
int evergreen_init(struct radeon_device *rdev)
void evergreen_fini(struct radeon_device *rdev)
static void evergreen_pcie_gen2_enable(struct radeon_device *rdev)
