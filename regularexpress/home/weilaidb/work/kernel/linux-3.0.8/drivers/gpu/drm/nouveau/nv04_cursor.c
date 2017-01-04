static void
nv04_cursor_show(struct nouveau_crtc *nv_crtc, bool update)
static void
nv04_cursor_hide(struct nouveau_crtc *nv_crtc, bool update)
static void
nv04_cursor_set_pos(struct nouveau_crtc *nv_crtc, int x, int y)
static void
crtc_wr_cio_state(struct drm_crtc *crtc, struct nv04_crtc_reg *crtcstate, int index)
static void
nv04_cursor_set_offset(struct nouveau_crtc *nv_crtc, uint32_t offset)
int
nv04_cursor_init(struct nouveau_crtc *crtc)
