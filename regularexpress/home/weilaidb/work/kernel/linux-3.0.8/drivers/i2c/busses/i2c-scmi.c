#define ACPI_SMBUS_HC_CLASS		"smbus"
#define ACPI_SMBUS_HC_DEVICE_NAME	"cmi"
ACPI_MODULE_NAME("smbus_cmi");
struct smbus_methods_t ;
struct acpi_smbus_cmi ;
static const struct smbus_methods_t smbus_methods = ;
static const struct smbus_methods_t ibm_smbus_methods = ;
static const struct acpi_device_id acpi_smbus_cmi_ids[] = ;
MODULE_DEVICE_TABLE(acpi, acpi_smbus_cmi_ids);
#define ACPI_SMBUS_STATUS_OK			0x00
#define ACPI_SMBUS_STATUS_FAIL			0x07
#define ACPI_SMBUS_STATUS_DNAK			0x10
#define ACPI_SMBUS_STATUS_DERR			0x11
#define ACPI_SMBUS_STATUS_CMD_DENY		0x12
#define ACPI_SMBUS_STATUS_UNKNOWN		0x13
#define ACPI_SMBUS_STATUS_ACC_DENY		0x17
#define ACPI_SMBUS_STATUS_TIMEOUT		0x18
#define ACPI_SMBUS_STATUS_NOTSUP		0x19
#define ACPI_SMBUS_STATUS_BUSY			0x1a
#define ACPI_SMBUS_STATUS_PEC			0x1f
#define ACPI_SMBUS_PRTCL_WRITE			0x00
#define ACPI_SMBUS_PRTCL_READ			0x01
#define ACPI_SMBUS_PRTCL_QUICK			0x02
#define ACPI_SMBUS_PRTCL_BYTE			0x04
#define ACPI_SMBUS_PRTCL_BYTE_DATA		0x06
#define ACPI_SMBUS_PRTCL_WORD_DATA		0x08
#define ACPI_SMBUS_PRTCL_BLOCK_DATA		0x0a
static int
acpi_smbus_cmi_access(struct i2c_adapter *adap, u16 addr, unsigned short flags,
char read_write, u8 command, int size,
union i2c_smbus_data *data)
static u32 acpi_smbus_cmi_func(struct i2c_adapter *adapter)
static const struct i2c_algorithm acpi_smbus_cmi_algorithm = ;
static int acpi_smbus_cmi_add_cap(struct acpi_smbus_cmi *smbus_cmi,
const char *name)
static acpi_status acpi_smbus_cmi_query_methods(acpi_handle handle, u32 level,
void *context, void **return_value)
static int acpi_smbus_cmi_add(struct acpi_device *device)
static int acpi_smbus_cmi_remove(struct acpi_device *device, int type)
static struct acpi_driver acpi_smbus_cmi_driver = ;
static int __init acpi_smbus_cmi_init(void)
static void __exit acpi_smbus_cmi_exit(void)
module_init(acpi_smbus_cmi_init);
module_exit(acpi_smbus_cmi_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Crane Cai <crane.cai@amd.com>");
MODULE_DESCRIPTION("ACPI SMBus CMI driver");
