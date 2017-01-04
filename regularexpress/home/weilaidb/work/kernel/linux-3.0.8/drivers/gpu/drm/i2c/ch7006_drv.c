static void ch7006_encoder_set_config(struct drm_encoder *encoder,
void *params)
static void ch7006_encoder_destroy(struct drm_encoder *encoder)
static void  ch7006_encoder_dpms(struct drm_encoder *encoder, int mode)
static void ch7006_encoder_save(struct drm_encoder *encoder)
static void ch7006_encoder_restore(struct drm_encoder *encoder)
static bool ch7006_encoder_mode_fixup(struct drm_encoder *encoder,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode)
static int ch7006_encoder_mode_valid(struct drm_encoder *encoder,
struct drm_display_mode *mode)
static void ch7006_encoder_mode_set(struct drm_encoder *encoder,
struct drm_display_mode *drm_mode,
struct drm_display_mode *adjusted_mode)
static enum drm_connector_status ch7006_encoder_detect(struct drm_encoder *encoder,
struct drm_connector *connector)
static int ch7006_encoder_get_modes(struct drm_encoder *encoder,
struct drm_connector *connector)
static int ch7006_encoder_create_resources(struct drm_encoder *encoder,
struct drm_connector *connector)
static int ch7006_encoder_set_property(struct drm_encoder *encoder,
struct drm_connector *connector,
struct drm_property *property,
uint64_t val)
static struct drm_encoder_slave_funcs ch7006_encoder_funcs = ;
static int ch7006_probe(struct i2c_client *client, const struct i2c_device_id *id)
static int ch7006_remove(struct i2c_client *client)
static int ch7006_suspend(struct i2c_client *client, pm_message_t mesg)
static int ch7006_resume(struct i2c_client *client)
static int ch7006_encoder_init(struct i2c_client *client,
struct drm_device *dev,
struct drm_encoder_slave *encoder)
static struct i2c_device_id ch7006_ids[] = ;
MODULE_DEVICE_TABLE(i2c, ch7006_ids);
static struct drm_i2c_encoder_driver ch7006_driver = ;
static int __init ch7006_init(void)
static void __exit ch7006_exit(void)
int ch7006_debug;
module_param_named(debug, ch7006_debug, int, 0600);
MODULE_PARM_DESC(debug, "Enable debug output.");
char *ch7006_tv_norm;
module_param_named(tv_norm, ch7006_tv_norm, charp, 0600);
MODULE_PARM_DESC(tv_norm, "Default TV norm.\n"
"\t\tSupported: PAL, PAL-M, PAL-N, PAL-Nc, PAL-60, NTSC-M, NTSC-J.\n"
"\t\tDefault: PAL");
int ch7006_scale = 1;
module_param_named(scale, ch7006_scale, int, 0600);
MODULE_PARM_DESC(scale, "Default scale.\n"
"\t\tSupported: 0 -> Select video modes with a higher blanking ratio.\n"
"\t\t\t1 -> Select default video modes.\n"
"\t\t\t2 -> Select video modes with a lower blanking ratio.");
MODULE_AUTHOR("Francisco Jerez <currojerez@riseup.net>");
MODULE_DESCRIPTION("Chrontel ch7006 TV encoder driver");
MODULE_LICENSE("GPL and additional rights");
module_init(ch7006_init);
module_exit(ch7006_exit);
