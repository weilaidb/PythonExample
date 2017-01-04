#define __NOUVEAU_CONNECTOR_H__
struct nouveau_connector ;
static inline struct nouveau_connector *nouveau_connector(
struct drm_connector *con)
struct drm_connector *
nouveau_connector_create(struct drm_device *, int index);
int
nouveau_connector_bpp(struct drm_connector *);
