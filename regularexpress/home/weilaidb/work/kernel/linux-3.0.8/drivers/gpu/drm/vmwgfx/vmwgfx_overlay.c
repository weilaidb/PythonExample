#define VMW_MAX_NUM_STREAMS 1
struct vmw_stream ;
struct vmw_overlay ;
static inline struct vmw_overlay *vmw_overlay(struct drm_device *dev)
struct vmw_escape_header ;
struct vmw_escape_video_flush ;
static inline void fill_escape(struct vmw_escape_header *header,
uint32_t size)
static inline void fill_flush(struct vmw_escape_video_flush *cmd,
uint32_t stream_id)
static int vmw_dmabuf_pin_in_vram(struct vmw_private *dev_priv,
struct vmw_dma_buffer *buf,
bool pin, bool interruptible)
static int vmw_overlay_send_put(struct vmw_private *dev_priv,
struct vmw_dma_buffer *buf,
struct drm_vmw_control_stream_arg *arg,
bool interruptible)
static int vmw_overlay_send_stop(struct vmw_private *dev_priv,
uint32_t stream_id,
bool interruptible)
static int vmw_overlay_stop(struct vmw_private *dev_priv,
uint32_t stream_id, bool pause,
bool interruptible)
static int vmw_overlay_update_stream(struct vmw_private *dev_priv,
struct vmw_dma_buffer *buf,
struct drm_vmw_control_stream_arg *arg,
bool interruptible)
int vmw_overlay_stop_all(struct vmw_private *dev_priv)
int vmw_overlay_resume_all(struct vmw_private *dev_priv)
int vmw_overlay_pause_all(struct vmw_private *dev_priv)
int vmw_overlay_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv)
int vmw_overlay_num_overlays(struct vmw_private *dev_priv)
int vmw_overlay_num_free_overlays(struct vmw_private *dev_priv)
int vmw_overlay_claim(struct vmw_private *dev_priv, uint32_t *out)
int vmw_overlay_unref(struct vmw_private *dev_priv, uint32_t stream_id)
int vmw_overlay_init(struct vmw_private *dev_priv)
int vmw_overlay_close(struct vmw_private *dev_priv)
