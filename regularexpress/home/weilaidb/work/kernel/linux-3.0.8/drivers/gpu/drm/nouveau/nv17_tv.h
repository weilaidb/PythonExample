#define __NV17_TV_H__
struct nv17_tv_state ;
enum nv17_tv_norm;
struct nv17_tv_encoder ;
#define to_tv_enc(x) container_of(nouveau_encoder(x),		\
struct nv17_tv_encoder, base)
extern char *nv17_tv_norm_names[NUM_TV_NORMS];
extern struct nv17_tv_norm_params  nv17_tv_norms[NUM_TV_NORMS];
#define get_tv_norm(enc) (&nv17_tv_norms[to_tv_enc(enc)->tv_norm])
extern const struct drm_display_mode nv17_tv_modes[];
static inline int interpolate(int y0, int y1, int y2, int x)
void nv17_tv_state_save(struct drm_device *dev, struct nv17_tv_state *state);
void nv17_tv_state_load(struct drm_device *dev, struct nv17_tv_state *state);
void nv17_tv_update_properties(struct drm_encoder *encoder);
void nv17_tv_update_rescaler(struct drm_encoder *encoder);
void nv17_ctv_update_rescaler(struct drm_encoder *encoder);
static inline void nv_write_ptv(struct drm_device *dev, uint32_t reg,
uint32_t val)
static inline uint32_t nv_read_ptv(struct drm_device *dev, uint32_t reg)
static inline void nv_write_tv_enc(struct drm_device *dev, uint8_t reg,
uint8_t val)
static inline uint8_t nv_read_tv_enc(struct drm_device *dev, uint8_t reg)
#define nv_load_ptv(dev, state, reg) \
nv_write_ptv(dev, NV_PTV_OFFSET + 0x##reg, state->ptv_##reg)
#define nv_save_ptv(dev, state, reg) \
state->ptv_##reg = nv_read_ptv(dev, NV_PTV_OFFSET + 0x##reg)
#define nv_load_tv_enc(dev, state, reg) \
nv_write_tv_enc(dev, 0x##reg, state->tv_enc[0x##reg])
