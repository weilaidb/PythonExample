#define _DRM_P_H_
#if defined(__alpha__) || defined(__powerpc__)
#if defined(CONFIG_AGP) || defined(CONFIG_AGP_MODULE)
#define __OS_HAS_AGP (defined(CONFIG_AGP) || (defined(CONFIG_AGP_MODULE) && defined(MODULE)))
#define __OS_HAS_MTRR (defined(CONFIG_MTRR))
struct drm_file;
struct drm_device;
#define DRM_UT_CORE 		0x01
#define DRM_UT_DRIVER		0x02
#define DRM_UT_KMS		0x04
extern __attribute__((format (printf, 4, 5)))
void drm_ut_debug_printk(unsigned int request_level,
const char *prefix,
const char *function_name,
const char *format, ...);
extern __attribute__((format (printf, 2, 3)))
int drm_err(const char *func, const char *format, ...);
#define DRIVER_USE_AGP     0x1
#define DRIVER_REQUIRE_AGP 0x2
#define DRIVER_USE_MTRR    0x4
#define DRIVER_PCI_DMA     0x8
#define DRIVER_SG          0x10
#define DRIVER_HAVE_DMA    0x20
#define DRIVER_HAVE_IRQ    0x40
#define DRIVER_IRQ_SHARED  0x80
#define DRIVER_IRQ_VBL     0x100
#define DRIVER_DMA_QUEUE   0x200
#define DRIVER_FB_DMA      0x400
#define DRIVER_IRQ_VBL2    0x800
#define DRIVER_GEM         0x1000
#define DRIVER_MODESET     0x2000
#define DRIVER_BUS_PCI 0x1
#define DRIVER_BUS_PLATFORM 0x2
#define DRIVER_BUS_USB 0x3
#define DRM_DEBUG_CODE 2
#define DRM_MAGIC_HASH_ORDER  4
#define DRM_KERNEL_CONTEXT    0
#define DRM_RESERVED_CONTEXTS 1
#define DRM_LOOPING_LIMIT     5000000
#define DRM_TIME_SLICE	      (HZ/20)
#define DRM_LOCK_SLICE	      1
#define DRM_FLAG_DEBUG	  0x01
#define DRM_MAX_CTXBITMAP (PAGE_SIZE * 8)
#define DRM_MAP_HASH_OFFSET 0x10000000
#define DRM_ERROR(fmt, ...)				\
drm_err(__func__, fmt, ##__VA_ARGS__)
#define DRM_INFO(fmt, ...)				\
printk(KERN_INFO "[" DRM_NAME "] " fmt, ##__VA_ARGS__)
#if DRM_DEBUG_CODE
#define DRM_DEBUG(fmt, args...)						\
do  while (0)
#define DRM_DEBUG_DRIVER(fmt, args...)					\
do  while (0)
#define DRM_DEBUG_KMS(fmt, args...)				\
do  while (0)
#define DRM_LOG(fmt, args...)						\
do  while (0)
#define DRM_LOG_KMS(fmt, args...)					\
do  while (0)
#define DRM_LOG_MODE(fmt, args...)					\
do  while (0)
#define DRM_LOG_DRIVER(fmt, args...)					\
do  while (0)
#define DRM_DEBUG_DRIVER(fmt, args...) do  while (0)
#define DRM_DEBUG_KMS(fmt, args...)	do  while (0)
#define DRM_DEBUG(fmt, arg...)		 do  while (0)
#define DRM_LOG(fmt, arg...)		do  while (0)
#define DRM_LOG_KMS(fmt, args...) do  while (0)
#define DRM_LOG_MODE(fmt, arg...) do  while (0)
#define DRM_LOG_DRIVER(fmt, arg...) do  while (0)
#define DRM_ARRAY_SIZE(x) ARRAY_SIZE(x)
#define DRM_LEFTCOUNT(x) (((x)->rp + (x)->count - (x)->wp) % ((x)->count + 1))
#define DRM_BUFCOUNT(x) ((x)->count - DRM_LEFTCOUNT(x))
#define DRM_IF_VERSION(maj, min) (maj << 16 | min)
#define LOCK_TEST_WITH_RETURN( dev, _file_priv )				\
do  while (0)
typedef int drm_ioctl_t(struct drm_device *dev, void *data,
struct drm_file *file_priv);
typedef int drm_ioctl_compat_t(struct file *filp, unsigned int cmd,
unsigned long arg);
#define DRM_IOCTL_NR(n)                _IOC_NR(n)
#define DRM_MAJOR       226
#define DRM_AUTH	0x1
#define	DRM_MASTER	0x2
#define DRM_ROOT_ONLY	0x4
#define DRM_CONTROL_ALLOW 0x8
#define DRM_UNLOCKED	0x10
struct drm_ioctl_desc ;
#define DRM_IOCTL_DEF_DRV(ioctl, _func, _flags)			\
[DRM_IOCTL_NR(DRM_##ioctl)] =
struct drm_magic_entry ;
struct drm_vma_entry ;
struct drm_buf ;
struct drm_waitlist ;
struct drm_freelist ;
typedef struct drm_dma_handle  drm_dma_handle_t;
struct drm_buf_entry ;
struct drm_pending_event ;
struct drm_file ;
struct drm_queue ;
struct drm_lock_data ;
struct drm_device_dma ;
struct drm_agp_mem ;
struct drm_agp_head ;
struct drm_sg_mem ;
struct drm_sigdata ;
struct drm_local_map ;
typedef struct drm_local_map drm_local_map_t;
struct drm_map_list ;
struct drm_ctx_list ;
#define DRM_ATI_GART_MAIN 1
#define DRM_ATI_GART_FB   2
#define DRM_ATI_GART_PCI 1
#define DRM_ATI_GART_PCIE 2
#define DRM_ATI_GART_IGP 3
struct drm_ati_pcigart_info ;
struct drm_gem_mm ;
struct drm_gem_object ;
struct drm_master ;
#define DRM_VBLANKTIME_RBSIZE 2
#define DRM_CALLED_FROM_VBLIRQ 1
#define DRM_VBLANKTIME_SCANOUTPOS_METHOD (1 << 0)
#define DRM_VBLANKTIME_INVBL             (1 << 1)
#define DRM_SCANOUTPOS_VALID        (1 << 0)
#define DRM_SCANOUTPOS_INVBL        (1 << 1)
#define DRM_SCANOUTPOS_ACCURATE     (1 << 2)
struct drm_bus ;
struct drm_driver ;
#define DRM_MINOR_UNASSIGNED 0
#define DRM_MINOR_LEGACY 1
#define DRM_MINOR_CONTROL 2
#define DRM_MINOR_RENDER 3
struct drm_debugfs_list ;
struct drm_debugfs_node ;
struct drm_info_list ;
struct drm_info_node ;
struct drm_minor ;
struct drm_cmdline_mode ;
struct drm_pending_vblank_event ;
struct drm_device ;
#define DRM_SWITCH_POWER_ON 0
#define DRM_SWITCH_POWER_OFF 1
#define DRM_SWITCH_POWER_CHANGING 2
static __inline__ int drm_core_check_feature(struct drm_device *dev,
int feature)
static inline int drm_dev_to_irq(struct drm_device *dev)
#if __OS_HAS_AGP
static inline int drm_core_has_AGP(struct drm_device *dev)
#define drm_core_has_AGP(dev) (0)
#if __OS_HAS_MTRR
static inline int drm_core_has_MTRR(struct drm_device *dev)
#define DRM_MTRR_WC		MTRR_TYPE_WRCOMB
static inline int drm_mtrr_add(unsigned long offset, unsigned long size,
unsigned int flags)
static inline int drm_mtrr_del(int handle, unsigned long offset,
unsigned long size, unsigned int flags)
#define drm_core_has_MTRR(dev) (0)
#define DRM_MTRR_WC		0
static inline int drm_mtrr_add(unsigned long offset, unsigned long size,
unsigned int flags)
static inline int drm_mtrr_del(int handle, unsigned long offset,
unsigned long size, unsigned int flags)
extern long drm_ioctl(struct file *filp,
unsigned int cmd, unsigned long arg);
extern long drm_compat_ioctl(struct file *filp,
unsigned int cmd, unsigned long arg);
extern int drm_lastclose(struct drm_device *dev);
extern struct mutex drm_global_mutex;
extern int drm_open(struct inode *inode, struct file *filp);
extern int drm_stub_open(struct inode *inode, struct file *filp);
extern int drm_fasync(int fd, struct file *filp, int on);
extern ssize_t drm_read(struct file *filp, char __user *buffer,
size_t count, loff_t *offset);
extern int drm_release(struct inode *inode, struct file *filp);
extern int drm_mmap(struct file *filp, struct vm_area_struct *vma);
extern int drm_mmap_locked(struct file *filp, struct vm_area_struct *vma);
extern void drm_vm_open_locked(struct vm_area_struct *vma);
extern void drm_vm_close_locked(struct vm_area_struct *vma);
extern unsigned int drm_poll(struct file *filp, struct poll_table_struct *wait);
extern void drm_mem_init(void);
extern int drm_mem_info(char *buf, char **start, off_t offset,
int request, int *eof, void *data);
extern void *drm_realloc(void *oldpt, size_t oldsize, size_t size, int area);
extern void drm_free_agp(DRM_AGP_MEM * handle, int pages);
extern int drm_bind_agp(DRM_AGP_MEM * handle, unsigned int start);
extern DRM_AGP_MEM *drm_agp_bind_pages(struct drm_device *dev,
struct page **pages,
unsigned long num_pages,
uint32_t gtt_offset,
uint32_t type);
extern int drm_unbind_agp(DRM_AGP_MEM * handle);
extern int drm_irq_by_busid(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int drm_getunique(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int drm_setunique(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int drm_getmap(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int drm_getclient(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int drm_getstats(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int drm_getcap(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int drm_setversion(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int drm_noop(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int drm_resctx(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int drm_addctx(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int drm_modctx(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int drm_getctx(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int drm_switchctx(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int drm_newctx(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int drm_rmctx(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int drm_ctxbitmap_init(struct drm_device *dev);
extern void drm_ctxbitmap_cleanup(struct drm_device *dev);
extern void drm_ctxbitmap_free(struct drm_device *dev, int ctx_handle);
extern int drm_setsareactx(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int drm_getsareactx(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int drm_getmagic(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int drm_authmagic(struct drm_device *dev, void *data,
struct drm_file *file_priv);
void drm_clflush_pages(struct page *pages[], unsigned long num_pages);
extern int drm_lock(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int drm_unlock(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int drm_lock_free(struct drm_lock_data *lock_data, unsigned int context);
extern void drm_idlelock_take(struct drm_lock_data *lock_data);
extern void drm_idlelock_release(struct drm_lock_data *lock_data);
extern int drm_i_have_hw_lock(struct drm_device *dev, struct drm_file *file_priv);
extern int drm_addbufs_agp(struct drm_device *dev, struct drm_buf_desc * request);
extern int drm_addbufs_pci(struct drm_device *dev, struct drm_buf_desc * request);
extern int drm_addmap(struct drm_device *dev, resource_size_t offset,
unsigned int size, enum drm_map_type type,
enum drm_map_flags flags, struct drm_local_map **map_ptr);
extern int drm_addmap_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int drm_rmmap(struct drm_device *dev, struct drm_local_map *map);
extern int drm_rmmap_locked(struct drm_device *dev, struct drm_local_map *map);
extern int drm_rmmap_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int drm_addbufs(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int drm_infobufs(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int drm_markbufs(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int drm_freebufs(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int drm_mapbufs(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int drm_order(unsigned long size);
extern int drm_dma_setup(struct drm_device *dev);
extern void drm_dma_takedown(struct drm_device *dev);
extern void drm_free_buffer(struct drm_device *dev, struct drm_buf * buf);
extern void drm_core_reclaim_buffers(struct drm_device *dev,
struct drm_file *filp);
extern int drm_control(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern irqreturn_t drm_irq_handler(DRM_IRQ_ARGS);
extern int drm_irq_install(struct drm_device *dev);
extern int drm_irq_uninstall(struct drm_device *dev);
extern void drm_driver_irq_preinstall(struct drm_device *dev);
extern void drm_driver_irq_postinstall(struct drm_device *dev);
extern void drm_driver_irq_uninstall(struct drm_device *dev);
extern int drm_vblank_init(struct drm_device *dev, int num_crtcs);
extern int drm_wait_vblank(struct drm_device *dev, void *data,
struct drm_file *filp);
extern int drm_vblank_wait(struct drm_device *dev, unsigned int *vbl_seq);
extern u32 drm_vblank_count(struct drm_device *dev, int crtc);
extern u32 drm_vblank_count_and_time(struct drm_device *dev, int crtc,
struct timeval *vblanktime);
extern bool drm_handle_vblank(struct drm_device *dev, int crtc);
extern int drm_vblank_get(struct drm_device *dev, int crtc);
extern void drm_vblank_put(struct drm_device *dev, int crtc);
extern void drm_vblank_off(struct drm_device *dev, int crtc);
extern void drm_vblank_cleanup(struct drm_device *dev);
extern u32 drm_get_last_vbltimestamp(struct drm_device *dev, int crtc,
struct timeval *tvblank, unsigned flags);
extern int drm_calc_vbltimestamp_from_scanoutpos(struct drm_device *dev,
int crtc, int *max_error,
struct timeval *vblank_time,
unsigned flags,
struct drm_crtc *refcrtc);
extern void drm_calc_timestamping_constants(struct drm_crtc *crtc);
extern bool
drm_mode_parse_command_line_for_connector(const char *mode_option,
struct drm_connector *connector,
struct drm_cmdline_mode *mode);
extern struct drm_display_mode *
drm_mode_create_from_cmdline_mode(struct drm_device *dev,
struct drm_cmdline_mode *cmd);
extern void drm_vblank_pre_modeset(struct drm_device *dev, int crtc);
extern void drm_vblank_post_modeset(struct drm_device *dev, int crtc);
extern int drm_modeset_ctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern struct drm_agp_head *drm_agp_init(struct drm_device *dev);
extern int drm_agp_acquire(struct drm_device *dev);
extern int drm_agp_acquire_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int drm_agp_release(struct drm_device *dev);
extern int drm_agp_release_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int drm_agp_enable(struct drm_device *dev, struct drm_agp_mode mode);
extern int drm_agp_enable_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int drm_agp_info(struct drm_device *dev, struct drm_agp_info *info);
extern int drm_agp_info_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int drm_agp_alloc(struct drm_device *dev, struct drm_agp_buffer *request);
extern int drm_agp_alloc_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int drm_agp_free(struct drm_device *dev, struct drm_agp_buffer *request);
extern int drm_agp_free_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int drm_agp_unbind(struct drm_device *dev, struct drm_agp_binding *request);
extern int drm_agp_unbind_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int drm_agp_bind(struct drm_device *dev, struct drm_agp_binding *request);
extern int drm_agp_bind_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int drm_setmaster_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int drm_dropmaster_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
struct drm_master *drm_master_create(struct drm_minor *minor);
extern struct drm_master *drm_master_get(struct drm_master *master);
extern void drm_master_put(struct drm_master **master);
extern void drm_put_dev(struct drm_device *dev);
extern int drm_put_minor(struct drm_minor **minor);
extern unsigned int drm_debug;
extern unsigned int drm_vblank_offdelay;
extern unsigned int drm_timestamp_precision;
extern struct class *drm_class;
extern struct proc_dir_entry *drm_proc_root;
extern struct dentry *drm_debugfs_root;
extern struct idr drm_minors_idr;
extern struct drm_local_map *drm_getsarea(struct drm_device *dev);
extern int drm_proc_init(struct drm_minor *minor, int minor_id,
struct proc_dir_entry *root);
extern int drm_proc_cleanup(struct drm_minor *minor, struct proc_dir_entry *root);
#if defined(CONFIG_DEBUG_FS)
extern int drm_debugfs_init(struct drm_minor *minor, int minor_id,
struct dentry *root);
extern int drm_debugfs_create_files(struct drm_info_list *files, int count,
struct dentry *root, struct drm_minor *minor);
extern int drm_debugfs_remove_files(struct drm_info_list *files, int count,
struct drm_minor *minor);
extern int drm_debugfs_cleanup(struct drm_minor *minor);
extern int drm_name_info(struct seq_file *m, void *data);
extern int drm_vm_info(struct seq_file *m, void *data);
extern int drm_queues_info(struct seq_file *m, void *data);
extern int drm_bufs_info(struct seq_file *m, void *data);
extern int drm_vblank_info(struct seq_file *m, void *data);
extern int drm_clients_info(struct seq_file *m, void* data);
extern int drm_gem_name_info(struct seq_file *m, void *data);
#if DRM_DEBUG_CODE
extern int drm_vma_info(struct seq_file *m, void *data);
extern void drm_sg_cleanup(struct drm_sg_mem * entry);
extern int drm_sg_alloc_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int drm_sg_alloc(struct drm_device *dev, struct drm_scatter_gather * request);
extern int drm_sg_free(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int drm_ati_pcigart_init(struct drm_device *dev,
struct drm_ati_pcigart_info * gart_info);
extern int drm_ati_pcigart_cleanup(struct drm_device *dev,
struct drm_ati_pcigart_info * gart_info);
extern drm_dma_handle_t *drm_pci_alloc(struct drm_device *dev, size_t size,
size_t align);
extern void __drm_pci_free(struct drm_device *dev, drm_dma_handle_t * dmah);
extern void drm_pci_free(struct drm_device *dev, drm_dma_handle_t * dmah);
struct drm_sysfs_class;
extern struct class *drm_sysfs_create(struct module *owner, char *name);
extern void drm_sysfs_destroy(void);
extern int drm_sysfs_device_add(struct drm_minor *minor);
extern void drm_sysfs_hotplug_event(struct drm_device *dev);
extern void drm_sysfs_device_remove(struct drm_minor *minor);
extern char *drm_get_connector_status_name(enum drm_connector_status status);
extern int drm_sysfs_connector_add(struct drm_connector *connector);
extern void drm_sysfs_connector_remove(struct drm_connector *connector);
int drm_gem_init(struct drm_device *dev);
void drm_gem_destroy(struct drm_device *dev);
void drm_gem_object_release(struct drm_gem_object *obj);
void drm_gem_object_free(struct kref *kref);
struct drm_gem_object *drm_gem_object_alloc(struct drm_device *dev,
size_t size);
int drm_gem_object_init(struct drm_device *dev,
struct drm_gem_object *obj, size_t size);
void drm_gem_object_handle_free(struct drm_gem_object *obj);
void drm_gem_vm_open(struct vm_area_struct *vma);
void drm_gem_vm_close(struct vm_area_struct *vma);
int drm_gem_mmap(struct file *filp, struct vm_area_struct *vma);
static inline void
drm_gem_object_reference(struct drm_gem_object *obj)
static inline void
drm_gem_object_unreference(struct drm_gem_object *obj)
static inline void
drm_gem_object_unreference_unlocked(struct drm_gem_object *obj)
int drm_gem_handle_create(struct drm_file *file_priv,
struct drm_gem_object *obj,
u32 *handlep);
int drm_gem_handle_delete(struct drm_file *filp, u32 handle);
static inline void
drm_gem_object_handle_reference(struct drm_gem_object *obj)
static inline void
drm_gem_object_handle_unreference(struct drm_gem_object *obj)
static inline void
drm_gem_object_handle_unreference_unlocked(struct drm_gem_object *obj)
struct drm_gem_object *drm_gem_object_lookup(struct drm_device *dev,
struct drm_file *filp,
u32 handle);
int drm_gem_close_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
int drm_gem_flink_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
int drm_gem_open_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
void drm_gem_open(struct drm_device *dev, struct drm_file *file_private);
void drm_gem_release(struct drm_device *dev, struct drm_file *file_private);
extern void drm_core_ioremap(struct drm_local_map *map, struct drm_device *dev);
extern void drm_core_ioremap_wc(struct drm_local_map *map, struct drm_device *dev);
extern void drm_core_ioremapfree(struct drm_local_map *map, struct drm_device *dev);
static __inline__ struct drm_local_map *drm_core_findmap(struct drm_device *dev,
unsigned int token)
static __inline__ void drm_core_dropmap(struct drm_local_map *map)
extern int drm_fill_in_dev(struct drm_device *dev,
const struct pci_device_id *ent,
struct drm_driver *driver);
int drm_get_minor(struct drm_device *dev, struct drm_minor **minor, int type);
static __inline__ int drm_pci_device_is_agp(struct drm_device *dev)
static __inline__ int drm_pci_device_is_pcie(struct drm_device *dev)
extern int drm_pci_init(struct drm_driver *driver, struct pci_driver *pdriver);
extern void drm_pci_exit(struct drm_driver *driver, struct pci_driver *pdriver);
extern int drm_get_pci_dev(struct pci_dev *pdev,
const struct pci_device_id *ent,
struct drm_driver *driver);
extern int drm_platform_init(struct drm_driver *driver, struct platform_device *platform_device);
extern void drm_platform_exit(struct drm_driver *driver, struct platform_device *platform_device);
extern int drm_get_platform_dev(struct platform_device *pdev,
struct drm_driver *driver);
