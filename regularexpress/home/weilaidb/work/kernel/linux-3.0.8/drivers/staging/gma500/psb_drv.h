#define _PSB_DRV_H_
#define DRM_MODE_SCALE_NO_SCALE   2
enum ;
#define IS_MRST(dev) (((dev)->pci_device & 0xfffc) == 0x4100)
#define DRIVER_NAME "pvrsrvkm"
#define DRIVER_DESC "drm driver for the Intel GMA500"
#define DRIVER_AUTHOR "Intel Corporation"
#define PSB_DRM_DRIVER_DATE "2009-03-10"
#define PSB_DRM_DRIVER_MAJOR 8
#define PSB_DRM_DRIVER_MINOR 1
#define PSB_DRM_DRIVER_PATCHLEVEL 0
#define DRM_PSB_FILE_PAGE_OFFSET (0x100000000ULL >> PAGE_SHIFT)
#define PSB_OBJECT_HASH_ORDER 13
#define PSB_FILE_OBJECT_HASH_ORDER 12
#define PSB_BO_HASH_ORDER 12
#define PSB_VDC_OFFSET		 0x00000000
#define PSB_VDC_SIZE		 0x000080000
#define MRST_MMIO_SIZE		 0x0000C0000
#define MDFLD_MMIO_SIZE          0x000100000
#define PSB_SGX_SIZE		 0x8000
#define PSB_SGX_OFFSET		 0x00040000
#define MRST_SGX_OFFSET		 0x00080000
#define PSB_MMIO_RESOURCE	 0
#define PSB_GATT_RESOURCE	 2
#define PSB_GTT_RESOURCE	 3
#define PSB_GMCH_CTRL		 0x52
#define PSB_BSM			 0x5C
#define _PSB_GMCH_ENABLED	 0x4
#define PSB_PGETBL_CTL		 0x2020
#define _PSB_PGETBL_ENABLED	 0x00000001
#define PSB_SGX_2D_SLAVE_PORT	 0x4000
#define PSB_TT_PRIV0_LIMIT	 (256*1024*1024)
#define PSB_TT_PRIV0_PLIMIT	 (PSB_TT_PRIV0_LIMIT >> PAGE_SHIFT)
#define PSB_NUM_VALIDATE_BUFFERS 2048
#define PSB_MMU_CACHED_MEMORY	  0x0001
#define PSB_MMU_RO_MEMORY	  0x0002
#define PSB_MMU_WO_MEMORY	  0x0004
#define PSB_PDE_MASK		  0x003FFFFF
#define PSB_PDE_SHIFT		  22
#define PSB_PTE_SHIFT		  12
#define PSB_PTE_VALID		  0x0001
#define PSB_PTE_WO		  0x0002
#define PSB_PTE_RO		  0x0004
#define PSB_PTE_CACHED		  0x0008
#define PSB_MSVDX_CLOCKGATING	  0x2064
#define PSB_TOPAZ_CLOCKGATING	  0x2068
#define PSB_HWSTAM		  0x2098
#define PSB_INSTPM		  0x20C0
#define PSB_INT_IDENTITY_R        0x20A4
#define _MDFLD_PIPEC_EVENT_FLAG   (1<<2)
#define _MDFLD_PIPEC_VBLANK_FLAG  (1<<3)
#define _PSB_DPST_PIPEB_FLAG      (1<<4)
#define _MDFLD_PIPEB_EVENT_FLAG   (1<<4)
#define _PSB_VSYNC_PIPEB_FLAG	  (1<<5)
#define _PSB_DPST_PIPEA_FLAG      (1<<6)
#define _PSB_PIPEA_EVENT_FLAG     (1<<6)
#define _PSB_VSYNC_PIPEA_FLAG	  (1<<7)
#define _MDFLD_MIPIA_FLAG	  (1<<16)
#define _MDFLD_MIPIC_FLAG	  (1<<17)
#define _PSB_IRQ_SGX_FLAG	  (1<<18)
#define _PSB_IRQ_MSVDX_FLAG	  (1<<19)
#define _LNC_IRQ_TOPAZ_FLAG	  (1<<20)
#define _MDFLD_DISP_ALL_IRQ_FLAG (_MDFLD_PIPEC_EVENT_FLAG | _MDFLD_PIPEB_EVENT_FLAG | \
_PSB_PIPEA_EVENT_FLAG | _PSB_VSYNC_PIPEA_FLAG | _MDFLD_MIPIA_FLAG | _MDFLD_MIPIC_FLAG)
#define PSB_INT_IDENTITY_R	  0x20A4
#define PSB_INT_MASK_R		  0x20A8
#define PSB_INT_ENABLE_R	  0x20A0
#define _PSB_MMU_ER_MASK      0x0001FF00
#define _PSB_MMU_ER_HOST      (1 << 16)
#define GPIOA			0x5010
#define GPIOB			0x5014
#define GPIOC			0x5018
#define GPIOD			0x501c
#define GPIOE			0x5020
#define GPIOF			0x5024
#define GPIOG			0x5028
#define GPIOH			0x502c
#define GPIO_CLOCK_DIR_MASK		(1 << 0)
#define GPIO_CLOCK_DIR_IN		(0 << 1)
#define GPIO_CLOCK_DIR_OUT		(1 << 1)
#define GPIO_CLOCK_VAL_MASK		(1 << 2)
#define GPIO_CLOCK_VAL_OUT		(1 << 3)
#define GPIO_CLOCK_VAL_IN		(1 << 4)
#define GPIO_CLOCK_PULLUP_DISABLE	(1 << 5)
#define GPIO_DATA_DIR_MASK		(1 << 8)
#define GPIO_DATA_DIR_IN		(0 << 9)
#define GPIO_DATA_DIR_OUT		(1 << 9)
#define GPIO_DATA_VAL_MASK		(1 << 10)
#define GPIO_DATA_VAL_OUT		(1 << 11)
#define GPIO_DATA_VAL_IN		(1 << 12)
#define GPIO_DATA_PULLUP_DISABLE	(1 << 13)
#define VCLK_DIVISOR_VGA0   0x6000
#define VCLK_DIVISOR_VGA1   0x6004
#define VCLK_POST_DIV	    0x6010
#define PSB_COMM_2D (PSB_ENGINE_2D << 4)
#define PSB_COMM_3D (PSB_ENGINE_3D << 4)
#define PSB_COMM_TA (PSB_ENGINE_TA << 4)
#define PSB_COMM_HP (PSB_ENGINE_HP << 4)
#define PSB_COMM_USER_IRQ (1024 >> 2)
#define PSB_COMM_USER_IRQ_LOST (PSB_COMM_USER_IRQ + 1)
#define PSB_COMM_FW (2048 >> 2)
#define PSB_UIRQ_VISTEST	       1
#define PSB_UIRQ_OOM_REPLY	       2
#define PSB_UIRQ_FIRE_TA_REPLY	       3
#define PSB_UIRQ_FIRE_RASTER_REPLY     4
#define PSB_2D_SIZE (256*1024*1024)
#define PSB_MAX_RELOC_PAGES 1024
#define PSB_LOW_REG_OFFS 0x0204
#define PSB_HIGH_REG_OFFS 0x0600
#define PSB_NUM_VBLANKS 2
#define PSB_2D_SIZE (256*1024*1024)
#define PSB_MAX_RELOC_PAGES 1024
#define PSB_LOW_REG_OFFS 0x0204
#define PSB_HIGH_REG_OFFS 0x0600
#define PSB_NUM_VBLANKS 2
#define PSB_WATCHDOG_DELAY (DRM_HZ * 2)
#define PSB_LID_DELAY (DRM_HZ / 10)
#define MDFLD_PNW_A0 0x00
#define MDFLD_PNW_B0 0x04
#define MDFLD_PNW_C0 0x08
#define PSB_PWR_STATE_ON		1
#define PSB_PWR_STATE_OFF		2
#define PSB_PMPOLICY_NOPM		0
#define PSB_PMPOLICY_CLOCKGATING	1
#define PSB_PMPOLICY_POWERDOWN		2
#define PSB_PMSTATE_POWERUP		0
#define PSB_PMSTATE_CLOCKGATED		1
#define PSB_PMSTATE_POWERDOWN		2
#define PSB_PCIx_MSI_ADDR_LOC		0x94
#define PSB_PCIx_MSI_DATA_LOC		0x98
struct opregion_header;
struct opregion_acpi;
struct opregion_swsci;
struct opregion_asle;
struct psb_intel_opregion ;
struct drm_psb_private ;
struct psb_mmu_driver;
extern int drm_crtc_probe_output_modes(struct drm_device *dev, int, int);
extern int drm_pick_crtcs(struct drm_device *dev);
static inline struct drm_psb_private *psb_priv(struct drm_device *dev)
extern struct psb_mmu_driver *psb_mmu_driver_init(uint8_t __iomem * registers,
int trap_pagefaults,
int invalid_type,
struct drm_psb_private *dev_priv);
extern void psb_mmu_driver_takedown(struct psb_mmu_driver *driver);
extern struct psb_mmu_pd *psb_mmu_get_default_pd(struct psb_mmu_driver
*driver);
extern void psb_mmu_mirror_gtt(struct psb_mmu_pd *pd, uint32_t mmu_offset,
uint32_t gtt_start, uint32_t gtt_pages);
extern struct psb_mmu_pd *psb_mmu_alloc_pd(struct psb_mmu_driver *driver,
int trap_pagefaults,
int invalid_type);
extern void psb_mmu_free_pagedir(struct psb_mmu_pd *pd);
extern void psb_mmu_flush(struct psb_mmu_driver *driver, int rc_prot);
extern void psb_mmu_remove_pfn_sequence(struct psb_mmu_pd *pd,
unsigned long address,
uint32_t num_pages);
extern int psb_mmu_insert_pfn_sequence(struct psb_mmu_pd *pd,
uint32_t start_pfn,
unsigned long address,
uint32_t num_pages, int type);
extern int psb_mmu_virtual_to_pfn(struct psb_mmu_pd *pd, uint32_t virtual,
unsigned long *pfn);
extern void psb_mmu_set_pd_context(struct psb_mmu_pd *pd, int hw_context);
extern int psb_mmu_insert_pages(struct psb_mmu_pd *pd, struct page **pages,
unsigned long address, uint32_t num_pages,
uint32_t desired_tile_stride,
uint32_t hw_tile_stride, int type);
extern void psb_mmu_remove_pages(struct psb_mmu_pd *pd,
unsigned long address, uint32_t num_pages,
uint32_t desired_tile_stride,
uint32_t hw_tile_stride);
extern irqreturn_t psb_irq_handler(DRM_IRQ_ARGS);
extern int psb_irq_enable_dpst(struct drm_device *dev);
extern int psb_irq_disable_dpst(struct drm_device *dev);
extern void psb_irq_preinstall(struct drm_device *dev);
extern int psb_irq_postinstall(struct drm_device *dev);
extern void psb_irq_uninstall(struct drm_device *dev);
extern void psb_irq_turn_on_dpst(struct drm_device *dev);
extern void psb_irq_turn_off_dpst(struct drm_device *dev);
extern void psb_irq_uninstall_islands(struct drm_device *dev, int hw_islands);
extern int psb_vblank_wait2(struct drm_device *dev,unsigned int *sequence);
extern int psb_vblank_wait(struct drm_device *dev, unsigned int *sequence);
extern int psb_enable_vblank(struct drm_device *dev, int crtc);
extern void psb_disable_vblank(struct drm_device *dev, int crtc);
void
psb_enable_pipestat(struct drm_psb_private *dev_priv, int pipe, u32 mask);
void
psb_disable_pipestat(struct drm_psb_private *dev_priv, int pipe, u32 mask);
extern u32 psb_get_vblank_counter(struct drm_device *dev, int crtc);
extern int psb_intel_opregion_init(struct drm_device *dev);
extern int psbfb_probed(struct drm_device *dev);
extern int psbfb_remove(struct drm_device *dev,
struct drm_framebuffer *fb);
extern int psbfb_kms_off_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern int psbfb_kms_on_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
extern void *psbfb_vdc_reg(struct drm_device* dev);
extern void psbfb_fillrect(struct fb_info *info,
const struct fb_fillrect *rect);
extern void psbfb_copyarea(struct fb_info *info,
const struct fb_copyarea *region);
extern void psbfb_imageblit(struct fb_info *info,
const struct fb_image *image);
extern int psbfb_sync(struct fb_info *info);
extern void psb_spank(struct drm_psb_private *dev_priv);
extern int psbfb_2d_submit(struct drm_psb_private *dev_priv, uint32_t *cmdbuf,
unsigned size);
extern void psb_lid_timer_init(struct drm_psb_private *dev_priv);
extern void psb_lid_timer_takedown(struct drm_psb_private *dev_priv);
extern void psb_print_pagefault(struct drm_psb_private *dev_priv);
extern void psb_modeset_init(struct drm_device *dev);
extern void psb_modeset_cleanup(struct drm_device *dev);
extern int psb_fbdev_init(struct drm_device * dev);
int psb_backlight_init(struct drm_device *dev);
void psb_backlight_exit(void);
int psb_set_brightness(struct backlight_device *bd);
int psb_get_brightness(struct backlight_device *bd);
struct backlight_device * psb_get_backlight_device(void);
extern const struct drm_crtc_helper_funcs mrst_helper_funcs;
extern void mrst_lvds_init(struct drm_device *dev,
struct psb_intel_mode_device *mode_dev);
extern void psb_intel_lvds_prepare(struct drm_encoder *encoder);
extern void psb_intel_lvds_commit(struct drm_encoder *encoder);
extern const struct drm_connector_helper_funcs
psb_intel_lvds_connector_helper_funcs;
extern const struct drm_connector_funcs psb_intel_lvds_connector_funcs;
extern int psb_gem_init_object(struct drm_gem_object *obj);
extern void psb_gem_free_object(struct drm_gem_object *obj);
extern int psb_gem_get_aperture(struct drm_device *dev, void *data,
struct drm_file *file);
extern int psb_gem_dumb_create(struct drm_file *file, struct drm_device *dev,
struct drm_mode_create_dumb *args);
extern int psb_gem_dumb_destroy(struct drm_file *file, struct drm_device *dev,
uint32_t handle);
extern int psb_gem_dumb_map_gtt(struct drm_file *file, struct drm_device *dev,
uint32_t handle, uint64_t *offset);
extern int psb_gem_fault(struct vm_area_struct *vma, struct vm_fault *vmf);
#define PSB_D_GENERAL (1 << 0)
#define PSB_D_INIT    (1 << 1)
#define PSB_D_IRQ     (1 << 2)
#define PSB_D_ENTRY   (1 << 3)
#define PSB_D_HV      (1 << 4)
#define PSB_D_DBI_BF  (1 << 5)
#define PSB_D_PM      (1 << 6)
#define PSB_D_RENDER  (1 << 7)
#define PSB_D_REG     (1 << 8)
#define PSB_D_MSVDX   (1 << 9)
#define PSB_D_TOPAZ   (1 << 10)
extern int drm_psb_debug;
extern int drm_psb_no_fb;
extern int drm_idle_check_interval;
#define PSB_DEBUG_GENERAL(_fmt, _arg...) \
PSB_DEBUG(PSB_D_GENERAL, _fmt, ##_arg)
#define PSB_DEBUG_INIT(_fmt, _arg...) \
PSB_DEBUG(PSB_D_INIT, _fmt, ##_arg)
#define PSB_DEBUG_IRQ(_fmt, _arg...) \
PSB_DEBUG(PSB_D_IRQ, _fmt, ##_arg)
#define PSB_DEBUG_ENTRY(_fmt, _arg...) \
PSB_DEBUG(PSB_D_ENTRY, _fmt, ##_arg)
#define PSB_DEBUG_HV(_fmt, _arg...) \
PSB_DEBUG(PSB_D_HV, _fmt, ##_arg)
#define PSB_DEBUG_DBI_BF(_fmt, _arg...) \
PSB_DEBUG(PSB_D_DBI_BF, _fmt, ##_arg)
#define PSB_DEBUG_PM(_fmt, _arg...) \
PSB_DEBUG(PSB_D_PM, _fmt, ##_arg)
#define PSB_DEBUG_RENDER(_fmt, _arg...) \
PSB_DEBUG(PSB_D_RENDER, _fmt, ##_arg)
#define PSB_DEBUG_REG(_fmt, _arg...) \
PSB_DEBUG(PSB_D_REG, _fmt, ##_arg)
#define PSB_DEBUG_MSVDX(_fmt, _arg...) \
PSB_DEBUG(PSB_D_MSVDX, _fmt, ##_arg)
#define PSB_DEBUG_TOPAZ(_fmt, _arg...) \
PSB_DEBUG(PSB_D_TOPAZ, _fmt, ##_arg)
#if DRM_DEBUG_CODE
#define PSB_DEBUG(_flag, _fmt, _arg...)					\
do  while (0)
#define PSB_DEBUG(_fmt, _arg...)     do  while (0)
#define DRM_DRIVER_PRIVATE_T struct drm_psb_private
static inline u32 MRST_MSG_READ32(uint port, uint offset)
static inline void MRST_MSG_WRITE32(uint port, uint offset, u32 value)
static inline u32 MDFLD_MSG_READ32(uint port, uint offset)
static inline void MDFLD_MSG_WRITE32(uint port, uint offset, u32 value)
static inline uint32_t REGISTER_READ(struct drm_device *dev, uint32_t reg)
#define REG_READ(reg)	       REGISTER_READ(dev, (reg))
static inline void REGISTER_WRITE(struct drm_device *dev, uint32_t reg,
uint32_t val)
#define REG_WRITE(reg, val)	REGISTER_WRITE(dev, (reg), (val))
static inline void REGISTER_WRITE16(struct drm_device *dev,
uint32_t reg, uint32_t val)
#define REG_WRITE16(reg, val)	  REGISTER_WRITE16(dev, (reg), (val))
static inline void REGISTER_WRITE8(struct drm_device *dev,
uint32_t reg, uint32_t val)
#define REG_WRITE8(reg, val)	 REGISTER_WRITE8(dev, (reg), (val))
#define PSB_ALIGN_TO(_val, _align) \
(((_val) + ((_align) - 1)) & ~((_align) - 1))
#define PSB_WVDC32(_val, _offs) \
iowrite32(_val, dev_priv->vdc_reg + (_offs))
#define PSB_RVDC32(_offs) \
ioread32(dev_priv->vdc_reg + (_offs))
#define PSB_RSGX32(_offs)					\
()
#define PSB_RSGX32(_offs)					\
ioread32(dev_priv->sgx_reg + (_offs))
#define PSB_WSGX32(_val, _offs) \
iowrite32(_val, dev_priv->sgx_reg + (_offs))
#define MSVDX_REG_DUMP 0
#if MSVDX_REG_DUMP
#define PSB_WMSVDX32(_val, _offs) \
printk("MSVDX: write %08x to reg 0x%08x\n", (unsigned int)(_val), (unsigned int)(_offs));\
iowrite32(_val, dev_priv->msvdx_reg + (_offs))
#define PSB_RMSVDX32(_offs) \
ioread32(dev_priv->msvdx_reg + (_offs))
#define PSB_WMSVDX32(_val, _offs) \
iowrite32(_val, dev_priv->msvdx_reg + (_offs))
#define PSB_RMSVDX32(_offs) \
ioread32(dev_priv->msvdx_reg + (_offs))
#define PSB_ALPL(_val, _base)			\
(((_val) >> (_base ## _ALIGNSHIFT)) << (_base ## _SHIFT))
#define PSB_ALPLM(_val, _base)			\
((((_val) >> (_base ## _ALIGNSHIFT)) << (_base ## _SHIFT)) & (_base ## _MASK))
