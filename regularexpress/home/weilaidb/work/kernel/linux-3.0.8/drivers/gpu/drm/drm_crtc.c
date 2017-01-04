struct drm_prop_enum_list ;
#define DRM_ENUM_NAME_FN(fnname, list)				\
char *fnname(int val)					\
static struct drm_prop_enum_list drm_dpms_enum_list[] =
;
DRM_ENUM_NAME_FN(drm_get_dpms_name, drm_dpms_enum_list)
static struct drm_prop_enum_list drm_scaling_mode_enum_list[] =
;
static struct drm_prop_enum_list drm_dithering_mode_enum_list[] =
;
static struct drm_prop_enum_list drm_dvi_i_select_enum_list[] =
;
DRM_ENUM_NAME_FN(drm_get_dvi_i_select_name, drm_dvi_i_select_enum_list)
static struct drm_prop_enum_list drm_dvi_i_subconnector_enum_list[] =
;
DRM_ENUM_NAME_FN(drm_get_dvi_i_subconnector_name,
drm_dvi_i_subconnector_enum_list)
static struct drm_prop_enum_list drm_tv_select_enum_list[] =
;
DRM_ENUM_NAME_FN(drm_get_tv_select_name, drm_tv_select_enum_list)
static struct drm_prop_enum_list drm_tv_subconnector_enum_list[] =
;
DRM_ENUM_NAME_FN(drm_get_tv_subconnector_name,
drm_tv_subconnector_enum_list)
static struct drm_prop_enum_list drm_dirty_info_enum_list[] = ;
DRM_ENUM_NAME_FN(drm_get_dirty_info_name,
drm_dirty_info_enum_list)
struct drm_conn_prop_enum_list ;
static struct drm_conn_prop_enum_list drm_connector_enum_list[] =
;
static struct drm_prop_enum_list drm_encoder_enum_list[] =
;
char *drm_get_encoder_name(struct drm_encoder *encoder)
EXPORT_SYMBOL(drm_get_encoder_name);
char *drm_get_connector_name(struct drm_connector *connector)
EXPORT_SYMBOL(drm_get_connector_name);
char *drm_get_connector_status_name(enum drm_connector_status status)
static int drm_mode_object_get(struct drm_device *dev,
struct drm_mode_object *obj, uint32_t obj_type)
static void drm_mode_object_put(struct drm_device *dev,
struct drm_mode_object *object)
struct drm_mode_object *drm_mode_object_find(struct drm_device *dev,
uint32_t id, uint32_t type)
EXPORT_SYMBOL(drm_mode_object_find);
int drm_framebuffer_init(struct drm_device *dev, struct drm_framebuffer *fb,
const struct drm_framebuffer_funcs *funcs)
EXPORT_SYMBOL(drm_framebuffer_init);
void drm_framebuffer_cleanup(struct drm_framebuffer *fb)
EXPORT_SYMBOL(drm_framebuffer_cleanup);
void drm_crtc_init(struct drm_device *dev, struct drm_crtc *crtc,
const struct drm_crtc_funcs *funcs)
EXPORT_SYMBOL(drm_crtc_init);
void drm_crtc_cleanup(struct drm_crtc *crtc)
EXPORT_SYMBOL(drm_crtc_cleanup);
void drm_mode_probed_add(struct drm_connector *connector,
struct drm_display_mode *mode)
EXPORT_SYMBOL(drm_mode_probed_add);
void drm_mode_remove(struct drm_connector *connector,
struct drm_display_mode *mode)
EXPORT_SYMBOL(drm_mode_remove);
void drm_connector_init(struct drm_device *dev,
struct drm_connector *connector,
const struct drm_connector_funcs *funcs,
int connector_type)
EXPORT_SYMBOL(drm_connector_init);
void drm_connector_cleanup(struct drm_connector *connector)
EXPORT_SYMBOL(drm_connector_cleanup);
void drm_encoder_init(struct drm_device *dev,
struct drm_encoder *encoder,
const struct drm_encoder_funcs *funcs,
int encoder_type)
EXPORT_SYMBOL(drm_encoder_init);
void drm_encoder_cleanup(struct drm_encoder *encoder)
EXPORT_SYMBOL(drm_encoder_cleanup);
struct drm_display_mode *drm_mode_create(struct drm_device *dev)
EXPORT_SYMBOL(drm_mode_create);
void drm_mode_destroy(struct drm_device *dev, struct drm_display_mode *mode)
EXPORT_SYMBOL(drm_mode_destroy);
static int drm_mode_create_standard_connector_properties(struct drm_device *dev)
int drm_mode_create_dvi_i_properties(struct drm_device *dev)
EXPORT_SYMBOL(drm_mode_create_dvi_i_properties);
int drm_mode_create_tv_properties(struct drm_device *dev, int num_modes,
char *modes[])
EXPORT_SYMBOL(drm_mode_create_tv_properties);
int drm_mode_create_scaling_mode_property(struct drm_device *dev)
EXPORT_SYMBOL(drm_mode_create_scaling_mode_property);
int drm_mode_create_dithering_property(struct drm_device *dev)
EXPORT_SYMBOL(drm_mode_create_dithering_property);
int drm_mode_create_dirty_info_property(struct drm_device *dev)
EXPORT_SYMBOL(drm_mode_create_dirty_info_property);
void drm_mode_config_init(struct drm_device *dev)
EXPORT_SYMBOL(drm_mode_config_init);
int drm_mode_group_init(struct drm_device *dev, struct drm_mode_group *group)
int drm_mode_group_init_legacy_group(struct drm_device *dev,
struct drm_mode_group *group)
void drm_mode_config_cleanup(struct drm_device *dev)
EXPORT_SYMBOL(drm_mode_config_cleanup);
void drm_crtc_convert_to_umode(struct drm_mode_modeinfo *out,
struct drm_display_mode *in)
void drm_crtc_convert_umode(struct drm_display_mode *out,
struct drm_mode_modeinfo *in)
int drm_mode_getresources(struct drm_device *dev, void *data,
struct drm_file *file_priv)
int drm_mode_getcrtc(struct drm_device *dev,
void *data, struct drm_file *file_priv)
int drm_mode_getconnector(struct drm_device *dev, void *data,
struct drm_file *file_priv)
int drm_mode_getencoder(struct drm_device *dev, void *data,
struct drm_file *file_priv)
int drm_mode_setcrtc(struct drm_device *dev, void *data,
struct drm_file *file_priv)
int drm_mode_cursor_ioctl(struct drm_device *dev,
void *data, struct drm_file *file_priv)
int drm_mode_addfb(struct drm_device *dev,
void *data, struct drm_file *file_priv)
int drm_mode_rmfb(struct drm_device *dev,
void *data, struct drm_file *file_priv)
int drm_mode_getfb(struct drm_device *dev,
void *data, struct drm_file *file_priv)
int drm_mode_dirtyfb_ioctl(struct drm_device *dev,
void *data, struct drm_file *file_priv)
void drm_fb_release(struct drm_file *priv)
static int drm_mode_attachmode(struct drm_device *dev,
struct drm_connector *connector,
struct drm_display_mode *mode)
int drm_mode_attachmode_crtc(struct drm_device *dev, struct drm_crtc *crtc,
struct drm_display_mode *mode)
EXPORT_SYMBOL(drm_mode_attachmode_crtc);
static int drm_mode_detachmode(struct drm_device *dev,
struct drm_connector *connector,
struct drm_display_mode *mode)
int drm_mode_detachmode_crtc(struct drm_device *dev, struct drm_display_mode *mode)
EXPORT_SYMBOL(drm_mode_detachmode_crtc);
int drm_mode_attachmode_ioctl(struct drm_device *dev,
void *data, struct drm_file *file_priv)
int drm_mode_detachmode_ioctl(struct drm_device *dev,
void *data, struct drm_file *file_priv)
struct drm_property *drm_property_create(struct drm_device *dev, int flags,
const char *name, int num_values)
EXPORT_SYMBOL(drm_property_create);
int drm_property_add_enum(struct drm_property *property, int index,
uint64_t value, const char *name)
EXPORT_SYMBOL(drm_property_add_enum);
void drm_property_destroy(struct drm_device *dev, struct drm_property *property)
EXPORT_SYMBOL(drm_property_destroy);
int drm_connector_attach_property(struct drm_connector *connector,
struct drm_property *property, uint64_t init_val)
EXPORT_SYMBOL(drm_connector_attach_property);
int drm_connector_property_set_value(struct drm_connector *connector,
struct drm_property *property, uint64_t value)
EXPORT_SYMBOL(drm_connector_property_set_value);
int drm_connector_property_get_value(struct drm_connector *connector,
struct drm_property *property, uint64_t *val)
EXPORT_SYMBOL(drm_connector_property_get_value);
int drm_mode_getproperty_ioctl(struct drm_device *dev,
void *data, struct drm_file *file_priv)
static struct drm_property_blob *drm_property_create_blob(struct drm_device *dev, int length,
void *data)
static void drm_property_destroy_blob(struct drm_device *dev,
struct drm_property_blob *blob)
int drm_mode_getblob_ioctl(struct drm_device *dev,
void *data, struct drm_file *file_priv)
int drm_mode_connector_update_edid_property(struct drm_connector *connector,
struct edid *edid)
EXPORT_SYMBOL(drm_mode_connector_update_edid_property);
int drm_mode_connector_property_set_ioctl(struct drm_device *dev,
void *data, struct drm_file *file_priv)
int drm_mode_connector_attach_encoder(struct drm_connector *connector,
struct drm_encoder *encoder)
EXPORT_SYMBOL(drm_mode_connector_attach_encoder);
void drm_mode_connector_detach_encoder(struct drm_connector *connector,
struct drm_encoder *encoder)
EXPORT_SYMBOL(drm_mode_connector_detach_encoder);
bool drm_mode_crtc_set_gamma_size(struct drm_crtc *crtc,
int gamma_size)
EXPORT_SYMBOL(drm_mode_crtc_set_gamma_size);
int drm_mode_gamma_set_ioctl(struct drm_device *dev,
void *data, struct drm_file *file_priv)
int drm_mode_gamma_get_ioctl(struct drm_device *dev,
void *data, struct drm_file *file_priv)
int drm_mode_page_flip_ioctl(struct drm_device *dev,
void *data, struct drm_file *file_priv)
void drm_mode_config_reset(struct drm_device *dev)
EXPORT_SYMBOL(drm_mode_config_reset);
int drm_mode_create_dumb_ioctl(struct drm_device *dev,
void *data, struct drm_file *file_priv)
int drm_mode_mmap_dumb_ioctl(struct drm_device *dev,
void *data, struct drm_file *file_priv)
int drm_mode_destroy_dumb_ioctl(struct drm_device *dev,
void *data, struct drm_file *file_priv)
