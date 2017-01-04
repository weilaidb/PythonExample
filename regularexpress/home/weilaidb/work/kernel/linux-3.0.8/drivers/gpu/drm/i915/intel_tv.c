enum tv_margin ;
struct intel_tv ;
struct video_levels ;
struct color_conversion ;
static const u32 filter_table[] = ;
static const struct color_conversion ntsc_m_csc_composite = ;
static const struct video_levels ntsc_m_levels_composite = ;
static const struct color_conversion ntsc_m_csc_svideo = ;
static const struct video_levels ntsc_m_levels_svideo = ;
static const struct color_conversion ntsc_j_csc_composite = ;
static const struct video_levels ntsc_j_levels_composite = ;
static const struct color_conversion ntsc_j_csc_svideo = ;
static const struct video_levels ntsc_j_levels_svideo = ;
static const struct color_conversion pal_csc_composite = ;
static const struct video_levels pal_levels_composite = ;
static const struct color_conversion pal_csc_svideo = ;
static const struct video_levels pal_levels_svideo = ;
static const struct color_conversion pal_m_csc_composite = ;
static const struct video_levels pal_m_levels_composite = ;
static const struct color_conversion pal_m_csc_svideo = ;
static const struct video_levels pal_m_levels_svideo = ;
static const struct color_conversion pal_n_csc_composite = ;
static const struct video_levels pal_n_levels_composite = ;
static const struct color_conversion pal_n_csc_svideo = ;
static const struct video_levels pal_n_levels_svideo = ;
static const struct color_conversion sdtv_csc_yprpb = ;
static const struct color_conversion sdtv_csc_rgb = ;
static const struct color_conversion hdtv_csc_yprpb = ;
static const struct color_conversion hdtv_csc_rgb = ;
static const struct video_levels component_levels = ;
struct tv_mode ;
static const struct tv_mode tv_modes[] = ;
static struct intel_tv *enc_to_intel_tv(struct drm_encoder *encoder)
static struct intel_tv *intel_attached_tv(struct drm_connector *connector)
static void
intel_tv_dpms(struct drm_encoder *encoder, int mode)
static const struct tv_mode *
intel_tv_mode_lookup(const char *tv_format)
static const struct tv_mode *
intel_tv_mode_find(struct intel_tv *intel_tv)
static enum drm_mode_status
intel_tv_mode_valid(struct drm_connector *connector,
struct drm_display_mode *mode)
static bool
intel_tv_mode_fixup(struct drm_encoder *encoder, struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode)
static void
intel_tv_mode_set(struct drm_encoder *encoder, struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode)
static const struct drm_display_mode reported_modes[] = ;
static int
intel_tv_detect_type (struct intel_tv *intel_tv,
struct drm_connector *connector)
static void intel_tv_find_better_format(struct drm_connector *connector)
static enum drm_connector_status
intel_tv_detect(struct drm_connector *connector, bool force)
static const struct input_res  input_res_table[] = ;
static void
intel_tv_chose_preferred_modes(struct drm_connector *connector,
struct drm_display_mode *mode_ptr)
static int
intel_tv_get_modes(struct drm_connector *connector)
static void
intel_tv_destroy (struct drm_connector *connector)
static int
intel_tv_set_property(struct drm_connector *connector, struct drm_property *property,
uint64_t val)
static const struct drm_encoder_helper_funcs intel_tv_helper_funcs = ;
static const struct drm_connector_funcs intel_tv_connector_funcs = ;
static const struct drm_connector_helper_funcs intel_tv_connector_helper_funcs = ;
static const struct drm_encoder_funcs intel_tv_enc_funcs = ;
static int tv_is_present_in_vbt(struct drm_device *dev)
void
intel_tv_init(struct drm_device *dev)
