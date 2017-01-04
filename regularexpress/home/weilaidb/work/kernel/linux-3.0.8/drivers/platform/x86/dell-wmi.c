#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_AUTHOR("Matthew Garrett <mjg@redhat.com>");
MODULE_DESCRIPTION("Dell laptop WMI hotkeys driver");
MODULE_LICENSE("GPL");
#define DELL_EVENT_GUID "9DBB5994-A997-11DA-B012-B622A1EF5492"
static int acpi_video;
MODULE_ALIAS("wmi:"DELL_EVENT_GUID);
static const struct key_entry dell_wmi_legacy_keymap[] __initconst = ;
static bool dell_new_hk_type;
struct dell_bios_keymap_entry ;
struct dell_bios_hotkey_table ;
static const struct dell_bios_hotkey_table *dell_bios_hotkey_table;
static const u16 bios_to_linux_keycode[256] __initconst = ;
static struct input_dev *dell_wmi_input_dev;
static void dell_wmi_notify(u32 value, void *context)
static const struct key_entry * __init dell_wmi_prepare_new_keymap(void)
static int __init dell_wmi_input_setup(void)
static void dell_wmi_input_destroy(void)
static void __init find_hk_type(const struct dmi_header *dm, void *dummy)
static int __init dell_wmi_init(void)
module_init(dell_wmi_init);
static void __exit dell_wmi_exit(void)
module_exit(dell_wmi_exit);
