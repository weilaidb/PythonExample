void (*pm_power_off)(void);
EXPORT_SYMBOL(pm_power_off);
static void watchdog_trigger_immediate(void)
static void native_machine_restart(char * __unused)
static void native_machine_shutdown(void)
static void native_machine_power_off(void)
static void native_machine_halt(void)
struct machine_ops machine_ops = ;
void machine_power_off(void)
void machine_shutdown(void)
void machine_restart(char *cmd)
void machine_halt(void)
void machine_crash_shutdown(struct pt_regs *regs)
