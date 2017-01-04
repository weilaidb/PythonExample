char *nv17_tv_norm_names[NUM_TV_NORMS] = ;
struct nv17_tv_norm_params nv17_tv_norms[NUM_TV_NORMS] = ;
#define calc_overscan(o) interpolate(0x100, 0xe1, 0xc1, o)
#define id1 (1LL << 8)
#define id2 (1LL << 16)
#define id3 (1LL << 24)
#define id4 (1LL << 32)
#define id5 (1LL << 48)
static struct filter_params fparams[2][4] = ;
static void tv_setup_filter(struct drm_encoder *encoder)
static void tv_save_filter(struct drm_device *dev, uint32_t base,
uint32_t regs[4][7])
static void tv_load_filter(struct drm_device *dev, uint32_t base,
uint32_t regs[4][7])
void nv17_tv_state_save(struct drm_device *dev, struct nv17_tv_state *state)
void nv17_tv_state_load(struct drm_device *dev, struct nv17_tv_state *state)
const struct drm_display_mode nv17_tv_modes[] = ;
void nv17_tv_update_properties(struct drm_encoder *encoder)
void nv17_tv_update_rescaler(struct drm_encoder *encoder)
void nv17_ctv_update_rescaler(struct drm_encoder *encoder)
