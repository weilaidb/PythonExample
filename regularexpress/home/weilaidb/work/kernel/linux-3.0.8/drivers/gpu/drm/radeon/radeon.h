#define __RADEON_H__
extern int radeon_no_wb;
extern int radeon_modeset;
extern int radeon_dynclks;
extern int radeon_r4xx_atom;
extern int radeon_agpmode;
extern int radeon_vram_limit;
extern int radeon_gart_size;
extern int radeon_benchmarking;
extern int radeon_testing;
extern int radeon_connector_table;
extern int radeon_tv;
extern int radeon_audio;
extern int radeon_disp_priority;
extern int radeon_hw_i2c;
extern int radeon_pcie_gen2;
#define RADEON_MAX_USEC_TIMEOUT		100000
#define RADEON_FENCE_JIFFIES_TIMEOUT	(HZ / 2)
#define RADEON_IB_POOL_SIZE		16
#define RADEON_DEBUGFS_MAX_NUM_FILES	32
#define RADEONFB_CONN_LIMIT		4
#define RADEON_BIOS_NUM_SCRATCH		8
enum radeon_pll_errata ;
struct radeon_device;
#define ATRM_BIOS_PAGE 4096
#if defined(CONFIG_VGA_SWITCHEROO)
bool radeon_atrm_supported(struct pci_dev *pdev);
int radeon_atrm_get_bios_chunk(uint8_t *bios, int offset, int len);
static inline bool radeon_atrm_supported(struct pci_dev *pdev)
static inline int radeon_atrm_get_bios_chunk(uint8_t *bios, int offset, int len)
bool radeon_get_bios(struct radeon_device *rdev);
struct radeon_dummy_page ;
int radeon_dummy_page_init(struct radeon_device *rdev);
void radeon_dummy_page_fini(struct radeon_device *rdev);
struct radeon_clock ;
int radeon_pm_init(struct radeon_device *rdev);
void radeon_pm_fini(struct radeon_device *rdev);
void radeon_pm_compute_clocks(struct radeon_device *rdev);
void radeon_pm_suspend(struct radeon_device *rdev);
void radeon_pm_resume(struct radeon_device *rdev);
void radeon_combios_get_power_modes(struct radeon_device *rdev);
void radeon_atombios_get_power_modes(struct radeon_device *rdev);
void radeon_atom_set_voltage(struct radeon_device *rdev, u16 voltage_level, u8 voltage_type);
int radeon_atom_get_max_vddc(struct radeon_device *rdev, u16 *voltage);
void rs690_pm_info(struct radeon_device *rdev);
extern int rv6xx_get_temp(struct radeon_device *rdev);
extern int rv770_get_temp(struct radeon_device *rdev);
extern int evergreen_get_temp(struct radeon_device *rdev);
extern int sumo_get_temp(struct radeon_device *rdev);
struct radeon_fence_driver ;
struct radeon_fence ;
int radeon_fence_driver_init(struct radeon_device *rdev);
void radeon_fence_driver_fini(struct radeon_device *rdev);
int radeon_fence_create(struct radeon_device *rdev, struct radeon_fence **fence);
int radeon_fence_emit(struct radeon_device *rdev, struct radeon_fence *fence);
void radeon_fence_process(struct radeon_device *rdev);
bool radeon_fence_signaled(struct radeon_fence *fence);
int radeon_fence_wait(struct radeon_fence *fence, bool interruptible);
int radeon_fence_wait_next(struct radeon_device *rdev);
int radeon_fence_wait_last(struct radeon_device *rdev);
struct radeon_fence *radeon_fence_ref(struct radeon_fence *fence);
void radeon_fence_unref(struct radeon_fence **fence);
struct radeon_surface_reg ;
#define RADEON_GEM_MAX_SURFACES 8
struct radeon_mman ;
struct radeon_bo ;
#define gem_to_radeon_bo(gobj) container_of((gobj), struct radeon_bo, gem_base)
struct radeon_bo_list ;
struct radeon_gem ;
int radeon_gem_init(struct radeon_device *rdev);
void radeon_gem_fini(struct radeon_device *rdev);
int radeon_gem_object_create(struct radeon_device *rdev, int size,
int alignment, int initial_domain,
bool discardable, bool kernel,
struct drm_gem_object **obj);
int radeon_gem_object_pin(struct drm_gem_object *obj, uint32_t pin_domain,
uint64_t *gpu_addr);
void radeon_gem_object_unpin(struct drm_gem_object *obj);
int radeon_mode_dumb_create(struct drm_file *file_priv,
struct drm_device *dev,
struct drm_mode_create_dumb *args);
int radeon_mode_dumb_mmap(struct drm_file *filp,
struct drm_device *dev,
uint32_t handle, uint64_t *offset_p);
int radeon_mode_dumb_destroy(struct drm_file *file_priv,
struct drm_device *dev,
uint32_t handle);
struct radeon_mc;
struct radeon_gart_table_ram ;
struct radeon_gart_table_vram ;
union radeon_gart_table ;
#define RADEON_GPU_PAGE_SIZE 4096
#define RADEON_GPU_PAGE_MASK (RADEON_GPU_PAGE_SIZE - 1)
#define RADEON_GPU_PAGE_SHIFT 12
struct radeon_gart ;
int radeon_gart_table_ram_alloc(struct radeon_device *rdev);
void radeon_gart_table_ram_free(struct radeon_device *rdev);
int radeon_gart_table_vram_alloc(struct radeon_device *rdev);
void radeon_gart_table_vram_free(struct radeon_device *rdev);
int radeon_gart_init(struct radeon_device *rdev);
void radeon_gart_fini(struct radeon_device *rdev);
void radeon_gart_unbind(struct radeon_device *rdev, unsigned offset,
int pages);
int radeon_gart_bind(struct radeon_device *rdev, unsigned offset,
int pages, struct page **pagelist,
dma_addr_t *dma_addr);
struct radeon_mc ;
bool radeon_combios_sideport_present(struct radeon_device *rdev);
bool radeon_atombios_sideport_present(struct radeon_device *rdev);
struct radeon_scratch ;
int radeon_scratch_get(struct radeon_device *rdev, uint32_t *reg);
void radeon_scratch_free(struct radeon_device *rdev, uint32_t reg);
struct radeon_unpin_work ;
struct r500_irq_stat_regs ;
struct r600_irq_stat_regs ;
struct evergreen_irq_stat_regs ;
union radeon_irq_stat_regs ;
struct radeon_irq ;
int radeon_irq_kms_init(struct radeon_device *rdev);
void radeon_irq_kms_fini(struct radeon_device *rdev);
void radeon_irq_kms_sw_irq_get(struct radeon_device *rdev);
void radeon_irq_kms_sw_irq_put(struct radeon_device *rdev);
void radeon_irq_kms_pflip_irq_get(struct radeon_device *rdev, int crtc);
void radeon_irq_kms_pflip_irq_put(struct radeon_device *rdev, int crtc);
struct radeon_ib ;
struct radeon_ib_pool ;
struct radeon_cp ;
struct r600_ih ;
struct r600_blit ;
int radeon_ib_get(struct radeon_device *rdev, struct radeon_ib **ib);
void radeon_ib_free(struct radeon_device *rdev, struct radeon_ib **ib);
int radeon_ib_schedule(struct radeon_device *rdev, struct radeon_ib *ib);
int radeon_ib_pool_init(struct radeon_device *rdev);
void radeon_ib_pool_fini(struct radeon_device *rdev);
int radeon_ib_test(struct radeon_device *rdev);
extern void radeon_ib_bogus_add(struct radeon_device *rdev, struct radeon_ib *ib);
void radeon_ring_free_size(struct radeon_device *rdev);
int radeon_ring_alloc(struct radeon_device *rdev, unsigned ndw);
int radeon_ring_lock(struct radeon_device *rdev, unsigned ndw);
void radeon_ring_commit(struct radeon_device *rdev);
void radeon_ring_unlock_commit(struct radeon_device *rdev);
void radeon_ring_unlock_undo(struct radeon_device *rdev);
int radeon_ring_test(struct radeon_device *rdev);
int radeon_ring_init(struct radeon_device *rdev, unsigned ring_size);
void radeon_ring_fini(struct radeon_device *rdev);
struct radeon_cs_reloc ;
struct radeon_cs_chunk ;
struct radeon_cs_parser ;
extern int radeon_cs_update_pages(struct radeon_cs_parser *p, int pg_idx);
extern int radeon_cs_finish_pages(struct radeon_cs_parser *p);
static inline u32 radeon_get_ib_value(struct radeon_cs_parser *p, int idx)
struct radeon_cs_packet ;
typedef int (*radeon_packet0_check_t)(struct radeon_cs_parser *p,
struct radeon_cs_packet *pkt,
unsigned idx, unsigned reg);
typedef int (*radeon_packet3_check_t)(struct radeon_cs_parser *p,
struct radeon_cs_packet *pkt);
int radeon_agp_init(struct radeon_device *rdev);
void radeon_agp_resume(struct radeon_device *rdev);
void radeon_agp_suspend(struct radeon_device *rdev);
void radeon_agp_fini(struct radeon_device *rdev);
struct radeon_wb ;
#define RADEON_WB_SCRATCH_OFFSET 0
#define RADEON_WB_CP_RPTR_OFFSET 1024
#define RADEON_WB_CP1_RPTR_OFFSET 1280
#define RADEON_WB_CP2_RPTR_OFFSET 1536
#define R600_WB_IH_WPTR_OFFSET   2048
#define R600_WB_EVENT_OFFSET     3072
enum radeon_pm_method ;
enum radeon_dynpm_state ;
enum radeon_dynpm_action ;
enum radeon_voltage_type ;
enum radeon_pm_state_type ;
enum radeon_pm_profile_type ;
#define PM_PROFILE_DEFAULT_IDX 0
#define PM_PROFILE_LOW_SH_IDX  1
#define PM_PROFILE_MID_SH_IDX  2
#define PM_PROFILE_HIGH_SH_IDX 3
#define PM_PROFILE_LOW_MH_IDX  4
#define PM_PROFILE_MID_MH_IDX  5
#define PM_PROFILE_HIGH_MH_IDX 6
#define PM_PROFILE_MAX         7
struct radeon_pm_profile ;
enum radeon_int_thermal_type ;
struct radeon_voltage ;
#define RADEON_PM_MODE_NO_DISPLAY          (1 << 0)
struct radeon_pm_clock_info ;
#define RADEON_PM_STATE_SINGLE_DISPLAY_ONLY (1 << 0)
struct radeon_power_state ;
#define RADEON_MODE_OVERCLOCK_MARGIN 500
struct radeon_pm ;
void radeon_benchmark(struct radeon_device *rdev);
void radeon_test_moves(struct radeon_device *rdev);
int radeon_debugfs_add_files(struct radeon_device *rdev,
struct drm_info_list *files,
unsigned nfiles);
int radeon_debugfs_fence_init(struct radeon_device *rdev);
struct radeon_asic ;
struct r100_gpu_lockup ;
struct r100_asic ;
struct r300_asic ;
struct r600_asic ;
struct rv770_asic ;
struct evergreen_asic ;
struct cayman_asic ;
union radeon_asic_config ;
void radeon_agp_disable(struct radeon_device *rdev);
int radeon_asic_init(struct radeon_device *rdev);
int radeon_gem_info_ioctl(struct drm_device *dev, void *data,
struct drm_file *filp);
int radeon_gem_create_ioctl(struct drm_device *dev, void *data,
struct drm_file *filp);
int radeon_gem_pin_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
int radeon_gem_unpin_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
int radeon_gem_pwrite_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
int radeon_gem_pread_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
int radeon_gem_set_domain_ioctl(struct drm_device *dev, void *data,
struct drm_file *filp);
int radeon_gem_mmap_ioctl(struct drm_device *dev, void *data,
struct drm_file *filp);
int radeon_gem_busy_ioctl(struct drm_device *dev, void *data,
struct drm_file *filp);
int radeon_gem_wait_idle_ioctl(struct drm_device *dev, void *data,
struct drm_file *filp);
int radeon_cs_ioctl(struct drm_device *dev, void *data, struct drm_file *filp);
int radeon_gem_set_tiling_ioctl(struct drm_device *dev, void *data,
struct drm_file *filp);
int radeon_gem_get_tiling_ioctl(struct drm_device *dev, void *data,
struct drm_file *filp);
struct r700_vram_scratch ;
typedef uint32_t (*radeon_rreg_t)(struct radeon_device*, uint32_t);
typedef void (*radeon_wreg_t)(struct radeon_device*, uint32_t, uint32_t);
struct radeon_device ;
int radeon_device_init(struct radeon_device *rdev,
struct drm_device *ddev,
struct pci_dev *pdev,
uint32_t flags);
void radeon_device_fini(struct radeon_device *rdev);
int radeon_gpu_wait_for_idle(struct radeon_device *rdev);
static inline uint32_t r100_mm_rreg(struct radeon_device *rdev, uint32_t reg)
static inline void r100_mm_wreg(struct radeon_device *rdev, uint32_t reg, uint32_t v)
static inline u32 r100_io_rreg(struct radeon_device *rdev, u32 reg)
static inline void r100_io_wreg(struct radeon_device *rdev, u32 reg, u32 v)
#define to_radeon_fence(p) ((struct radeon_fence *)(p))
#define RREG8(reg) readb(((void __iomem *)rdev->rmmio) + (reg))
#define WREG8(reg, v) writeb(v, ((void __iomem *)rdev->rmmio) + (reg))
#define RREG16(reg) readw(((void __iomem *)rdev->rmmio) + (reg))
#define WREG16(reg, v) writew(v, ((void __iomem *)rdev->rmmio) + (reg))
#define RREG32(reg) r100_mm_rreg(rdev, (reg))
#define DREG32(reg) printk(KERN_INFO "REGISTER: " #reg " : 0x%08X\n", r100_mm_rreg(rdev, (reg)))
#define WREG32(reg, v) r100_mm_wreg(rdev, (reg), (v))
#define REG_SET(FIELD, v) (((v) << FIELD##_SHIFT) & FIELD##_MASK)
#define REG_GET(FIELD, v) (((v) << FIELD##_SHIFT) & FIELD##_MASK)
#define RREG32_PLL(reg) rdev->pll_rreg(rdev, (reg))
#define WREG32_PLL(reg, v) rdev->pll_wreg(rdev, (reg), (v))
#define RREG32_MC(reg) rdev->mc_rreg(rdev, (reg))
#define WREG32_MC(reg, v) rdev->mc_wreg(rdev, (reg), (v))
#define RREG32_PCIE(reg) rv370_pcie_rreg(rdev, (reg))
#define WREG32_PCIE(reg, v) rv370_pcie_wreg(rdev, (reg), (v))
#define RREG32_PCIE_P(reg) rdev->pciep_rreg(rdev, (reg))
#define WREG32_PCIE_P(reg, v) rdev->pciep_wreg(rdev, (reg), (v))
#define WREG32_P(reg, val, mask)				\
do  while (0)
#define WREG32_PLL_P(reg, val, mask)				\
do  while (0)
#define DREG32_SYS(sqf, rdev, reg) seq_printf((sqf), #reg " : 0x%08X\n", r100_mm_rreg((rdev), (reg)))
#define RREG32_IO(reg) r100_io_rreg(rdev, (reg))
#define WREG32_IO(reg, v) r100_io_wreg(rdev, (reg), (v))
static inline uint32_t rv370_pcie_rreg(struct radeon_device *rdev, uint32_t reg)
static inline void rv370_pcie_wreg(struct radeon_device *rdev, uint32_t reg, uint32_t v)
void r100_pll_errata_after_index(struct radeon_device *rdev);
#define ASIC_IS_RN50(rdev) ((rdev->pdev->device == 0x515e) || \
(rdev->pdev->device == 0x5969))
#define ASIC_IS_RV100(rdev) ((rdev->family == CHIP_RV100) || \
(rdev->family == CHIP_RV200) || \
(rdev->family == CHIP_RS100) || \
(rdev->family == CHIP_RS200) || \
(rdev->family == CHIP_RV250) || \
(rdev->family == CHIP_RV280) || \
(rdev->family == CHIP_RS300))
#define ASIC_IS_R300(rdev) ((rdev->family == CHIP_R300)  ||	\
(rdev->family == CHIP_RV350) ||			\
(rdev->family == CHIP_R350)  ||			\
(rdev->family == CHIP_RV380) ||			\
(rdev->family == CHIP_R420)  ||			\
(rdev->family == CHIP_R423)  ||			\
(rdev->family == CHIP_RV410) ||			\
(rdev->family == CHIP_RS400) ||			\
(rdev->family == CHIP_RS480))
#define ASIC_IS_X2(rdev) ((rdev->ddev->pdev->device == 0x9441) || \
(rdev->ddev->pdev->device == 0x9443) || \
(rdev->ddev->pdev->device == 0x944B) || \
(rdev->ddev->pdev->device == 0x9506) || \
(rdev->ddev->pdev->device == 0x9509) || \
(rdev->ddev->pdev->device == 0x950F) || \
(rdev->ddev->pdev->device == 0x689C) || \
(rdev->ddev->pdev->device == 0x689D))
#define ASIC_IS_AVIVO(rdev) ((rdev->family >= CHIP_RS600))
#define ASIC_IS_DCE2(rdev) ((rdev->family == CHIP_RS600)  ||	\
(rdev->family == CHIP_RS690)  ||	\
(rdev->family == CHIP_RS740)  ||	\
(rdev->family >= CHIP_R600))
#define ASIC_IS_DCE3(rdev) ((rdev->family >= CHIP_RV620))
#define ASIC_IS_DCE32(rdev) ((rdev->family >= CHIP_RV730))
#define ASIC_IS_DCE4(rdev) ((rdev->family >= CHIP_CEDAR))
#define ASIC_IS_DCE41(rdev) ((rdev->family >= CHIP_PALM) && \
(rdev->flags & RADEON_IS_IGP))
#define ASIC_IS_DCE5(rdev) ((rdev->family >= CHIP_BARTS))
#define RBIOS8(i) (rdev->bios[i])
#define RBIOS16(i) (RBIOS8(i) | (RBIOS8((i)+1) << 8))
#define RBIOS32(i) ((RBIOS16(i)) | (RBIOS16((i)+2) << 16))
int radeon_combios_init(struct radeon_device *rdev);
void radeon_combios_fini(struct radeon_device *rdev);
int radeon_atombios_init(struct radeon_device *rdev);
void radeon_atombios_fini(struct radeon_device *rdev);
static inline void radeon_ring_write(struct radeon_device *rdev, uint32_t v)
#define radeon_init(rdev) (rdev)->asic->init((rdev))
#define radeon_fini(rdev) (rdev)->asic->fini((rdev))
#define radeon_resume(rdev) (rdev)->asic->resume((rdev))
#define radeon_suspend(rdev) (rdev)->asic->suspend((rdev))
#define radeon_cs_parse(p) rdev->asic->cs_parse((p))
#define radeon_vga_set_state(rdev, state) (rdev)->asic->vga_set_state((rdev), (state))
#define radeon_gpu_is_lockup(rdev) (rdev)->asic->gpu_is_lockup((rdev))
#define radeon_asic_reset(rdev) (rdev)->asic->asic_reset((rdev))
#define radeon_gart_tlb_flush(rdev) (rdev)->asic->gart_tlb_flush((rdev))
#define radeon_gart_set_page(rdev, i, p) (rdev)->asic->gart_set_page((rdev), (i), (p))
#define radeon_cp_commit(rdev) (rdev)->asic->cp_commit((rdev))
#define radeon_ring_start(rdev) (rdev)->asic->ring_start((rdev))
#define radeon_ring_test(rdev) (rdev)->asic->ring_test((rdev))
#define radeon_ring_ib_execute(rdev, ib) (rdev)->asic->ring_ib_execute((rdev), (ib))
#define radeon_irq_set(rdev) (rdev)->asic->irq_set((rdev))
#define radeon_irq_process(rdev) (rdev)->asic->irq_process((rdev))
#define radeon_get_vblank_counter(rdev, crtc) (rdev)->asic->get_vblank_counter((rdev), (crtc))
#define radeon_fence_ring_emit(rdev, fence) (rdev)->asic->fence_ring_emit((rdev), (fence))
#define radeon_copy_blit(rdev, s, d, np, f) (rdev)->asic->copy_blit((rdev), (s), (d), (np), (f))
#define radeon_copy_dma(rdev, s, d, np, f) (rdev)->asic->copy_dma((rdev), (s), (d), (np), (f))
#define radeon_copy(rdev, s, d, np, f) (rdev)->asic->copy((rdev), (s), (d), (np), (f))
#define radeon_get_engine_clock(rdev) (rdev)->asic->get_engine_clock((rdev))
#define radeon_set_engine_clock(rdev, e) (rdev)->asic->set_engine_clock((rdev), (e))
#define radeon_get_memory_clock(rdev) (rdev)->asic->get_memory_clock((rdev))
#define radeon_set_memory_clock(rdev, e) (rdev)->asic->set_memory_clock((rdev), (e))
#define radeon_get_pcie_lanes(rdev) (rdev)->asic->get_pcie_lanes((rdev))
#define radeon_set_pcie_lanes(rdev, l) (rdev)->asic->set_pcie_lanes((rdev), (l))
#define radeon_set_clock_gating(rdev, e) (rdev)->asic->set_clock_gating((rdev), (e))
#define radeon_set_surface_reg(rdev, r, f, p, o, s) ((rdev)->asic->set_surface_reg((rdev), (r), (f), (p), (o), (s)))
#define radeon_clear_surface_reg(rdev, r) ((rdev)->asic->clear_surface_reg((rdev), (r)))
#define radeon_bandwidth_update(rdev) (rdev)->asic->bandwidth_update((rdev))
#define radeon_hpd_init(rdev) (rdev)->asic->hpd_init((rdev))
#define radeon_hpd_fini(rdev) (rdev)->asic->hpd_fini((rdev))
#define radeon_hpd_sense(rdev, hpd) (rdev)->asic->hpd_sense((rdev), (hpd))
#define radeon_hpd_set_polarity(rdev, hpd) (rdev)->asic->hpd_set_polarity((rdev), (hpd))
#define radeon_gui_idle(rdev) (rdev)->asic->gui_idle((rdev))
#define radeon_pm_misc(rdev) (rdev)->asic->pm_misc((rdev))
#define radeon_pm_prepare(rdev) (rdev)->asic->pm_prepare((rdev))
#define radeon_pm_finish(rdev) (rdev)->asic->pm_finish((rdev))
#define radeon_pm_init_profile(rdev) (rdev)->asic->pm_init_profile((rdev))
#define radeon_pm_get_dynpm_state(rdev) (rdev)->asic->pm_get_dynpm_state((rdev))
#define radeon_pre_page_flip(rdev, crtc) rdev->asic->pre_page_flip((rdev), (crtc))
#define radeon_page_flip(rdev, crtc, base) rdev->asic->page_flip((rdev), (crtc), (base))
#define radeon_post_page_flip(rdev, crtc) rdev->asic->post_page_flip((rdev), (crtc))
extern int radeon_gpu_reset(struct radeon_device *rdev);
extern void radeon_agp_disable(struct radeon_device *rdev);
extern int radeon_gart_table_vram_pin(struct radeon_device *rdev);
extern void radeon_gart_restore(struct radeon_device *rdev);
extern int radeon_modeset_init(struct radeon_device *rdev);
extern void radeon_modeset_fini(struct radeon_device *rdev);
extern bool radeon_card_posted(struct radeon_device *rdev);
extern void radeon_update_bandwidth_info(struct radeon_device *rdev);
extern void radeon_update_display_priority(struct radeon_device *rdev);
extern bool radeon_boot_test_post_card(struct radeon_device *rdev);
extern void radeon_scratch_init(struct radeon_device *rdev);
extern void radeon_wb_fini(struct radeon_device *rdev);
extern int radeon_wb_init(struct radeon_device *rdev);
extern void radeon_wb_disable(struct radeon_device *rdev);
extern void radeon_surface_init(struct radeon_device *rdev);
extern int radeon_cs_parser_init(struct radeon_cs_parser *p, void *data);
extern void radeon_legacy_set_clock_gating(struct radeon_device *rdev, int enable);
extern void radeon_atom_set_clock_gating(struct radeon_device *rdev, int enable);
extern void radeon_ttm_placement_from_domain(struct radeon_bo *rbo, u32 domain);
extern bool radeon_ttm_bo_is_radeon_bo(struct ttm_buffer_object *bo);
extern void radeon_vram_location(struct radeon_device *rdev, struct radeon_mc *mc, u64 base);
extern void radeon_gtt_location(struct radeon_device *rdev, struct radeon_mc *mc);
extern int radeon_resume_kms(struct drm_device *dev);
extern int radeon_suspend_kms(struct drm_device *dev, pm_message_t state);
extern void radeon_ttm_set_active_vram_size(struct radeon_device *rdev, u64 size);
extern void r600_hdmi_enable(struct drm_encoder *encoder);
extern void r600_hdmi_disable(struct drm_encoder *encoder);
extern void r600_hdmi_setmode(struct drm_encoder *encoder, struct drm_display_mode *mode);
extern int ni_init_microcode(struct radeon_device *rdev);
extern int ni_mc_load_microcode(struct radeon_device *rdev);
#if defined(CONFIG_ACPI)
extern int radeon_acpi_init(struct radeon_device *rdev);
static inline int radeon_acpi_init(struct radeon_device *rdev)
