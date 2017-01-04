#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define	ASUS_NB_WMI_FILE	"asus-nb-wmi"
MODULE_AUTHOR("Corentin Chary <corentincj@iksaif.net>");
MODULE_DESCRIPTION("Asus Notebooks WMI Hotkey Driver");
MODULE_LICENSE("GPL");
#define ASUS_NB_WMI_EVENT_GUID	"0B3CBB35-E3C2-45ED-91C2-4C5A6D195D1C"
MODULE_ALIAS("wmi:"ASUS_NB_WMI_EVENT_GUID);
static const struct key_entry asus_nb_wmi_keymap[] = ;
static struct asus_wmi_driver asus_nb_wmi_driver = ;
static int __init asus_nb_wmi_init(void)
static void __exit asus_nb_wmi_exit(void)
module_init(asus_nb_wmi_init);
module_exit(asus_nb_wmi_exit);
