#define PFP_UCODE_SIZE 576
#define PM4_UCODE_SIZE 1792
#define R700_PFP_UCODE_SIZE 848
#define R700_PM4_UCODE_SIZE 1360
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
int r600_cs_legacy(struct drm_device *dev, void *data, struct drm_file *filp,
unsigned family, u32 *ib, int *l);
void r600_cs_legacy_init(void);
# define ATI_PCIGART_PAGE_SIZE		4096
# define ATI_PCIGART_PAGE_MASK		(~(ATI_PCIGART_PAGE_SIZE-1))
#define R600_PTE_VALID     (1 << 0)
#define R600_PTE_SYSTEM    (1 << 1)
#define R600_PTE_SNOOPED   (1 << 2)
#define R600_PTE_READABLE  (1 << 5)
#define R600_PTE_WRITEABLE (1 << 6)
#define R6XX_MAX_SH_GPRS           256
#define R6XX_MAX_TEMP_GPRS         16
#define R6XX_MAX_SH_THREADS        256
#define R6XX_MAX_SH_STACK_ENTRIES  4096
#define R6XX_MAX_BACKENDS          8
#define R6XX_MAX_BACKENDS_MASK     0xff
#define R6XX_MAX_SIMDS             8
#define R6XX_MAX_SIMDS_MASK        0xff
#define R6XX_MAX_PIPES             8
#define R6XX_MAX_PIPES_MASK        0xff
#define R7XX_MAX_SH_GPRS           256
#define R7XX_MAX_TEMP_GPRS         16
#define R7XX_MAX_SH_THREADS        256
#define R7XX_MAX_SH_STACK_ENTRIES  4096
#define R7XX_MAX_BACKENDS          8
#define R7XX_MAX_BACKENDS_MASK     0xff
#define R7XX_MAX_SIMDS             16
#define R7XX_MAX_SIMDS_MASK        0xffff
#define R7XX_MAX_PIPES             8
#define R7XX_MAX_PIPES_MASK        0xff
static int r600_do_wait_for_fifo(drm_radeon_private_t *dev_priv, int entries)
static int r600_do_wait_for_idle(drm_radeon_private_t *dev_priv)
void r600_page_table_cleanup(struct drm_device *dev, struct drm_ati_pcigart_info *gart_info)
int r600_page_table_init(struct drm_device *dev)
static void r600_vm_flush_gart_range(struct drm_device *dev)
static void r600_vm_init(struct drm_device *dev)
static int r600_cp_init_microcode(drm_radeon_private_t *dev_priv)
static void r600_cp_load_microcode(drm_radeon_private_t *dev_priv)
static void r700_vm_init(struct drm_device *dev)
static void r700_cp_load_microcode(drm_radeon_private_t *dev_priv)
static void r600_test_writeback(drm_radeon_private_t *dev_priv)
int r600_do_engine_reset(struct drm_device *dev)
static u32 r600_get_tile_pipe_to_backend_map(u32 num_tile_pipes,
u32 num_backends,
u32 backend_disable_mask)
static int r600_count_pipe_bits(uint32_t val)
static void r600_gfx_init(struct drm_device *dev,
drm_radeon_private_t *dev_priv)
static u32 r700_get_tile_pipe_to_backend_map(drm_radeon_private_t *dev_priv,
u32 num_tile_pipes,
u32 num_backends,
u32 backend_disable_mask)
static void r700_gfx_init(struct drm_device *dev,
drm_radeon_private_t *dev_priv)
static void r600_cp_init_ring_buffer(struct drm_device *dev,
drm_radeon_private_t *dev_priv,
struct drm_file *file_priv)
int r600_do_cleanup_cp(struct drm_device *dev)
int r600_do_init_cp(struct drm_device *dev, drm_radeon_init_t *init,
struct drm_file *file_priv)
int r600_do_resume_cp(struct drm_device *dev, struct drm_file *file_priv)
int r600_do_cp_idle(drm_radeon_private_t *dev_priv)
void r600_do_cp_start(drm_radeon_private_t *dev_priv)
void r600_do_cp_reset(drm_radeon_private_t *dev_priv)
void r600_do_cp_stop(drm_radeon_private_t *dev_priv)
int r600_cp_dispatch_indirect(struct drm_device *dev,
struct drm_buf *buf, int start, int end)
void r600_cp_dispatch_swap(struct drm_device *dev, struct drm_file *file_priv)
int r600_cp_dispatch_texture(struct drm_device *dev,
struct drm_file *file_priv,
drm_radeon_texture_t *tex,
drm_radeon_tex_image_t *image)
static u32 radeon_cs_id_get(struct drm_radeon_private *radeon)
static void r600_cs_id_emit(drm_radeon_private_t *dev_priv, u32 *id)
static int r600_ib_get(struct drm_device *dev,
struct drm_file *fpriv,
struct drm_buf **buffer)
static void r600_ib_free(struct drm_device *dev, struct drm_buf *buf,
struct drm_file *fpriv, int l, int r)
int r600_cs_legacy_ioctl(struct drm_device *dev, void *data, struct drm_file *fpriv)
void r600_cs_legacy_get_tiling_conf(struct drm_device *dev, u32 *npipes, u32 *nbanks, u32 *group_size)
