MODULE_AUTHOR("Bjorn Helgaas <bjorn.helgaas@hp.com>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("ACPI opregion handler for native firmware calls");
static int force_register;
module_param_named(force, force_register, bool, 0);
MODULE_PARM_DESC(force, "Install opregion handler even without HPQ5001 device");
#define AML_NFW_SPACE		0xA1
struct ia64_pdesc ;
struct ia64_nfw_context ;
static void *virt_map(u64 address)
static void aml_nfw_execute(struct ia64_nfw_context *c)
static void aml_nfw_read_arg(u8 *offset, u32 bit_width, u64 *value)
static void aml_nfw_write_arg(u8 *offset, u32 bit_width, u64 *value)
static acpi_status aml_nfw_handler(u32 function, acpi_physical_address address,
u32 bit_width, u64 *value, void *handler_context,
void *region_context)
static struct ia64_nfw_context global_context;
static int global_handler_registered;
static int aml_nfw_add_global_handler(void)
static int aml_nfw_remove_global_handler(void)
static int aml_nfw_add(struct acpi_device *device)
static int aml_nfw_remove(struct acpi_device *device, int type)
static const struct acpi_device_id aml_nfw_ids[] = ;
static struct acpi_driver acpi_aml_nfw_driver = ;
static int __init aml_nfw_init(void)
static void __exit aml_nfw_exit(void)
module_init(aml_nfw_init);
module_exit(aml_nfw_exit);
