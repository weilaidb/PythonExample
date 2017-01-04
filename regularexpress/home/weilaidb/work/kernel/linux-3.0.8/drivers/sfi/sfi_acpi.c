#define KMSG_COMPONENT "SFI"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
static struct acpi_table_xsdt *xsdt_va __read_mostly;
#define XSDT_GET_NUM_ENTRIES(ptable, entry_type) \
((ptable->header.length - sizeof(struct acpi_table_header)) / \
(sizeof(entry_type)))
static inline struct sfi_table_header *acpi_to_sfi_th(
struct acpi_table_header *th)
static inline struct acpi_table_header *sfi_to_acpi_th(
struct sfi_table_header *th)
static int __init sfi_acpi_parse_xsdt(struct sfi_table_header *th)
int __init sfi_acpi_init(void)
static struct acpi_table_header *sfi_acpi_get_table(struct sfi_table_key *key)
static void sfi_acpi_put_table(struct acpi_table_header *table)
int sfi_acpi_table_parse(char *signature, char *oem_id, char *oem_table_id,
int(*handler)(struct acpi_table_header *))
static ssize_t sfi_acpi_table_show(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr, char *buf,
loff_t offset, size_t count)
void __init sfi_acpi_sysfs_init(void)
