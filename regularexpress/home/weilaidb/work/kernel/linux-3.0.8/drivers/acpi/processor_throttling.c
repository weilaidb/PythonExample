#define PREFIX "ACPI: "
#define ACPI_PROCESSOR_CLASS            "processor"
#define _COMPONENT              ACPI_PROCESSOR_COMPONENT
ACPI_MODULE_NAME("processor_throttling");
static int ignore_tpc;
module_param(ignore_tpc, int, 0644);
MODULE_PARM_DESC(ignore_tpc, "Disable broken BIOS _TPC throttling support");
struct throttling_tstate ;
#define THROTTLING_PRECHANGE       (1)
#define THROTTLING_POSTCHANGE      (2)
static int acpi_processor_get_throttling(struct acpi_processor *pr);
int acpi_processor_set_throttling(struct acpi_processor *pr,
int state, bool force);
static int acpi_processor_update_tsd_coord(void)
void acpi_processor_throttling_init(void)
static int acpi_processor_throttling_notifier(unsigned long event, void *data)
static int acpi_processor_get_platform_limit(struct acpi_processor *pr)
int acpi_processor_tstate_has_changed(struct acpi_processor *pr)
void acpi_processor_reevaluate_tstate(struct acpi_processor *pr,
unsigned long action)
static int acpi_processor_get_throttling_control(struct acpi_processor *pr)
static int acpi_processor_get_throttling_states(struct acpi_processor *pr)
static int acpi_processor_get_tsd(struct acpi_processor *pr)
static int acpi_processor_get_throttling_fadt(struct acpi_processor *pr)
static int acpi_throttling_rdmsr(u64 *value)
static int acpi_throttling_wrmsr(u64 value)
static int acpi_throttling_rdmsr(u64 *value)
static int acpi_throttling_wrmsr(u64 value)
static int acpi_read_throttling_status(struct acpi_processor *pr,
u64 *value)
static int acpi_write_throttling_state(struct acpi_processor *pr,
u64 value)
static int acpi_get_throttling_state(struct acpi_processor *pr,
u64 value)
static int acpi_get_throttling_value(struct acpi_processor *pr,
int state, u64 *value)
static int acpi_processor_get_throttling_ptc(struct acpi_processor *pr)
static int acpi_processor_get_throttling(struct acpi_processor *pr)
static int acpi_processor_get_fadt_info(struct acpi_processor *pr)
static int acpi_processor_set_throttling_fadt(struct acpi_processor *pr,
int state, bool force)
static int acpi_processor_set_throttling_ptc(struct acpi_processor *pr,
int state, bool force)
int acpi_processor_set_throttling(struct acpi_processor *pr,
int state, bool force)
int acpi_processor_get_throttling_info(struct acpi_processor *pr)
