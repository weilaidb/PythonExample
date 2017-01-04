#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_AUTHOR("Thomas Renninger <trenn@suse.de>");
MODULE_DESCRIPTION("MSI laptop WMI hotkeys driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("wmi:551A1F84-FBDD-4125-91DB-3EA8F44F1D45");
MODULE_ALIAS("wmi:B6F3EEF2-3D2F-49DC-9DE3-85BCE18C62F2");
#define DRV_NAME "msi-wmi"
#define MSIWMI_BIOS_GUID "551A1F84-FBDD-4125-91DB-3EA8F44F1D45"
#define MSIWMI_EVENT_GUID "B6F3EEF2-3D2F-49DC-9DE3-85BCE18C62F2"
#define SCANCODE_BASE 0xD0
#define MSI_WMI_BRIGHTNESSUP   SCANCODE_BASE
#define MSI_WMI_BRIGHTNESSDOWN (SCANCODE_BASE + 1)
#define MSI_WMI_VOLUMEUP       (SCANCODE_BASE + 2)
#define MSI_WMI_VOLUMEDOWN     (SCANCODE_BASE + 3)
#define MSI_WMI_MUTE           (SCANCODE_BASE + 4)
static struct key_entry msi_wmi_keymap[] = ;
static ktime_t last_pressed[ARRAY_SIZE(msi_wmi_keymap) - 1];
static struct backlight_device *backlight;
static int backlight_map[] = ;
static struct input_dev *msi_wmi_input_dev;
static int msi_wmi_query_block(int instance, int *ret)
static int msi_wmi_set_block(int instance, int value)
static int bl_get(struct backlight_device *bd)
static int bl_set_status(struct backlight_device *bd)
static const struct backlight_ops msi_backlight_ops = ;
static void msi_wmi_notify(u32 value, void *context)
static int __init msi_wmi_input_setup(void)
static int __init msi_wmi_init(void)
static void __exit msi_wmi_exit(void)
module_init(msi_wmi_init);
module_exit(msi_wmi_exit);
