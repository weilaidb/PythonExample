#define PREFIX "ACPI: "
ACPI_MODULE_NAME("video");
#define _COMPONENT		ACPI_VIDEO_COMPONENT
static long acpi_video_support;
static bool acpi_video_caps_checked;
static acpi_status
acpi_backlight_cap_match(acpi_handle handle, u32 level, void *context,
void **retyurn_value)
long acpi_is_video_device(struct acpi_device *device)
EXPORT_SYMBOL(acpi_is_video_device);
static acpi_status
find_video(acpi_handle handle, u32 lvl, void *context, void **rv)
long acpi_video_get_capabilities(acpi_handle graphics_handle)
EXPORT_SYMBOL(acpi_video_get_capabilities);
int acpi_video_backlight_support(void)
EXPORT_SYMBOL(acpi_video_backlight_support);
static int __init acpi_backlight(char *str)
__setup("acpi_backlight=", acpi_backlight);
