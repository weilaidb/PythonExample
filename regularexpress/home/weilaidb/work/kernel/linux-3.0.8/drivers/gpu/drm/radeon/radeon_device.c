static const char radeon_family_name[][16] = ;
void radeon_surface_init(struct radeon_device *rdev)
void radeon_scratch_init(struct radeon_device *rdev)
int radeon_scratch_get(struct radeon_device *rdev, uint32_t *reg)
void radeon_scratch_free(struct radeon_device *rdev, uint32_t reg)
void radeon_wb_disable(struct radeon_device *rdev)
void radeon_wb_fini(struct radeon_device *rdev)
int radeon_wb_init(struct radeon_device *rdev)
void radeon_vram_location(struct radeon_device *rdev, struct radeon_mc *mc, u64 base)
void radeon_gtt_location(struct radeon_device *rdev, struct radeon_mc *mc)
bool radeon_card_posted(struct radeon_device *rdev)
void radeon_update_bandwidth_info(struct radeon_device *rdev)
bool radeon_boot_test_post_card(struct radeon_device *rdev)
int radeon_dummy_page_init(struct radeon_device *rdev)
void radeon_dummy_page_fini(struct radeon_device *rdev)
static uint32_t cail_pll_read(struct card_info *info, uint32_t reg)
static void cail_pll_write(struct card_info *info, uint32_t reg, uint32_t val)
static uint32_t cail_mc_read(struct card_info *info, uint32_t reg)
static void cail_mc_write(struct card_info *info, uint32_t reg, uint32_t val)
static void cail_reg_write(struct card_info *info, uint32_t reg, uint32_t val)
static uint32_t cail_reg_read(struct card_info *info, uint32_t reg)
static void cail_ioreg_write(struct card_info *info, uint32_t reg, uint32_t val)
static uint32_t cail_ioreg_read(struct card_info *info, uint32_t reg)
int radeon_atombios_init(struct radeon_device *rdev)
void radeon_atombios_fini(struct radeon_device *rdev)
int radeon_combios_init(struct radeon_device *rdev)
void radeon_combios_fini(struct radeon_device *rdev)
static unsigned int radeon_vga_set_decode(void *cookie, bool state)
void radeon_check_arguments(struct radeon_device *rdev)
static void radeon_switcheroo_set_state(struct pci_dev *pdev, enum vga_switcheroo_state state)
static bool radeon_switcheroo_can_switch(struct pci_dev *pdev)
int radeon_device_init(struct radeon_device *rdev,
struct drm_device *ddev,
struct pci_dev *pdev,
uint32_t flags)
void radeon_device_fini(struct radeon_device *rdev)
int radeon_suspend_kms(struct drm_device *dev, pm_message_t state)
int radeon_resume_kms(struct drm_device *dev)
int radeon_gpu_reset(struct radeon_device *rdev)
struct radeon_debugfs ;
static struct radeon_debugfs _radeon_debugfs[RADEON_DEBUGFS_MAX_NUM_FILES];
static unsigned _radeon_debugfs_count = 0;
int radeon_debugfs_add_files(struct radeon_device *rdev,
struct drm_info_list *files,
unsigned nfiles)
#if defined(CONFIG_DEBUG_FS)
int radeon_debugfs_init(struct drm_minor *minor)
void radeon_debugfs_cleanup(struct drm_minor *minor)
