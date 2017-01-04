#define _ASM_POWERPC_PTRACE_H
struct pt_regs ;
#define STACK_FRAME_OVERHEAD	112
#define STACK_FRAME_LR_SAVE	2
#define STACK_FRAME_REGS_MARKER	ASM_CONST(0x7265677368657265)
#define STACK_INT_FRAME_SIZE	(sizeof(struct pt_regs) + \
STACK_FRAME_OVERHEAD + 288)
#define STACK_FRAME_MARKER	12
#define __SIGNAL_FRAMESIZE	128
#define __SIGNAL_FRAMESIZE32	64
#define STACK_FRAME_OVERHEAD	16
#define STACK_FRAME_LR_SAVE	1
#define STACK_FRAME_REGS_MARKER	ASM_CONST(0x72656773)
#define STACK_INT_FRAME_SIZE	(sizeof(struct pt_regs) + STACK_FRAME_OVERHEAD)
#define STACK_FRAME_MARKER	2
#define __SIGNAL_FRAMESIZE	64
#define instruction_pointer(regs) ((regs)->nip)
#define user_stack_pointer(regs) ((regs)->gpr[1])
#define kernel_stack_pointer(regs) ((regs)->gpr[1])
#define regs_return_value(regs) ((regs)->gpr[3])
extern unsigned long profile_pc(struct pt_regs *regs);
#define profile_pc(regs) instruction_pointer(regs)
#define user_mode(regs) ((((regs)->msr) >> MSR_PR_LG) & 0x1)
#define user_mode(regs) (((regs)->msr & MSR_PR) != 0)
#define force_successful_syscall_return()   \
do  while(0)
struct task_struct;
extern unsigned long ptrace_get_reg(struct task_struct *task, int regno);
extern int ptrace_put_reg(struct task_struct *task, int regno,
unsigned long data);
#define FULL_REGS(regs)		(((regs)->trap & 1) == 0)
#define IS_CRITICAL_EXC(regs)	(((regs)->trap & 2) != 0)
#define IS_MCHECK_EXC(regs)	(((regs)->trap & 4) != 0)
#define IS_DEBUG_EXC(regs)	(((regs)->trap & 8) != 0)
#define TRAP(regs)		((regs)->trap & ~0xF)
#define NV_REG_POISON		0xdeadbeefdeadbeefUL
#define CHECK_FULL_REGS(regs)	BUG_ON(regs->trap & 1)
#define NV_REG_POISON		0xdeadbeef
#define CHECK_FULL_REGS(regs)						      \
do  while (0)
#define arch_has_single_step()	(1)
#define arch_has_block_step()	(!cpu_has_feature(CPU_FTR_601))
#define ARCH_HAS_USER_SINGLE_STEP_INFO
extern int regs_query_register_offset(const char *name);
extern const char *regs_query_register_name(unsigned int offset);
#define MAX_REG_OFFSET (offsetof(struct pt_regs, dsisr))
static inline unsigned long regs_get_register(struct pt_regs *regs,
unsigned int offset)
static inline bool regs_within_kernel_stack(struct pt_regs *regs,
unsigned long addr)
static inline unsigned long regs_get_kernel_stack_nth(struct pt_regs *regs,
unsigned int n)
#define PT_R0	0
#define PT_R1	1
#define PT_R2	2
#define PT_R3	3
#define PT_R4	4
#define PT_R5	5
#define PT_R6	6
#define PT_R7	7
#define PT_R8	8
#define PT_R9	9
#define PT_R10	10
#define PT_R11	11
#define PT_R12	12
#define PT_R13	13
#define PT_R14	14
#define PT_R15	15
#define PT_R16	16
#define PT_R17	17
#define PT_R18	18
#define PT_R19	19
#define PT_R20	20
#define PT_R21	21
#define PT_R22	22
#define PT_R23	23
#define PT_R24	24
#define PT_R25	25
#define PT_R26	26
#define PT_R27	27
#define PT_R28	28
#define PT_R29	29
#define PT_R30	30
#define PT_R31	31
#define PT_NIP	32
#define PT_MSR	33
#define PT_ORIG_R3 34
#define PT_CTR	35
#define PT_LNK	36
#define PT_XER	37
#define PT_CCR	38
#define PT_MQ	39
#define PT_SOFTE 39
#define PT_TRAP	40
#define PT_DAR	41
#define PT_DSISR 42
#define PT_RESULT 43
#define PT_REGS_COUNT 44
#define PT_FPR0	48
#define PT_FPR31 (PT_FPR0 + 2*31)
#define PT_FPSCR (PT_FPR0 + 2*32 + 1)
#define PT_FPSCR (PT_FPR0 + 32)
#define PT_FPSCR32 (PT_FPR0 + 2*32 + 1)
#define PT_VR0 82
#define PT_VSCR (PT_VR0 + 32*2 + 1)
#define PT_VRSAVE (PT_VR0 + 33*2)
#define PT_VR0_32 164
#define PT_VSCR_32 (PT_VR0 + 32*4 + 3)
#define PT_VRSAVE_32 (PT_VR0 + 33*4)
#define PT_VSR0 150
#define PT_VSR31 (PT_VSR0 + 2*31)
#define PT_VSR0_32 300
#define PTRACE_GETVRREGS	18
#define PTRACE_SETVRREGS	19
#define PTRACE_GETEVRREGS	20
#define PTRACE_SETEVRREGS	21
#define PTRACE_GETVSRREGS	27
#define PTRACE_SETVSRREGS	28
#define PTRACE_GET_DEBUGREG	25
#define PTRACE_SET_DEBUGREG	26
#define PTRACE_GETREGS            12
#define PTRACE_SETREGS            13
#define PTRACE_GETFPREGS          14
#define PTRACE_SETFPREGS          15
#define PTRACE_GETREGS64	  22
#define PTRACE_SETREGS64	  23
#define PPC_PTRACE_GETREGS	0x99
#define PPC_PTRACE_SETREGS	0x98
#define PPC_PTRACE_GETFPREGS	0x97
#define PPC_PTRACE_SETFPREGS	0x96
#define PPC_PTRACE_PEEKTEXT_3264 0x95
#define PPC_PTRACE_PEEKDATA_3264 0x94
#define PPC_PTRACE_POKETEXT_3264 0x93
#define PPC_PTRACE_POKEDATA_3264 0x92
#define PPC_PTRACE_PEEKUSR_3264  0x91
#define PPC_PTRACE_POKEUSR_3264  0x90
#define PTRACE_SINGLEBLOCK	0x100
#define PPC_PTRACE_GETHWDBGINFO	0x89
#define PPC_PTRACE_SETHWDEBUG	0x88
#define PPC_PTRACE_DELHWDEBUG	0x87
struct ppc_debug_info ;
#define PPC_DEBUG_FEATURE_INSN_BP_RANGE		0x0000000000000001
#define PPC_DEBUG_FEATURE_INSN_BP_MASK		0x0000000000000002
#define PPC_DEBUG_FEATURE_DATA_BP_RANGE		0x0000000000000004
#define PPC_DEBUG_FEATURE_DATA_BP_MASK		0x0000000000000008
struct ppc_hw_breakpoint ;
#define PPC_BREAKPOINT_TRIGGER_EXECUTE	0x00000001
#define PPC_BREAKPOINT_TRIGGER_READ	0x00000002
#define PPC_BREAKPOINT_TRIGGER_WRITE	0x00000004
#define PPC_BREAKPOINT_TRIGGER_RW	\
(PPC_BREAKPOINT_TRIGGER_READ | PPC_BREAKPOINT_TRIGGER_WRITE)
#define PPC_BREAKPOINT_MODE_EXACT		0x00000000
#define PPC_BREAKPOINT_MODE_RANGE_INCLUSIVE	0x00000001
#define PPC_BREAKPOINT_MODE_RANGE_EXCLUSIVE	0x00000002
#define PPC_BREAKPOINT_MODE_MASK		0x00000003
#define PPC_BREAKPOINT_CONDITION_MODE	0x00000003
#define PPC_BREAKPOINT_CONDITION_NONE	0x00000000
#define PPC_BREAKPOINT_CONDITION_AND	0x00000001
#define PPC_BREAKPOINT_CONDITION_EXACT	PPC_BREAKPOINT_CONDITION_AND
#define PPC_BREAKPOINT_CONDITION_OR	0x00000002
#define PPC_BREAKPOINT_CONDITION_AND_OR	0x00000003
#define PPC_BREAKPOINT_CONDITION_BE_ALL	0x00ff0000
#define PPC_BREAKPOINT_CONDITION_BE_SHIFT	16
#define PPC_BREAKPOINT_CONDITION_BE(n)	\
(1<<((n)+PPC_BREAKPOINT_CONDITION_BE_SHIFT))
