#define KMSG_COMPONENT "SFI"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
#define ON_SAME_PAGE(addr1, addr2) \
(((unsigned long)(addr1) & PAGE_MASK) == \
((unsigned long)(addr2) & PAGE_MASK))
#define TABLE_ON_PAGE(page, table, size) (ON_SAME_PAGE(page, table) && \
ON_SAME_PAGE(page, table + size))
int sfi_disabled __read_mostly;
EXPORT_SYMBOL(sfi_disabled);
static u64 syst_pa __read_mostly;
static struct sfi_table_simple *syst_va __read_mostly;
static u32 sfi_use_ioremap __read_mostly;
static void __iomem * __ref sfi_map_memory(u64 phys, u32 size)
static void __ref sfi_unmap_memory(void __iomem *virt, u32 size)
static void sfi_print_table_header(unsigned long long pa,
struct sfi_table_header *header)
static int sfi_verify_table(struct sfi_table_header *table)
struct sfi_table_header *sfi_map_table(u64 pa)
void sfi_unmap_table(struct sfi_table_header *th)
static int sfi_table_check_key(struct sfi_table_header *th,
struct sfi_table_key *key)
struct sfi_table_header *
__ref sfi_check_table(u64 pa, struct sfi_table_key *key)
struct sfi_table_header *sfi_get_table(struct sfi_table_key *key)
void sfi_put_table(struct sfi_table_header *th)
int sfi_table_parse(char *signature, char *oem_id, char *oem_table_id,
sfi_table_handler handler)
EXPORT_SYMBOL_GPL(sfi_table_parse);
static int __init sfi_parse_syst(void)
static __init int sfi_find_syst(void)
static struct kobject *sfi_kobj;
static struct kobject *tables_kobj;
static ssize_t sfi_table_show(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr, char *buf,
loff_t offset, size_t count)
struct sfi_table_attr __init *sfi_sysfs_install_table(u64 pa)
static int __init sfi_sysfs_init(void)
void __init sfi_init(void)
void __init sfi_init_late(void)
core_initcall(sfi_sysfs_init);
