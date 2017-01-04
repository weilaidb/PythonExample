#define smp_send_stop()
void machine_halt(void)
void machine_power_off(void)
void machine_restart(char *cmd)
void (*pm_power_off)(void) = NULL;
