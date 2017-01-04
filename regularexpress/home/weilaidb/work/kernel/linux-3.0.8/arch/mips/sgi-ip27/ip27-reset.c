void machine_restart(char *command) __attribute__((noreturn));
void machine_halt(void) __attribute__((noreturn));
void machine_power_off(void) __attribute__((noreturn));
#define noreturn while(1);
static void ip27_machine_restart(char *command)
static void ip27_machine_halt(void)
static void ip27_machine_power_off(void)
void ip27_reboot_setup(void)
