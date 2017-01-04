void savage_emit_clip_rect_s3d(drm_savage_private_t * dev_priv,
const struct drm_clip_rect * pbox)
void savage_emit_clip_rect_s4(drm_savage_private_t * dev_priv,
const struct drm_clip_rect * pbox)
static int savage_verify_texaddr(drm_savage_private_t * dev_priv, int unit,
uint32_t addr)
#define SAVE_STATE(reg,where)			\
if(start <= reg && start+count > reg)	\
dev_priv->state.where = regs[reg - start]
#define SAVE_STATE_MASK(reg,where,mask) do  while (0)
static int savage_verify_state_s3d(drm_savage_private_t * dev_priv,
unsigned int start, unsigned int count,
const uint32_t *regs)
static int savage_verify_state_s4(drm_savage_private_t * dev_priv,
unsigned int start, unsigned int count,
const uint32_t *regs)
#undef SAVE_STATE
#undef SAVE_STATE_MASK
static int savage_dispatch_state(drm_savage_private_t * dev_priv,
const drm_savage_cmd_header_t * cmd_header,
const uint32_t *regs)
static int savage_dispatch_dma_prim(drm_savage_private_t * dev_priv,
const drm_savage_cmd_header_t * cmd_header,
const struct drm_buf * dmabuf)
static int savage_dispatch_vb_prim(drm_savage_private_t * dev_priv,
const drm_savage_cmd_header_t * cmd_header,
const uint32_t *vtxbuf, unsigned int vb_size,
unsigned int vb_stride)
static int savage_dispatch_dma_idx(drm_savage_private_t * dev_priv,
const drm_savage_cmd_header_t * cmd_header,
const uint16_t *idx,
const struct drm_buf * dmabuf)
static int savage_dispatch_vb_idx(drm_savage_private_t * dev_priv,
const drm_savage_cmd_header_t * cmd_header,
const uint16_t *idx,
const uint32_t *vtxbuf,
unsigned int vb_size, unsigned int vb_stride)
static int savage_dispatch_clear(drm_savage_private_t * dev_priv,
const drm_savage_cmd_header_t * cmd_header,
const drm_savage_cmd_header_t *data,
unsigned int nbox,
const struct drm_clip_rect *boxes)
static int savage_dispatch_swap(drm_savage_private_t * dev_priv,
unsigned int nbox, const struct drm_clip_rect *boxes)
static int savage_dispatch_draw(drm_savage_private_t * dev_priv,
const drm_savage_cmd_header_t *start,
const drm_savage_cmd_header_t *end,
const struct drm_buf * dmabuf,
const unsigned int *vtxbuf,
unsigned int vb_size, unsigned int vb_stride,
unsigned int nbox,
const struct drm_clip_rect *boxes)
int savage_bci_cmdbuf(struct drm_device *dev, void *data, struct drm_file *file_priv)
