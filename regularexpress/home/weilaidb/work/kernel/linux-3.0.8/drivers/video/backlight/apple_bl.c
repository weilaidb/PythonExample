static struct backlight_device *apple_backlight_device;
struct hw_data ;
static const struct hw_data *hw_data;
#define DRIVER "apple_backlight: "
static int debug;
module_param_named(debug, debug, int, 0644);
MODULE_PARM_DESC(debug, "Set to one to enable debugging messages.");
static void intel_chipset_set_brightness(int intensity)
static int intel_chipset_send_intensity(struct backlight_device *bd)
static int intel_chipset_get_intensity(struct backlight_device *bd)
static const struct hw_data intel_chipset_data = ;
static void nvidia_chipset_set_brightness(int intensity)
static int nvidia_chipset_send_intensity(struct backlight_device *bd)
static int nvidia_chipset_get_intensity(struct backlight_device *bd)
static const struct hw_data nvidia_chipset_data = ;
static int __devinit apple_bl_add(struct acpi_device *dev)
static int __devexit apple_bl_remove(struct acpi_device *dev, int type)
static const struct acpi_device_id apple_bl_ids[] = ;
static struct acpi_driver apple_bl_driver = ;
static int __init apple_bl_init(void)
static void __exit apple_bl_exit(void)
module_init(apple_bl_init);
module_exit(apple_bl_exit);
MODULE_AUTHOR("Matthew Garrett <mjg@redhat.com>");
MODULE_DESCRIPTION("Apple Backlight Driver");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(acpi, apple_bl_ids);
MODULE_ALIAS("mbp_nvidia_bl");
