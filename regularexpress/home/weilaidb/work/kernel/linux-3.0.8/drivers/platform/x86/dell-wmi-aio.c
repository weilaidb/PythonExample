#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_DESCRIPTION("WMI hotkeys driver for Dell All-In-One series");
MODULE_LICENSE("GPL");
#define EVENT_GUID1 "284A0E6B-380E-472A-921F-E52786257FB4"
#define EVENT_GUID2 "02314822-307C-4F66-BF0E-48AEAEB26CC8"
static const char *dell_wmi_aio_guids[] = ;
MODULE_ALIAS("wmi:"EVENT_GUID1);
MODULE_ALIAS("wmi:"EVENT_GUID2);
static const struct key_entry dell_wmi_aio_keymap[] = ;
static struct input_dev *dell_wmi_aio_input_dev;
static void dell_wmi_aio_notify(u32 value, void *context)
static int __init dell_wmi_aio_input_setup(void)
static const char *dell_wmi_aio_find(void)
static int __init dell_wmi_aio_init(void)
static void __exit dell_wmi_aio_exit(void)
module_init(dell_wmi_aio_init);
module_exit(dell_wmi_aio_exit);
