#define _M68K_PTRACE_H
#define PT_D1	   0
#define PT_D2	   1
#define PT_D3	   2
#define PT_D4	   3
#define PT_D5	   4
#define PT_D6	   5
#define PT_D7	   6
#define PT_A0	   7
#define PT_A1	   8
#define PT_A2	   9
#define PT_A3	   10
#define PT_A4	   11
#define PT_A5	   12
#define PT_A6	   13
#define PT_D0	   14
#define PT_USP	   15
#define PT_ORIG_D0 16
#define PT_SR	   17
#define PT_PC	   18
struct pt_regs ;
struct switch_stack ;
#define PTRACE_GETREGS            12
#define PTRACE_SETREGS            13
#define PTRACE_GETFPREGS          14
#define PTRACE_SETFPREGS          15
#define PTRACE_GET_THREAD_AREA    25
#define PTRACE_SINGLEBLOCK	33
#define PS_S  (0x2000)
#define PS_M  (0x1000)
#define user_mode(regs) (!((regs)->sr & PS_S))
#define instruction_pointer(regs) ((regs)->pc)
#define profile_pc(regs) instruction_pointer(regs)
extern void show_regs(struct pt_regs *);
#define arch_has_single_step()	(1)
#define arch_has_block_step()	(1)
