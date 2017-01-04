#define PREFIX "ACPI: "
#define ACPI_PROCESSOR_CLASS            "processor"
#define _COMPONENT              ACPI_PROCESSOR_COMPONENT
ACPI_MODULE_NAME("processor_idle");
#define PM_TIMER_TICK_NS		(1000000000ULL/PM_TIMER_FREQUENCY)
#define C2_OVERHEAD			1
#define C3_OVERHEAD			1
#define PM_TIMER_TICKS_TO_US(p)		(((p) * 1000)/(PM_TIMER_FREQUENCY/1000))
static unsigned int max_cstate __read_mostly = ACPI_PROCESSOR_MAX_POWER;
module_param(max_cstate, uint, 0000);
static unsigned int nocst __read_mostly;
module_param(nocst, uint, 0000);
static int bm_check_disable __read_mostly;
module_param(bm_check_disable, uint, 0000);
static unsigned int latency_factor __read_mostly = 2;
module_param(latency_factor, uint, 0644);
static int disabled_by_idle_boot_param(void)
static int set_max_cstate(const struct dmi_system_id *id)
static struct dmi_system_id __cpuinitdata processor_power_dmi_table[] = ;
static void acpi_safe_halt(void)
static void lapic_timer_check_state(int state, struct acpi_processor *pr,
struct acpi_processor_cx *cx)
static void __lapic_timer_propagate_broadcast(void *arg)
static void lapic_timer_propagate_broadcast(struct acpi_processor *pr)
static void lapic_timer_state_broadcast(struct acpi_processor *pr,
struct acpi_processor_cx *cx,
int broadcast)
static void lapic_timer_check_state(int state, struct acpi_processor *pr,
struct acpi_processor_cx *cstate)
static void lapic_timer_propagate_broadcast(struct acpi_processor *pr)
static void lapic_timer_state_broadcast(struct acpi_processor *pr,
struct acpi_processor_cx *cx,
int broadcast)
static int acpi_idle_suspend;
static u32 saved_bm_rld;
static void acpi_idle_bm_rld_save(void)
static void acpi_idle_bm_rld_restore(void)
int acpi_processor_suspend(struct acpi_device * device, pm_message_t state)
int acpi_processor_resume(struct acpi_device * device)
#if defined(CONFIG_X86)
static void tsc_check_state(int state)
static void tsc_check_state(int state)
static int acpi_processor_get_power_info_fadt(struct acpi_processor *pr)
static int acpi_processor_get_power_info_default(struct acpi_processor *pr)
static int acpi_processor_get_power_info_cst(struct acpi_processor *pr)
static void acpi_processor_power_verify_c3(struct acpi_processor *pr,
struct acpi_processor_cx *cx)
static int acpi_processor_power_verify(struct acpi_processor *pr)
static int acpi_processor_get_power_info(struct acpi_processor *pr)
static int acpi_idle_bm_check(void)
static inline void acpi_idle_do_entry(struct acpi_processor_cx *cx)
static int acpi_idle_enter_c1(struct cpuidle_device *dev,
struct cpuidle_state *state)
static int acpi_idle_enter_simple(struct cpuidle_device *dev,
struct cpuidle_state *state)
static int c3_cpu_count;
static DEFINE_SPINLOCK(c3_lock);
static int acpi_idle_enter_bm(struct cpuidle_device *dev,
struct cpuidle_state *state)
struct cpuidle_driver acpi_idle_driver = ;
static int acpi_processor_setup_cpuidle(struct acpi_processor *pr)
int acpi_processor_cst_has_changed(struct acpi_processor *pr)
int __cpuinit acpi_processor_power_init(struct acpi_processor *pr,
struct acpi_device *device)
int acpi_processor_power_exit(struct acpi_processor *pr,
struct acpi_device *device)
