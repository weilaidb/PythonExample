#define _ASM_X86_PARAVIRT_TYPES_H
#define CLBR_NONE 0
#define CLBR_EAX  (1 << 0)
#define CLBR_ECX  (1 << 1)
#define CLBR_EDX  (1 << 2)
#define CLBR_EDI  (1 << 3)
#define CLBR_ANY  ((1 << 4) - 1)
#define CLBR_ARG_REGS	(CLBR_EAX | CLBR_EDX | CLBR_ECX)
#define CLBR_RET_REG	(CLBR_EAX | CLBR_EDX)
#define CLBR_SCRATCH	(0)
#define CLBR_RAX  CLBR_EAX
#define CLBR_RCX  CLBR_ECX
#define CLBR_RDX  CLBR_EDX
#define CLBR_RDI  CLBR_EDI
#define CLBR_RSI  (1 << 4)
#define CLBR_R8   (1 << 5)
#define CLBR_R9   (1 << 6)
#define CLBR_R10  (1 << 7)
#define CLBR_R11  (1 << 8)
#define CLBR_ANY  ((1 << 9) - 1)
#define CLBR_ARG_REGS	(CLBR_RDI | CLBR_RSI | CLBR_RDX | \
CLBR_RCX | CLBR_R8 | CLBR_R9)
#define CLBR_RET_REG	(CLBR_RAX)
#define CLBR_SCRATCH	(CLBR_R10 | CLBR_R11)
#define CLBR_CALLEE_SAVE ((CLBR_ARG_REGS | CLBR_SCRATCH) & ~CLBR_RET_REG)
struct page;
struct thread_struct;
struct desc_ptr;
struct tss_struct;
struct mm_struct;
struct desc_struct;
struct task_struct;
struct cpumask;
struct paravirt_callee_save ;
struct pv_info ;
struct pv_init_ops ;
struct pv_lazy_ops ;
struct pv_time_ops ;
struct pv_cpu_ops ;
struct pv_irq_ops ;
struct pv_apic_ops ;
struct pv_mmu_ops ;
struct arch_spinlock;
struct pv_lock_ops ;
struct paravirt_patch_template ;
extern struct pv_info pv_info;
extern struct pv_init_ops pv_init_ops;
extern struct pv_time_ops pv_time_ops;
extern struct pv_cpu_ops pv_cpu_ops;
extern struct pv_irq_ops pv_irq_ops;
extern struct pv_apic_ops pv_apic_ops;
extern struct pv_mmu_ops pv_mmu_ops;
extern struct pv_lock_ops pv_lock_ops;
#define PARAVIRT_PATCH(x)					\
(offsetof(struct paravirt_patch_template, x) / sizeof(void *))
#define paravirt_type(op)				\
[paravirt_typenum] "i" (PARAVIRT_PATCH(op)),	\
[paravirt_opptr] "i" (&(op))
#define paravirt_clobber(clobber)		\
[paravirt_clobber] "i" (clobber)
#define _paravirt_alt(insn_string, type, clobber)	\
"771:\n\t" insn_string "\n" "772:\n"		\
".pushsection .parainstructions,\"a\"\n"	\
_ASM_ALIGN "\n"					\
_ASM_PTR " 771b\n"				\
"  .byte " type "\n"				\
"  .byte 772b-771b\n"				\
"  .short " clobber "\n"			\
".popsection\n"
#define paravirt_alt(insn_string)					\
_paravirt_alt(insn_string, "%c[paravirt_typenum]", "%c[paravirt_clobber]")
#define DEF_NATIVE(ops, name, code) 					\
extern const char start_##ops##_##name[], end_##ops##_##name[];	\
asm("start_" #ops "_" #name ": " code "; end_" #ops "_" #name ":")
unsigned paravirt_patch_nop(void);
unsigned paravirt_patch_ident_32(void *insnbuf, unsigned len);
unsigned paravirt_patch_ident_64(void *insnbuf, unsigned len);
unsigned paravirt_patch_ignore(unsigned len);
unsigned paravirt_patch_call(void *insnbuf,
const void *target, u16 tgt_clobbers,
unsigned long addr, u16 site_clobbers,
unsigned len);
unsigned paravirt_patch_jmp(void *insnbuf, const void *target,
unsigned long addr, unsigned len);
unsigned paravirt_patch_default(u8 type, u16 clobbers, void *insnbuf,
unsigned long addr, unsigned len);
unsigned paravirt_patch_insns(void *insnbuf, unsigned len,
const char *start, const char *end);
unsigned native_patch(u8 type, u16 clobbers, void *ibuf,
unsigned long addr, unsigned len);
int paravirt_disable_iospace(void);
#define PARAVIRT_CALL	"call *%c[paravirt_opptr];"
#define PVOP_VCALL_ARGS				\
unsigned long __eax = __eax, __edx = __edx, __ecx = __ecx
#define PVOP_CALL_ARGS			PVOP_VCALL_ARGS
#define PVOP_CALL_ARG1(x)		"a" ((unsigned long)(x))
#define PVOP_CALL_ARG2(x)		"d" ((unsigned long)(x))
#define PVOP_CALL_ARG3(x)		"c" ((unsigned long)(x))
#define PVOP_VCALL_CLOBBERS		"=a" (__eax), "=d" (__edx),	\
"=c" (__ecx)
#define PVOP_CALL_CLOBBERS		PVOP_VCALL_CLOBBERS
#define PVOP_VCALLEE_CLOBBERS		"=a" (__eax), "=d" (__edx)
#define PVOP_CALLEE_CLOBBERS		PVOP_VCALLEE_CLOBBERS
#define EXTRA_CLOBBERS
#define VEXTRA_CLOBBERS
#define PVOP_VCALL_ARGS					\
unsigned long __edi = __edi, __esi = __esi,	\
__edx = __edx, __ecx = __ecx, __eax = __eax
#define PVOP_CALL_ARGS		PVOP_VCALL_ARGS
#define PVOP_CALL_ARG1(x)		"D" ((unsigned long)(x))
#define PVOP_CALL_ARG2(x)		"S" ((unsigned long)(x))
#define PVOP_CALL_ARG3(x)		"d" ((unsigned long)(x))
#define PVOP_CALL_ARG4(x)		"c" ((unsigned long)(x))
#define PVOP_VCALL_CLOBBERS	"=D" (__edi),				\
"=S" (__esi), "=d" (__edx),		\
"=c" (__ecx)
#define PVOP_CALL_CLOBBERS	PVOP_VCALL_CLOBBERS, "=a" (__eax)
#define PVOP_VCALLEE_CLOBBERS	"=a" (__eax)
#define PVOP_CALLEE_CLOBBERS	PVOP_VCALLEE_CLOBBERS
#define EXTRA_CLOBBERS	 , "r8", "r9", "r10", "r11"
#define VEXTRA_CLOBBERS	 , "rax", "r8", "r9", "r10", "r11"
#define PVOP_TEST_NULL(op)	BUG_ON(op == NULL)
#define PVOP_TEST_NULL(op)	((void)op)
#define ____PVOP_CALL(rettype, op, clbr, call_clbr, extra_clbr,		\
pre, post, ...)					\
()
#define __PVOP_CALL(rettype, op, pre, post, ...)			\
____PVOP_CALL(rettype, op, CLBR_ANY, PVOP_CALL_CLOBBERS,	\
EXTRA_CLOBBERS, pre, post, ##__VA_ARGS__)
#define __PVOP_CALLEESAVE(rettype, op, pre, post, ...)			\
____PVOP_CALL(rettype, op.func, CLBR_RET_REG,			\
PVOP_CALLEE_CLOBBERS, ,				\
pre, post, ##__VA_ARGS__)
#define ____PVOP_VCALL(op, clbr, call_clbr, extra_clbr, pre, post, ...)	\
()
#define __PVOP_VCALL(op, pre, post, ...)				\
____PVOP_VCALL(op, CLBR_ANY, PVOP_VCALL_CLOBBERS,		\
VEXTRA_CLOBBERS,					\
pre, post, ##__VA_ARGS__)
#define __PVOP_VCALLEESAVE(op, pre, post, ...)				\
____PVOP_VCALL(op.func, CLBR_RET_REG,				\
PVOP_VCALLEE_CLOBBERS, ,				\
pre, post, ##__VA_ARGS__)
#define PVOP_CALL0(rettype, op)						\
__PVOP_CALL(rettype, op, "", "")
#define PVOP_VCALL0(op)							\
__PVOP_VCALL(op, "", "")
#define PVOP_CALLEE0(rettype, op)					\
__PVOP_CALLEESAVE(rettype, op, "", "")
#define PVOP_VCALLEE0(op)						\
__PVOP_VCALLEESAVE(op, "", "")
#define PVOP_CALL1(rettype, op, arg1)					\
__PVOP_CALL(rettype, op, "", "", PVOP_CALL_ARG1(arg1))
#define PVOP_VCALL1(op, arg1)						\
__PVOP_VCALL(op, "", "", PVOP_CALL_ARG1(arg1))
#define PVOP_CALLEE1(rettype, op, arg1)					\
__PVOP_CALLEESAVE(rettype, op, "", "", PVOP_CALL_ARG1(arg1))
#define PVOP_VCALLEE1(op, arg1)						\
__PVOP_VCALLEESAVE(op, "", "", PVOP_CALL_ARG1(arg1))
#define PVOP_CALL2(rettype, op, arg1, arg2)				\
__PVOP_CALL(rettype, op, "", "", PVOP_CALL_ARG1(arg1),		\
PVOP_CALL_ARG2(arg2))
#define PVOP_VCALL2(op, arg1, arg2)					\
__PVOP_VCALL(op, "", "", PVOP_CALL_ARG1(arg1),			\
PVOP_CALL_ARG2(arg2))
#define PVOP_CALLEE2(rettype, op, arg1, arg2)				\
__PVOP_CALLEESAVE(rettype, op, "", "", PVOP_CALL_ARG1(arg1),	\
PVOP_CALL_ARG2(arg2))
#define PVOP_VCALLEE2(op, arg1, arg2)					\
__PVOP_VCALLEESAVE(op, "", "", PVOP_CALL_ARG1(arg1),		\
PVOP_CALL_ARG2(arg2))
#define PVOP_CALL3(rettype, op, arg1, arg2, arg3)			\
__PVOP_CALL(rettype, op, "", "", PVOP_CALL_ARG1(arg1),		\
PVOP_CALL_ARG2(arg2), PVOP_CALL_ARG3(arg3))
#define PVOP_VCALL3(op, arg1, arg2, arg3)				\
__PVOP_VCALL(op, "", "", PVOP_CALL_ARG1(arg1),			\
PVOP_CALL_ARG2(arg2), PVOP_CALL_ARG3(arg3))
#define PVOP_CALL4(rettype, op, arg1, arg2, arg3, arg4)			\
__PVOP_CALL(rettype, op,					\
"push %[_arg4];", "lea 4(%%esp),%%esp;",		\
PVOP_CALL_ARG1(arg1), PVOP_CALL_ARG2(arg2),		\
PVOP_CALL_ARG3(arg3), [_arg4] "mr" ((u32)(arg4)))
#define PVOP_VCALL4(op, arg1, arg2, arg3, arg4)				\
__PVOP_VCALL(op,						\
"push %[_arg4];", "lea 4(%%esp),%%esp;",		\
"0" ((u32)(arg1)), "1" ((u32)(arg2)),		\
"2" ((u32)(arg3)), [_arg4] "mr" ((u32)(arg4)))
#define PVOP_CALL4(rettype, op, arg1, arg2, arg3, arg4)			\
__PVOP_CALL(rettype, op, "", "",				\
PVOP_CALL_ARG1(arg1), PVOP_CALL_ARG2(arg2),		\
PVOP_CALL_ARG3(arg3), PVOP_CALL_ARG4(arg4))
#define PVOP_VCALL4(op, arg1, arg2, arg3, arg4)				\
__PVOP_VCALL(op, "", "",					\
PVOP_CALL_ARG1(arg1), PVOP_CALL_ARG2(arg2),	\
PVOP_CALL_ARG3(arg3), PVOP_CALL_ARG4(arg4))
enum paravirt_lazy_mode ;
enum paravirt_lazy_mode paravirt_get_lazy_mode(void);
void paravirt_start_context_switch(struct task_struct *prev);
void paravirt_end_context_switch(struct task_struct *next);
void paravirt_enter_lazy_mmu(void);
void paravirt_leave_lazy_mmu(void);
void _paravirt_nop(void);
u32 _paravirt_ident_32(u32);
u64 _paravirt_ident_64(u64);
#define paravirt_nop	((void *)_paravirt_nop)
struct paravirt_patch_site ;
extern struct paravirt_patch_site __parainstructions[],
__parainstructions_end[];
