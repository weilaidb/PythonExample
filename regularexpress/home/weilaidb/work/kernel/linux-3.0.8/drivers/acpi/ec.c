#define ACPI_EC_CLASS			"embedded_controller"
#define ACPI_EC_DEVICE_NAME		"Embedded Controller"
#define ACPI_EC_FILE_INFO		"info"
#undef PREFIX
#define PREFIX				"ACPI: EC: "
#define ACPI_EC_FLAG_OBF	0x01
#define ACPI_EC_FLAG_IBF	0x02
#define ACPI_EC_FLAG_BURST	0x10
#define ACPI_EC_FLAG_SCI	0x20
enum ec_command ;
#define ACPI_EC_DELAY		500
#define ACPI_EC_UDELAY_GLK	1000
#define ACPI_EC_MSI_UDELAY	550
#define ACPI_EC_STORM_THRESHOLD 8
enum ;
static unsigned int ec_delay __read_mostly = ACPI_EC_DELAY;
module_param(ec_delay, uint, 0644);
MODULE_PARM_DESC(ec_delay, "Timeout(ms) waited until an EC command completes");
typedef int (*acpi_ec_query_func) (void *data);
struct acpi_ec_query_handler ;
struct transaction ;
struct acpi_ec *boot_ec, *first_ec;
EXPORT_SYMBOL(first_ec);
static int EC_FLAGS_MSI;
static int EC_FLAGS_VALIDATE_ECDT;
static int EC_FLAGS_SKIP_DSDT_SCAN;
static inline u8 acpi_ec_read_status(struct acpi_ec *ec)
static inline u8 acpi_ec_read_data(struct acpi_ec *ec)
static inline void acpi_ec_write_cmd(struct acpi_ec *ec, u8 command)
static inline void acpi_ec_write_data(struct acpi_ec *ec, u8 data)
static int ec_transaction_done(struct acpi_ec *ec)
static void start_transaction(struct acpi_ec *ec)
static void advance_transaction(struct acpi_ec *ec, u8 status)
static int acpi_ec_sync_query(struct acpi_ec *ec);
static int ec_check_sci_sync(struct acpi_ec *ec, u8 state)
static int ec_poll(struct acpi_ec *ec)
static int acpi_ec_transaction_unlocked(struct acpi_ec *ec,
struct transaction *t)
static int ec_check_ibf0(struct acpi_ec *ec)
static int ec_wait_ibf0(struct acpi_ec *ec)
static int acpi_ec_transaction(struct acpi_ec *ec, struct transaction *t)
static int acpi_ec_burst_enable(struct acpi_ec *ec)
static int acpi_ec_burst_disable(struct acpi_ec *ec)
static int acpi_ec_read(struct acpi_ec *ec, u8 address, u8 * data)
static int acpi_ec_write(struct acpi_ec *ec, u8 address, u8 data)
int ec_burst_enable(void)
EXPORT_SYMBOL(ec_burst_enable);
int ec_burst_disable(void)
EXPORT_SYMBOL(ec_burst_disable);
int ec_read(u8 addr, u8 * val)
EXPORT_SYMBOL(ec_read);
int ec_write(u8 addr, u8 val)
EXPORT_SYMBOL(ec_write);
int ec_transaction(u8 command,
const u8 * wdata, unsigned wdata_len,
u8 * rdata, unsigned rdata_len)
EXPORT_SYMBOL(ec_transaction);
void acpi_ec_block_transactions(void)
void acpi_ec_unblock_transactions(void)
void acpi_ec_unblock_transactions_early(void)
static int acpi_ec_query_unlocked(struct acpi_ec *ec, u8 * data)
int acpi_ec_add_query_handler(struct acpi_ec *ec, u8 query_bit,
acpi_handle handle, acpi_ec_query_func func,
void *data)
EXPORT_SYMBOL_GPL(acpi_ec_add_query_handler);
void acpi_ec_remove_query_handler(struct acpi_ec *ec, u8 query_bit)
EXPORT_SYMBOL_GPL(acpi_ec_remove_query_handler);
static void acpi_ec_run(void *cxt)
static int acpi_ec_sync_query(struct acpi_ec *ec)
static void acpi_ec_gpe_query(void *ec_cxt)
static int ec_check_sci(struct acpi_ec *ec, u8 state)
static u32 acpi_ec_gpe_handler(acpi_handle gpe_device,
u32 gpe_number, void *data)
static acpi_status
acpi_ec_space_handler(u32 function, acpi_physical_address address,
u32 bits, u64 *value64,
void *handler_context, void *region_context)
static acpi_status
ec_parse_io_ports(struct acpi_resource *resource, void *context);
static struct acpi_ec *make_acpi_ec(void)
static acpi_status
acpi_ec_register_query_methods(acpi_handle handle, u32 level,
void *context, void **return_value)
static acpi_status
ec_parse_device(acpi_handle handle, u32 Level, void *context, void **retval)
static int ec_install_handlers(struct acpi_ec *ec)
static void ec_remove_handlers(struct acpi_ec *ec)
static int acpi_ec_add(struct acpi_device *device)
static int acpi_ec_remove(struct acpi_device *device, int type)
static acpi_status
ec_parse_io_ports(struct acpi_resource *resource, void *context)
int __init acpi_boot_ec_enable(void)
static const struct acpi_device_id ec_device_ids[] = ;
static int ec_skip_dsdt_scan(const struct dmi_system_id *id)
static int ec_validate_ecdt(const struct dmi_system_id *id)
static int ec_flag_msi(const struct dmi_system_id *id)
static struct dmi_system_id __initdata ec_dmi_table[] = ;
int __init acpi_ec_ecdt_probe(void)
static struct acpi_driver acpi_ec_driver = ;
int __init acpi_ec_init(void)
