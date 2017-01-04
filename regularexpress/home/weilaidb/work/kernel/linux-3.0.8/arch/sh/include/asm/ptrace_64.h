#define __ASM_SH_PTRACE_64_H
struct pt_regs ;
#define MAX_REG_OFFSET		offsetof(struct pt_regs, tregs[7])
#define regs_return_value(_regs)	((_regs)->regs[3])
