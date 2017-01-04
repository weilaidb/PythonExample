#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define DRIVER_NAME     "hp_accel"
#define ACPI_MDPS_CLASS "accelerometer"
struct delayed_led_classdev ;
static inline void delayed_set_status_worker(struct work_struct *work)
static inline void delayed_sysfs_set(struct led_classdev *led_cdev,
enum led_brightness brightness)
static struct acpi_device_id lis3lv02d_device_ids[] = ;
MODULE_DEVICE_TABLE(acpi, lis3lv02d_device_ids);
int lis3lv02d_acpi_init(struct lis3lv02d *lis3)
int lis3lv02d_acpi_read(struct lis3lv02d *lis3, int reg, u8 *ret)
int lis3lv02d_acpi_write(struct lis3lv02d *lis3, int reg, u8 val)
static int lis3lv02d_dmi_matched(const struct dmi_system_id *dmi)
#define DEFINE_CONV(name, x, y, z)			      \
static union axis_conversion lis3lv02d_axis_##name = \
DEFINE_CONV(normal, 1, 2, 3);
DEFINE_CONV(y_inverted, 1, -2, 3);
DEFINE_CONV(x_inverted, -1, 2, 3);
DEFINE_CONV(z_inverted, 1, 2, -3);
DEFINE_CONV(xy_swap, 2, 1, 3);
DEFINE_CONV(xy_rotated_left, -2, 1, 3);
DEFINE_CONV(xy_rotated_left_usd, -2, 1, -3);
DEFINE_CONV(xy_swap_inverted, -2, -1, 3);
DEFINE_CONV(xy_rotated_right, 2, -1, 3);
DEFINE_CONV(xy_swap_yz_inverted, 2, -1, -3);
#define AXIS_DMI_MATCH(_ident, _name, _axis)
#define AXIS_DMI_MATCH2(_ident, _class1, _name1,	\
_class2, _name2,	\
_axis)
static struct dmi_system_id lis3lv02d_dmi_ids[] = ;
static void hpled_set(struct delayed_led_classdev *led_cdev, enum led_brightness value)
static struct delayed_led_classdev hpled_led = ;
static acpi_status
lis3lv02d_get_resource(struct acpi_resource *resource, void *context)
static void lis3lv02d_enum_resources(struct acpi_device *device)
static int lis3lv02d_add(struct acpi_device *device)
static int lis3lv02d_remove(struct acpi_device *device, int type)
static int lis3lv02d_suspend(struct acpi_device *device, pm_message_t state)
static int lis3lv02d_resume(struct acpi_device *device)
#define lis3lv02d_suspend NULL
#define lis3lv02d_resume NULL
static struct acpi_driver lis3lv02d_driver = ;
static int __init lis3lv02d_init_module(void)
static void __exit lis3lv02d_exit_module(void)
MODULE_DESCRIPTION("Glue between LIS3LV02Dx and HP ACPI BIOS and support for disk protection LED.");
MODULE_AUTHOR("Yan Burman, Eric Piel, Pavel Machek");
MODULE_LICENSE("GPL");
module_init(lis3lv02d_init_module);
module_exit(lis3lv02d_exit_module);
