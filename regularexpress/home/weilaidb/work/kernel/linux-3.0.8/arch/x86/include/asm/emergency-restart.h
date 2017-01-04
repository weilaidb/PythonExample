#define _ASM_X86_EMERGENCY_RESTART_H
enum reboot_type ;
extern enum reboot_type reboot_type;
extern void machine_emergency_restart(void);
