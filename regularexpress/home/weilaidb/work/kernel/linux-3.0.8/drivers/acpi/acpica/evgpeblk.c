#define _COMPONENT          ACPI_EVENTS
ACPI_MODULE_NAME("evgpeblk")
static acpi_status
acpi_ev_install_gpe_block(struct acpi_gpe_block_info *gpe_block,
u32 interrupt_number);
static acpi_status
acpi_ev_create_gpe_info_blocks(struct acpi_gpe_block_info *gpe_block);
static acpi_status
acpi_ev_install_gpe_block(struct acpi_gpe_block_info *gpe_block,
u32 interrupt_number)
acpi_status acpi_ev_delete_gpe_block(struct acpi_gpe_block_info *gpe_block)
static acpi_status
acpi_ev_create_gpe_info_blocks(struct acpi_gpe_block_info *gpe_block)
acpi_status
acpi_ev_create_gpe_block(struct acpi_namespace_node *gpe_device,
struct acpi_generic_address *gpe_block_address,
u32 register_count,
u8 gpe_block_base_number,
u32 interrupt_number,
struct acpi_gpe_block_info **return_gpe_block)
acpi_status
acpi_ev_initialize_gpe_block(struct acpi_gpe_xrupt_info *gpe_xrupt_info,
struct acpi_gpe_block_info *gpe_block,
void *ignored)
