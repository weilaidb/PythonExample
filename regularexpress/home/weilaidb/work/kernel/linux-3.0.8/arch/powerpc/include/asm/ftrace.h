#define _ASM_POWERPC_FTRACE
#define MCOUNT_ADDR		((long)(_mcount))
#define MCOUNT_INSN_SIZE	4
#define MCOUNT_SAVE_FRAME			\
stwu	r1,-48(r1);			\
stw	r3, 12(r1);			\
stw	r4, 16(r1);			\
stw	r5, 20(r1);			\
stw	r6, 24(r1);			\
mflr	r3;				\
lwz	r4, 52(r1);			\
mfcr	r5;				\
stw	r7, 28(r1);			\
stw	r8, 32(r1);			\
stw	r9, 36(r1);			\
stw	r10,40(r1);			\
stw	r3, 44(r1);			\
stw	r5, 8(r1)
#define MCOUNT_RESTORE_FRAME			\
lwz	r6, 8(r1);			\
lwz	r0, 44(r1);			\
lwz	r3, 12(r1);			\
mtctr	r0;				\
lwz	r4, 16(r1);			\
mtcr	r6;				\
lwz	r5, 20(r1);			\
lwz	r6, 24(r1);			\
lwz	r0, 52(r1);			\
lwz	r7, 28(r1);			\
lwz	r8, 32(r1);			\
mtlr	r0;				\
lwz	r9, 36(r1);			\
lwz	r10,40(r1);			\
addi	r1, r1, 48
extern void _mcount(void);
static inline unsigned long ftrace_call_adjust(unsigned long addr)
struct dyn_arch_ftrace ;
#if defined(CONFIG_FTRACE_SYSCALLS) && defined(CONFIG_PPC64) && !defined(__ASSEMBLY__)
#define ARCH_HAS_SYSCALL_MATCH_SYM_NAME
static inline bool arch_syscall_match_sym_name(const char *sym, const char *name)