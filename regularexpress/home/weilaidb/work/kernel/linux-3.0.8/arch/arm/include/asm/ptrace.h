#define __ASM_ARM_PTRACE_H
#define PTRACE_GETREGS		12
#define PTRACE_SETREGS		13
#define PTRACE_GETFPREGS	14
#define PTRACE_SETFPREGS	15
#define PTRACE_GETWMMXREGS	18
#define PTRACE_SETWMMXREGS	19
#define PTRACE_OLDSETOPTIONS	21
#define PTRACE_GET_THREAD_AREA	22
#define PTRACE_SET_SYSCALL	23
#define PTRACE_GETCRUNCHREGS	25
#define PTRACE_SETCRUNCHREGS	26
#define PTRACE_GETVFPREGS	27
#define PTRACE_SETVFPREGS	28
#define PTRACE_GETHBPREGS	29
#define PTRACE_SETHBPREGS	30
#define USR26_MODE	0x00000000
#define FIQ26_MODE	0x00000001
#define IRQ26_MODE	0x00000002
#define SVC26_MODE	0x00000003
#define USR_MODE	0x00000010
#define FIQ_MODE	0x00000011
#define IRQ_MODE	0x00000012
#define SVC_MODE	0x00000013
#define ABT_MODE	0x00000017
#define UND_MODE	0x0000001b
#define SYSTEM_MODE	0x0000001f
#define MODE32_BIT	0x00000010
#define MODE_MASK	0x0000001f
#define PSR_T_BIT	0x00000020
#define PSR_F_BIT	0x00000040
#define PSR_I_BIT	0x00000080
#define PSR_A_BIT	0x00000100
#define PSR_E_BIT	0x00000200
#define PSR_J_BIT	0x01000000
#define PSR_Q_BIT	0x08000000
#define PSR_V_BIT	0x10000000
#define PSR_C_BIT	0x20000000
#define PSR_Z_BIT	0x40000000
#define PSR_N_BIT	0x80000000
#define PSR_f		0xff000000
#define PSR_s		0x00ff0000
#define PSR_x		0x0000ff00
#define PSR_c		0x000000ff
#define PSR_ISET_MASK	0x01000010
#define PSR_IT_MASK	0x0600fc00
#define PSR_ENDIAN_MASK	0x00000200
#define PSR_ENDSTATE	PSR_E_BIT
#define PSR_ENDSTATE	0
#define PT_TEXT_ADDR		0x10000
#define PT_DATA_ADDR		0x10004
#define PT_TEXT_END_ADDR	0x10008
struct pt_regs ;
struct pt_regs ;
#define ARM_cpsr	uregs[16]
#define ARM_pc		uregs[15]
#define ARM_lr		uregs[14]
#define ARM_sp		uregs[13]
#define ARM_ip		uregs[12]
#define ARM_fp		uregs[11]
#define ARM_r10		uregs[10]
#define ARM_r9		uregs[9]
#define ARM_r8		uregs[8]
#define ARM_r7		uregs[7]
#define ARM_r6		uregs[6]
#define ARM_r5		uregs[5]
#define ARM_r4		uregs[4]
#define ARM_r3		uregs[3]
#define ARM_r2		uregs[2]
#define ARM_r1		uregs[1]
#define ARM_r0		uregs[0]
#define ARM_ORIG_r0	uregs[17]
#define ARM_VFPREGS_SIZE ( 32 * 8 + 4 )
#define user_mode(regs)	\
(((regs)->ARM_cpsr & 0xf) == 0)
#define thumb_mode(regs) \
(((regs)->ARM_cpsr & PSR_T_BIT))
#define thumb_mode(regs) (0)
#define isa_mode(regs) \
((((regs)->ARM_cpsr & PSR_J_BIT) >> 23) | \
(((regs)->ARM_cpsr & PSR_T_BIT) >> 5))
#define processor_mode(regs) \
((regs)->ARM_cpsr & MODE_MASK)
#define interrupts_enabled(regs) \
(!((regs)->ARM_cpsr & PSR_I_BIT))
#define fast_interrupts_enabled(regs) \
(!((regs)->ARM_cpsr & PSR_F_BIT))
static inline int valid_user_regs(struct pt_regs *regs)
#define instruction_pointer(regs)	(regs)->ARM_pc
extern unsigned long profile_pc(struct pt_regs *regs);
#define profile_pc(regs) instruction_pointer(regs)
#define predicate(x)		((x) & 0xf0000000)
#define PREDICATE_ALWAYS	0xe0000000
#define MAX_REG_OFFSET (offsetof(struct pt_regs, ARM_ORIG_r0))
extern int regs_query_register_offset(const char *name);
extern const char *regs_query_register_name(unsigned int offset);
extern bool regs_within_kernel_stack(struct pt_regs *regs, unsigned long addr);
extern unsigned long regs_get_kernel_stack_nth(struct pt_regs *regs,
unsigned int n);
static inline unsigned long regs_get_register(struct pt_regs *regs,
unsigned int offset)
static inline unsigned long kernel_stack_pointer(struct pt_regs *regs)
