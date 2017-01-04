#define VMW_RES_CONTEXT ttm_driver_type0
#define VMW_RES_SURFACE ttm_driver_type1
#define VMW_RES_STREAM ttm_driver_type2
struct vmw_user_context ;
struct vmw_user_surface ;
struct vmw_user_dma_buffer ;
struct vmw_bo_user_rep ;
struct vmw_stream ;
struct vmw_user_stream ;
static inline struct vmw_dma_buffer *
vmw_dma_buffer(struct ttm_buffer_object *bo)
static inline struct vmw_user_dma_buffer *
vmw_user_dma_buffer(struct ttm_buffer_object *bo)
struct vmw_resource *vmw_resource_reference(struct vmw_resource *res)
static void vmw_resource_release(struct kref *kref)
void vmw_resource_unreference(struct vmw_resource **p_res)
static int vmw_resource_init(struct vmw_private *dev_priv,
struct vmw_resource *res,
struct idr *idr,
enum ttm_object_type obj_type,
void (*res_free) (struct vmw_resource *res))
static void vmw_resource_activate(struct vmw_resource *res,
void (*hw_destroy) (struct vmw_resource *))
struct vmw_resource *vmw_resource_lookup(struct vmw_private *dev_priv,
struct idr *idr, int id)
static void vmw_hw_context_destroy(struct vmw_resource *res)
static int vmw_context_init(struct vmw_private *dev_priv,
struct vmw_resource *res,
void (*res_free) (struct vmw_resource *res))
struct vmw_resource *vmw_context_alloc(struct vmw_private *dev_priv)
static void vmw_user_context_free(struct vmw_resource *res)
static void vmw_user_context_base_release(struct ttm_base_object **p_base)
int vmw_context_destroy_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv)
int vmw_context_define_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv)
int vmw_context_check(struct vmw_private *dev_priv,
struct ttm_object_file *tfile,
int id)
static void vmw_hw_surface_destroy(struct vmw_resource *res)
void vmw_surface_res_free(struct vmw_resource *res)
int vmw_surface_init(struct vmw_private *dev_priv,
struct vmw_surface *srf,
void (*res_free) (struct vmw_resource *res))
static void vmw_user_surface_free(struct vmw_resource *res)
int vmw_user_surface_lookup_handle(struct vmw_private *dev_priv,
struct ttm_object_file *tfile,
uint32_t handle, struct vmw_surface **out)
static void vmw_user_surface_base_release(struct ttm_base_object **p_base)
int vmw_surface_destroy_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv)
int vmw_surface_define_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv)
int vmw_surface_reference_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv)
int vmw_surface_check(struct vmw_private *dev_priv,
struct ttm_object_file *tfile,
uint32_t handle, int *id)
static size_t vmw_dmabuf_acc_size(struct ttm_bo_global *glob,
unsigned long num_pages)
void vmw_dmabuf_bo_free(struct ttm_buffer_object *bo)
int vmw_dmabuf_init(struct vmw_private *dev_priv,
struct vmw_dma_buffer *vmw_bo,
size_t size, struct ttm_placement *placement,
bool interruptible,
void (*bo_free) (struct ttm_buffer_object *bo))
static void vmw_user_dmabuf_destroy(struct ttm_buffer_object *bo)
static void vmw_user_dmabuf_release(struct ttm_base_object **p_base)
int vmw_dmabuf_alloc_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv)
int vmw_dmabuf_unref_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv)
uint32_t vmw_dmabuf_validate_node(struct ttm_buffer_object *bo,
uint32_t cur_validate_node)
void vmw_dmabuf_validate_clear(struct ttm_buffer_object *bo)
int vmw_user_dmabuf_lookup(struct ttm_object_file *tfile,
uint32_t handle, struct vmw_dma_buffer **out)
static void vmw_stream_destroy(struct vmw_resource *res)
static int vmw_stream_init(struct vmw_private *dev_priv,
struct vmw_stream *stream,
void (*res_free) (struct vmw_resource *res))
static void vmw_user_stream_free(struct vmw_resource *res)
static void vmw_user_stream_base_release(struct ttm_base_object **p_base)
int vmw_stream_unref_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv)
int vmw_stream_claim_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv)
int vmw_user_stream_lookup(struct vmw_private *dev_priv,
struct ttm_object_file *tfile,
uint32_t *inout_id, struct vmw_resource **out)
