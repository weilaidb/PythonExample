void (*_machine_restart)(char *command);
void (*_machine_halt)(void);
void (*pm_power_off)(void);
EXPORT_SYMBOL(pm_power_off);
void machine_restart(char *command)
void machine_halt(void)
void machine_power_off(void)
