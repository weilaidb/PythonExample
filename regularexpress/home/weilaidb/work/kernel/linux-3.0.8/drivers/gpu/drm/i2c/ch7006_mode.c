char *ch7006_tv_norm_names[] = ;
#define NTSC_LIKE_TIMINGS .vrefresh = 60 * fixed1/1.001,		\
.vdisplay = 480,					\
.vtotal = 525,						\
.hvirtual = 660
#define PAL_LIKE_TIMINGS .vrefresh = 50 * fixed1,		\
.vdisplay = 576,				\
.vtotal = 625,					\
.hvirtual = 810
struct ch7006_tv_norm_info ch7006_tv_norms[] = ;
#define __MODE(f, hd, vd, ht, vt, hsynp, vsynp,				\
subc, scale, scale_mask, norm_mask, e_hd, e_vd)
#define MODE(f, hd, vd, ht, vt, hsynp, vsynp,				\
subc, scale, scale_mask, norm_mask)			\
__MODE(f, hd, vd, ht, vt, hsynp, vsynp, subc, scale,		\
scale_mask, norm_mask, hd, vd)
#define NTSC_LIKE (1 << TV_NORM_NTSC_M | 1 << TV_NORM_NTSC_J |		\
1 << TV_NORM_PAL_M | 1 << TV_NORM_PAL_60)
#define PAL_LIKE (1 << TV_NORM_PAL | 1 << TV_NORM_PAL_N | 1 << TV_NORM_PAL_NC)
struct ch7006_mode ch7006_modes[] = ;
struct ch7006_mode *ch7006_lookup_mode(struct drm_encoder *encoder,
struct drm_display_mode *drm_mode)
void ch7006_setup_levels(struct drm_encoder *encoder)
void ch7006_setup_subcarrier(struct drm_encoder *encoder)
void ch7006_setup_pll(struct drm_encoder *encoder)
void ch7006_setup_power_state(struct drm_encoder *encoder)
void ch7006_setup_properties(struct drm_encoder *encoder)
void ch7006_write(struct i2c_client *client, uint8_t addr, uint8_t val)
uint8_t ch7006_read(struct i2c_client *client, uint8_t addr)
void ch7006_state_load(struct i2c_client *client,
struct ch7006_state *state)
void ch7006_state_save(struct i2c_client *client,
struct ch7006_state *state)
