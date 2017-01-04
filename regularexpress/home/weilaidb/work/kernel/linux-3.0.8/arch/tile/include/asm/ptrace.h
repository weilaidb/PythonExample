#define _ASM_TILE_PTRACE_H
#if CHIP_WORD_SIZE() == 32
#define PTREGS_OFFSET_REG(n)    ((n)*4)
#define PTREGS_OFFSET_REG(n)    ((n)*8)
#define PTREGS_OFFSET_BASE      0
#define PTREGS_OFFSET_TP        PTREGS_OFFSET_REG(53)
#define PTREGS_OFFSET_SP        PTREGS_OFFSET_REG(54)
#define PTREGS_OFFSET_LR        PTREGS_OFFSET_REG(55)
#define PTREGS_NR_GPRS          56
#define PTREGS_OFFSET_PC        PTREGS_OFFSET_REG(56)
#define PTREGS_OFFSET_EX1       PTREGS_OFFSET_REG(57)
#define PTREGS_OFFSET_FAULTNUM  PTREGS_OFFSET_REG(58)
#define PTREGS_OFFSET_ORIG_R0   PTREGS_OFFSET_REG(59)
#define PTREGS_OFFSET_FLAGS     PTREGS_OFFSET_REG(60)
#if CHIP_HAS_CMPEXCH()
#define PTREGS_OFFSET_CMPEXCH   PTREGS_OFFSET_REG(61)
#define PTREGS_SIZE             PTREGS_OFFSET_REG(64)
typedef unsigned long pt_reg_t;
typedef uint_reg_t pt_reg_t;
struct pt_regs ;
#define PTRACE_GETREGS		12
#define PTRACE_SETREGS		13
#define PTRACE_GETFPREGS	14
#define PTRACE_SETFPREGS	15
#define PTRACE_O_TRACEMIGRATE	0x00010000
#define PTRACE_EVENT_MIGRATE	16
#define PTRACE_O_MASK_TILE	(PTRACE_O_TRACEMIGRATE)
#define PT_TRACE_MIGRATE	0x00080000
#define PT_TRACE_MASK_TILE	(PT_TRACE_MIGRATE)
#define PT_FLAGS_DISABLE_IRQ    1
#define PT_FLAGS_CALLER_SAVES   2
#define PT_FLAGS_RESTORE_REGS   4
#define instruction_pointer(regs) ((regs)->pc)
#define profile_pc(regs) instruction_pointer(regs)
#define user_mode(regs) (EX1_PL((regs)->ex1) == USER_PL)
struct pt_regs *get_pt_regs(struct pt_regs *);
extern void do_syscall_trace(void);
extern void show_regs(struct pt_regs *);
#define arch_has_single_step()	(1)
struct single_step_state ;
extern void single_step_once(struct pt_regs *regs);
extern void single_step_execve(void);
struct task_struct;
extern void send_sigtrap(struct task_struct *tsk, struct pt_regs *regs,
int error_code);
#define __ARCH_WANT_COMPAT_SYS_PTRACE
#define SINGLESTEP_STATE_MASK_IS_ENABLED      0x1
#define SINGLESTEP_STATE_MASK_UPDATE          0x2
#define SINGLESTEP_STATE_TARGET_LB              2
#define SINGLESTEP_STATE_TARGET_UB              7
