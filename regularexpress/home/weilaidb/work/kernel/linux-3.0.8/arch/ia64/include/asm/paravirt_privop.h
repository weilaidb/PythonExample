#define _ASM_IA64_PARAVIRT_PRIVOP_H
struct pv_cpu_ops ;
extern struct pv_cpu_ops pv_cpu_ops;
extern void ia64_native_setreg_func(int regnum, unsigned long val);
extern unsigned long ia64_native_getreg_func(int regnum);
#define paravirt_ssm_i()	pv_cpu_ops.ssm_i()
#define paravirt_rsm_i()	pv_cpu_ops.rsm_i()
#define __paravirt_getreg()	pv_cpu_ops.getreg()
#define paravirt_ssm(mask)			\
do  while (0)
#define paravirt_rsm(mask)			\
do  while (0)
#define paravirt_getreg(reg)					\
()
struct pv_cpu_asm_switch ;
void paravirt_cpu_asm_init(const struct pv_cpu_asm_switch *cpu_asm_switch);
#define IA64_PARAVIRT_ASM_FUNC(name)	paravirt_ ## name
#define IA64_PARAVIRT_ASM_FUNC(name)	ia64_native_ ## name
#if defined(CONFIG_PARAVIRT) && defined(ASM_SUPPORTED)
#define paravirt_dv_serialize_data()	ia64_dv_serialize_data()
#define paravirt_dv_serialize_data()
#define ia64_switch_to			IA64_PARAVIRT_ASM_FUNC(switch_to)
#define ia64_leave_syscall		IA64_PARAVIRT_ASM_FUNC(leave_syscall)
#define ia64_work_processed_syscall	\
IA64_PARAVIRT_ASM_FUNC(work_processed_syscall)
#define ia64_leave_kernel		IA64_PARAVIRT_ASM_FUNC(leave_kernel)
#if defined(CONFIG_PARAVIRT)
#define PARAVIRT_PATCH_TYPE_FC				1
#define PARAVIRT_PATCH_TYPE_THASH			2
#define PARAVIRT_PATCH_TYPE_GET_CPUID			3
#define PARAVIRT_PATCH_TYPE_GET_PMD			4
#define PARAVIRT_PATCH_TYPE_PTCGA			5
#define PARAVIRT_PATCH_TYPE_GET_RR			6
#define PARAVIRT_PATCH_TYPE_SET_RR			7
#define PARAVIRT_PATCH_TYPE_SET_RR0_TO_RR4		8
#define PARAVIRT_PATCH_TYPE_SSM_I			9
#define PARAVIRT_PATCH_TYPE_RSM_I			10
#define PARAVIRT_PATCH_TYPE_GET_PSR_I			11
#define PARAVIRT_PATCH_TYPE_INTRIN_LOCAL_IRQ_RESTORE	12
#define PARAVIRT_PATCH_TYPE_GETREG			0x10000000
#define PARAVIRT_PATCH_TYPE_SETREG			0x20000000
#define PARAVIRT_PATCH_TYPE_BR_START			0x30000000
#define PARAVIRT_PATCH_TYPE_BR_SWITCH_TO		\
(PARAVIRT_PATCH_TYPE_BR_START + 0)
#define PARAVIRT_PATCH_TYPE_BR_LEAVE_SYSCALL		\
(PARAVIRT_PATCH_TYPE_BR_START + 1)
#define PARAVIRT_PATCH_TYPE_BR_WORK_PROCESSED_SYSCALL	\
(PARAVIRT_PATCH_TYPE_BR_START + 2)
#define PARAVIRT_PATCH_TYPE_BR_LEAVE_KERNEL		\
(PARAVIRT_PATCH_TYPE_BR_START + 3)
#define __PARAVIRT_BR							\
";;\n"								\
"\n"								\
"1:\n"								\
"\n"								\
"\n"								\
"\n"								\
"1:\n"								\
"\n"
#define PARAVIRT_OP(op)				\
[op_addr] "i"(&pv_cpu_ops.op)
#define PARAVIRT_TYPE(type)			\
PARAVIRT_PATCH_TYPE_ ## type
#define PARAVIRT_REG_CLOBBERS0					\
"r2", "r3", "r9", "r10", "r11", "r14",	\
"r15", "r16", "r17"
#define PARAVIRT_REG_CLOBBERS1					\
"r2","r3", "r9", "r10", "r11", "r14",		\
"r15", "r16", "r17"
#define PARAVIRT_REG_CLOBBERS2					\
"r2", "r3", "r10", "r11", "r14",	\
"r15", "r16", "r17"
#define PARAVIRT_REG_CLOBBERS5					\
"r2", "r3",	\
"r15", "r16", "r17"
#define PARAVIRT_BR_CLOBBERS			\
"b6", "b7"
#define PARAVIRT_PR_CLOBBERS						\
"p6", "p7", "p8", "p9", "p10", "p11", "p12", "p13", "p14", "p15"
#define PARAVIRT_AR_CLOBBERS			\
"ar.ccv"
#define PARAVIRT_CLOBBERS0			\
PARAVIRT_REG_CLOBBERS0,		\
PARAVIRT_BR_CLOBBERS,		\
PARAVIRT_PR_CLOBBERS,		\
PARAVIRT_AR_CLOBBERS,		\
"memory"
#define PARAVIRT_CLOBBERS1			\
PARAVIRT_REG_CLOBBERS1,		\
PARAVIRT_BR_CLOBBERS,		\
PARAVIRT_PR_CLOBBERS,		\
PARAVIRT_AR_CLOBBERS,		\
"memory"
#define PARAVIRT_CLOBBERS2			\
PARAVIRT_REG_CLOBBERS2,		\
PARAVIRT_BR_CLOBBERS,		\
PARAVIRT_PR_CLOBBERS,		\
PARAVIRT_AR_CLOBBERS,		\
"memory"
#define PARAVIRT_CLOBBERS5			\
PARAVIRT_REG_CLOBBERS5,		\
PARAVIRT_BR_CLOBBERS,		\
PARAVIRT_PR_CLOBBERS,		\
PARAVIRT_AR_CLOBBERS,		\
"memory"
#define PARAVIRT_BR0(op, type)					\
register unsigned long ia64_clobber asm ("r8");		\
asm volatile (paravirt_alt_bundle(__PARAVIRT_BR,	\
PARAVIRT_TYPE(type))	\
:	"=r"(ia64_clobber)			\
: PARAVIRT_OP(op)				\
: PARAVIRT_CLOBBERS0)
#define PARAVIRT_BR0_RET(op, type)				\
register unsigned long ia64_intri_res asm ("r8");	\
asm volatile (paravirt_alt_bundle(__PARAVIRT_BR,	\
PARAVIRT_TYPE(type))	\
: "=r"(ia64_intri_res)			\
: PARAVIRT_OP(op)				\
: PARAVIRT_CLOBBERS0)
#define PARAVIRT_BR1(op, type, arg1)				\
register unsigned long __##arg1 asm ("r8") = arg1;	\
register unsigned long ia64_clobber asm ("r8");		\
asm volatile (paravirt_alt_bundle(__PARAVIRT_BR,	\
PARAVIRT_TYPE(type))	\
:	"=r"(ia64_clobber)			\
: PARAVIRT_OP(op), "0"(__##arg1)		\
: PARAVIRT_CLOBBERS1)
#define PARAVIRT_BR1_RET(op, type, arg1)			\
register unsigned long ia64_intri_res asm ("r8");	\
register unsigned long __##arg1 asm ("r8") = arg1;	\
asm volatile (paravirt_alt_bundle(__PARAVIRT_BR,	\
PARAVIRT_TYPE(type))	\
: "=r"(ia64_intri_res)			\
: PARAVIRT_OP(op), "0"(__##arg1)		\
: PARAVIRT_CLOBBERS1)
#define PARAVIRT_BR1_VOID(op, type, arg1)			\
register void *__##arg1 asm ("r8") = arg1;		\
register unsigned long ia64_clobber asm ("r8");		\
asm volatile (paravirt_alt_bundle(__PARAVIRT_BR,	\
PARAVIRT_TYPE(type))	\
:	"=r"(ia64_clobber)			\
: PARAVIRT_OP(op), "0"(__##arg1)		\
: PARAVIRT_CLOBBERS1)
#define PARAVIRT_BR2(op, type, arg1, arg2)				\
register unsigned long __##arg1 asm ("r8") = arg1;		\
register unsigned long __##arg2 asm ("r9") = arg2;		\
register unsigned long ia64_clobber1 asm ("r8");		\
register unsigned long ia64_clobber2 asm ("r9");		\
asm volatile (paravirt_alt_bundle(__PARAVIRT_BR,		\
PARAVIRT_TYPE(type))		\
: "=r"(ia64_clobber1), "=r"(ia64_clobber2)	\
: PARAVIRT_OP(op), "0"(__##arg1), "1"(__##arg2)	\
: PARAVIRT_CLOBBERS2)
#define PARAVIRT_DEFINE_CPU_OP0(op, type)		\
static inline void				\
paravirt_ ## op (void)				\
#define PARAVIRT_DEFINE_CPU_OP0_RET(op, type)		\
static inline unsigned long			\
paravirt_ ## op (void)				\
#define PARAVIRT_DEFINE_CPU_OP1_VOID(op, type)		\
static inline void				\
paravirt_ ## op (void *arg1)			\
#define PARAVIRT_DEFINE_CPU_OP1(op, type)		\
static inline void				\
paravirt_ ## op (unsigned long arg1)		\
#define PARAVIRT_DEFINE_CPU_OP1_RET(op, type)		\
static inline unsigned long			\
paravirt_ ## op (unsigned long arg1)		\
#define PARAVIRT_DEFINE_CPU_OP2(op, type)		\
static inline void				\
paravirt_ ## op (unsigned long arg1,		\
unsigned long arg2)		\
PARAVIRT_DEFINE_CPU_OP1_VOID(fc, FC);
PARAVIRT_DEFINE_CPU_OP1_RET(thash, THASH)
PARAVIRT_DEFINE_CPU_OP1_RET(get_cpuid, GET_CPUID)
PARAVIRT_DEFINE_CPU_OP1_RET(get_pmd, GET_PMD)
PARAVIRT_DEFINE_CPU_OP2(ptcga, PTCGA)
PARAVIRT_DEFINE_CPU_OP1_RET(get_rr, GET_RR)
PARAVIRT_DEFINE_CPU_OP2(set_rr, SET_RR)
PARAVIRT_DEFINE_CPU_OP0(ssm_i, SSM_I)
PARAVIRT_DEFINE_CPU_OP0(rsm_i, RSM_I)
PARAVIRT_DEFINE_CPU_OP0_RET(get_psr_i, GET_PSR_I)
PARAVIRT_DEFINE_CPU_OP1(intrin_local_irq_restore, INTRIN_LOCAL_IRQ_RESTORE)
static inline void
paravirt_set_rr0_to_rr4(unsigned long val0, unsigned long val1,
unsigned long val2, unsigned long val3,
unsigned long val4)
#define __paravirt_getreg(reg)						\
()
#define paravirt_setreg(reg, val)					\
do  while (0)
