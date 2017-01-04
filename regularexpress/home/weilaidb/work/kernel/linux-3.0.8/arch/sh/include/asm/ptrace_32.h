#define __ASM_SH_PTRACE_32_H
#define REG_REG0	 0
#define REG_REG15	15
#define REG_PC		16
#define REG_PR		17
#define REG_SR		18
#define REG_GBR		19
#define REG_MACH	20
#define REG_MACL	21
#define REG_SYSCALL	22
#define REG_FPREG0	23
#define REG_FPREG15	38
#define REG_XFREG0	39
#define REG_XFREG15	54
#define REG_FPSCR	55
#define REG_FPUL	56
struct pt_regs ;
struct pt_dspregs ;
#define MAX_REG_OFFSET		offsetof(struct pt_regs, tra)
#define regs_return_value(_regs)	((_regs)->regs[0])
