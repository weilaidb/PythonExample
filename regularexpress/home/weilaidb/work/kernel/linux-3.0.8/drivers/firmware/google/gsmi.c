#define GSMI_SHUTDOWN_CLEAN	0
#define GSMI_SHUTDOWN_NMIWDT	1
#define GSMI_SHUTDOWN_PANIC	2
#define GSMI_SHUTDOWN_OOPS	3
#define GSMI_SHUTDOWN_DIE	4
#define GSMI_SHUTDOWN_MCE	5
#define GSMI_SHUTDOWN_SOFTWDT	6
#define GSMI_SHUTDOWN_MBE	7
#define GSMI_SHUTDOWN_TRIPLE	8
#define DRIVER_VERSION		"1.0"
#define GSMI_GUID_SIZE		16
#define GSMI_BUF_SIZE		1024
#define GSMI_BUF_ALIGN		sizeof(u64)
#define GSMI_CALLBACK		0xef
#define GSMI_SUCCESS		0x00
#define GSMI_UNSUPPORTED2	0x03
#define GSMI_LOG_FULL		0x0b
#define GSMI_VAR_NOT_FOUND	0x0e
#define GSMI_HANDSHAKE_SPIN	0x7d
#define GSMI_HANDSHAKE_CF	0x7e
#define GSMI_HANDSHAKE_NONE	0x7f
#define GSMI_INVALID_PARAMETER	0x82
#define GSMI_UNSUPPORTED	0x83
#define GSMI_BUFFER_TOO_SMALL	0x85
#define GSMI_NOT_READY		0x86
#define GSMI_DEVICE_ERROR	0x87
#define GSMI_NOT_FOUND		0x8e
#define QUIRKY_BOARD_HASH 0x78a30a50
#define GSMI_CMD_GET_NVRAM_VAR		0x01
#define GSMI_CMD_GET_NEXT_VAR		0x02
#define GSMI_CMD_SET_NVRAM_VAR		0x03
#define GSMI_CMD_SET_EVENT_LOG		0x08
#define GSMI_CMD_CLEAR_EVENT_LOG	0x09
#define GSMI_CMD_CLEAR_CONFIG		0x20
#define GSMI_CMD_HANDSHAKE_TYPE		0xC1
#define GSMI_LOG_ENTRY_TYPE_KERNEL     0xDEAD
struct gsmi_buf ;
struct gsmi_device  gsmi_dev;
struct gsmi_nvram_var_param  __packed;
struct gsmi_get_next_var_param  __packed;
struct gsmi_set_eventlog_param  __packed;
struct gsmi_log_entry_type_1  __packed;
#define GSMI_DEFAULT_SPINCOUNT	0x10000
static unsigned int spincount = GSMI_DEFAULT_SPINCOUNT;
module_param(spincount, uint, 0600);
MODULE_PARM_DESC(spincount,
"The number of loop iterations to use when using the spin handshake.");
static struct gsmi_buf *gsmi_buf_alloc(void)
static void gsmi_buf_free(struct gsmi_buf *smibuf)
static int gsmi_exec(u8 func, u8 sub)
static size_t
utf16_strlen(efi_char16_t *data, unsigned long maxlength)
static efi_status_t gsmi_get_variable(efi_char16_t *name,
efi_guid_t *vendor, u32 *attr,
unsigned long *data_size,
void *data)
static efi_status_t gsmi_get_next_variable(unsigned long *name_size,
efi_char16_t *name,
efi_guid_t *vendor)
static efi_status_t gsmi_set_variable(efi_char16_t *name,
efi_guid_t *vendor,
unsigned long attr,
unsigned long data_size,
void *data)
static const struct efivar_operations efivar_ops = ;
static ssize_t eventlog_write(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t pos, size_t count)
static struct bin_attribute eventlog_bin_attr = ;
static ssize_t gsmi_clear_eventlog_store(struct kobject *kobj,
struct kobj_attribute *attr,
const char *buf, size_t count)
static struct kobj_attribute gsmi_clear_eventlog_attr = ;
static ssize_t gsmi_clear_config_store(struct kobject *kobj,
struct kobj_attribute *attr,
const char *buf, size_t count)
static struct kobj_attribute gsmi_clear_config_attr = ;
static const struct attribute *gsmi_attrs[] = ;
static int gsmi_shutdown_reason(int reason)
static int gsmi_reboot_callback(struct notifier_block *nb,
unsigned long reason, void *arg)
static struct notifier_block gsmi_reboot_notifier = ;
static int gsmi_die_callback(struct notifier_block *nb,
unsigned long reason, void *arg)
static struct notifier_block gsmi_die_notifier = ;
static int gsmi_panic_callback(struct notifier_block *nb,
unsigned long reason, void *arg)
static struct notifier_block gsmi_panic_notifier = ;
static u64 __init local_hash_64(u64 val, unsigned bits)
static u32 __init hash_oem_table_id(char s[8])
static struct dmi_system_id gsmi_dmi_table[] __initdata = ;
MODULE_DEVICE_TABLE(dmi, gsmi_dmi_table);
static __init int gsmi_system_valid(void)
static struct kobject *gsmi_kobj;
static struct efivars efivars;
static __init int gsmi_init(void)
static void __exit gsmi_exit(void)
module_init(gsmi_init);
module_exit(gsmi_exit);
MODULE_AUTHOR("Google, Inc.");
MODULE_LICENSE("GPL");
