#define NOUVEAU_DMA_DEBUG (nouveau_reg_debug & NOUVEAU_REG_DEBUG_EVO)
static void
nv50_cursor_show(struct nouveau_crtc *nv_crtc, bool update)
static void
nv50_cursor_hide(struct nouveau_crtc *nv_crtc, bool update)
static void
nv50_cursor_set_pos(struct nouveau_crtc *nv_crtc, int x, int y)
static void
nv50_cursor_set_offset(struct nouveau_crtc *nv_crtc, uint32_t offset)
int
nv50_cursor_init(struct nouveau_crtc *nv_crtc)
void
nv50_cursor_fini(struct nouveau_crtc *nv_crtc)
