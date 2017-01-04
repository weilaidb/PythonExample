#define __NOUVEAU_DRV_H__
#define DRIVER_AUTHOR		"Stephane Marchesin"
#define DRIVER_EMAIL		"dri-devel@lists.sourceforge.net"
#define DRIVER_NAME		"nouveau"
#define DRIVER_DESC		"nVidia Riva/TNT/GeForce"
#define DRIVER_DATE		"20090420"
#define DRIVER_MAJOR		0
#define DRIVER_MINOR		0
#define DRIVER_PATCHLEVEL	16
#define NOUVEAU_FAMILY   0x0000FFFF
#define NOUVEAU_FLAGS    0xFFFF0000
struct nouveau_fpriv ;
#define DRM_FILE_PAGE_OFFSET (0x100000000ULL >> PAGE_SHIFT)
struct nouveau_grctx;
struct nouveau_mem;
#define MAX_NUM_DCB_ENTRIES 16
#define NOUVEAU_MAX_CHANNEL_NR 128
#define NOUVEAU_MAX_TILE_NR 15
struct nouveau_mem ;
struct nouveau_tile_reg ;
struct nouveau_bo ;
#define nouveau_bo_tile_layout(nvbo)				\
((nvbo)->tile_flags & NOUVEAU_GEM_TILE_LAYOUT_MASK)
static inline struct nouveau_bo *
nouveau_bo(struct ttm_buffer_object *bo)
static inline struct nouveau_bo *
nouveau_gem_object(struct drm_gem_object *gem)
static inline void __iomem *
nvbo_kmap_obj_iovirtual(struct nouveau_bo *nvbo)
enum nouveau_flags ;
#define NVOBJ_ENGINE_SW		0
#define NVOBJ_ENGINE_GR		1
#define NVOBJ_ENGINE_CRYPT	2
#define NVOBJ_ENGINE_COPY0	3
#define NVOBJ_ENGINE_COPY1	4
#define NVOBJ_ENGINE_MPEG	5
#define NVOBJ_ENGINE_DISPLAY	15
#define NVOBJ_ENGINE_NR		16
#define NVOBJ_FLAG_DONT_MAP             (1 << 0)
#define NVOBJ_FLAG_ZERO_ALLOC		(1 << 1)
#define NVOBJ_FLAG_ZERO_FREE		(1 << 2)
#define NVOBJ_FLAG_VM			(1 << 3)
#define NVOBJ_FLAG_VM_USER		(1 << 4)
#define NVOBJ_CINST_GLOBAL	0xdeadbeef
struct nouveau_gpuobj ;
struct nouveau_page_flip_state ;
enum nouveau_channel_mutex_class ;
struct nouveau_channel ;
struct nouveau_exec_engine ;
struct nouveau_instmem_engine ;
struct nouveau_mc_engine ;
struct nouveau_timer_engine ;
struct nouveau_fb_engine ;
struct nouveau_fifo_engine ;
struct nouveau_display_engine ;
struct nouveau_gpio_engine ;
struct nouveau_pm_voltage_level ;
struct nouveau_pm_voltage ;
struct nouveau_pm_memtiming ;
#define NOUVEAU_PM_MAX_LEVEL 8
struct nouveau_pm_level ;
struct nouveau_pm_temp_sensor_constants ;
struct nouveau_pm_threshold_temp ;
struct nouveau_pm_memtimings ;
struct nouveau_pm_engine ;
struct nouveau_vram_engine ;
struct nouveau_engine ;
struct nouveau_pll_vals ;
enum nv04_fp_display_regs ;
struct nv04_crtc_reg ;
struct nv04_output_reg ;
struct nv04_mode_state ;
enum nouveau_card_type ;
struct drm_nouveau_private ;
static inline struct drm_nouveau_private *
nouveau_private(struct drm_device *dev)
static inline struct drm_nouveau_private *
nouveau_bdev(struct ttm_bo_device *bd)
static inline int
nouveau_bo_ref(struct nouveau_bo *ref, struct nouveau_bo **pnvbo)
extern int nouveau_agpmode;
extern int nouveau_duallink;
extern int nouveau_uscript_lvds;
extern int nouveau_uscript_tmds;
extern int nouveau_vram_pushbuf;
extern int nouveau_vram_notify;
extern int nouveau_fbpercrtc;
extern int nouveau_tv_disable;
extern char *nouveau_tv_norm;
extern int nouveau_reg_debug;
extern char *nouveau_vbios;
extern int nouveau_ignorelid;
extern int nouveau_nofbaccel;
extern int nouveau_noaccel;
extern int nouveau_force_post;
extern int nouveau_override_conntype;
extern char *nouveau_perflvl;
extern int nouveau_perflvl_wr;
extern int nouveau_msi;
extern int nouveau_pci_suspend(struct pci_dev *pdev, pm_message_t pm_state);
extern int nouveau_pci_resume(struct pci_dev *pdev);
extern void nouveau_preclose(struct drm_device *dev, struct drm_file *);
extern int  nouveau_load(struct drm_device *, unsigned long flags);
extern int  nouveau_firstopen(struct drm_device *);
extern void nouveau_lastclose(struct drm_device *);
extern int  nouveau_unload(struct drm_device *);
extern int  nouveau_ioctl_getparam(struct drm_device *, void *data,
struct drm_file *);
extern int  nouveau_ioctl_setparam(struct drm_device *, void *data,
struct drm_file *);
extern bool nouveau_wait_eq(struct drm_device *, uint64_t timeout,
uint32_t reg, uint32_t mask, uint32_t val);
extern bool nouveau_wait_ne(struct drm_device *, uint64_t timeout,
uint32_t reg, uint32_t mask, uint32_t val);
extern bool nouveau_wait_for_idle(struct drm_device *);
extern int  nouveau_card_init(struct drm_device *);
extern int  nouveau_mem_vram_init(struct drm_device *);
extern void nouveau_mem_vram_fini(struct drm_device *);
extern int  nouveau_mem_gart_init(struct drm_device *);
extern void nouveau_mem_gart_fini(struct drm_device *);
extern int  nouveau_mem_init_agp(struct drm_device *);
extern int  nouveau_mem_reset_agp(struct drm_device *);
extern void nouveau_mem_close(struct drm_device *);
extern int  nouveau_mem_detect(struct drm_device *);
extern bool nouveau_mem_flags_valid(struct drm_device *, u32 tile_flags);
extern struct nouveau_tile_reg *nv10_mem_set_tiling(
struct drm_device *dev, uint32_t addr, uint32_t size,
uint32_t pitch, uint32_t flags);
extern void nv10_mem_put_tile_region(struct drm_device *dev,
struct nouveau_tile_reg *tile,
struct nouveau_fence *fence);
extern const struct ttm_mem_type_manager_func nouveau_vram_manager;
extern const struct ttm_mem_type_manager_func nouveau_gart_manager;
extern int  nouveau_notifier_init_channel(struct nouveau_channel *);
extern void nouveau_notifier_takedown_channel(struct nouveau_channel *);
extern int  nouveau_notifier_alloc(struct nouveau_channel *, uint32_t handle,
int cout, uint32_t start, uint32_t end,
uint32_t *offset);
extern int  nouveau_notifier_offset(struct nouveau_gpuobj *, uint32_t *);
extern int  nouveau_ioctl_notifier_alloc(struct drm_device *, void *data,
struct drm_file *);
extern int  nouveau_ioctl_notifier_free(struct drm_device *, void *data,
struct drm_file *);
extern struct drm_ioctl_desc nouveau_ioctls[];
extern int nouveau_max_ioctl;
extern void nouveau_channel_cleanup(struct drm_device *, struct drm_file *);
extern int  nouveau_channel_alloc(struct drm_device *dev,
struct nouveau_channel **chan,
struct drm_file *file_priv,
uint32_t fb_ctxdma, uint32_t tt_ctxdma);
extern struct nouveau_channel *
nouveau_channel_get_unlocked(struct nouveau_channel *);
extern struct nouveau_channel *
nouveau_channel_get(struct drm_device *, struct drm_file *, int id);
extern void nouveau_channel_put_unlocked(struct nouveau_channel **);
extern void nouveau_channel_put(struct nouveau_channel **);
extern void nouveau_channel_ref(struct nouveau_channel *chan,
struct nouveau_channel **pchan);
extern void nouveau_channel_idle(struct nouveau_channel *chan);
#define NVOBJ_ENGINE_ADD(d, e, p) do  while (0)
#define NVOBJ_ENGINE_DEL(d, e) do  while (0)
#define NVOBJ_CLASS(d, c, e) do  while (0)
#define NVOBJ_MTHD(d, c, m, e) do  while (0)
extern int  nouveau_gpuobj_early_init(struct drm_device *);
extern int  nouveau_gpuobj_init(struct drm_device *);
extern void nouveau_gpuobj_takedown(struct drm_device *);
extern int  nouveau_gpuobj_suspend(struct drm_device *dev);
extern void nouveau_gpuobj_resume(struct drm_device *dev);
extern int  nouveau_gpuobj_class_new(struct drm_device *, u32 class, u32 eng);
extern int  nouveau_gpuobj_mthd_new(struct drm_device *, u32 class, u32 mthd,
int (*exec)(struct nouveau_channel *,
u32 class, u32 mthd, u32 data));
extern int  nouveau_gpuobj_mthd_call(struct nouveau_channel *, u32, u32, u32);
extern int  nouveau_gpuobj_mthd_call2(struct drm_device *, int, u32, u32, u32);
extern int nouveau_gpuobj_channel_init(struct nouveau_channel *,
uint32_t vram_h, uint32_t tt_h);
extern void nouveau_gpuobj_channel_takedown(struct nouveau_channel *);
extern int nouveau_gpuobj_new(struct drm_device *, struct nouveau_channel *,
uint32_t size, int align, uint32_t flags,
struct nouveau_gpuobj **);
extern void nouveau_gpuobj_ref(struct nouveau_gpuobj *,
struct nouveau_gpuobj **);
extern int nouveau_gpuobj_new_fake(struct drm_device *, u32 pinst, u64 vinst,
u32 size, u32 flags,
struct nouveau_gpuobj **);
extern int nouveau_gpuobj_dma_new(struct nouveau_channel *, int class,
uint64_t offset, uint64_t size, int access,
int target, struct nouveau_gpuobj **);
extern int nouveau_gpuobj_gr_new(struct nouveau_channel *, u32 handle, int class);
extern int nv50_gpuobj_dma_new(struct nouveau_channel *, int class, u64 base,
u64 size, int target, int access, u32 type,
u32 comp, struct nouveau_gpuobj **pobj);
extern void nv50_gpuobj_dma_init(struct nouveau_gpuobj *, u32 offset,
int class, u64 base, u64 size, int target,
int access, u32 type, u32 comp);
extern int nouveau_ioctl_grobj_alloc(struct drm_device *, void *data,
struct drm_file *);
extern int nouveau_ioctl_gpuobj_free(struct drm_device *, void *data,
struct drm_file *);
extern int         nouveau_irq_init(struct drm_device *);
extern void        nouveau_irq_fini(struct drm_device *);
extern irqreturn_t nouveau_irq_handler(DRM_IRQ_ARGS);
extern void        nouveau_irq_register(struct drm_device *, int status_bit,
void (*)(struct drm_device *));
extern void        nouveau_irq_unregister(struct drm_device *, int status_bit);
extern void        nouveau_irq_preinstall(struct drm_device *);
extern int         nouveau_irq_postinstall(struct drm_device *);
extern void        nouveau_irq_uninstall(struct drm_device *);
extern int nouveau_sgdma_init(struct drm_device *);
extern void nouveau_sgdma_takedown(struct drm_device *);
extern uint32_t nouveau_sgdma_get_physical(struct drm_device *,
uint32_t offset);
extern struct ttm_backend *nouveau_sgdma_init_ttm(struct drm_device *);
#if defined(CONFIG_DRM_NOUVEAU_DEBUG)
extern int  nouveau_debugfs_init(struct drm_minor *);
extern void nouveau_debugfs_takedown(struct drm_minor *);
extern int  nouveau_debugfs_channel_init(struct nouveau_channel *);
extern void nouveau_debugfs_channel_fini(struct nouveau_channel *);
static inline int
nouveau_debugfs_init(struct drm_minor *minor)
static inline void nouveau_debugfs_takedown(struct drm_minor *minor)
static inline int
nouveau_debugfs_channel_init(struct nouveau_channel *chan)
static inline void
nouveau_debugfs_channel_fini(struct nouveau_channel *chan)
extern void nouveau_dma_pre_init(struct nouveau_channel *);
extern int  nouveau_dma_init(struct nouveau_channel *);
extern int  nouveau_dma_wait(struct nouveau_channel *, int slots, int size);
#define ROM_BIOS_PAGE 4096
#if defined(CONFIG_ACPI)
void nouveau_register_dsm_handler(void);
void nouveau_unregister_dsm_handler(void);
int nouveau_acpi_get_bios_chunk(uint8_t *bios, int offset, int len);
bool nouveau_acpi_rom_supported(struct pci_dev *pdev);
int nouveau_acpi_edid(struct drm_device *, struct drm_connector *);
static inline void nouveau_register_dsm_handler(void)
static inline void nouveau_unregister_dsm_handler(void)
static inline bool nouveau_acpi_rom_supported(struct pci_dev *pdev)
static inline int nouveau_acpi_get_bios_chunk(uint8_t *bios, int offset, int len)
static inline int nouveau_acpi_edid(struct drm_device *dev, struct drm_connector *connector)
extern int nouveau_backlight_init(struct drm_connector *);
extern void nouveau_backlight_exit(struct drm_connector *);
static inline int nouveau_backlight_init(struct drm_connector *dev)
static inline void nouveau_backlight_exit(struct drm_connector *dev)
extern int nouveau_bios_init(struct drm_device *);
extern void nouveau_bios_takedown(struct drm_device *dev);
extern int nouveau_run_vbios_init(struct drm_device *);
extern void nouveau_bios_run_init_table(struct drm_device *, uint16_t table,
struct dcb_entry *);
extern struct dcb_gpio_entry *nouveau_bios_gpio_entry(struct drm_device *,
enum dcb_gpio_tag);
extern struct dcb_connector_table_entry *
nouveau_bios_connector_entry(struct drm_device *, int index);
extern u32 get_pll_register(struct drm_device *, enum pll_types);
extern int get_pll_limits(struct drm_device *, uint32_t limit_match,
struct pll_lims *);
extern int nouveau_bios_run_display_table(struct drm_device *,
struct dcb_entry *,
uint32_t script, int pxclk);
extern void *nouveau_bios_dp_table(struct drm_device *, struct dcb_entry *,
int *length);
extern bool nouveau_bios_fp_mode(struct drm_device *, struct drm_display_mode *);
extern uint8_t *nouveau_bios_embedded_edid(struct drm_device *);
extern int nouveau_bios_parse_lvds_table(struct drm_device *, int pxclk,
bool *dl, bool *if_is_24bit);
extern int run_tmds_table(struct drm_device *, struct dcb_entry *,
int head, int pxclk);
extern int call_lvds_script(struct drm_device *, struct dcb_entry *, int head,
enum LVDS_script, int pxclk);
int nouveau_ttm_global_init(struct drm_nouveau_private *);
void nouveau_ttm_global_release(struct drm_nouveau_private *);
int nouveau_ttm_mmap(struct file *, struct vm_area_struct *);
int nouveau_dp_auxch(struct nouveau_i2c_chan *auxch, int cmd, int addr,
uint8_t *data, int data_nr);
bool nouveau_dp_detect(struct drm_encoder *);
bool nouveau_dp_link_train(struct drm_encoder *);
extern int  nv04_fb_init(struct drm_device *);
extern void nv04_fb_takedown(struct drm_device *);
extern int  nv10_fb_init(struct drm_device *);
extern void nv10_fb_takedown(struct drm_device *);
extern void nv10_fb_init_tile_region(struct drm_device *dev, int i,
uint32_t addr, uint32_t size,
uint32_t pitch, uint32_t flags);
extern void nv10_fb_set_tile_region(struct drm_device *dev, int i);
extern void nv10_fb_free_tile_region(struct drm_device *dev, int i);
extern int  nv30_fb_init(struct drm_device *);
extern void nv30_fb_takedown(struct drm_device *);
extern void nv30_fb_init_tile_region(struct drm_device *dev, int i,
uint32_t addr, uint32_t size,
uint32_t pitch, uint32_t flags);
extern void nv30_fb_free_tile_region(struct drm_device *dev, int i);
extern int  nv40_fb_init(struct drm_device *);
extern void nv40_fb_takedown(struct drm_device *);
extern void nv40_fb_set_tile_region(struct drm_device *dev, int i);
extern int  nv50_fb_init(struct drm_device *);
extern void nv50_fb_takedown(struct drm_device *);
extern void nv50_fb_vm_trap(struct drm_device *, int display);
extern int  nvc0_fb_init(struct drm_device *);
extern void nvc0_fb_takedown(struct drm_device *);
extern int  nv04_fifo_init(struct drm_device *);
extern void nv04_fifo_fini(struct drm_device *);
extern void nv04_fifo_disable(struct drm_device *);
extern void nv04_fifo_enable(struct drm_device *);
extern bool nv04_fifo_reassign(struct drm_device *, bool);
extern bool nv04_fifo_cache_pull(struct drm_device *, bool);
extern int  nv04_fifo_channel_id(struct drm_device *);
extern int  nv04_fifo_create_context(struct nouveau_channel *);
extern void nv04_fifo_destroy_context(struct nouveau_channel *);
extern int  nv04_fifo_load_context(struct nouveau_channel *);
extern int  nv04_fifo_unload_context(struct drm_device *);
extern void nv04_fifo_isr(struct drm_device *);
extern int  nv10_fifo_init(struct drm_device *);
extern int  nv10_fifo_channel_id(struct drm_device *);
extern int  nv10_fifo_create_context(struct nouveau_channel *);
extern int  nv10_fifo_load_context(struct nouveau_channel *);
extern int  nv10_fifo_unload_context(struct drm_device *);
extern int  nv40_fifo_init(struct drm_device *);
extern int  nv40_fifo_create_context(struct nouveau_channel *);
extern int  nv40_fifo_load_context(struct nouveau_channel *);
extern int  nv40_fifo_unload_context(struct drm_device *);
extern int  nv50_fifo_init(struct drm_device *);
extern void nv50_fifo_takedown(struct drm_device *);
extern int  nv50_fifo_channel_id(struct drm_device *);
extern int  nv50_fifo_create_context(struct nouveau_channel *);
extern void nv50_fifo_destroy_context(struct nouveau_channel *);
extern int  nv50_fifo_load_context(struct nouveau_channel *);
extern int  nv50_fifo_unload_context(struct drm_device *);
extern void nv50_fifo_tlb_flush(struct drm_device *dev);
extern int  nvc0_fifo_init(struct drm_device *);
extern void nvc0_fifo_takedown(struct drm_device *);
extern void nvc0_fifo_disable(struct drm_device *);
extern void nvc0_fifo_enable(struct drm_device *);
extern bool nvc0_fifo_reassign(struct drm_device *, bool);
extern bool nvc0_fifo_cache_pull(struct drm_device *, bool);
extern int  nvc0_fifo_channel_id(struct drm_device *);
extern int  nvc0_fifo_create_context(struct nouveau_channel *);
extern void nvc0_fifo_destroy_context(struct nouveau_channel *);
extern int  nvc0_fifo_load_context(struct nouveau_channel *);
extern int  nvc0_fifo_unload_context(struct drm_device *);
extern int  nv04_graph_create(struct drm_device *);
extern void nv04_graph_fifo_access(struct drm_device *, bool);
extern int  nv04_graph_object_new(struct nouveau_channel *, int, u32, u16);
extern int  nv04_graph_mthd_page_flip(struct nouveau_channel *chan,
u32 class, u32 mthd, u32 data);
extern struct nouveau_bitfield nv04_graph_nsource[];
extern int  nv10_graph_create(struct drm_device *);
extern struct nouveau_channel *nv10_graph_channel(struct drm_device *);
extern struct nouveau_bitfield nv10_graph_intr[];
extern struct nouveau_bitfield nv10_graph_nstatus[];
extern int  nv20_graph_create(struct drm_device *);
extern int  nv40_graph_create(struct drm_device *);
extern void nv40_grctx_init(struct nouveau_grctx *);
extern int  nv50_graph_create(struct drm_device *);
extern int  nv50_grctx_init(struct nouveau_grctx *);
extern struct nouveau_enum nv50_data_error_names[];
extern int  nv50_graph_isr_chid(struct drm_device *dev, u64 inst);
extern int  nvc0_graph_create(struct drm_device *);
extern int  nvc0_graph_isr_chid(struct drm_device *dev, u64 inst);
extern int  nv84_crypt_create(struct drm_device *);
extern int  nva3_copy_create(struct drm_device *dev);
extern int  nvc0_copy_create(struct drm_device *dev, int engine);
extern int  nv40_mpeg_create(struct drm_device *dev);
extern int  nv50_mpeg_create(struct drm_device *dev);
extern int  nv04_instmem_init(struct drm_device *);
extern void nv04_instmem_takedown(struct drm_device *);
extern int  nv04_instmem_suspend(struct drm_device *);
extern void nv04_instmem_resume(struct drm_device *);
extern int  nv04_instmem_get(struct nouveau_gpuobj *, u32 size, u32 align);
extern void nv04_instmem_put(struct nouveau_gpuobj *);
extern int  nv04_instmem_map(struct nouveau_gpuobj *);
extern void nv04_instmem_unmap(struct nouveau_gpuobj *);
extern void nv04_instmem_flush(struct drm_device *);
extern int  nv50_instmem_init(struct drm_device *);
extern void nv50_instmem_takedown(struct drm_device *);
extern int  nv50_instmem_suspend(struct drm_device *);
extern void nv50_instmem_resume(struct drm_device *);
extern int  nv50_instmem_get(struct nouveau_gpuobj *, u32 size, u32 align);
extern void nv50_instmem_put(struct nouveau_gpuobj *);
extern int  nv50_instmem_map(struct nouveau_gpuobj *);
extern void nv50_instmem_unmap(struct nouveau_gpuobj *);
extern void nv50_instmem_flush(struct drm_device *);
extern void nv84_instmem_flush(struct drm_device *);
extern int  nvc0_instmem_init(struct drm_device *);
extern void nvc0_instmem_takedown(struct drm_device *);
extern int  nvc0_instmem_suspend(struct drm_device *);
extern void nvc0_instmem_resume(struct drm_device *);
extern int  nv04_mc_init(struct drm_device *);
extern void nv04_mc_takedown(struct drm_device *);
extern int  nv40_mc_init(struct drm_device *);
extern void nv40_mc_takedown(struct drm_device *);
extern int  nv50_mc_init(struct drm_device *);
extern void nv50_mc_takedown(struct drm_device *);
extern int  nv04_timer_init(struct drm_device *);
extern uint64_t nv04_timer_read(struct drm_device *);
extern void nv04_timer_takedown(struct drm_device *);
extern long nouveau_compat_ioctl(struct file *file, unsigned int cmd,
unsigned long arg);
extern int nv04_dac_create(struct drm_connector *, struct dcb_entry *);
extern uint32_t nv17_dac_sample_load(struct drm_encoder *encoder);
extern int nv04_dac_output_offset(struct drm_encoder *encoder);
extern void nv04_dac_update_dacclk(struct drm_encoder *encoder, bool enable);
extern bool nv04_dac_in_use(struct drm_encoder *encoder);
extern int nv04_dfp_create(struct drm_connector *, struct dcb_entry *);
extern int nv04_dfp_get_bound_head(struct drm_device *dev, struct dcb_entry *dcbent);
extern void nv04_dfp_bind_head(struct drm_device *dev, struct dcb_entry *dcbent,
int head, bool dl);
extern void nv04_dfp_disable(struct drm_device *dev, int head);
extern void nv04_dfp_update_fp_control(struct drm_encoder *encoder, int mode);
extern int nv04_tv_identify(struct drm_device *dev, int i2c_index);
extern int nv04_tv_create(struct drm_connector *, struct dcb_entry *);
extern int nv17_tv_create(struct drm_connector *, struct dcb_entry *);
extern int nv04_display_early_init(struct drm_device *);
extern void nv04_display_late_takedown(struct drm_device *);
extern int nv04_display_create(struct drm_device *);
extern int nv04_display_init(struct drm_device *);
extern void nv04_display_destroy(struct drm_device *);
extern int nv04_crtc_create(struct drm_device *, int index);
extern struct ttm_bo_driver nouveau_bo_driver;
extern int nouveau_bo_new(struct drm_device *, struct nouveau_channel *,
int size, int align, uint32_t flags,
uint32_t tile_mode, uint32_t tile_flags,
struct nouveau_bo **);
extern int nouveau_bo_pin(struct nouveau_bo *, uint32_t flags);
extern int nouveau_bo_unpin(struct nouveau_bo *);
extern int nouveau_bo_map(struct nouveau_bo *);
extern void nouveau_bo_unmap(struct nouveau_bo *);
extern void nouveau_bo_placement_set(struct nouveau_bo *, uint32_t type,
uint32_t busy);
extern u16 nouveau_bo_rd16(struct nouveau_bo *nvbo, unsigned index);
extern void nouveau_bo_wr16(struct nouveau_bo *nvbo, unsigned index, u16 val);
extern u32 nouveau_bo_rd32(struct nouveau_bo *nvbo, unsigned index);
extern void nouveau_bo_wr32(struct nouveau_bo *nvbo, unsigned index, u32 val);
extern void nouveau_bo_fence(struct nouveau_bo *, struct nouveau_fence *);
extern int nouveau_bo_validate(struct nouveau_bo *, bool interruptible,
bool no_wait_reserve, bool no_wait_gpu);
struct nouveau_fence;
extern int nouveau_fence_init(struct drm_device *);
extern void nouveau_fence_fini(struct drm_device *);
extern int nouveau_fence_channel_init(struct nouveau_channel *);
extern void nouveau_fence_channel_fini(struct nouveau_channel *);
extern void nouveau_fence_update(struct nouveau_channel *);
extern int nouveau_fence_new(struct nouveau_channel *, struct nouveau_fence **,
bool emit);
extern int nouveau_fence_emit(struct nouveau_fence *);
extern void nouveau_fence_work(struct nouveau_fence *fence,
void (*work)(void *priv, bool signalled),
void *priv);
struct nouveau_channel *nouveau_fence_channel(struct nouveau_fence *);
extern bool __nouveau_fence_signalled(void *obj, void *arg);
extern int __nouveau_fence_wait(void *obj, void *arg, bool lazy, bool intr);
extern int __nouveau_fence_flush(void *obj, void *arg);
extern void __nouveau_fence_unref(void **obj);
extern void *__nouveau_fence_ref(void *obj);
static inline bool nouveau_fence_signalled(struct nouveau_fence *obj)
static inline int
nouveau_fence_wait(struct nouveau_fence *obj, bool lazy, bool intr)
extern int nouveau_fence_sync(struct nouveau_fence *, struct nouveau_channel *);
static inline int nouveau_fence_flush(struct nouveau_fence *obj)
static inline void nouveau_fence_unref(struct nouveau_fence **obj)
static inline struct nouveau_fence *nouveau_fence_ref(struct nouveau_fence *obj)
extern int nouveau_gem_new(struct drm_device *, struct nouveau_channel *,
int size, int align, uint32_t domain,
uint32_t tile_mode, uint32_t tile_flags,
struct nouveau_bo **);
extern int nouveau_gem_object_new(struct drm_gem_object *);
extern void nouveau_gem_object_del(struct drm_gem_object *);
extern int nouveau_gem_ioctl_new(struct drm_device *, void *,
struct drm_file *);
extern int nouveau_gem_ioctl_pushbuf(struct drm_device *, void *,
struct drm_file *);
extern int nouveau_gem_ioctl_cpu_prep(struct drm_device *, void *,
struct drm_file *);
extern int nouveau_gem_ioctl_cpu_fini(struct drm_device *, void *,
struct drm_file *);
extern int nouveau_gem_ioctl_info(struct drm_device *, void *,
struct drm_file *);
int nouveau_vblank_enable(struct drm_device *dev, int crtc);
void nouveau_vblank_disable(struct drm_device *dev, int crtc);
int nouveau_crtc_page_flip(struct drm_crtc *crtc, struct drm_framebuffer *fb,
struct drm_pending_vblank_event *event);
int nouveau_finish_page_flip(struct nouveau_channel *,
struct nouveau_page_flip_state *);
int nv10_gpio_get(struct drm_device *dev, enum dcb_gpio_tag tag);
int nv10_gpio_set(struct drm_device *dev, enum dcb_gpio_tag tag, int state);
int nv50_gpio_init(struct drm_device *dev);
void nv50_gpio_fini(struct drm_device *dev);
int nv50_gpio_get(struct drm_device *dev, enum dcb_gpio_tag tag);
int nv50_gpio_set(struct drm_device *dev, enum dcb_gpio_tag tag, int state);
int  nv50_gpio_irq_register(struct drm_device *, enum dcb_gpio_tag,
void (*)(void *, int), void *);
void nv50_gpio_irq_unregister(struct drm_device *, enum dcb_gpio_tag,
void (*)(void *, int), void *);
bool nv50_gpio_irq_enable(struct drm_device *, enum dcb_gpio_tag, bool on);
int nv50_calc_pll(struct drm_device *, struct pll_lims *, int clk,
int *N1, int *M1, int *N2, int *M2, int *P);
int nva3_calc_pll(struct drm_device *, struct pll_lims *,
int clk, int *N, int *fN, int *M, int *P);
#define ioread16_native ioread16be
#define iowrite16_native iowrite16be
#define ioread32_native  ioread32be
#define iowrite32_native iowrite32be
#define ioread16_native ioread16
#define iowrite16_native iowrite16
#define ioread32_native  ioread32
#define iowrite32_native iowrite32
static inline u32 nvchan_rd32(struct nouveau_channel *chan, unsigned reg)
static inline void nvchan_wr32(struct nouveau_channel *chan,
unsigned reg, u32 val)
static inline u32 nv_rd32(struct drm_device *dev, unsigned reg)
static inline void nv_wr32(struct drm_device *dev, unsigned reg, u32 val)
static inline u32 nv_mask(struct drm_device *dev, u32 reg, u32 mask, u32 val)
static inline u8 nv_rd08(struct drm_device *dev, unsigned reg)
static inline void nv_wr08(struct drm_device *dev, unsigned reg, u8 val)
#define nv_wait(dev, reg, mask, val) \
nouveau_wait_eq(dev, 2000000000ULL, (reg), (mask), (val))
#define nv_wait_ne(dev, reg, mask, val) \
nouveau_wait_ne(dev, 2000000000ULL, (reg), (mask), (val))
static inline u32 nv_ri32(struct drm_device *dev, unsigned offset)
static inline void nv_wi32(struct drm_device *dev, unsigned offset, u32 val)
extern u32 nv_ro32(struct nouveau_gpuobj *, u32 offset);
extern void nv_wo32(struct nouveau_gpuobj *, u32 offset, u32 val);
#define NV_PRINTK(level, d, fmt, arg...) \
printk(level "[" DRM_NAME "] " DRIVER_NAME " %s: " fmt, \
pci_name(d->pdev), ##arg)
#define NV_DEBUG(d, fmt, arg...) do  while (0)
#define NV_DEBUG_KMS(d, fmt, arg...) do  while (0)
#define NV_DEBUG(d, fmt, arg...) do  while (0)
#define NV_DEBUG_KMS(d, fmt, arg...) do  while (0)
#define NV_ERROR(d, fmt, arg...) NV_PRINTK(KERN_ERR, d, fmt, ##arg)
#define NV_INFO(d, fmt, arg...) NV_PRINTK(KERN_INFO, d, fmt, ##arg)
#define NV_TRACEWARN(d, fmt, arg...) NV_PRINTK(KERN_NOTICE, d, fmt, ##arg)
#define NV_TRACE(d, fmt, arg...) NV_PRINTK(KERN_INFO, d, fmt, ##arg)
#define NV_WARN(d, fmt, arg...) NV_PRINTK(KERN_WARNING, d, fmt, ##arg)
enum ;
#define NV_REG_DEBUG(type, dev, fmt, arg...) do  while (0)
static inline bool
nv_two_heads(struct drm_device *dev)
static inline bool
nv_gf4_disp_arch(struct drm_device *dev)
static inline bool
nv_two_reg_pll(struct drm_device *dev)
static inline bool
nv_match_device(struct drm_device *dev, unsigned device,
unsigned sub_vendor, unsigned sub_device)
static inline void *
nv_engine(struct drm_device *dev, int engine)
static inline int
nv44_graph_class(struct drm_device *dev)
#define NV_MEM_ACCESS_RO  1
#define NV_MEM_ACCESS_WO  2
#define NV_MEM_ACCESS_RW (NV_MEM_ACCESS_RO | NV_MEM_ACCESS_WO)
#define NV_MEM_ACCESS_SYS 4
#define NV_MEM_ACCESS_VM  8
#define NV_MEM_TARGET_VRAM        0
#define NV_MEM_TARGET_PCI         1
#define NV_MEM_TARGET_PCI_NOSNOOP 2
#define NV_MEM_TARGET_VM          3
#define NV_MEM_TARGET_GART        4
#define NV_MEM_TYPE_VM 0x7f
#define NV_MEM_COMP_VM 0x03
#define NV_SW                                                        0x0000506e
#define NV_SW_DMA_SEMAPHORE                                          0x00000060
#define NV_SW_SEMAPHORE_OFFSET                                       0x00000064
#define NV_SW_SEMAPHORE_ACQUIRE                                      0x00000068
#define NV_SW_SEMAPHORE_RELEASE                                      0x0000006c
#define NV_SW_YIELD                                                  0x00000080
#define NV_SW_DMA_VBLSEM                                             0x0000018c
#define NV_SW_VBLSEM_OFFSET                                          0x00000400
#define NV_SW_VBLSEM_RELEASE_VALUE                                   0x00000404
#define NV_SW_VBLSEM_RELEASE                                         0x00000408
#define NV_SW_PAGE_FLIP                                              0x00000500
