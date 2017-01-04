#define _I915_DRV_H_
#define DRIVER_AUTHOR		"Tungsten Graphics, Inc."
#define DRIVER_NAME		"i915"
#define DRIVER_DESC		"Intel Graphics"
#define DRIVER_DATE		"20080730"
enum pipe ;
#define pipe_name(p) ((p) + 'A')
enum plane ;
#define plane_name(p) ((p) + 'A')
#define I915_GEM_GPU_DOMAINS	(~(I915_GEM_DOMAIN_CPU | I915_GEM_DOMAIN_GTT))
#define for_each_pipe(p) for ((p) = 0; (p) < dev_priv->num_pipe; (p)++)
#define DRIVER_MAJOR		1
#define DRIVER_MINOR		6
#define DRIVER_PATCHLEVEL	0
#define WATCH_COHERENCY	0
#define WATCH_LISTS	0
#define I915_GEM_PHYS_CURSOR_0 1
#define I915_GEM_PHYS_CURSOR_1 2
#define I915_GEM_PHYS_OVERLAY_REGS 3
#define I915_MAX_PHYS_OBJECT (I915_GEM_PHYS_OVERLAY_REGS)
struct drm_i915_gem_phys_object ;
struct mem_block ;
struct opregion_header;
struct opregion_acpi;
struct opregion_swsci;
struct opregion_asle;
struct intel_opregion ;
#define OPREGION_SIZE            (8*1024)
struct intel_overlay;
struct intel_overlay_error_state;
struct drm_i915_master_private ;
#define I915_FENCE_REG_NONE -1
struct drm_i915_fence_reg ;
struct sdvo_device_mapping ;
struct intel_display_error_state;
struct drm_i915_error_state ;
struct drm_i915_display_funcs ;
struct intel_device_info ;
enum no_fbc_reason ;
enum intel_pch ;
#define QUIRK_PIPEA_FORCE (1<<0)
#define QUIRK_LVDS_SSC_DISABLE (1<<1)
struct intel_fbdev;
typedef struct drm_i915_private  drm_i915_private_t;
enum i915_cache_level ;
struct drm_i915_gem_object ;
#define to_intel_bo(x) container_of(x, struct drm_i915_gem_object, base)
struct drm_i915_gem_request ;
struct drm_i915_file_private ;
#define INTEL_INFO(dev)	(((struct drm_i915_private *) (dev)->dev_private)->info)
#define IS_I830(dev)		((dev)->pci_device == 0x3577)
#define IS_845G(dev)		((dev)->pci_device == 0x2562)
#define IS_I85X(dev)		(INTEL_INFO(dev)->is_i85x)
#define IS_I865G(dev)		((dev)->pci_device == 0x2572)
#define IS_I915G(dev)		(INTEL_INFO(dev)->is_i915g)
#define IS_I915GM(dev)		((dev)->pci_device == 0x2592)
#define IS_I945G(dev)		((dev)->pci_device == 0x2772)
#define IS_I945GM(dev)		(INTEL_INFO(dev)->is_i945gm)
#define IS_BROADWATER(dev)	(INTEL_INFO(dev)->is_broadwater)
#define IS_CRESTLINE(dev)	(INTEL_INFO(dev)->is_crestline)
#define IS_GM45(dev)		((dev)->pci_device == 0x2A42)
#define IS_G4X(dev)		(INTEL_INFO(dev)->is_g4x)
#define IS_PINEVIEW_G(dev)	((dev)->pci_device == 0xa001)
#define IS_PINEVIEW_M(dev)	((dev)->pci_device == 0xa011)
#define IS_PINEVIEW(dev)	(INTEL_INFO(dev)->is_pineview)
#define IS_G33(dev)		(INTEL_INFO(dev)->is_g33)
#define IS_IRONLAKE_D(dev)	((dev)->pci_device == 0x0042)
#define IS_IRONLAKE_M(dev)	((dev)->pci_device == 0x0046)
#define IS_IVYBRIDGE(dev)	(INTEL_INFO(dev)->is_ivybridge)
#define IS_MOBILE(dev)		(INTEL_INFO(dev)->is_mobile)
#define IS_GEN2(dev)	(INTEL_INFO(dev)->gen == 2)
#define IS_GEN3(dev)	(INTEL_INFO(dev)->gen == 3)
#define IS_GEN4(dev)	(INTEL_INFO(dev)->gen == 4)
#define IS_GEN5(dev)	(INTEL_INFO(dev)->gen == 5)
#define IS_GEN6(dev)	(INTEL_INFO(dev)->gen == 6)
#define IS_GEN7(dev)	(INTEL_INFO(dev)->gen == 7)
#define HAS_BSD(dev)            (INTEL_INFO(dev)->has_bsd_ring)
#define HAS_BLT(dev)            (INTEL_INFO(dev)->has_blt_ring)
#define I915_NEED_GFX_HWS(dev)	(INTEL_INFO(dev)->need_gfx_hws)
#define HAS_OVERLAY(dev)		(INTEL_INFO(dev)->has_overlay)
#define OVERLAY_NEEDS_PHYSICAL(dev)	(INTEL_INFO(dev)->overlay_needs_physical)
#define HAS_128_BYTE_Y_TILING(dev) (!IS_GEN2(dev) && !(IS_I915G(dev) || \
IS_I915GM(dev)))
#define SUPPORTS_DIGITAL_OUTPUTS(dev)	(!IS_GEN2(dev) && !IS_PINEVIEW(dev))
#define SUPPORTS_INTEGRATED_HDMI(dev)	(IS_G4X(dev) || IS_GEN5(dev))
#define SUPPORTS_INTEGRATED_DP(dev)	(IS_G4X(dev) || IS_GEN5(dev))
#define SUPPORTS_EDP(dev)		(IS_IRONLAKE_M(dev))
#define SUPPORTS_TV(dev)		(INTEL_INFO(dev)->supports_tv)
#define I915_HAS_HOTPLUG(dev)		 (INTEL_INFO(dev)->has_hotplug)
#define DSPARB_HWCONTROL(dev) (IS_G4X(dev) || IS_IRONLAKE(dev))
#define HAS_FW_BLC(dev) (INTEL_INFO(dev)->gen > 2)
#define HAS_PIPE_CXSR(dev) (INTEL_INFO(dev)->has_pipe_cxsr)
#define I915_HAS_FBC(dev) (INTEL_INFO(dev)->has_fbc)
#define HAS_PCH_SPLIT(dev) (IS_GEN5(dev) || IS_GEN6(dev) || IS_IVYBRIDGE(dev))
#define HAS_PIPE_CONTROL(dev) (INTEL_INFO(dev)->gen >= 5)
#define INTEL_PCH_TYPE(dev) (((struct drm_i915_private *)(dev)->dev_private)->pch_type)
#define HAS_PCH_CPT(dev) (INTEL_PCH_TYPE(dev) == PCH_CPT)
#define HAS_PCH_IBX(dev) (INTEL_PCH_TYPE(dev) == PCH_IBX)
extern struct drm_ioctl_desc i915_ioctls[];
extern int i915_max_ioctl;
extern unsigned int i915_fbpercrtc;
extern int i915_panel_ignore_lid;
extern unsigned int i915_powersave;
extern unsigned int i915_semaphores;
extern unsigned int i915_lvds_downclock;
extern unsigned int i915_panel_use_ssc;
extern int i915_vbt_sdvo_panel_type;
extern unsigned int i915_enable_rc6;
extern unsigned int i915_enable_fbc;
extern int i915_suspend(struct drm_device *dev, pm_message_t state);
extern int i915_resume(struct drm_device *dev);
extern int i915_master_create(struct drm_device *dev, struct drm_master *master);
extern void i915_master_destroy(struct drm_device *dev, struct drm_master *master);
extern void i915_kernel_lost_context(struct drm_device * dev);
extern int i915_driver_load(struct drm_device *, unsigned long flags);
extern int i915_driver_unload(struct drm_device *);
extern int i915_driver_open(struct drm_device *dev, struct drm_file *file_priv);
extern void i915_driver_lastclose(struct drm_device * dev);
extern void i915_driver_preclose(struct drm_device *dev,
struct drm_file *file_priv);
extern void i915_driver_postclose(struct drm_device *dev,
struct drm_file *file_priv);
extern int i915_driver_device_is_agp(struct drm_device * dev);
extern long i915_compat_ioctl(struct file *filp, unsigned int cmd,
unsigned long arg);
extern int i915_emit_box(struct drm_device *dev,
struct drm_clip_rect *box,
int DR1, int DR4);
extern int i915_reset(struct drm_device *dev, u8 flags);
extern unsigned long i915_chipset_val(struct drm_i915_private *dev_priv);
extern unsigned long i915_mch_val(struct drm_i915_private *dev_priv);
extern unsigned long i915_gfx_val(struct drm_i915_private *dev_priv);
extern void i915_update_gfx_val(struct drm_i915_private *dev_priv);
void i915_hangcheck_elapsed(unsigned long data);
void i915_handle_error(struct drm_device *dev, bool wedged);
extern int i915_irq_emit(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int i915_irq_wait(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern void intel_irq_init(struct drm_device *dev);
extern int i915_vblank_pipe_set(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int i915_vblank_pipe_get(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int i915_vblank_swap(struct drm_device *dev, void *data,
struct drm_file *file_priv);
void
i915_enable_pipestat(drm_i915_private_t *dev_priv, int pipe, u32 mask);
void
i915_disable_pipestat(drm_i915_private_t *dev_priv, int pipe, u32 mask);
void intel_enable_asle (struct drm_device *dev);
extern void i915_destroy_error_state(struct drm_device *dev);
#define i915_destroy_error_state(x)
extern int i915_mem_alloc(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int i915_mem_free(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int i915_mem_init_heap(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int i915_mem_destroy_heap(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern void i915_mem_takedown(struct mem_block **heap);
extern void i915_mem_release(struct drm_device * dev,
struct drm_file *file_priv, struct mem_block *heap);
int i915_gem_init_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
int i915_gem_create_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
int i915_gem_pread_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
int i915_gem_pwrite_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
int i915_gem_mmap_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
int i915_gem_mmap_gtt_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
int i915_gem_set_domain_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
int i915_gem_sw_finish_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
int i915_gem_execbuffer(struct drm_device *dev, void *data,
struct drm_file *file_priv);
int i915_gem_execbuffer2(struct drm_device *dev, void *data,
struct drm_file *file_priv);
int i915_gem_pin_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
int i915_gem_unpin_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
int i915_gem_busy_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
int i915_gem_throttle_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
int i915_gem_madvise_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
int i915_gem_entervt_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
int i915_gem_leavevt_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
int i915_gem_set_tiling(struct drm_device *dev, void *data,
struct drm_file *file_priv);
int i915_gem_get_tiling(struct drm_device *dev, void *data,
struct drm_file *file_priv);
int i915_gem_get_aperture_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
void i915_gem_load(struct drm_device *dev);
int i915_gem_init_object(struct drm_gem_object *obj);
int __must_check i915_gem_flush_ring(struct intel_ring_buffer *ring,
uint32_t invalidate_domains,
uint32_t flush_domains);
struct drm_i915_gem_object *i915_gem_alloc_object(struct drm_device *dev,
size_t size);
void i915_gem_free_object(struct drm_gem_object *obj);
int __must_check i915_gem_object_pin(struct drm_i915_gem_object *obj,
uint32_t alignment,
bool map_and_fenceable);
void i915_gem_object_unpin(struct drm_i915_gem_object *obj);
int __must_check i915_gem_object_unbind(struct drm_i915_gem_object *obj);
void i915_gem_release_mmap(struct drm_i915_gem_object *obj);
void i915_gem_lastclose(struct drm_device *dev);
int __must_check i915_mutex_lock_interruptible(struct drm_device *dev);
int __must_check i915_gem_object_wait_rendering(struct drm_i915_gem_object *obj);
void i915_gem_object_move_to_active(struct drm_i915_gem_object *obj,
struct intel_ring_buffer *ring,
u32 seqno);
int i915_gem_dumb_create(struct drm_file *file_priv,
struct drm_device *dev,
struct drm_mode_create_dumb *args);
int i915_gem_mmap_gtt(struct drm_file *file_priv, struct drm_device *dev,
uint32_t handle, uint64_t *offset);
int i915_gem_dumb_destroy(struct drm_file *file_priv, struct drm_device *dev,
uint32_t handle);
static inline bool
i915_seqno_passed(uint32_t seq1, uint32_t seq2)
static inline u32
i915_gem_next_request_seqno(struct intel_ring_buffer *ring)
int __must_check i915_gem_object_get_fence(struct drm_i915_gem_object *obj,
struct intel_ring_buffer *pipelined);
int __must_check i915_gem_object_put_fence(struct drm_i915_gem_object *obj);
void i915_gem_retire_requests(struct drm_device *dev);
void i915_gem_reset(struct drm_device *dev);
void i915_gem_clflush_object(struct drm_i915_gem_object *obj);
int __must_check i915_gem_object_set_domain(struct drm_i915_gem_object *obj,
uint32_t read_domains,
uint32_t write_domain);
int __must_check i915_gem_object_flush_gpu(struct drm_i915_gem_object *obj);
int __must_check i915_gem_init_ringbuffer(struct drm_device *dev);
void i915_gem_cleanup_ringbuffer(struct drm_device *dev);
void i915_gem_do_init(struct drm_device *dev,
unsigned long start,
unsigned long mappable_end,
unsigned long end);
int __must_check i915_gpu_idle(struct drm_device *dev);
int __must_check i915_gem_idle(struct drm_device *dev);
int __must_check i915_add_request(struct intel_ring_buffer *ring,
struct drm_file *file,
struct drm_i915_gem_request *request);
int __must_check i915_wait_request(struct intel_ring_buffer *ring,
uint32_t seqno);
int i915_gem_fault(struct vm_area_struct *vma, struct vm_fault *vmf);
int __must_check
i915_gem_object_set_to_gtt_domain(struct drm_i915_gem_object *obj,
bool write);
int __must_check
i915_gem_object_set_to_display_plane(struct drm_i915_gem_object *obj,
struct intel_ring_buffer *pipelined);
int i915_gem_attach_phys_object(struct drm_device *dev,
struct drm_i915_gem_object *obj,
int id,
int align);
void i915_gem_detach_phys_object(struct drm_device *dev,
struct drm_i915_gem_object *obj);
void i915_gem_free_all_phys_object(struct drm_device *dev);
void i915_gem_release(struct drm_device *dev, struct drm_file *file);
uint32_t
i915_gem_get_unfenced_gtt_alignment(struct drm_device *dev,
uint32_t size,
int tiling_mode);
void i915_gem_restore_gtt_mappings(struct drm_device *dev);
int __must_check i915_gem_gtt_bind_object(struct drm_i915_gem_object *obj);
void i915_gem_gtt_unbind_object(struct drm_i915_gem_object *obj);
int __must_check i915_gem_evict_something(struct drm_device *dev, int min_size,
unsigned alignment, bool mappable);
int __must_check i915_gem_evict_everything(struct drm_device *dev,
bool purgeable_only);
int __must_check i915_gem_evict_inactive(struct drm_device *dev,
bool purgeable_only);
void i915_gem_detect_bit_6_swizzle(struct drm_device *dev);
void i915_gem_object_do_bit_17_swizzle(struct drm_i915_gem_object *obj);
void i915_gem_object_save_bit_17_swizzle(struct drm_i915_gem_object *obj);
void i915_gem_dump_object(struct drm_i915_gem_object *obj, int len,
const char *where, uint32_t mark);
#if WATCH_LISTS
int i915_verify_lists(struct drm_device *dev);
#define i915_verify_lists(dev) 0
void i915_gem_object_check_coherency(struct drm_i915_gem_object *obj,
int handle);
void i915_gem_dump_object(struct drm_i915_gem_object *obj, int len,
const char *where, uint32_t mark);
int i915_debugfs_init(struct drm_minor *minor);
void i915_debugfs_cleanup(struct drm_minor *minor);
extern int i915_save_state(struct drm_device *dev);
extern int i915_restore_state(struct drm_device *dev);
extern int i915_save_state(struct drm_device *dev);
extern int i915_restore_state(struct drm_device *dev);
extern int intel_setup_gmbus(struct drm_device *dev);
extern void intel_teardown_gmbus(struct drm_device *dev);
extern void intel_gmbus_set_speed(struct i2c_adapter *adapter, int speed);
extern void intel_gmbus_force_bit(struct i2c_adapter *adapter, bool force_bit);
extern inline bool intel_gmbus_is_forced_bit(struct i2c_adapter *adapter)
extern void intel_i2c_reset(struct drm_device *dev);
extern int intel_opregion_setup(struct drm_device *dev);
extern void intel_opregion_init(struct drm_device *dev);
extern void intel_opregion_fini(struct drm_device *dev);
extern void intel_opregion_asle_intr(struct drm_device *dev);
extern void intel_opregion_gse_intr(struct drm_device *dev);
extern void intel_opregion_enable_asle(struct drm_device *dev);
static inline void intel_opregion_init(struct drm_device *dev)
static inline void intel_opregion_fini(struct drm_device *dev)
static inline void intel_opregion_asle_intr(struct drm_device *dev)
static inline void intel_opregion_gse_intr(struct drm_device *dev)
static inline void intel_opregion_enable_asle(struct drm_device *dev)
extern void intel_register_dsm_handler(void);
extern void intel_unregister_dsm_handler(void);
static inline void intel_register_dsm_handler(void)
static inline void intel_unregister_dsm_handler(void)
extern void intel_modeset_init(struct drm_device *dev);
extern void intel_modeset_gem_init(struct drm_device *dev);
extern void intel_modeset_cleanup(struct drm_device *dev);
extern int intel_modeset_vga_set_state(struct drm_device *dev, bool state);
extern void i8xx_disable_fbc(struct drm_device *dev);
extern void g4x_disable_fbc(struct drm_device *dev);
extern void ironlake_disable_fbc(struct drm_device *dev);
extern void intel_disable_fbc(struct drm_device *dev);
extern void intel_enable_fbc(struct drm_crtc *crtc, unsigned long interval);
extern bool intel_fbc_enabled(struct drm_device *dev);
extern bool ironlake_set_drps(struct drm_device *dev, u8 val);
extern void ironlake_enable_rc6(struct drm_device *dev);
extern void gen6_set_rps(struct drm_device *dev, u8 val);
extern void intel_detect_pch (struct drm_device *dev);
extern int intel_trans_dp_port_sel (struct drm_crtc *crtc);
extern struct intel_overlay_error_state *intel_overlay_capture_error_state(struct drm_device *dev);
extern void intel_overlay_print_error_state(struct seq_file *m, struct intel_overlay_error_state *error);
extern struct intel_display_error_state *intel_display_capture_error_state(struct drm_device *dev);
extern void intel_display_print_error_state(struct seq_file *m,
struct drm_device *dev,
struct intel_display_error_state *error);
#define LP_RING(d) (&((struct drm_i915_private *)(d))->ring[RCS])
#define BEGIN_LP_RING(n) \
intel_ring_begin(LP_RING(dev_priv), (n))
#define OUT_RING(x) \
intel_ring_emit(LP_RING(dev_priv), x)
#define ADVANCE_LP_RING() \
intel_ring_advance(LP_RING(dev_priv))
#define RING_LOCK_TEST_WITH_RETURN(dev, file) do  while (0)
void gen6_gt_force_wake_get(struct drm_i915_private *dev_priv);
void gen6_gt_force_wake_put(struct drm_i915_private *dev_priv);
void __gen6_gt_wait_for_fifo(struct drm_i915_private *dev_priv);
#define NEEDS_FORCE_WAKE(dev_priv, reg) \
(((dev_priv)->info->gen >= 6) && \
((reg) < 0x40000) && \
((reg) != FORCEWAKE))
#define __i915_read(x, y) \
static inline u##x i915_read##x(struct drm_i915_private *dev_priv, u32 reg)
__i915_read(8, b)
__i915_read(16, w)
__i915_read(32, l)
__i915_read(64, q)
#undef __i915_read
#define __i915_write(x, y) \
static inline void i915_write##x(struct drm_i915_private *dev_priv, u32 reg, u##x val)
__i915_write(8, b)
__i915_write(16, w)
__i915_write(32, l)
__i915_write(64, q)
#undef __i915_write
#define I915_READ8(reg)		i915_read8(dev_priv, (reg))
#define I915_WRITE8(reg, val)	i915_write8(dev_priv, (reg), (val))
#define I915_READ16(reg)	i915_read16(dev_priv, (reg))
#define I915_WRITE16(reg, val)	i915_write16(dev_priv, (reg), (val))
#define I915_READ16_NOTRACE(reg)	readw(dev_priv->regs + (reg))
#define I915_WRITE16_NOTRACE(reg, val)	writew(val, dev_priv->regs + (reg))
#define I915_READ(reg)		i915_read32(dev_priv, (reg))
#define I915_WRITE(reg, val)	i915_write32(dev_priv, (reg), (val))
#define I915_READ_NOTRACE(reg)		readl(dev_priv->regs + (reg))
#define I915_WRITE_NOTRACE(reg, val)	writel(val, dev_priv->regs + (reg))
#define I915_WRITE64(reg, val)	i915_write64(dev_priv, (reg), (val))
#define I915_READ64(reg)	i915_read64(dev_priv, (reg))
#define POSTING_READ(reg)	(void)I915_READ_NOTRACE(reg)
#define POSTING_READ16(reg)	(void)I915_READ16_NOTRACE(reg)
