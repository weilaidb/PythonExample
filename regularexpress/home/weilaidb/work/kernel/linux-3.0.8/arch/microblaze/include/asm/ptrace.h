#define _ASM_MICROBLAZE_PTRACE_H
typedef unsigned long microblaze_reg_t;
struct pt_regs ;
#define kernel_mode(regs)		((regs)->pt_mode)
#define user_mode(regs)			(!kernel_mode(regs))
#define instruction_pointer(regs)	((regs)->pc)
#define profile_pc(regs)		instruction_pointer(regs)
void show_regs(struct pt_regs *);
#define PT_GPR(n)	((n) * sizeof(microblaze_reg_t))
#define PT_PC		(32 * sizeof(microblaze_reg_t))
#define PT_MSR		(33 * sizeof(microblaze_reg_t))
#define PT_EAR		(34 * sizeof(microblaze_reg_t))
#define PT_ESR		(35 * sizeof(microblaze_reg_t))
#define PT_FSR		(36 * sizeof(microblaze_reg_t))
#define PT_KERNEL_MODE	(37 * sizeof(microblaze_reg_t))
