struct sil164_priv ;
#define to_sil164_priv(x) \
((struct sil164_priv *)to_encoder_slave(x)->slave_priv)
#define sil164_dbg(client, format, ...) do  while (0)
#define sil164_info(client, format, ...)		\
dev_info(&client->dev, format, __VA_ARGS__)
#define sil164_err(client, format, ...)			\
dev_err(&client->dev, format, __VA_ARGS__)
#define SIL164_I2C_ADDR_MASTER			0x38
#define SIL164_I2C_ADDR_SLAVE			0x39
#define SIL164_VENDOR_LO			0x0
#define SIL164_VENDOR_HI			0x1
#define SIL164_DEVICE_LO			0x2
#define SIL164_DEVICE_HI			0x3
#define SIL164_REVISION				0x4
#define SIL164_FREQ_MIN				0x6
#define SIL164_FREQ_MAX				0x7
#define SIL164_CONTROL0				0x8
#  define SIL164_CONTROL0_POWER_ON		0x01
#  define SIL164_CONTROL0_EDGE_RISING		0x02
#  define SIL164_CONTROL0_INPUT_24BIT		0x04
#  define SIL164_CONTROL0_DUAL_EDGE		0x08
#  define SIL164_CONTROL0_HSYNC_ON		0x10
#  define SIL164_CONTROL0_VSYNC_ON		0x20
#define SIL164_DETECT				0x9
#  define SIL164_DETECT_INTR_STAT		0x01
#  define SIL164_DETECT_HOTPLUG_STAT		0x02
#  define SIL164_DETECT_RECEIVER_STAT		0x04
#  define SIL164_DETECT_INTR_MODE_RECEIVER	0x00
#  define SIL164_DETECT_INTR_MODE_HOTPLUG	0x08
#  define SIL164_DETECT_OUT_MODE_HIGH		0x00
#  define SIL164_DETECT_OUT_MODE_INTR		0x10
#  define SIL164_DETECT_OUT_MODE_RECEIVER	0x20
#  define SIL164_DETECT_OUT_MODE_HOTPLUG	0x30
#  define SIL164_DETECT_VSWING_STAT		0x80
#define SIL164_CONTROL1				0xa
#  define SIL164_CONTROL1_DESKEW_ENABLE		0x10
#  define SIL164_CONTROL1_DESKEW_INCR_SHIFT	5
#define SIL164_GPIO				0xb
#define SIL164_CONTROL2				0xc
#  define SIL164_CONTROL2_FILTER_ENABLE		0x01
#  define SIL164_CONTROL2_FILTER_SETTING_SHIFT	1
#  define SIL164_CONTROL2_DUALLINK_MASTER	0x40
#  define SIL164_CONTROL2_SYNC_CONT		0x80
#define SIL164_DUALLINK				0xd
#  define SIL164_DUALLINK_ENABLE		0x10
#  define SIL164_DUALLINK_SKEW_SHIFT		5
#define SIL164_PLLZONE				0xe
#  define SIL164_PLLZONE_STAT			0x08
#  define SIL164_PLLZONE_FORCE_ON		0x10
#  define SIL164_PLLZONE_FORCE_HIGH		0x20
static void
sil164_write(struct i2c_client *client, uint8_t addr, uint8_t val)
static uint8_t
sil164_read(struct i2c_client *client, uint8_t addr)
static void
sil164_save_state(struct i2c_client *client, uint8_t *state)
static void
sil164_restore_state(struct i2c_client *client, uint8_t *state)
static void
sil164_set_power_state(struct i2c_client *client, bool on)
static void
sil164_init_state(struct i2c_client *client,
struct sil164_encoder_params *config,
bool duallink)
static void
sil164_encoder_set_config(struct drm_encoder *encoder, void *params)
static void
sil164_encoder_dpms(struct drm_encoder *encoder, int mode)
static void
sil164_encoder_save(struct drm_encoder *encoder)
static void
sil164_encoder_restore(struct drm_encoder *encoder)
static bool
sil164_encoder_mode_fixup(struct drm_encoder *encoder,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode)
static int
sil164_encoder_mode_valid(struct drm_encoder *encoder,
struct drm_display_mode *mode)
static void
sil164_encoder_mode_set(struct drm_encoder *encoder,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode)
static enum drm_connector_status
sil164_encoder_detect(struct drm_encoder *encoder,
struct drm_connector *connector)
static int
sil164_encoder_get_modes(struct drm_encoder *encoder,
struct drm_connector *connector)
static int
sil164_encoder_create_resources(struct drm_encoder *encoder,
struct drm_connector *connector)
static int
sil164_encoder_set_property(struct drm_encoder *encoder,
struct drm_connector *connector,
struct drm_property *property,
uint64_t val)
static void
sil164_encoder_destroy(struct drm_encoder *encoder)
static struct drm_encoder_slave_funcs sil164_encoder_funcs = ;
static int
sil164_probe(struct i2c_client *client, const struct i2c_device_id *id)
static int
sil164_remove(struct i2c_client *client)
static struct i2c_client *
sil164_detect_slave(struct i2c_client *client)
static int
sil164_encoder_init(struct i2c_client *client,
struct drm_device *dev,
struct drm_encoder_slave *encoder)
static struct i2c_device_id sil164_ids[] = ;
MODULE_DEVICE_TABLE(i2c, sil164_ids);
static struct drm_i2c_encoder_driver sil164_driver = ;
static int __init
sil164_init(void)
static void __exit
sil164_exit(void)
MODULE_AUTHOR("Francisco Jerez <currojerez@riseup.net>");
MODULE_DESCRIPTION("Silicon Image sil164 TMDS transmitter driver");
MODULE_LICENSE("GPL and additional rights");
module_init(sil164_init);
module_exit(sil164_exit);
