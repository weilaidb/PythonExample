#define __ACHWARE_H__
#define ACPI_SST_INDICATOR_OFF  0
#define ACPI_SST_WORKING        1
#define ACPI_SST_WAKING         2
#define ACPI_SST_SLEEPING       3
#define ACPI_SST_SLEEP_CONTEXT  4
acpi_status acpi_hw_set_mode(u32 mode);
u32 acpi_hw_get_mode(void);
acpi_status
acpi_hw_validate_register(struct acpi_generic_address *reg,
u8 max_bit_width, u64 *address);
acpi_status acpi_hw_read(u32 *value, struct acpi_generic_address *reg);
acpi_status acpi_hw_write(u32 value, struct acpi_generic_address *reg);
struct acpi_bit_register_info *acpi_hw_get_bit_register_info(u32 register_id);
acpi_status acpi_hw_write_pm1_control(u32 pm1a_control, u32 pm1b_control);
acpi_status acpi_hw_register_read(u32 register_id, u32 *return_value);
acpi_status acpi_hw_register_write(u32 register_id, u32 value);
acpi_status acpi_hw_clear_acpi_status(void);
acpi_status acpi_hw_read_port(acpi_io_address address, u32 *value, u32 width);
acpi_status acpi_hw_write_port(acpi_io_address address, u32 value, u32 width);
u32 acpi_hw_get_gpe_register_bit(struct acpi_gpe_event_info *gpe_event_info,
struct acpi_gpe_register_info *gpe_register_info);
acpi_status
acpi_hw_low_set_gpe(struct acpi_gpe_event_info *gpe_event_info, u32 action);
acpi_status
acpi_hw_disable_gpe_block(struct acpi_gpe_xrupt_info *gpe_xrupt_info,
struct acpi_gpe_block_info *gpe_block, void *context);
acpi_status acpi_hw_clear_gpe(struct acpi_gpe_event_info *gpe_event_info);
acpi_status
acpi_hw_clear_gpe_block(struct acpi_gpe_xrupt_info *gpe_xrupt_info,
struct acpi_gpe_block_info *gpe_block, void *context);
acpi_status
acpi_hw_get_gpe_status(struct acpi_gpe_event_info *gpe_event_info,
acpi_event_status * event_status);
acpi_status acpi_hw_disable_all_gpes(void);
acpi_status acpi_hw_enable_all_runtime_gpes(void);
acpi_status acpi_hw_enable_all_wakeup_gpes(void);
acpi_status
acpi_hw_enable_runtime_gpe_block(struct acpi_gpe_xrupt_info *gpe_xrupt_info,
struct acpi_gpe_block_info *gpe_block,
void *context);
acpi_status
acpi_hw_derive_pci_id(struct acpi_pci_id *pci_id,
acpi_handle root_pci_device, acpi_handle pci_region);
acpi_status acpi_get_timer_resolution(u32 * resolution);
acpi_status acpi_get_timer(u32 * ticks);
acpi_status
acpi_get_timer_duration(u32 start_ticks, u32 end_ticks, u32 * time_elapsed);
