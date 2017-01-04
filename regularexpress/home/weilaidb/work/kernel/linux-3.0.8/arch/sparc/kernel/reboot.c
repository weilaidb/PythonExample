int scons_pwroff = 1;
void (*pm_power_off)(void) = machine_power_off;
EXPORT_SYMBOL(pm_power_off);
void machine_power_off(void)
void machine_halt(void)
void machine_restart(char *cmd)
