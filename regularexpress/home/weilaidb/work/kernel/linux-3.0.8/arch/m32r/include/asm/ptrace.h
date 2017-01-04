#define _ASM_M32R_PTRACE_H
#define PT_R4		0
#define PT_R5		1
#define PT_R6		2
#define PT_REGS 	3
#define PT_R0		4
#define PT_R1		5
#define PT_R2		6
#define PT_R3		7
#define PT_R7		8
#define PT_R8		9
#define PT_R9		10
#define PT_R10		11
#define PT_R11		12
#define PT_R12		13
#define PT_SYSCNR	14
#define PT_R13		PT_FP
#define PT_R14		PT_LR
#define PT_R15		PT_SP
#define PT_ACC0H	15
#define PT_ACC0L	16
#define PT_ACC1H	17
#define PT_ACC1L	18
#define PT_PSW		19
#define PT_BPC		20
#define PT_BBPSW	21
#define PT_BBPC		22
#define PT_SPU		23
#define PT_FP		24
#define PT_LR		25
#define PT_SPI		26
#define PT_ORIGR0	27
#define PT_PC		30
#define PT_CBR		31
#define PT_EVB		32
#define SPR_CR0 PT_PSW
#define SPR_CR1 PT_CBR
#define SPR_CR2 PT_SPI
#define SPR_CR3 PT_SPU
#define SPR_CR4
#define SPR_CR5 PT_EVB
#define SPR_CR6 PT_BPC
#define SPR_CR7
#define SPR_CR8 PT_BBPSW
#define SPR_CR9
#define SPR_CR10
#define SPR_CR11
#define SPR_CR12
#define SPR_CR13 PT_WR
#define SPR_CR14 PT_BBPC
#define SPR_CR15
struct pt_regs ;
#define PTRACE_GETREGS		12
#define PTRACE_SETREGS		13
#define PTRACE_OLDSETOPTIONS	21
#define PTRACE_O_TRACESYSGOOD	0x00000001
#define arch_has_single_step() (1)
struct task_struct;
extern void init_debug_traps(struct task_struct *);
#define arch_ptrace_attach(child) \
init_debug_traps(child)
#if defined(CONFIG_ISA_M32R2) || defined(CONFIG_CHIP_VDEC2)
#define user_mode(regs) ((M32R_PSW_BPM & (regs)->psw) != 0)
#elif defined(CONFIG_ISA_M32R)
#define user_mode(regs) ((M32R_PSW_BSM & (regs)->psw) != 0)
#error unknown isa configuration
#define instruction_pointer(regs) ((regs)->bpc)
#define profile_pc(regs) instruction_pointer(regs)
extern void show_regs(struct pt_regs *);
extern void withdraw_debug_trap(struct pt_regs *regs);
#define task_pt_regs(task) \
((struct pt_regs *)(task_stack_page(task) + THREAD_SIZE) - 1)
