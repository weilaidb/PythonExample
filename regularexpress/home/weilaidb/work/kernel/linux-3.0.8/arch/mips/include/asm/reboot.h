#define _ASM_REBOOT_H
extern void (*_machine_restart)(char *command);
extern void (*_machine_halt)(void);
