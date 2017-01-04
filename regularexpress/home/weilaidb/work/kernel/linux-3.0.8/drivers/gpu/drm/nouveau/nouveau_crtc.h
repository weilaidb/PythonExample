#define __NOUVEAU_CRTC_H__
struct nouveau_crtc ;
static inline struct nouveau_crtc *nouveau_crtc(struct drm_crtc *crtc)
static inline struct drm_crtc *to_drm_crtc(struct nouveau_crtc *crtc)
int nv50_crtc_create(struct drm_device *dev, int index);
int nv50_cursor_init(struct nouveau_crtc *);
void nv50_cursor_fini(struct nouveau_crtc *);
int nv50_crtc_cursor_set(struct drm_crtc *drm_crtc, struct drm_file *file_priv,
uint32_t buffer_handle, uint32_t width,
uint32_t height);
int nv50_crtc_cursor_move(struct drm_crtc *drm_crtc, int x, int y);
int nv04_cursor_init(struct nouveau_crtc *);
struct nouveau_connector *
nouveau_crtc_connector_get(struct nouveau_crtc *crtc);
