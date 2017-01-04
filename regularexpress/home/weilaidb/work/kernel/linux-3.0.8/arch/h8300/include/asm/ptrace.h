#define _H8300_PTRACE_H
#define PT_ER1	   0
#define PT_ER2	   1
#define PT_ER3	   2
#define PT_ER4	   3
#define PT_ER5	   4
#define PT_ER6	   5
#define PT_ER0	   6
#define PT_ORIG_ER0	   7
#define PT_CCR	   8
#define PT_PC	   9
#define PT_USP	   10
#define PT_EXR     12
struct pt_regs  __attribute__((aligned(2),packed));
#define PTRACE_GETREGS            12
#define PTRACE_SETREGS            13
#define PS_S  (0x10)
#if defined(__H8300H__)
#define H8300_REGS_NO 11
#if defined(__H8300S__)
#define H8300_REGS_NO 12
#define PT_REG(reg)	((long)&((struct pt_regs *)0)->reg)
#define arch_has_single_step()	(1)
#define user_mode(regs) (!((regs)->ccr & PS_S))
#define instruction_pointer(regs) ((regs)->pc)
#define profile_pc(regs) instruction_pointer(regs)
extern void show_regs(struct pt_regs *);
