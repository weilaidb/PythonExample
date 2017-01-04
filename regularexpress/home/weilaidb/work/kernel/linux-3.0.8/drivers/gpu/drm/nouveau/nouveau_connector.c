static void nouveau_connector_hotplug(void *, int);
static struct nouveau_encoder *
find_encoder_by_type(struct drm_connector *connector, int type)
struct nouveau_connector *
nouveau_encoder_connector_get(struct nouveau_encoder *encoder)
int
nouveau_connector_bpp(struct drm_connector *connector)
static void
nouveau_connector_destroy(struct drm_connector *connector)
static struct nouveau_i2c_chan *
nouveau_connector_ddc_detect(struct drm_connector *connector,
struct nouveau_encoder **pnv_encoder)
static struct nouveau_encoder *
nouveau_connector_of_detect(struct drm_connector *connector)
static void
nouveau_connector_set_encoder(struct drm_connector *connector,
struct nouveau_encoder *nv_encoder)
static enum drm_connector_status
nouveau_connector_detect(struct drm_connector *connector, bool force)
static enum drm_connector_status
nouveau_connector_detect_lvds(struct drm_connector *connector, bool force)
static void
nouveau_connector_force(struct drm_connector *connector)
static int
nouveau_connector_set_property(struct drm_connector *connector,
struct drm_property *property, uint64_t value)
static struct drm_display_mode *
nouveau_connector_native_mode(struct drm_connector *connector)
struct moderec ;
static struct moderec scaler_modes[] = ;
static int
nouveau_connector_scaler_modes_add(struct drm_connector *connector)
static int
nouveau_connector_get_modes(struct drm_connector *connector)
static unsigned
get_tmds_link_bandwidth(struct drm_connector *connector)
static int
nouveau_connector_mode_valid(struct drm_connector *connector,
struct drm_display_mode *mode)
static struct drm_encoder *
nouveau_connector_best_encoder(struct drm_connector *connector)
static const struct drm_connector_helper_funcs
nouveau_connector_helper_funcs = ;
static const struct drm_connector_funcs
nouveau_connector_funcs = ;
static const struct drm_connector_funcs
nouveau_connector_funcs_lvds = ;
struct drm_connector *
nouveau_connector_create(struct drm_device *dev, int index)
static void
nouveau_connector_hotplug(void *data, int plugged)
