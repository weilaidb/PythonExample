static char dmi_empty_string[] = "        ";
static int dmi_initialized;
static const char * __init dmi_string_nosave(const struct dmi_header *dm, u8 s)
static char * __init dmi_string(const struct dmi_header *dm, u8 s)
static void dmi_table(u8 *buf, int len, int num,
void (*decode)(const struct dmi_header *, void *),
void *private_data)
static u32 dmi_base;
static u16 dmi_len;
static u16 dmi_num;
static int __init dmi_walk_early(void (*decode)(const struct dmi_header *,
void *))
static int __init dmi_checksum(const u8 *buf)
static char *dmi_ident[DMI_STRING_MAX];
static LIST_HEAD(dmi_devices);
int dmi_available;
static void __init dmi_save_ident(const struct dmi_header *dm, int slot, int string)
static void __init dmi_save_uuid(const struct dmi_header *dm, int slot, int index)
static void __init dmi_save_type(const struct dmi_header *dm, int slot, int index)
static void __init dmi_save_one_device(int type, const char *name)
static void __init dmi_save_devices(const struct dmi_header *dm)
static void __init dmi_save_oem_strings_devices(const struct dmi_header *dm)
static void __init dmi_save_ipmi_device(const struct dmi_header *dm)
static void __init dmi_save_dev_onboard(int instance, int segment, int bus,
int devfn, const char *name)
static void __init dmi_save_extended_devices(const struct dmi_header *dm)
static void __init dmi_decode(const struct dmi_header *dm, void *dummy)
static void __init print_filtered(const char *info)
static void __init dmi_dump_ids(void)
static int __init dmi_present(const char __iomem *p)
void __init dmi_scan_machine(void)
static bool dmi_matches(const struct dmi_system_id *dmi)
static bool dmi_is_end_of_table(const struct dmi_system_id *dmi)
int dmi_check_system(const struct dmi_system_id *list)
EXPORT_SYMBOL(dmi_check_system);
const struct dmi_system_id *dmi_first_match(const struct dmi_system_id *list)
EXPORT_SYMBOL(dmi_first_match);
const char *dmi_get_system_info(int field)
EXPORT_SYMBOL(dmi_get_system_info);
int dmi_name_in_serial(const char *str)
int dmi_name_in_vendors(const char *str)
EXPORT_SYMBOL(dmi_name_in_vendors);
const struct dmi_device * dmi_find_device(int type, const char *name,
const struct dmi_device *from)
EXPORT_SYMBOL(dmi_find_device);
bool dmi_get_date(int field, int *yearp, int *monthp, int *dayp)
EXPORT_SYMBOL(dmi_get_date);
int dmi_walk(void (*decode)(const struct dmi_header *, void *),
void *private_data)
EXPORT_SYMBOL_GPL(dmi_walk);
bool dmi_match(enum dmi_field f, const char *str)
EXPORT_SYMBOL_GPL(dmi_match);
