#define _ASM_S390_NMI_H
struct mci ;
struct pt_regs;
extern void s390_handle_mcck(void);
extern void s390_do_machine_check(struct pt_regs *regs);
