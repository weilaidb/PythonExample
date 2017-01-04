struct dss_reg_field ;
struct dss_param_range ;
struct omap_dss_features ;
static const struct omap_dss_features *omap_current_dss_features;
static const struct dss_reg_field omap2_dss_reg_fields[] = ;
static const struct dss_reg_field omap3_dss_reg_fields[] = ;
static const struct dss_reg_field omap4_dss_reg_fields[] = ;
static const enum omap_display_type omap2_dss_supported_displays[] = ;
static const enum omap_display_type omap3430_dss_supported_displays[] = ;
static const enum omap_display_type omap3630_dss_supported_displays[] = ;
static const enum omap_display_type omap4_dss_supported_displays[] = ;
static const enum omap_color_mode omap2_dss_supported_color_modes[] = ;
static const enum omap_color_mode omap3_dss_supported_color_modes[] = ;
static const enum omap_color_mode omap4_dss_supported_color_modes[] = ;
static const char * const omap2_dss_clk_source_names[] = ;
static const char * const omap3_dss_clk_source_names[] = ;
static const char * const omap4_dss_clk_source_names[] = ;
static const struct dss_param_range omap2_dss_param_range[] = ;
static const struct dss_param_range omap3_dss_param_range[] = ;
static const struct dss_param_range omap4_dss_param_range[] = ;
static const struct omap_dss_features omap2_dss_features = ;
static const struct omap_dss_features omap3430_dss_features = ;
static const struct omap_dss_features omap3630_dss_features = ;
static const struct omap_dss_features omap4430_es1_0_dss_features  = ;
static const struct omap_dss_features omap4_dss_features = ;
int dss_feat_get_num_mgrs(void)
int dss_feat_get_num_ovls(void)
unsigned long dss_feat_get_param_min(enum dss_range_param param)
unsigned long dss_feat_get_param_max(enum dss_range_param param)
enum omap_display_type dss_feat_get_supported_displays(enum omap_channel channel)
enum omap_color_mode dss_feat_get_supported_color_modes(enum omap_plane plane)
bool dss_feat_color_mode_supported(enum omap_plane plane,
enum omap_color_mode color_mode)
const char *dss_feat_get_clk_source_name(enum omap_dss_clk_source id)
bool dss_has_feature(enum dss_feat_id id)
void dss_feat_get_reg_field(enum dss_feat_reg_field id, u8 *start, u8 *end)
void dss_features_init(void)
