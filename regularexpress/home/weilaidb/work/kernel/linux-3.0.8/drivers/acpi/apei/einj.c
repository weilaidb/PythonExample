#define EINJ_PFX "EINJ: "
#define SPIN_UNIT		100
#define FIRMWARE_TIMEOUT	(1 * NSEC_PER_MSEC)
struct einj_parameter ;
#define EINJ_OP_BUSY			0x1
#define EINJ_STATUS_SUCCESS		0x0
#define EINJ_STATUS_FAIL		0x1
#define EINJ_STATUS_INVAL		0x2
#define EINJ_TAB_ENTRY(tab)						\
((struct acpi_whea_header *)((char *)(tab) +			\
sizeof(struct acpi_table_einj)))
static struct acpi_table_einj *einj_tab;
static struct apei_resources einj_resources;
static struct apei_exec_ins_type einj_ins_type[] = ;
static DEFINE_MUTEX(einj_mutex);
static struct einj_parameter *einj_param;
static inline void writeq(__u64 val, volatile void __iomem *addr)
static void einj_exec_ctx_init(struct apei_exec_context *ctx)
static int __einj_get_available_error_type(u32 *type)
static int einj_get_available_error_type(u32 *type)
static int einj_timedout(u64 *t)
static u64 einj_get_parameter_address(void)
static int einj_check_trigger_header(struct acpi_einj_trigger *trigger_tab)
static int __einj_error_trigger(u64 trigger_paddr)
static int __einj_error_inject(u32 type, u64 param1, u64 param2)
static int einj_error_inject(u32 type, u64 param1, u64 param2)
static u32 error_type;
static u64 error_param1;
static u64 error_param2;
static struct dentry *einj_debug_dir;
static int available_error_type_show(struct seq_file *m, void *v)
static int available_error_type_open(struct inode *inode, struct file *file)
static const struct file_operations available_error_type_fops = ;
static int error_type_get(void *data, u64 *val)
static int error_type_set(void *data, u64 val)
DEFINE_SIMPLE_ATTRIBUTE(error_type_fops, error_type_get,
error_type_set, "0x%llx\n");
static int error_inject_set(void *data, u64 val)
DEFINE_SIMPLE_ATTRIBUTE(error_inject_fops, NULL,
error_inject_set, "%llu\n");
static int einj_check_table(struct acpi_table_einj *einj_tab)
static int __init einj_init(void)
static void __exit einj_exit(void)
module_init(einj_init);
module_exit(einj_exit);
MODULE_AUTHOR("Huang Ying");
MODULE_DESCRIPTION("APEI Error INJection support");
MODULE_LICENSE("GPL");
