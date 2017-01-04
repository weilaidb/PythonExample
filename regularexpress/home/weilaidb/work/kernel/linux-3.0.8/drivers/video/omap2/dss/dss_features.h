#define __OMAP2_DSS_FEATURES_H
#define MAX_DSS_MANAGERS	3
#define MAX_DSS_OVERLAYS	3
#define MAX_DSS_LCD_MANAGERS	2
#define MAX_NUM_DSI		2
enum dss_feat_id ;
enum dss_feat_reg_field ;
enum dss_range_param ;
int dss_feat_get_num_mgrs(void);
int dss_feat_get_num_ovls(void);
unsigned long dss_feat_get_param_min(enum dss_range_param param);
unsigned long dss_feat_get_param_max(enum dss_range_param param);
enum omap_display_type dss_feat_get_supported_displays(enum omap_channel channel);
enum omap_color_mode dss_feat_get_supported_color_modes(enum omap_plane plane);
bool dss_feat_color_mode_supported(enum omap_plane plane,
enum omap_color_mode color_mode);
const char *dss_feat_get_clk_source_name(enum omap_dss_clk_source id);
bool dss_has_feature(enum dss_feat_id id);
void dss_feat_get_reg_field(enum dss_feat_reg_field id, u8 *start, u8 *end);
void dss_features_init(void);
