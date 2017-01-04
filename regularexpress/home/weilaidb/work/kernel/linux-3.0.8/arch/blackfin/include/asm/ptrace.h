#define _BFIN_PTRACE_H
struct task_struct;
struct pt_regs ;
#define PTRACE_GETREGS            12
#define PTRACE_SETREGS            13
#define PTRACE_GETFDPIC           31
#define PTRACE_GETFDPIC_EXEC       0
#define PTRACE_GETFDPIC_INTERP     1
#define PS_S  (0x0002)
#define user_mode(regs) (!(((regs)->ipend & ~0x10) & (((regs)->ipend & ~0x10) - 1)))
extern void show_regs(struct pt_regs *);
#define arch_has_single_step()	(1)
#define ptrace_disable(child) user_disable_single_step(child)
extern int is_user_addr_valid(struct task_struct *child,
unsigned long start, unsigned long len);
#define task_pt_regs(task) \
(struct pt_regs *) \
((unsigned long)task_stack_page(task) + \
(THREAD_SIZE - sizeof(struct pt_regs)))
#define PT_R0 204
#define PT_R1 200
#define PT_R2 196
#define PT_R3 192
#define PT_R4 188
#define PT_R5 184
#define PT_R6 180
#define PT_R7 176
#define PT_P0 172
#define PT_P1 168
#define PT_P2 164
#define PT_P3 160
#define PT_P4 156
#define PT_P5 152
#define PT_FP 148
#define PT_USP 144
#define PT_I0 140
#define PT_I1 136
#define PT_I2 132
#define PT_I3 128
#define PT_M0 124
#define PT_M1 120
#define PT_M2 116
#define PT_M3 112
#define PT_L0 108
#define PT_L1 104
#define PT_L2 100
#define PT_L3 96
#define PT_B0 92
#define PT_B1 88
#define PT_B2 84
#define PT_B3 80
#define PT_A0X 76
#define PT_A0W 72
#define PT_A1X 68
#define PT_A1W 64
#define PT_LC0 60
#define PT_LC1 56
#define PT_LT0 52
#define PT_LT1 48
#define PT_LB0 44
#define PT_LB1 40
#define PT_ASTAT 36
#define PT_RESERVED 32
#define PT_RETS 28
#define PT_PC 24
#define PT_RETX 20
#define PT_RETN 16
#define PT_RETE 12
#define PT_SEQSTAT 8
#define PT_IPEND 4
#define PT_ORIG_R0 208
#define PT_ORIG_P0 212
#define PT_SYSCFG 216
#define PT_TEXT_ADDR 220
#define PT_TEXT_END_ADDR 224
#define PT_DATA_ADDR 228
#define PT_FDPIC_EXEC 232
#define PT_FDPIC_INTERP 236
#define PT_LAST_PSEUDO PT_FDPIC_INTERP
