#define CMDBUF_ALIGNMENT_SIZE   (0x100)
#define CMDBUF_ALIGNMENT_MASK   (0x0ff)
#define VIA_REG_STATUS          0x400
#define VIA_REG_TRANSET         0x43C
#define VIA_REG_TRANSPACE       0x440
#define VIA_CMD_RGTR_BUSY       0x00000080
#define VIA_2D_ENG_BUSY         0x00000001
#define VIA_3D_ENG_BUSY         0x00000002
#define VIA_VR_QUEUE_BUSY       0x00020000
#define SetReg2DAGP(nReg, nData)
#define via_flush_write_combine() DRM_MEMORYBARRIER()
#define VIA_OUT_RING_QW(w1, w2)	do  while (0)
static void via_cmdbuf_start(drm_via_private_t *dev_priv);
static void via_cmdbuf_pause(drm_via_private_t *dev_priv);
static void via_cmdbuf_reset(drm_via_private_t *dev_priv);
static void via_cmdbuf_rewind(drm_via_private_t *dev_priv);
static int via_wait_idle(drm_via_private_t *dev_priv);
static void via_pad_cache(drm_via_private_t *dev_priv, int qwords);
static uint32_t via_cmdbuf_space(drm_via_private_t *dev_priv)
static uint32_t via_cmdbuf_lag(drm_via_private_t *dev_priv)
static inline int
via_cmdbuf_wait(drm_via_private_t *dev_priv, unsigned int size)
static inline uint32_t *via_check_dma(drm_via_private_t * dev_priv,
unsigned int size)
int via_dma_cleanup(struct drm_device *dev)
static int via_initialize(struct drm_device *dev,
drm_via_private_t *dev_priv,
drm_via_dma_init_t *init)
static int via_dma_init(struct drm_device *dev, void *data, struct drm_file *file_priv)
static int via_dispatch_cmdbuffer(struct drm_device *dev, drm_via_cmdbuffer_t *cmd)
int via_driver_dma_quiescent(struct drm_device *dev)
static int via_flush_ioctl(struct drm_device *dev, void *data, struct drm_file *file_priv)
static int via_cmdbuffer(struct drm_device *dev, void *data, struct drm_file *file_priv)
static int via_dispatch_pci_cmdbuffer(struct drm_device *dev,
drm_via_cmdbuffer_t *cmd)
static int via_pci_cmdbuffer(struct drm_device *dev, void *data, struct drm_file *file_priv)
static inline uint32_t *via_align_buffer(drm_via_private_t *dev_priv,
uint32_t * vb, int qw_count)
static inline uint32_t *via_get_dma(drm_via_private_t *dev_priv)
static int via_hook_segment(drm_via_private_t *dev_priv,
uint32_t pause_addr_hi, uint32_t pause_addr_lo,
int no_pci_fire)
static int via_wait_idle(drm_via_private_t *dev_priv)
static uint32_t *via_align_cmd(drm_via_private_t *dev_priv, uint32_t cmd_type,
uint32_t addr, uint32_t *cmd_addr_hi,
uint32_t *cmd_addr_lo, int skip_wait)
static void via_cmdbuf_start(drm_via_private_t *dev_priv)
static void via_pad_cache(drm_via_private_t *dev_priv, int qwords)
static inline void via_dummy_bitblt(drm_via_private_t *dev_priv)
static void via_cmdbuf_jump(drm_via_private_t *dev_priv)
static void via_cmdbuf_rewind(drm_via_private_t *dev_priv)
static void via_cmdbuf_flush(drm_via_private_t *dev_priv, uint32_t cmd_type)
static void via_cmdbuf_pause(drm_via_private_t *dev_priv)
static void via_cmdbuf_reset(drm_via_private_t *dev_priv)
static int via_cmdbuf_size(struct drm_device *dev, void *data, struct drm_file *file_priv)
struct drm_ioctl_desc via_ioctls[] = ;
int via_max_ioctl = DRM_ARRAY_SIZE(via_ioctls);
