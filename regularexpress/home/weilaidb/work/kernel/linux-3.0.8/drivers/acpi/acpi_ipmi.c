MODULE_AUTHOR("Zhao Yakui");
MODULE_DESCRIPTION("ACPI IPMI Opregion driver");
MODULE_LICENSE("GPL");
#define IPMI_FLAGS_HANDLER_INSTALL	0
#define ACPI_IPMI_OK			0
#define ACPI_IPMI_TIMEOUT		0x10
#define ACPI_IPMI_UNKNOWN		0x07
#define IPMI_TIMEOUT			(5 * HZ)
struct acpi_ipmi_device ;
struct ipmi_driver_data ;
struct acpi_ipmi_msg ;
struct acpi_ipmi_buffer ;
static void ipmi_register_bmc(int iface, struct device *dev);
static void ipmi_bmc_gone(int iface);
static void ipmi_msg_handler(struct ipmi_recv_msg *msg, void *user_msg_data);
static void acpi_add_ipmi_device(struct acpi_ipmi_device *ipmi_device);
static void acpi_remove_ipmi_device(struct acpi_ipmi_device *ipmi_device);
static struct ipmi_driver_data driver_data = ;
static struct acpi_ipmi_msg *acpi_alloc_ipmi_msg(struct acpi_ipmi_device *ipmi)
#define		IPMI_OP_RGN_NETFN(offset)	((offset >> 8) & 0xff)
#define		IPMI_OP_RGN_CMD(offset)		(offset & 0xff)
static void acpi_format_ipmi_msg(struct acpi_ipmi_msg *tx_msg,
acpi_physical_address address,
acpi_integer *value)
static void acpi_format_ipmi_response(struct acpi_ipmi_msg *msg,
acpi_integer *value, int rem_time)
static void ipmi_flush_tx_msg(struct acpi_ipmi_device *ipmi)
static void ipmi_msg_handler(struct ipmi_recv_msg *msg, void *user_msg_data)
;
static void ipmi_register_bmc(int iface, struct device *dev)
static void ipmi_bmc_gone(int iface)
static acpi_status
acpi_ipmi_space_handler(u32 function, acpi_physical_address address,
u32 bits, acpi_integer *value,
void *handler_context, void *region_context)
static void ipmi_remove_space_handler(struct acpi_ipmi_device *ipmi)
static int ipmi_install_space_handler(struct acpi_ipmi_device *ipmi)
static void acpi_add_ipmi_device(struct acpi_ipmi_device *ipmi_device)
static void acpi_remove_ipmi_device(struct acpi_ipmi_device *ipmi_device)
static int __init acpi_ipmi_init(void)
static void __exit acpi_ipmi_exit(void)
module_init(acpi_ipmi_init);
module_exit(acpi_ipmi_exit);
