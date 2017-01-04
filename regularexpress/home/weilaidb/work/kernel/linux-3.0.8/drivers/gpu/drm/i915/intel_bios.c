#define	SLAVE_ADDR1	0x70
#define	SLAVE_ADDR2	0x72
static int panel_type;
static void *
find_section(struct bdb_header *bdb, int section_id)
static u16
get_blocksize(void *p)
static void
fill_detail_timing_data(struct drm_display_mode *panel_fixed_mode,
struct lvds_dvo_timing *dvo_timing)
static void
parse_lfp_panel_data(struct drm_i915_private *dev_priv,
struct bdb_header *bdb)
static void
parse_sdvo_panel_data(struct drm_i915_private *dev_priv,
struct bdb_header *bdb)
static int intel_bios_ssc_frequency(struct drm_device *dev,
bool alternate)
static void
parse_general_features(struct drm_i915_private *dev_priv,
struct bdb_header *bdb)
static void
parse_general_definitions(struct drm_i915_private *dev_priv,
struct bdb_header *bdb)
static void
parse_sdvo_device_mapping(struct drm_i915_private *dev_priv,
struct bdb_header *bdb)
static void
parse_driver_features(struct drm_i915_private *dev_priv,
struct bdb_header *bdb)
static void
parse_edp(struct drm_i915_private *dev_priv, struct bdb_header *bdb)
static void
parse_device_mapping(struct drm_i915_private *dev_priv,
struct bdb_header *bdb)
static void
init_vbt_defaults(struct drm_i915_private *dev_priv)
bool
intel_parse_bios(struct drm_device *dev)
void intel_setup_bios(struct drm_device *dev)
