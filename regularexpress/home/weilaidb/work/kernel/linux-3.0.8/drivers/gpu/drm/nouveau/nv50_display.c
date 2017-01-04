#define NOUVEAU_DMA_DEBUG (nouveau_reg_debug & NOUVEAU_REG_DEBUG_EVO)
static void nv50_display_isr(struct drm_device *);
static void nv50_display_bh(unsigned long);
static inline int
nv50_sor_nr(struct drm_device *dev)
int
nv50_display_early_init(struct drm_device *dev)
void
nv50_display_late_takedown(struct drm_device *dev)
int
nv50_display_init(struct drm_device *dev)
static int nv50_display_disable(struct drm_device *dev)
int nv50_display_create(struct drm_device *dev)
void
nv50_display_destroy(struct drm_device *dev)
void
nv50_display_flip_stop(struct drm_crtc *crtc)
int
nv50_display_flip_next(struct drm_crtc *crtc, struct drm_framebuffer *fb,
struct nouveau_channel *chan)
static u16
nv50_display_script_select(struct drm_device *dev, struct dcb_entry *dcb,
u32 mc, int pxclk)
{
struct drm_nouveau_private *dev_priv = dev->dev_private;
struct nouveau_connector *nv_connector = NULL;
struct drm_encoder *encoder;
struct nvbios *bios = &dev_priv->vbios;
u32 script = 0, or;
list_for_each_entry(encoder, &dev->mode_config.encoder_list, head)
or = ffs(dcb->or) - 1;
switch (dcb->type)
static void
nv50_display_vblank_crtc_handler(struct drm_device *dev, int crtc)
static void
nv50_display_vblank_handler(struct drm_device *dev, uint32_t intr)
static void
nv50_display_unk10_handler(struct drm_device *dev)
static void
nv50_display_unk20_dp_hack(struct drm_device *dev, struct dcb_entry *dcb)
static void
nv50_display_unk20_handler(struct drm_device *dev)
static void
nv50_display_unk40_dp_set_tmds(struct drm_device *dev, struct dcb_entry *dcb)
static void
nv50_display_unk40_handler(struct drm_device *dev)
static void
nv50_display_bh(unsigned long data)
static void
nv50_display_error_handler(struct drm_device *dev)
static void
nv50_display_isr(struct drm_device *dev)
