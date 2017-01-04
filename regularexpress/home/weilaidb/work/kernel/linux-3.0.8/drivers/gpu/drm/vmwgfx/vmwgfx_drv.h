#define _VMWGFX_DRV_H_
#define VMWGFX_DRIVER_DATE "20100927"
#define VMWGFX_DRIVER_MAJOR 1
#define VMWGFX_DRIVER_MINOR 4
#define VMWGFX_DRIVER_PATCHLEVEL 0
#define VMWGFX_FILE_PAGE_OFFSET 0x00100000
#define VMWGFX_FIFO_STATIC_SIZE (1024*1024)
#define VMWGFX_MAX_RELOCATIONS 2048
#define VMWGFX_MAX_GMRS 2048
#define VMWGFX_MAX_DISPLAYS 16
#define VMW_PL_GMR TTM_PL_PRIV0
#define VMW_PL_FLAG_GMR TTM_PL_FLAG_PRIV0
struct vmw_fpriv ;
struct vmw_dma_buffer ;
struct vmw_resource ;
struct vmw_cursor_snooper ;
struct vmw_surface ;
struct vmw_fence_queue ;
struct vmw_fifo_state ;
struct vmw_relocation ;
struct vmw_sw_context;
struct vmw_legacy_display;
struct vmw_overlay;
struct vmw_master ;
struct vmw_vga_topology_state ;
struct vmw_private ;
static inline struct vmw_private *vmw_priv(struct drm_device *dev)
static inline struct vmw_fpriv *vmw_fpriv(struct drm_file *file_priv)
static inline struct vmw_master *vmw_master(struct drm_master *master)
static inline void vmw_write(struct vmw_private *dev_priv,
unsigned int offset, uint32_t value)
static inline uint32_t vmw_read(struct vmw_private *dev_priv,
unsigned int offset)
int vmw_3d_resource_inc(struct vmw_private *dev_priv);
void vmw_3d_resource_dec(struct vmw_private *dev_priv);
extern int vmw_gmr_bind(struct vmw_private *dev_priv,
struct page *pages[],
unsigned long num_pages,
int gmr_id);
extern void vmw_gmr_unbind(struct vmw_private *dev_priv, int gmr_id);
extern struct vmw_resource *vmw_context_alloc(struct vmw_private *dev_priv);
extern void vmw_resource_unreference(struct vmw_resource **p_res);
extern struct vmw_resource *vmw_resource_reference(struct vmw_resource *res);
extern int vmw_context_destroy_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int vmw_context_define_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int vmw_context_check(struct vmw_private *dev_priv,
struct ttm_object_file *tfile,
int id);
extern void vmw_surface_res_free(struct vmw_resource *res);
extern int vmw_surface_init(struct vmw_private *dev_priv,
struct vmw_surface *srf,
void (*res_free) (struct vmw_resource *res));
extern int vmw_user_surface_lookup_handle(struct vmw_private *dev_priv,
struct ttm_object_file *tfile,
uint32_t handle,
struct vmw_surface **out);
extern int vmw_surface_destroy_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int vmw_surface_define_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int vmw_surface_reference_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int vmw_surface_check(struct vmw_private *dev_priv,
struct ttm_object_file *tfile,
uint32_t handle, int *id);
extern void vmw_dmabuf_bo_free(struct ttm_buffer_object *bo);
extern int vmw_dmabuf_init(struct vmw_private *dev_priv,
struct vmw_dma_buffer *vmw_bo,
size_t size, struct ttm_placement *placement,
bool interuptable,
void (*bo_free) (struct ttm_buffer_object *bo));
extern int vmw_dmabuf_alloc_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int vmw_dmabuf_unref_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern uint32_t vmw_dmabuf_validate_node(struct ttm_buffer_object *bo,
uint32_t cur_validate_node);
extern void vmw_dmabuf_validate_clear(struct ttm_buffer_object *bo);
extern int vmw_user_dmabuf_lookup(struct ttm_object_file *tfile,
uint32_t id, struct vmw_dma_buffer **out);
extern int vmw_dmabuf_to_start_of_vram(struct vmw_private *vmw_priv,
struct vmw_dma_buffer *bo);
extern int vmw_dmabuf_from_vram(struct vmw_private *vmw_priv,
struct vmw_dma_buffer *bo);
extern int vmw_stream_claim_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int vmw_stream_unref_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int vmw_user_stream_lookup(struct vmw_private *dev_priv,
struct ttm_object_file *tfile,
uint32_t *inout_id,
struct vmw_resource **out);
extern int vmw_getparam_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int vmw_fifo_debug_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int vmw_fifo_init(struct vmw_private *dev_priv,
struct vmw_fifo_state *fifo);
extern void vmw_fifo_release(struct vmw_private *dev_priv,
struct vmw_fifo_state *fifo);
extern void *vmw_fifo_reserve(struct vmw_private *dev_priv, uint32_t bytes);
extern void vmw_fifo_commit(struct vmw_private *dev_priv, uint32_t bytes);
extern int vmw_fifo_send_fence(struct vmw_private *dev_priv,
uint32_t *sequence);
extern void vmw_fifo_ping_host(struct vmw_private *dev_priv, uint32_t reason);
extern int vmw_fifo_mmap(struct file *filp, struct vm_area_struct *vma);
extern bool vmw_fifo_have_3d(struct vmw_private *dev_priv);
extern bool vmw_fifo_have_pitchlock(struct vmw_private *dev_priv);
extern int vmw_ttm_global_init(struct vmw_private *dev_priv);
extern void vmw_ttm_global_release(struct vmw_private *dev_priv);
extern int vmw_mmap(struct file *filp, struct vm_area_struct *vma);
extern struct ttm_placement vmw_vram_placement;
extern struct ttm_placement vmw_vram_ne_placement;
extern struct ttm_placement vmw_vram_sys_placement;
extern struct ttm_placement vmw_vram_gmr_placement;
extern struct ttm_placement vmw_sys_placement;
extern struct ttm_bo_driver vmw_bo_driver;
extern int vmw_dma_quiescent(struct drm_device *dev);
extern int vmw_execbuf_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern irqreturn_t vmw_irq_handler(DRM_IRQ_ARGS);
extern int vmw_wait_fence(struct vmw_private *dev_priv, bool lazy,
uint32_t sequence, bool interruptible,
unsigned long timeout);
extern void vmw_irq_preinstall(struct drm_device *dev);
extern int vmw_irq_postinstall(struct drm_device *dev);
extern void vmw_irq_uninstall(struct drm_device *dev);
extern bool vmw_fence_signaled(struct vmw_private *dev_priv,
uint32_t sequence);
extern int vmw_fence_wait_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int vmw_fallback_wait(struct vmw_private *dev_priv,
bool lazy,
bool fifo_idle,
uint32_t sequence,
bool interruptible,
unsigned long timeout);
extern void vmw_update_sequence(struct vmw_private *dev_priv,
struct vmw_fifo_state *fifo_state);
extern void vmw_fence_queue_init(struct vmw_fence_queue *queue);
extern void vmw_fence_queue_takedown(struct vmw_fence_queue *queue);
extern int vmw_fence_push(struct vmw_fence_queue *queue,
uint32_t sequence);
extern int vmw_fence_pull(struct vmw_fence_queue *queue,
uint32_t signaled_sequence);
extern int vmw_wait_lag(struct vmw_private *dev_priv,
struct vmw_fence_queue *queue, uint32_t us);
int vmw_fb_init(struct vmw_private *vmw_priv);
int vmw_fb_close(struct vmw_private *dev_priv);
int vmw_fb_off(struct vmw_private *vmw_priv);
int vmw_fb_on(struct vmw_private *vmw_priv);
int vmw_kms_init(struct vmw_private *dev_priv);
int vmw_kms_close(struct vmw_private *dev_priv);
int vmw_kms_save_vga(struct vmw_private *vmw_priv);
int vmw_kms_restore_vga(struct vmw_private *vmw_priv);
int vmw_kms_cursor_bypass_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
void vmw_kms_cursor_post_execbuf(struct vmw_private *dev_priv);
void vmw_kms_cursor_snoop(struct vmw_surface *srf,
struct ttm_object_file *tfile,
struct ttm_buffer_object *bo,
SVGA3dCmdHeader *header);
void vmw_kms_write_svga(struct vmw_private *vmw_priv,
unsigned width, unsigned height, unsigned pitch,
unsigned bbp, unsigned depth);
int vmw_kms_update_layout_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
void vmw_kms_idle_workqueues(struct vmw_master *vmaster);
bool vmw_kms_validate_mode_vram(struct vmw_private *dev_priv,
uint32_t pitch,
uint32_t height);
u32 vmw_get_vblank_counter(struct drm_device *dev, int crtc);
int vmw_overlay_init(struct vmw_private *dev_priv);
int vmw_overlay_close(struct vmw_private *dev_priv);
int vmw_overlay_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
int vmw_overlay_stop_all(struct vmw_private *dev_priv);
int vmw_overlay_resume_all(struct vmw_private *dev_priv);
int vmw_overlay_pause_all(struct vmw_private *dev_priv);
int vmw_overlay_claim(struct vmw_private *dev_priv, uint32_t *out);
int vmw_overlay_unref(struct vmw_private *dev_priv, uint32_t stream_id);
int vmw_overlay_num_overlays(struct vmw_private *dev_priv);
int vmw_overlay_num_free_overlays(struct vmw_private *dev_priv);
extern const struct ttm_mem_type_manager_func vmw_gmrid_manager_func;
static inline void vmw_surface_unreference(struct vmw_surface **srf)
static inline struct vmw_surface *vmw_surface_reference(struct vmw_surface *srf)
static inline void vmw_dmabuf_unreference(struct vmw_dma_buffer **buf)
static inline struct vmw_dma_buffer *vmw_dmabuf_reference(struct vmw_dma_buffer *buf)
