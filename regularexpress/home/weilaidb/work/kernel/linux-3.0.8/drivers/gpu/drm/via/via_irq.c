#define VIA_REG_INTERRUPT       0x200
#define VIA_IRQ_GLOBAL	  (1 << 31)
#define VIA_IRQ_VBLANK_ENABLE   (1 << 19)
#define VIA_IRQ_VBLANK_PENDING  (1 << 3)
#define VIA_IRQ_HQV0_ENABLE     (1 << 11)
#define VIA_IRQ_HQV1_ENABLE     (1 << 25)
#define VIA_IRQ_HQV0_PENDING    (1 << 9)
#define VIA_IRQ_HQV1_PENDING    (1 << 10)
#define VIA_IRQ_DMA0_DD_ENABLE  (1 << 20)
#define VIA_IRQ_DMA0_TD_ENABLE  (1 << 21)
#define VIA_IRQ_DMA1_DD_ENABLE  (1 << 22)
#define VIA_IRQ_DMA1_TD_ENABLE  (1 << 23)
#define VIA_IRQ_DMA0_DD_PENDING (1 << 4)
#define VIA_IRQ_DMA0_TD_PENDING (1 << 5)
#define VIA_IRQ_DMA1_DD_PENDING (1 << 6)
#define VIA_IRQ_DMA1_TD_PENDING (1 << 7)
static maskarray_t via_pro_group_a_irqs[] = ;
static int via_num_pro_group_a = ARRAY_SIZE(via_pro_group_a_irqs);
static int via_irqmap_pro_group_a[] = ;
static maskarray_t via_unichrome_irqs[] = ;
static int via_num_unichrome = ARRAY_SIZE(via_unichrome_irqs);
static int via_irqmap_unichrome[] = ;
static unsigned time_diff(struct timeval *now, struct timeval *then)
u32 via_get_vblank_counter(struct drm_device *dev, int crtc)
irqreturn_t via_driver_irq_handler(DRM_IRQ_ARGS)
static __inline__ void viadrv_acknowledge_irqs(drm_via_private_t *dev_priv)
int via_enable_vblank(struct drm_device *dev, int crtc)
void via_disable_vblank(struct drm_device *dev, int crtc)
static int
via_driver_irq_wait(struct drm_device *dev, unsigned int irq, int force_sequence,
unsigned int *sequence)
void via_driver_irq_preinstall(struct drm_device *dev)
int via_driver_irq_postinstall(struct drm_device *dev)
void via_driver_irq_uninstall(struct drm_device *dev)
int via_wait_irq(struct drm_device *dev, void *data, struct drm_file *file_priv)
