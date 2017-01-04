#define __ASM_SH_REBOOT_H
struct pt_regs;
struct machine_ops ;
extern struct machine_ops machine_ops;
void native_machine_crash_shutdown(struct pt_regs *regs);
