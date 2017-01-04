#define _COMPONENT          ACPI_HARDWARE
ACPI_MODULE_NAME("hwgpe")
static acpi_status
acpi_hw_enable_wakeup_gpe_block(struct acpi_gpe_xrupt_info *gpe_xrupt_info,
struct acpi_gpe_block_info *gpe_block,
void *context);
u32 acpi_hw_get_gpe_register_bit(struct acpi_gpe_event_info *gpe_event_info,
struct acpi_gpe_register_info *gpe_register_info)
acpi_status
acpi_hw_low_set_gpe(struct acpi_gpe_event_info *gpe_event_info, u32 action)
acpi_status acpi_hw_clear_gpe(struct acpi_gpe_event_info * gpe_event_info)
acpi_status
acpi_hw_get_gpe_status(struct acpi_gpe_event_info * gpe_event_info,
acpi_event_status * event_status)
acpi_status
acpi_hw_disable_gpe_block(struct acpi_gpe_xrupt_info *gpe_xrupt_info,
struct acpi_gpe_block_info *gpe_block, void *context)
acpi_status
acpi_hw_clear_gpe_block(struct acpi_gpe_xrupt_info *gpe_xrupt_info,
struct acpi_gpe_block_info *gpe_block, void *context)
acpi_status
acpi_hw_enable_runtime_gpe_block(struct acpi_gpe_xrupt_info *gpe_xrupt_info,
struct acpi_gpe_block_info *gpe_block, void *context)
static acpi_status
acpi_hw_enable_wakeup_gpe_block(struct acpi_gpe_xrupt_info *gpe_xrupt_info,
struct acpi_gpe_block_info *gpe_block,
void *context)
acpi_status acpi_hw_disable_all_gpes(void)
acpi_status acpi_hw_enable_all_runtime_gpes(void)
acpi_status acpi_hw_enable_all_wakeup_gpes(void)
