#define __SYS_PTRACE_PPC_H
#define PPC_REG unsigned long
#define PPC_REG unsigned long
struct sys_pt_regs_s ;
#define NUM_REGS (sizeof(struct sys_pt_regs_s) / sizeof(PPC_REG))
struct sys_pt_regs ;
#define UM_MAX_REG (PT_FPR0)
#define UM_MAX_REG_OFFSET (UM_MAX_REG * sizeof(PPC_REG))
#define EMPTY_REGS
#define UM_REG(r, n) ((r)->regs[n])
#define UM_SYSCALL_RET(r) UM_REG(r, PT_R3)
#define UM_SP(r) UM_REG(r, PT_R1)
#define UM_IP(r) UM_REG(r, PT_NIP)
#define UM_ELF_ZERO(r) UM_REG(r, PT_FPSCR)
#define UM_SYSCALL_NR(r) UM_REG(r, PT_R0)
#define UM_SYSCALL_ARG1(r) UM_REG(r, PT_ORIG_R3)
#define UM_SYSCALL_ARG2(r) UM_REG(r, PT_R4)
#define UM_SYSCALL_ARG3(r) UM_REG(r, PT_R5)
#define UM_SYSCALL_ARG4(r) UM_REG(r, PT_R6)
#define UM_SYSCALL_ARG5(r) UM_REG(r, PT_R7)
#define UM_SYSCALL_ARG6(r) UM_REG(r, PT_R8)
#define UM_SYSCALL_NR_OFFSET (PT_R0 * sizeof(PPC_REG))
#define UM_SYSCALL_RET_OFFSET (PT_R3 * sizeof(PPC_REG))
#define UM_SYSCALL_ARG1_OFFSET (PT_R3 * sizeof(PPC_REG))
#define UM_SYSCALL_ARG2_OFFSET (PT_R4 * sizeof(PPC_REG))
#define UM_SYSCALL_ARG3_OFFSET (PT_R5 * sizeof(PPC_REG))
#define UM_SYSCALL_ARG4_OFFSET (PT_R6 * sizeof(PPC_REG))
#define UM_SYSCALL_ARG5_OFFSET (PT_R7 * sizeof(PPC_REG))
#define UM_SYSCALL_ARG6_OFFSET (PT_R8 * sizeof(PPC_REG))
#define UM_SP_OFFSET (PT_R1 * sizeof(PPC_REG))
#define UM_IP_OFFSET (PT_NIP * sizeof(PPC_REG))
#define UM_ELF_ZERO_OFFSET (PT_R3 * sizeof(PPC_REG))
#define UM_SET_SYSCALL_RETURN(_regs, result)	        \
do  while(0)
extern void shove_aux_table(unsigned long sp);
#define UM_FIX_EXEC_STACK(sp) shove_aux_table(sp);
#undef UML_HAVE_GETREGS
#undef UML_HAVE_GETFPREGS
#undef UML_HAVE_SETREGS
#undef UML_HAVE_SETFPREGS
