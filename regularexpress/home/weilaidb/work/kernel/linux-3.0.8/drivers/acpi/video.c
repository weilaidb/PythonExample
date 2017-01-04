#define PREFIX "ACPI: "
#define ACPI_VIDEO_CLASS		"video"
#define ACPI_VIDEO_BUS_NAME		"Video Bus"
#define ACPI_VIDEO_DEVICE_NAME		"Video Device"
#define ACPI_VIDEO_NOTIFY_SWITCH	0x80
#define ACPI_VIDEO_NOTIFY_PROBE		0x81
#define ACPI_VIDEO_NOTIFY_CYCLE		0x82
#define ACPI_VIDEO_NOTIFY_NEXT_OUTPUT	0x83
#define ACPI_VIDEO_NOTIFY_PREV_OUTPUT	0x84
#define ACPI_VIDEO_NOTIFY_CYCLE_BRIGHTNESS	0x85
#define	ACPI_VIDEO_NOTIFY_INC_BRIGHTNESS	0x86
#define ACPI_VIDEO_NOTIFY_DEC_BRIGHTNESS	0x87
#define ACPI_VIDEO_NOTIFY_ZERO_BRIGHTNESS	0x88
#define ACPI_VIDEO_NOTIFY_DISPLAY_OFF		0x89
#define MAX_NAME_LEN	20
#define _COMPONENT		ACPI_VIDEO_COMPONENT
ACPI_MODULE_NAME("video");
MODULE_AUTHOR("Bruno Ducrot");
MODULE_DESCRIPTION("ACPI Video Driver");
MODULE_LICENSE("GPL");
static int brightness_switch_enabled = 1;
module_param(brightness_switch_enabled, bool, 0644);
static int allow_duplicates;
module_param(allow_duplicates, bool, 0644);
static int use_bios_initial_backlight = 1;
module_param(use_bios_initial_backlight, bool, 0644);
static int register_count = 0;
static int acpi_video_bus_add(struct acpi_device *device);
static int acpi_video_bus_remove(struct acpi_device *device, int type);
static void acpi_video_bus_notify(struct acpi_device *device, u32 event);
static const struct acpi_device_id video_device_ids[] = ;
MODULE_DEVICE_TABLE(acpi, video_device_ids);
static struct acpi_driver acpi_video_bus = ;
struct acpi_video_bus_flags ;
struct acpi_video_bus_cap ;
struct acpi_video_device_attrib ;
struct acpi_video_enumerated_device ;
struct acpi_video_bus ;
struct acpi_video_device_flags ;
struct acpi_video_device_cap ;
struct acpi_video_brightness_flags ;
struct acpi_video_device_brightness ;
struct acpi_video_device ;
static const char device_decode[][30] = ;
static void acpi_video_device_notify(acpi_handle handle, u32 event, void *data);
static void acpi_video_device_rebind(struct acpi_video_bus *video);
static void acpi_video_device_bind(struct acpi_video_bus *video,
struct acpi_video_device *device);
static int acpi_video_device_enumerate(struct acpi_video_bus *video);
static int acpi_video_device_lcd_set_level(struct acpi_video_device *device,
int level);
static int acpi_video_device_lcd_get_level_current(
struct acpi_video_device *device,
unsigned long long *level, int init);
static int acpi_video_get_next_level(struct acpi_video_device *device,
u32 level_current, u32 event);
static int acpi_video_switch_brightness(struct acpi_video_device *device,
int event);
static int acpi_video_get_brightness(struct backlight_device *bd)
static int acpi_video_set_brightness(struct backlight_device *bd)
static const struct backlight_ops acpi_backlight_ops = ;
static int video_get_max_state(struct thermal_cooling_device *cooling_dev, unsigned
long *state)
static int video_get_cur_state(struct thermal_cooling_device *cooling_dev, unsigned
long *state)
static int
video_set_cur_state(struct thermal_cooling_device *cooling_dev, unsigned long state)
static struct thermal_cooling_device_ops video_cooling_ops = ;
static int
acpi_video_device_lcd_query_levels(struct acpi_video_device *device,
union acpi_object **levels)
static int
acpi_video_device_lcd_set_level(struct acpi_video_device *device, int level)
static int bqc_offset_aml_bug_workaround;
static int __init video_set_bqc_offset(const struct dmi_system_id *d)
static struct dmi_system_id video_dmi_table[] __initdata = ;
static int
acpi_video_device_lcd_get_level_current(struct acpi_video_device *device,
unsigned long long *level, int init)
static int
acpi_video_device_EDID(struct acpi_video_device *device,
union acpi_object **edid, ssize_t length)
static int
acpi_video_bus_DOS(struct acpi_video_bus *video, int bios_flag, int lcd_flag)
static int
acpi_video_cmp_level(const void *a, const void *b)
static int
acpi_video_init_brightness(struct acpi_video_device *device)
static void acpi_video_device_find_cap(struct acpi_video_device *device)
static void acpi_video_bus_find_cap(struct acpi_video_bus *video)
static int acpi_video_bus_check(struct acpi_video_bus *video)
static struct acpi_video_device_attrib*
acpi_video_get_device_attr(struct acpi_video_bus *video, unsigned long device_id)
static int
acpi_video_get_device_type(struct acpi_video_bus *video,
unsigned long device_id)
static int
acpi_video_bus_get_one_device(struct acpi_device *device,
struct acpi_video_bus *video)
static void acpi_video_device_rebind(struct acpi_video_bus *video)
static void
acpi_video_device_bind(struct acpi_video_bus *video,
struct acpi_video_device *device)
static int acpi_video_device_enumerate(struct acpi_video_bus *video)
static int
acpi_video_get_next_level(struct acpi_video_device *device,
u32 level_current, u32 event)
static int
acpi_video_switch_brightness(struct acpi_video_device *device, int event)
int acpi_video_get_edid(struct acpi_device *device, int type, int device_id,
void **edid)
EXPORT_SYMBOL(acpi_video_get_edid);
static int
acpi_video_bus_get_devices(struct acpi_video_bus *video,
struct acpi_device *device)
static int acpi_video_bus_put_one_device(struct acpi_video_device *device)
static int acpi_video_bus_put_devices(struct acpi_video_bus *video)
static int acpi_video_bus_start_devices(struct acpi_video_bus *video)
static int acpi_video_bus_stop_devices(struct acpi_video_bus *video)
static void acpi_video_bus_notify(struct acpi_device *device, u32 event)
static void acpi_video_device_notify(acpi_handle handle, u32 event, void *data)
static int acpi_video_resume(struct notifier_block *nb,
unsigned long val, void *ign)
static acpi_status
acpi_video_bus_match(acpi_handle handle, u32 level, void *context,
void **return_value)
static int instance;
static int acpi_video_bus_add(struct acpi_device *device)
static int acpi_video_bus_remove(struct acpi_device *device, int type)
static int __init intel_opregion_present(void)
int acpi_video_register(void)
EXPORT_SYMBOL(acpi_video_register);
void acpi_video_unregister(void)
EXPORT_SYMBOL(acpi_video_unregister);
static int __init acpi_video_init(void)
static void __exit acpi_video_exit(void)
module_init(acpi_video_init);
module_exit(acpi_video_exit);
