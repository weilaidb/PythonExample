#define ERST_PFX "ERST: "
#define ERST_STATUS_SUCCESS			0x0
#define ERST_STATUS_NOT_ENOUGH_SPACE		0x1
#define ERST_STATUS_HARDWARE_NOT_AVAILABLE	0x2
#define ERST_STATUS_FAILED			0x3
#define ERST_STATUS_RECORD_STORE_EMPTY		0x4
#define ERST_STATUS_RECORD_NOT_FOUND		0x5
#define ERST_TAB_ENTRY(tab)						\
((struct acpi_whea_header *)((char *)(tab) +			\
sizeof(struct acpi_table_erst)))
#define SPIN_UNIT		100
#define FIRMWARE_TIMEOUT	(1 * NSEC_PER_MSEC)
#define FIRMWARE_MAX_STALL	50
int erst_disable;
EXPORT_SYMBOL_GPL(erst_disable);
static struct acpi_table_erst *erst_tab;
#define ERST_RANGE_RESERVED	0x0001
#define ERST_RANGE_NVRAM	0x0002
#define ERST_RANGE_SLOW		0x0004
static struct erst_erange  erst_erange;
static DEFINE_RAW_SPINLOCK(erst_lock);
static inline int erst_errno(int command_status)
static int erst_timedout(u64 *t, u64 spin_unit)
static int erst_exec_load_var1(struct apei_exec_context *ctx,
struct acpi_whea_header *entry)
static int erst_exec_load_var2(struct apei_exec_context *ctx,
struct acpi_whea_header *entry)
static int erst_exec_store_var1(struct apei_exec_context *ctx,
struct acpi_whea_header *entry)
static int erst_exec_add(struct apei_exec_context *ctx,
struct acpi_whea_header *entry)
static int erst_exec_subtract(struct apei_exec_context *ctx,
struct acpi_whea_header *entry)
static int erst_exec_add_value(struct apei_exec_context *ctx,
struct acpi_whea_header *entry)
static int erst_exec_subtract_value(struct apei_exec_context *ctx,
struct acpi_whea_header *entry)
static int erst_exec_stall(struct apei_exec_context *ctx,
struct acpi_whea_header *entry)
static int erst_exec_stall_while_true(struct apei_exec_context *ctx,
struct acpi_whea_header *entry)
static int erst_exec_skip_next_instruction_if_true(
struct apei_exec_context *ctx,
struct acpi_whea_header *entry)
static int erst_exec_goto(struct apei_exec_context *ctx,
struct acpi_whea_header *entry)
static int erst_exec_set_src_address_base(struct apei_exec_context *ctx,
struct acpi_whea_header *entry)
static int erst_exec_set_dst_address_base(struct apei_exec_context *ctx,
struct acpi_whea_header *entry)
static int erst_exec_move_data(struct apei_exec_context *ctx,
struct acpi_whea_header *entry)
static struct apei_exec_ins_type erst_ins_type[] = ;
static inline void erst_exec_ctx_init(struct apei_exec_context *ctx)
static int erst_get_erange(struct erst_erange *range)
static ssize_t __erst_get_record_count(void)
ssize_t erst_get_record_count(void)
EXPORT_SYMBOL_GPL(erst_get_record_count);
#define ERST_RECORD_ID_CACHE_SIZE_MIN	16
#define ERST_RECORD_ID_CACHE_SIZE_MAX	1024
struct erst_record_id_cache ;
static struct erst_record_id_cache erst_record_id_cache = ;
static int __erst_get_next_record_id(u64 *record_id)
int erst_get_record_id_begin(int *pos)
EXPORT_SYMBOL_GPL(erst_get_record_id_begin);
static int __erst_record_id_cache_add_one(void)
int erst_get_record_id_next(int *pos, u64 *record_id)
EXPORT_SYMBOL_GPL(erst_get_record_id_next);
static void __erst_record_id_cache_compact(void)
void erst_get_record_id_end(void)
EXPORT_SYMBOL_GPL(erst_get_record_id_end);
static int __erst_write_to_storage(u64 offset)
static int __erst_read_from_storage(u64 record_id, u64 offset)
static int __erst_clear_from_storage(u64 record_id)
static void pr_unimpl_nvram(void)
static int __erst_write_to_nvram(const struct cper_record_header *record)
static int __erst_read_to_erange_from_nvram(u64 record_id, u64 *offset)
static int __erst_clear_from_nvram(u64 record_id)
int erst_write(const struct cper_record_header *record)
EXPORT_SYMBOL_GPL(erst_write);
static int __erst_read_to_erange(u64 record_id, u64 *offset)
static ssize_t __erst_read(u64 record_id, struct cper_record_header *record,
size_t buflen)
ssize_t erst_read(u64 record_id, struct cper_record_header *record,
size_t buflen)
EXPORT_SYMBOL_GPL(erst_read);
int erst_clear(u64 record_id)
EXPORT_SYMBOL_GPL(erst_clear);
static int __init setup_erst_disable(char *str)
__setup("erst_disable", setup_erst_disable);
static int erst_check_table(struct acpi_table_erst *erst_tab)
static int erst_open_pstore(struct pstore_info *psi);
static int erst_close_pstore(struct pstore_info *psi);
static ssize_t erst_reader(u64 *id, enum pstore_type_id *type,
struct timespec *time);
static u64 erst_writer(enum pstore_type_id type, size_t size);
static struct pstore_info erst_info = ;
#define CPER_CREATOR_PSTORE						\
UUID_LE(0x75a574e3, 0x5052, 0x4b29, 0x8a, 0x8e, 0xbe, 0x2c,	\
0x64, 0x90, 0xb8, 0x9d)
#define CPER_SECTION_TYPE_DMESG						\
UUID_LE(0xc197e04e, 0xd545, 0x4a70, 0x9c, 0x17, 0xa5, 0x54,	\
0x94, 0x19, 0xeb, 0x12)
#define CPER_SECTION_TYPE_MCE						\
UUID_LE(0xfe08ffbe, 0x95e4, 0x4be7, 0xbc, 0x73, 0x40, 0x96,	\
0x04, 0x4a, 0x38, 0xfc)
struct cper_pstore_record  __packed;
static int reader_pos;
static int erst_open_pstore(struct pstore_info *psi)
static int erst_close_pstore(struct pstore_info *psi)
static ssize_t erst_reader(u64 *id, enum pstore_type_id *type,
struct timespec *time)
static u64 erst_writer(enum pstore_type_id type, size_t size)
static int __init erst_init(void)
device_initcall(erst_init);
