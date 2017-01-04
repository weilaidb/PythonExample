static void *find_section(struct bdb_header *bdb, int section_id)
static void fill_detail_timing_data(struct drm_display_mode *panel_fixed_mode,
struct lvds_dvo_timing *dvo_timing)
static void parse_backlight_data(struct drm_psb_private *dev_priv,
struct bdb_header *bdb)
static void parse_lfp_panel_data(struct drm_psb_private *dev_priv,
struct bdb_header *bdb)
static void parse_sdvo_panel_data(struct drm_psb_private *dev_priv,
struct bdb_header *bdb)
static void parse_general_features(struct drm_psb_private *dev_priv,
struct bdb_header *bdb)
bool psb_intel_init_bios(struct drm_device *dev)
void psb_intel_destroy_bios(struct drm_device *dev)
