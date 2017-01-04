#define DRM_I915_RING_DEBUG 1
#if defined(CONFIG_DEBUG_FS)
enum ;
static const char *yesno(int v)
static int i915_capabilities(struct seq_file *m, void *data)
static const char *get_pin_flag(struct drm_i915_gem_object *obj)
static const char *get_tiling_flag(struct drm_i915_gem_object *obj)
static const char *cache_level_str(int type)
static void
describe_obj(struct seq_file *m, struct drm_i915_gem_object *obj)
static int i915_gem_object_list_info(struct seq_file *m, void *data)
#define count_objects(list, member) do  while(0)
static int i915_gem_object_info(struct seq_file *m, void* data)
static int i915_gem_gtt_info(struct seq_file *m, void* data)
static int i915_gem_pageflip_info(struct seq_file *m, void *data)
static int i915_gem_request_info(struct seq_file *m, void *data)
static void i915_ring_seqno_info(struct seq_file *m,
struct intel_ring_buffer *ring)
static int i915_gem_seqno_info(struct seq_file *m, void *data)
static int i915_interrupt_info(struct seq_file *m, void *data)
static int i915_gem_fence_regs_info(struct seq_file *m, void *data)
static int i915_hws_info(struct seq_file *m, void *data)
static void i915_dump_object(struct seq_file *m,
struct io_mapping *mapping,
struct drm_i915_gem_object *obj)
static int i915_batchbuffer_info(struct seq_file *m, void *data)
static int i915_ringbuffer_data(struct seq_file *m, void *data)
static int i915_ringbuffer_info(struct seq_file *m, void *data)
static const char *ring_str(int ring)
static const char *pin_flag(int pinned)
static const char *tiling_flag(int tiling)
static const char *dirty_flag(int dirty)
static const char *purgeable_flag(int purgeable)
static void print_error_buffers(struct seq_file *m,
const char *name,
struct drm_i915_error_buffer *err,
int count)
static int i915_error_state(struct seq_file *m, void *unused)
static int i915_rstdby_delays(struct seq_file *m, void *unused)
static int i915_cur_delayinfo(struct seq_file *m, void *unused)
static int i915_delayfreq_table(struct seq_file *m, void *unused)
static inline int MAP_TO_MV(int map)
static int i915_inttoext_table(struct seq_file *m, void *unused)
static int i915_drpc_info(struct seq_file *m, void *unused)
static int i915_fbc_status(struct seq_file *m, void *unused)
static int i915_sr_status(struct seq_file *m, void *unused)
static int i915_emon_status(struct seq_file *m, void *unused)
static int i915_gfxec(struct seq_file *m, void *unused)
static int i915_opregion(struct seq_file *m, void *unused)
static int i915_gem_framebuffer_info(struct seq_file *m, void *data)
static int i915_context_status(struct seq_file *m, void *unused)
static int i915_gen6_forcewake_count_info(struct seq_file *m, void *data)
static int
i915_wedged_open(struct inode *inode,
struct file *filp)
static ssize_t
i915_wedged_read(struct file *filp,
char __user *ubuf,
size_t max,
loff_t *ppos)
static ssize_t
i915_wedged_write(struct file *filp,
const char __user *ubuf,
size_t cnt,
loff_t *ppos)
static const struct file_operations i915_wedged_fops = ;
static int
drm_add_fake_info_node(struct drm_minor *minor,
struct dentry *ent,
const void *key)
static int i915_wedged_create(struct dentry *root, struct drm_minor *minor)
static int i915_forcewake_open(struct inode *inode, struct file *file)
int i915_forcewake_release(struct inode *inode, struct file *file)
static const struct file_operations i915_forcewake_fops = ;
static int i915_forcewake_create(struct dentry *root, struct drm_minor *minor)
static struct drm_info_list i915_debugfs_list[] = ;
#define I915_DEBUGFS_ENTRIES ARRAY_SIZE(i915_debugfs_list)
int i915_debugfs_init(struct drm_minor *minor)
void i915_debugfs_cleanup(struct drm_minor *minor)
