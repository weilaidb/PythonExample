#define _COMPONENT          ACPI_EVENTS
ACPI_MODULE_NAME("evgpe")
static void ACPI_SYSTEM_XFACE acpi_ev_asynch_execute_gpe_method(void *context);
static void ACPI_SYSTEM_XFACE acpi_ev_asynch_enable_gpe(void *context);
acpi_status
acpi_ev_update_gpe_enable_mask(struct acpi_gpe_event_info *gpe_event_info)
acpi_status
acpi_ev_enable_gpe(struct acpi_gpe_event_info *gpe_event_info)
acpi_status acpi_ev_add_gpe_reference(struct acpi_gpe_event_info *gpe_event_info)
acpi_status acpi_ev_remove_gpe_reference(struct acpi_gpe_event_info *gpe_event_info)
struct acpi_gpe_event_info *acpi_ev_low_get_gpe_info(u32 gpe_number,
struct acpi_gpe_block_info
*gpe_block)
struct acpi_gpe_event_info *acpi_ev_get_gpe_event_info(acpi_handle gpe_device,
u32 gpe_number)
u32 acpi_ev_gpe_detect(struct acpi_gpe_xrupt_info * gpe_xrupt_list)
static void ACPI_SYSTEM_XFACE acpi_ev_asynch_execute_gpe_method(void *context)
static void ACPI_SYSTEM_XFACE acpi_ev_asynch_enable_gpe(void *context)
acpi_status acpi_ev_finish_gpe(struct acpi_gpe_event_info *gpe_event_info)
u32
acpi_ev_gpe_dispatch(struct acpi_namespace_node *gpe_device,
struct acpi_gpe_event_info *gpe_event_info, u32 gpe_number)
