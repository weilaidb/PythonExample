#define __NOUVEAU_ENCODER_H__
#define NV_DPMS_CLEARED 0x80
struct nouveau_encoder ;
static inline struct nouveau_encoder *nouveau_encoder(struct drm_encoder *enc)
static inline struct drm_encoder *to_drm_encoder(struct nouveau_encoder *enc)
static inline struct drm_encoder_slave_funcs *
get_slave_funcs(struct drm_encoder *enc)
struct nouveau_connector *
nouveau_encoder_connector_get(struct nouveau_encoder *encoder);
int nv50_sor_create(struct drm_connector *, struct dcb_entry *);
int nv50_dac_create(struct drm_connector *, struct dcb_entry *);
struct bit_displayport_encoder_table  __attribute__ ((packed));
struct bit_displayport_encoder_table_entry  __attribute__ ((packed));
