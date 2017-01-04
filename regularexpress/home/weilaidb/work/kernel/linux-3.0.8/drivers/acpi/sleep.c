static u8 sleep_states[ACPI_S_STATE_COUNT];
static void acpi_sleep_tts_switch(u32 acpi_state)
static int tts_notify_reboot(struct notifier_block *this,
unsigned long code, void *x)
static struct notifier_block tts_notifier = ;
static int acpi_sleep_prepare(u32 acpi_state)
static u32 acpi_target_sleep_state = ACPI_STATE_S0;
static bool nvs_nosave;
void __init acpi_nvs_nosave(void)
static bool old_suspend_ordering;
void __init acpi_old_suspend_ordering(void)
static int acpi_pm_freeze(void)
static int acpi_pm_pre_suspend(void)
static int __acpi_pm_prepare(void)
static int acpi_pm_prepare(void)
static void acpi_pm_finish(void)
static void acpi_pm_end(void)
#define acpi_target_sleep_state	ACPI_STATE_S0
static u32 acpi_suspend_states[] = ;
static int acpi_suspend_begin(suspend_state_t pm_state)
static int acpi_suspend_enter(suspend_state_t pm_state)
static int acpi_suspend_state_valid(suspend_state_t pm_state)
static const struct platform_suspend_ops acpi_suspend_ops = ;
static int acpi_suspend_begin_old(suspend_state_t pm_state)
static const struct platform_suspend_ops acpi_suspend_ops_old = ;
static int __init init_old_suspend_ordering(const struct dmi_system_id *d)
static int __init init_nvs_nosave(const struct dmi_system_id *d)
static struct dmi_system_id __initdata acpisleep_dmi_table[] = ;
static unsigned long s4_hardware_signature;
static struct acpi_table_facs *facs;
static bool nosigcheck;
void __init acpi_no_s4_hw_signature(void)
static int acpi_hibernation_begin(void)
static int acpi_hibernation_enter(void)
static void acpi_hibernation_leave(void)
static void acpi_pm_thaw(void)
static const struct platform_hibernation_ops acpi_hibernation_ops = ;
static int acpi_hibernation_begin_old(void)
static const struct platform_hibernation_ops acpi_hibernation_ops_old = ;
int acpi_suspend(u32 acpi_state)
int acpi_pm_device_sleep_state(struct device *dev, int *d_min_p)
int acpi_pm_device_sleep_wake(struct device *dev, bool enable)
static void acpi_power_off_prepare(void)
static void acpi_power_off(void)
static void __init acpi_gts_bfs_check(void)
int __init acpi_sleep_init(void)
