static __must_check int i915_gem_object_flush_gpu_write_domain(struct drm_i915_gem_object *obj);
static void i915_gem_object_flush_gtt_write_domain(struct drm_i915_gem_object *obj);
static void i915_gem_object_flush_cpu_write_domain(struct drm_i915_gem_object *obj);
static __must_check int i915_gem_object_set_to_cpu_domain(struct drm_i915_gem_object *obj,
bool write);
static __must_check int i915_gem_object_set_cpu_read_domain_range(struct drm_i915_gem_object *obj,
uint64_t offset,
uint64_t size);
static void i915_gem_object_set_to_full_cpu_read_domain(struct drm_i915_gem_object *obj);
static __must_check int i915_gem_object_bind_to_gtt(struct drm_i915_gem_object *obj,
unsigned alignment,
bool map_and_fenceable);
static void i915_gem_clear_fence_reg(struct drm_device *dev,
struct drm_i915_fence_reg *reg);
static int i915_gem_phys_pwrite(struct drm_device *dev,
struct drm_i915_gem_object *obj,
struct drm_i915_gem_pwrite *args,
struct drm_file *file);
static void i915_gem_free_object_tail(struct drm_i915_gem_object *obj);
static int i915_gem_inactive_shrink(struct shrinker *shrinker,
struct shrink_control *sc);
static void i915_gem_info_add_obj(struct drm_i915_private *dev_priv,
size_t size)
static void i915_gem_info_remove_obj(struct drm_i915_private *dev_priv,
size_t size)
static int
i915_gem_wait_for_error(struct drm_device *dev)
int i915_mutex_lock_interruptible(struct drm_device *dev)
static inline bool
i915_gem_object_is_inactive(struct drm_i915_gem_object *obj)
void i915_gem_do_init(struct drm_device *dev,
unsigned long start,
unsigned long mappable_end,
unsigned long end)
int
i915_gem_init_ioctl(struct drm_device *dev, void *data,
struct drm_file *file)
int
i915_gem_get_aperture_ioctl(struct drm_device *dev, void *data,
struct drm_file *file)
static int
i915_gem_create(struct drm_file *file,
struct drm_device *dev,
uint64_t size,
uint32_t *handle_p)
int
i915_gem_dumb_create(struct drm_file *file,
struct drm_device *dev,
struct drm_mode_create_dumb *args)
int i915_gem_dumb_destroy(struct drm_file *file,
struct drm_device *dev,
uint32_t handle)
int
i915_gem_create_ioctl(struct drm_device *dev, void *data,
struct drm_file *file)
static int i915_gem_object_needs_bit17_swizzle(struct drm_i915_gem_object *obj)
static inline void
slow_shmem_copy(struct page *dst_page,
int dst_offset,
struct page *src_page,
int src_offset,
int length)
static inline void
slow_shmem_bit17_copy(struct page *gpu_page,
int gpu_offset,
struct page *cpu_page,
int cpu_offset,
int length,
int is_read)
static int
i915_gem_shmem_pread_fast(struct drm_device *dev,
struct drm_i915_gem_object *obj,
struct drm_i915_gem_pread *args,
struct drm_file *file)
static int
i915_gem_shmem_pread_slow(struct drm_device *dev,
struct drm_i915_gem_object *obj,
struct drm_i915_gem_pread *args,
struct drm_file *file)
int
i915_gem_pread_ioctl(struct drm_device *dev, void *data,
struct drm_file *file)
static inline int
fast_user_write(struct io_mapping *mapping,
loff_t page_base, int page_offset,
char __user *user_data,
int length)
static inline void
slow_kernel_write(struct io_mapping *mapping,
loff_t gtt_base, int gtt_offset,
struct page *user_page, int user_offset,
int length)
static int
i915_gem_gtt_pwrite_fast(struct drm_device *dev,
struct drm_i915_gem_object *obj,
struct drm_i915_gem_pwrite *args,
struct drm_file *file)
static int
i915_gem_gtt_pwrite_slow(struct drm_device *dev,
struct drm_i915_gem_object *obj,
struct drm_i915_gem_pwrite *args,
struct drm_file *file)
static int
i915_gem_shmem_pwrite_fast(struct drm_device *dev,
struct drm_i915_gem_object *obj,
struct drm_i915_gem_pwrite *args,
struct drm_file *file)
static int
i915_gem_shmem_pwrite_slow(struct drm_device *dev,
struct drm_i915_gem_object *obj,
struct drm_i915_gem_pwrite *args,
struct drm_file *file)
int
i915_gem_pwrite_ioctl(struct drm_device *dev, void *data,
struct drm_file *file)
int
i915_gem_set_domain_ioctl(struct drm_device *dev, void *data,
struct drm_file *file)
int
i915_gem_sw_finish_ioctl(struct drm_device *dev, void *data,
struct drm_file *file)
int
i915_gem_mmap_ioctl(struct drm_device *dev, void *data,
struct drm_file *file)
int i915_gem_fault(struct vm_area_struct *vma, struct vm_fault *vmf)
static int
i915_gem_create_mmap_offset(struct drm_i915_gem_object *obj)
void
i915_gem_release_mmap(struct drm_i915_gem_object *obj)
static void
i915_gem_free_mmap_offset(struct drm_i915_gem_object *obj)
static uint32_t
i915_gem_get_gtt_size(struct drm_device *dev, uint32_t size, int tiling_mode)
static uint32_t
i915_gem_get_gtt_alignment(struct drm_device *dev,
uint32_t size,
int tiling_mode)
uint32_t
i915_gem_get_unfenced_gtt_alignment(struct drm_device *dev,
uint32_t size,
int tiling_mode)
int
i915_gem_mmap_gtt(struct drm_file *file,
struct drm_device *dev,
uint32_t handle,
uint64_t *offset)
int
i915_gem_mmap_gtt_ioctl(struct drm_device *dev, void *data,
struct drm_file *file)
static int
i915_gem_object_get_pages_gtt(struct drm_i915_gem_object *obj,
gfp_t gfpmask)
static void
i915_gem_object_put_pages_gtt(struct drm_i915_gem_object *obj)
void
i915_gem_object_move_to_active(struct drm_i915_gem_object *obj,
struct intel_ring_buffer *ring,
u32 seqno)
static void
i915_gem_object_move_off_active(struct drm_i915_gem_object *obj)
static void
i915_gem_object_move_to_flushing(struct drm_i915_gem_object *obj)
static void
i915_gem_object_move_to_inactive(struct drm_i915_gem_object *obj)
static void
i915_gem_object_truncate(struct drm_i915_gem_object *obj)
static inline int
i915_gem_object_is_purgeable(struct drm_i915_gem_object *obj)
static void
i915_gem_process_flushing_list(struct intel_ring_buffer *ring,
uint32_t flush_domains)
int
i915_add_request(struct intel_ring_buffer *ring,
struct drm_file *file,
struct drm_i915_gem_request *request)
static inline void
i915_gem_request_remove_from_client(struct drm_i915_gem_request *request)
static void i915_gem_reset_ring_lists(struct drm_i915_private *dev_priv,
struct intel_ring_buffer *ring)
static void i915_gem_reset_fences(struct drm_device *dev)
void i915_gem_reset(struct drm_device *dev)
static void
i915_gem_retire_requests_ring(struct intel_ring_buffer *ring)
void
i915_gem_retire_requests(struct drm_device *dev)
static void
i915_gem_retire_work_handler(struct work_struct *work)
int
i915_wait_request(struct intel_ring_buffer *ring,
uint32_t seqno)
int
i915_gem_object_wait_rendering(struct drm_i915_gem_object *obj)
int
i915_gem_object_unbind(struct drm_i915_gem_object *obj)
int
i915_gem_flush_ring(struct intel_ring_buffer *ring,
uint32_t invalidate_domains,
uint32_t flush_domains)
static int i915_ring_idle(struct intel_ring_buffer *ring)
int
i915_gpu_idle(struct drm_device *dev)
static int sandybridge_write_fence_reg(struct drm_i915_gem_object *obj,
struct intel_ring_buffer *pipelined)
static int i965_write_fence_reg(struct drm_i915_gem_object *obj,
struct intel_ring_buffer *pipelined)
static int i915_write_fence_reg(struct drm_i915_gem_object *obj,
struct intel_ring_buffer *pipelined)
static int i830_write_fence_reg(struct drm_i915_gem_object *obj,
struct intel_ring_buffer *pipelined)
static bool ring_passed_seqno(struct intel_ring_buffer *ring, u32 seqno)
static int
i915_gem_object_flush_fence(struct drm_i915_gem_object *obj,
struct intel_ring_buffer *pipelined)
int
i915_gem_object_put_fence(struct drm_i915_gem_object *obj)
static struct drm_i915_fence_reg *
i915_find_fence_reg(struct drm_device *dev,
struct intel_ring_buffer *pipelined)
int
i915_gem_object_get_fence(struct drm_i915_gem_object *obj,
struct intel_ring_buffer *pipelined)
static void
i915_gem_clear_fence_reg(struct drm_device *dev,
struct drm_i915_fence_reg *reg)
static int
i915_gem_object_bind_to_gtt(struct drm_i915_gem_object *obj,
unsigned alignment,
bool map_and_fenceable)
void
i915_gem_clflush_object(struct drm_i915_gem_object *obj)
static int
i915_gem_object_flush_gpu_write_domain(struct drm_i915_gem_object *obj)
static void
i915_gem_object_flush_gtt_write_domain(struct drm_i915_gem_object *obj)
static void
i915_gem_object_flush_cpu_write_domain(struct drm_i915_gem_object *obj)
int
i915_gem_object_set_to_gtt_domain(struct drm_i915_gem_object *obj, bool write)
int
i915_gem_object_set_to_display_plane(struct drm_i915_gem_object *obj,
struct intel_ring_buffer *pipelined)
int
i915_gem_object_flush_gpu(struct drm_i915_gem_object *obj)
static int
i915_gem_object_set_to_cpu_domain(struct drm_i915_gem_object *obj, bool write)
static void
i915_gem_object_set_to_full_cpu_read_domain(struct drm_i915_gem_object *obj)
static int
i915_gem_object_set_cpu_read_domain_range(struct drm_i915_gem_object *obj,
uint64_t offset, uint64_t size)
static int
i915_gem_ring_throttle(struct drm_device *dev, struct drm_file *file)
int
i915_gem_object_pin(struct drm_i915_gem_object *obj,
uint32_t alignment,
bool map_and_fenceable)
void
i915_gem_object_unpin(struct drm_i915_gem_object *obj)
int
i915_gem_pin_ioctl(struct drm_device *dev, void *data,
struct drm_file *file)
int
i915_gem_unpin_ioctl(struct drm_device *dev, void *data,
struct drm_file *file)
int
i915_gem_busy_ioctl(struct drm_device *dev, void *data,
struct drm_file *file)
int
i915_gem_throttle_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv)
int
i915_gem_madvise_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv)
struct drm_i915_gem_object *i915_gem_alloc_object(struct drm_device *dev,
size_t size)
int i915_gem_init_object(struct drm_gem_object *obj)
static void i915_gem_free_object_tail(struct drm_i915_gem_object *obj)
void i915_gem_free_object(struct drm_gem_object *gem_obj)
int
i915_gem_idle(struct drm_device *dev)
int
i915_gem_init_ringbuffer(struct drm_device *dev)
void
i915_gem_cleanup_ringbuffer(struct drm_device *dev)
int
i915_gem_entervt_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv)
int
i915_gem_leavevt_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv)
void
i915_gem_lastclose(struct drm_device *dev)
static void
init_ring_lists(struct intel_ring_buffer *ring)
void
i915_gem_load(struct drm_device *dev)
static int i915_gem_init_phys_object(struct drm_device *dev,
int id, int size, int align)
static void i915_gem_free_phys_object(struct drm_device *dev, int id)
void i915_gem_free_all_phys_object(struct drm_device *dev)
void i915_gem_detach_phys_object(struct drm_device *dev,
struct drm_i915_gem_object *obj)
int
i915_gem_attach_phys_object(struct drm_device *dev,
struct drm_i915_gem_object *obj,
int id,
int align)
static int
i915_gem_phys_pwrite(struct drm_device *dev,
struct drm_i915_gem_object *obj,
struct drm_i915_gem_pwrite *args,
struct drm_file *file_priv)
void i915_gem_release(struct drm_device *dev, struct drm_file *file)
static int
i915_gpu_is_active(struct drm_device *dev)
static int
i915_gem_inactive_shrink(struct shrinker *shrinker, struct shrink_control *sc)
