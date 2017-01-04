#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define	EEEPC_WMI_FILE	"eeepc-wmi"
MODULE_AUTHOR("Corentin Chary <corentincj@iksaif.net>");
MODULE_DESCRIPTION("Eee PC WMI Hotkey Driver");
MODULE_LICENSE("GPL");
#define EEEPC_ACPI_HID		"ASUS010"
#define EEEPC_WMI_EVENT_GUID	"ABBC0F72-8EA1-11D1-00A0-C90629100000"
MODULE_ALIAS("wmi:"EEEPC_WMI_EVENT_GUID);
static bool hotplug_wireless;
module_param(hotplug_wireless, bool, 0444);
MODULE_PARM_DESC(hotplug_wireless,
"Enable hotplug for wireless device. "
"If your laptop needs that, please report to "
"acpi4asus-user@lists.sourceforge.net.");
static const struct key_entry eeepc_wmi_keymap[] = ;
static acpi_status eeepc_wmi_parse_device(acpi_handle handle, u32 level,
void *context, void **retval)
static int eeepc_wmi_check_atkd(void)
static int eeepc_wmi_probe(struct platform_device *pdev)
static void eeepc_dmi_check(struct asus_wmi_driver *driver)
static void eeepc_wmi_quirks(struct asus_wmi_driver *driver)
static struct asus_wmi_driver asus_wmi_driver = ;
static int __init eeepc_wmi_init(void)
static void __exit eeepc_wmi_exit(void)
module_init(eeepc_wmi_init);
module_exit(eeepc_wmi_exit);
