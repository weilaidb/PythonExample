#define _VIA_DRV_H_
#define DRIVER_AUTHOR	"Various"
#define DRIVER_NAME		"via"
#define DRIVER_DESC		"VIA Unichrome / Pro"
#define DRIVER_DATE		"20070202"
#define DRIVER_MAJOR		2
#define DRIVER_MINOR		11
#define DRIVER_PATCHLEVEL	1
#define VIA_PCI_BUF_SIZE 60000
#define VIA_FIRE_BUF_SIZE  1024
#define VIA_NUM_IRQS 4
typedef struct drm_via_ring_buffer  drm_via_ring_buffer_t;
typedef uint32_t maskarray_t[5];
typedef struct drm_via_irq  drm_via_irq_t;
typedef struct drm_via_private  drm_via_private_t;
enum via_family ;
#define VIA_BASE ((dev_priv->mmio))
#define VIA_READ(reg)		DRM_READ32(VIA_BASE, reg)
#define VIA_WRITE(reg, val)	DRM_WRITE32(VIA_BASE, reg, val)
#define VIA_READ8(reg)		DRM_READ8(VIA_BASE, reg)
#define VIA_WRITE8(reg, val)	DRM_WRITE8(VIA_BASE, reg, val)
extern struct drm_ioctl_desc via_ioctls[];
extern int via_max_ioctl;
extern int via_fb_init(struct drm_device *dev, void *data, struct drm_file *file_priv);
extern int via_mem_alloc(struct drm_device *dev, void *data, struct drm_file *file_priv);
extern int via_mem_free(struct drm_device *dev, void *data, struct drm_file *file_priv);
extern int via_agp_init(struct drm_device *dev, void *data, struct drm_file *file_priv);
extern int via_map_init(struct drm_device *dev, void *data, struct drm_file *file_priv);
extern int via_decoder_futex(struct drm_device *dev, void *data, struct drm_file *file_priv);
extern int via_wait_irq(struct drm_device *dev, void *data, struct drm_file *file_priv);
extern int via_dma_blit_sync(struct drm_device *dev, void *data, struct drm_file *file_priv);
extern int via_dma_blit(struct drm_device *dev, void *data, struct drm_file *file_priv);
extern int via_driver_load(struct drm_device *dev, unsigned long chipset);
extern int via_driver_unload(struct drm_device *dev);
extern int via_init_context(struct drm_device *dev, int context);
extern int via_final_context(struct drm_device *dev, int context);
extern int via_do_cleanup_map(struct drm_device *dev);
extern u32 via_get_vblank_counter(struct drm_device *dev, int crtc);
extern int via_enable_vblank(struct drm_device *dev, int crtc);
extern void via_disable_vblank(struct drm_device *dev, int crtc);
extern irqreturn_t via_driver_irq_handler(DRM_IRQ_ARGS);
extern void via_driver_irq_preinstall(struct drm_device *dev);
extern int via_driver_irq_postinstall(struct drm_device *dev);
extern void via_driver_irq_uninstall(struct drm_device *dev);
extern int via_dma_cleanup(struct drm_device *dev);
extern void via_init_command_verifier(void);
extern int via_driver_dma_quiescent(struct drm_device *dev);
extern void via_init_futex(drm_via_private_t *dev_priv);
extern void via_cleanup_futex(drm_via_private_t *dev_priv);
extern void via_release_futex(drm_via_private_t *dev_priv, int context);
extern void via_reclaim_buffers_locked(struct drm_device *dev,
struct drm_file *file_priv);
extern void via_lastclose(struct drm_device *dev);
extern void via_dmablit_handler(struct drm_device *dev, int engine, int from_irq);
extern void via_init_dmablit(struct drm_device *dev);
