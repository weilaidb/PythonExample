#define PREFIX "ACPI: "
#define ACPI_SMB_HC_CLASS	"smbus_host_ctl"
#define ACPI_SMB_HC_DEVICE_NAME	"ACPI SMBus HC"
struct acpi_smb_hc ;
static int acpi_smbus_hc_add(struct acpi_device *device);
static int acpi_smbus_hc_remove(struct acpi_device *device, int type);
static const struct acpi_device_id sbs_device_ids[] = ;
MODULE_DEVICE_TABLE(acpi, sbs_device_ids);
static struct acpi_driver acpi_smb_hc_driver = ;
union acpi_smb_status ;
enum acpi_smb_status_codes ;
enum acpi_smb_offset ;
static inline int smb_hc_read(struct acpi_smb_hc *hc, u8 address, u8 *data)
static inline int smb_hc_write(struct acpi_smb_hc *hc, u8 address, u8 data)
static inline int smb_check_done(struct acpi_smb_hc *hc)
static int wait_transaction_complete(struct acpi_smb_hc *hc, int timeout)
static int acpi_smbus_transaction(struct acpi_smb_hc *hc, u8 protocol,
u8 address, u8 command, u8 *data, u8 length)
int acpi_smbus_read(struct acpi_smb_hc *hc, u8 protocol, u8 address,
u8 command, u8 *data)
EXPORT_SYMBOL_GPL(acpi_smbus_read);
int acpi_smbus_write(struct acpi_smb_hc *hc, u8 protocol, u8 address,
u8 command, u8 *data, u8 length)
EXPORT_SYMBOL_GPL(acpi_smbus_write);
int acpi_smbus_register_callback(struct acpi_smb_hc *hc,
smbus_alarm_callback callback, void *context)
EXPORT_SYMBOL_GPL(acpi_smbus_register_callback);
int acpi_smbus_unregister_callback(struct acpi_smb_hc *hc)
EXPORT_SYMBOL_GPL(acpi_smbus_unregister_callback);
static inline void acpi_smbus_callback(void *context)
static int smbus_alarm(void *context)
typedef int (*acpi_ec_query_func) (void *data);
extern int acpi_ec_add_query_handler(struct acpi_ec *ec, u8 query_bit,
acpi_handle handle, acpi_ec_query_func func,
void *data);
static int acpi_smbus_hc_add(struct acpi_device *device)
extern void acpi_ec_remove_query_handler(struct acpi_ec *ec, u8 query_bit);
static int acpi_smbus_hc_remove(struct acpi_device *device, int type)
static int __init acpi_smb_hc_init(void)
static void __exit acpi_smb_hc_exit(void)
module_init(acpi_smb_hc_init);
module_exit(acpi_smb_hc_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Alexey Starikovskiy");
MODULE_DESCRIPTION("ACPI SMBus HC driver");
