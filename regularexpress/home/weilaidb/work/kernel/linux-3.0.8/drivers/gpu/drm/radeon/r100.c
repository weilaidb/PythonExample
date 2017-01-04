#define FIRMWARE_R100		"radeon/R100_cp.bin"
#define FIRMWARE_R200		"radeon/R200_cp.bin"
#define FIRMWARE_R300		"radeon/R300_cp.bin"
#define FIRMWARE_R420		"radeon/R420_cp.bin"
#define FIRMWARE_RS690		"radeon/RS690_cp.bin"
#define FIRMWARE_RS600		"radeon/RS600_cp.bin"
#define FIRMWARE_R520		"radeon/R520_cp.bin"
MODULE_FIRMWARE(FIRMWARE_R100);
MODULE_FIRMWARE(FIRMWARE_R200);
MODULE_FIRMWARE(FIRMWARE_R300);
MODULE_FIRMWARE(FIRMWARE_R420);
MODULE_FIRMWARE(FIRMWARE_RS690);
MODULE_FIRMWARE(FIRMWARE_RS600);
MODULE_FIRMWARE(FIRMWARE_R520);
void r100_pre_page_flip(struct radeon_device *rdev, int crtc)
void r100_post_page_flip(struct radeon_device *rdev, int crtc)
u32 r100_page_flip(struct radeon_device *rdev, int crtc_id, u64 crtc_base)
void r100_pm_get_dynpm_state(struct radeon_device *rdev)
void r100_pm_init_profile(struct radeon_device *rdev)
void r100_pm_misc(struct radeon_device *rdev)
void r100_pm_prepare(struct radeon_device *rdev)
void r100_pm_finish(struct radeon_device *rdev)
bool r100_gui_idle(struct radeon_device *rdev)
bool r100_hpd_sense(struct radeon_device *rdev, enum radeon_hpd_id hpd)
void r100_hpd_set_polarity(struct radeon_device *rdev,
enum radeon_hpd_id hpd)
void r100_hpd_init(struct radeon_device *rdev)
void r100_hpd_fini(struct radeon_device *rdev)
void r100_pci_gart_tlb_flush(struct radeon_device *rdev)
int r100_pci_gart_init(struct radeon_device *rdev)
void r100_enable_bm(struct radeon_device *rdev)
int r100_pci_gart_enable(struct radeon_device *rdev)
void r100_pci_gart_disable(struct radeon_device *rdev)
int r100_pci_gart_set_page(struct radeon_device *rdev, int i, uint64_t addr)
void r100_pci_gart_fini(struct radeon_device *rdev)
int r100_irq_set(struct radeon_device *rdev)
void r100_irq_disable(struct radeon_device *rdev)
static inline uint32_t r100_irq_ack(struct radeon_device *rdev)
int r100_irq_process(struct radeon_device *rdev)
u32 r100_get_vblank_counter(struct radeon_device *rdev, int crtc)
void r100_fence_ring_emit(struct radeon_device *rdev,
struct radeon_fence *fence)
int r100_copy_blit(struct radeon_device *rdev,
uint64_t src_offset,
uint64_t dst_offset,
unsigned num_gpu_pages,
struct radeon_fence *fence)
static int r100_cp_wait_for_idle(struct radeon_device *rdev)
void r100_ring_start(struct radeon_device *rdev)
static int r100_cp_init_microcode(struct radeon_device *rdev)
static void r100_cp_load_microcode(struct radeon_device *rdev)
int r100_cp_init(struct radeon_device *rdev, unsigned ring_size)
void r100_cp_fini(struct radeon_device *rdev)
void r100_cp_disable(struct radeon_device *rdev)
void r100_cp_commit(struct radeon_device *rdev)
int r100_cs_parse_packet0(struct radeon_cs_parser *p,
struct radeon_cs_packet *pkt,
const unsigned *auth, unsigned n,
radeon_packet0_check_t check)
void r100_cs_dump_packet(struct radeon_cs_parser *p,
struct radeon_cs_packet *pkt)
int r100_cs_packet_parse(struct radeon_cs_parser *p,
struct radeon_cs_packet *pkt,
unsigned idx)
int r100_cs_packet_parse_vline(struct radeon_cs_parser *p)
int r100_cs_packet_next_reloc(struct radeon_cs_parser *p,
struct radeon_cs_reloc **cs_reloc)
static int r100_get_vtx_size(uint32_t vtx_fmt)
static int r100_packet0_check(struct radeon_cs_parser *p,
struct radeon_cs_packet *pkt,
unsigned idx, unsigned reg)
int r100_cs_track_check_pkt3_indx_buffer(struct radeon_cs_parser *p,
struct radeon_cs_packet *pkt,
struct radeon_bo *robj)
static int r100_packet3_check(struct radeon_cs_parser *p,
struct radeon_cs_packet *pkt)
int r100_cs_parse(struct radeon_cs_parser *p)
void r100_errata(struct radeon_device *rdev)
void r100_gpu_wait_for_vsync(struct radeon_device *rdev)
void r100_gpu_wait_for_vsync2(struct radeon_device *rdev)
int r100_rbbm_fifo_wait_for_entry(struct radeon_device *rdev, unsigned n)
int r100_gui_wait_for_idle(struct radeon_device *rdev)
int r100_mc_wait_for_idle(struct radeon_device *rdev)
void r100_gpu_lockup_update(struct r100_gpu_lockup *lockup, struct radeon_cp *cp)
bool r100_gpu_cp_is_lockup(struct radeon_device *rdev, struct r100_gpu_lockup *lockup, struct radeon_cp *cp)
bool r100_gpu_is_lockup(struct radeon_device *rdev)
void r100_bm_disable(struct radeon_device *rdev)
int r100_asic_reset(struct radeon_device *rdev)
void r100_set_common_regs(struct radeon_device *rdev)
static void r100_vram_get_type(struct radeon_device *rdev)
static u32 r100_get_accessible_vram(struct radeon_device *rdev)
void r100_vram_init_sizes(struct radeon_device *rdev)
void r100_vga_set_state(struct radeon_device *rdev, bool state)
void r100_mc_init(struct radeon_device *rdev)
void r100_pll_errata_after_index(struct radeon_device *rdev)
static void r100_pll_errata_after_data(struct radeon_device *rdev)
uint32_t r100_pll_rreg(struct radeon_device *rdev, uint32_t reg)
void r100_pll_wreg(struct radeon_device *rdev, uint32_t reg, uint32_t v)
void r100_set_safe_registers(struct radeon_device *rdev)
#if defined(CONFIG_DEBUG_FS)
static int r100_debugfs_rbbm_info(struct seq_file *m, void *data)
static int r100_debugfs_cp_ring_info(struct seq_file *m, void *data)
static int r100_debugfs_cp_csq_fifo(struct seq_file *m, void *data)
static int r100_debugfs_mc_info(struct seq_file *m, void *data)
static struct drm_info_list r100_debugfs_rbbm_list[] = ;
static struct drm_info_list r100_debugfs_cp_list[] = ;
static struct drm_info_list r100_debugfs_mc_info_list[] = ;
int r100_debugfs_rbbm_init(struct radeon_device *rdev)
int r100_debugfs_cp_init(struct radeon_device *rdev)
int r100_debugfs_mc_info_init(struct radeon_device *rdev)
int r100_set_surface_reg(struct radeon_device *rdev, int reg,
uint32_t tiling_flags, uint32_t pitch,
uint32_t offset, uint32_t obj_size)
void r100_clear_surface_reg(struct radeon_device *rdev, int reg)
void r100_bandwidth_update(struct radeon_device *rdev)
static inline void r100_cs_track_texture_print(struct r100_cs_track_texture *t)
static int r100_track_compress_size(int compress_format, int w, int h)
static int r100_cs_track_cube(struct radeon_device *rdev,
struct r100_cs_track *track, unsigned idx)
static int r100_cs_track_texture_check(struct radeon_device *rdev,
struct r100_cs_track *track)
int r100_cs_track_check(struct radeon_device *rdev, struct r100_cs_track *track)
void r100_cs_track_clear(struct radeon_device *rdev, struct r100_cs_track *track)
int r100_ring_test(struct radeon_device *rdev)
void r100_ring_ib_execute(struct radeon_device *rdev, struct radeon_ib *ib)
int r100_ib_test(struct radeon_device *rdev)
void r100_ib_fini(struct radeon_device *rdev)
int r100_ib_init(struct radeon_device *rdev)
void r100_mc_stop(struct radeon_device *rdev, struct r100_mc_save *save)
void r100_mc_resume(struct radeon_device *rdev, struct r100_mc_save *save)
void r100_vga_render_disable(struct radeon_device *rdev)
static void r100_debugfs(struct radeon_device *rdev)
static void r100_mc_program(struct radeon_device *rdev)
void r100_clock_startup(struct radeon_device *rdev)
static int r100_startup(struct radeon_device *rdev)
int r100_resume(struct radeon_device *rdev)
int r100_suspend(struct radeon_device *rdev)
void r100_fini(struct radeon_device *rdev)
void r100_restore_sanity(struct radeon_device *rdev)
int r100_init(struct radeon_device *rdev)
