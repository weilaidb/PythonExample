extern char system_call_common[];
#define MSR_MASK	0xffffffff87c0ffffUL
#define MSR_MASK	0x87c0ffff
#define XER_SO		0x80000000U
#define XER_OV		0x40000000U
#define XER_CA		0x20000000U
extern int do_lfs(int rn, unsigned long ea);
extern int do_lfd(int rn, unsigned long ea);
extern int do_stfs(int rn, unsigned long ea);
extern int do_stfd(int rn, unsigned long ea);
extern int do_lvx(int rn, unsigned long ea);
extern int do_stvx(int rn, unsigned long ea);
extern int do_lxvd2x(int rn, unsigned long ea);
extern int do_stxvd2x(int rn, unsigned long ea);
static unsigned long truncate_if_32bit(unsigned long msr, unsigned long val)
static int __kprobes branch_taken(unsigned int instr, struct pt_regs *regs)
static long __kprobes address_ok(struct pt_regs *regs, unsigned long ea, int nb)
static unsigned long __kprobes dform_ea(unsigned int instr, struct pt_regs *regs)
static unsigned long __kprobes dsform_ea(unsigned int instr, struct pt_regs *regs)
static unsigned long __kprobes xform_ea(unsigned int instr, struct pt_regs *regs,
int do_update)
static inline unsigned long max_align(unsigned long x)
static inline unsigned long byterev_2(unsigned long x)
static inline unsigned long byterev_4(unsigned long x)
static inline unsigned long byterev_8(unsigned long x)
static int __kprobes read_mem_aligned(unsigned long *dest, unsigned long ea,
int nb)
static int __kprobes read_mem_unaligned(unsigned long *dest, unsigned long ea,
int nb, struct pt_regs *regs)
static int __kprobes read_mem(unsigned long *dest, unsigned long ea, int nb,
struct pt_regs *regs)
static int __kprobes write_mem_aligned(unsigned long val, unsigned long ea,
int nb)
static int __kprobes write_mem_unaligned(unsigned long val, unsigned long ea,
int nb, struct pt_regs *regs)
static int __kprobes write_mem(unsigned long val, unsigned long ea, int nb,
struct pt_regs *regs)
static int __kprobes do_fp_load(int rn, int (*func)(int, unsigned long),
unsigned long ea, int nb,
struct pt_regs *regs)
static int __kprobes do_fp_store(int rn, int (*func)(int, unsigned long),
unsigned long ea, int nb,
struct pt_regs *regs)
static int __kprobes do_vec_load(int rn, int (*func)(int, unsigned long),
unsigned long ea, struct pt_regs *regs)
static int __kprobes do_vec_store(int rn, int (*func)(int, unsigned long),
unsigned long ea, struct pt_regs *regs)
static int __kprobes do_vsx_load(int rn, int (*func)(int, unsigned long),
unsigned long ea, struct pt_regs *regs)
static int __kprobes do_vsx_store(int rn, int (*func)(int, unsigned long),
unsigned long ea, struct pt_regs *regs)
#define __put_user_asmx(x, addr, err, op, cr)		\
__asm__ __volatile__(				\
"1:	" op " %2,0,%3\n"		\
"	mfcr	%1\n"			\
"2:\n"					\
".section .fixup,\"ax\"\n"		\
"3:	li	%0,%4\n"		\
"	b	2b\n"			\
".previous\n"				\
".section __ex_table,\"a\"\n"		\
PPC_LONG_ALIGN "\n"		\
PPC_LONG "1b,3b\n"		\
".previous"				\
: "=r" (err), "=r" (cr)			\
: "r" (x), "r" (addr), "i" (-EFAULT), "0" (err))
#define __get_user_asmx(x, addr, err, op)		\
__asm__ __volatile__(				\
"1:	"op" %1,0,%2\n"			\
"2:\n"					\
".section .fixup,\"ax\"\n"		\
"3:	li	%0,%3\n"		\
"	b	2b\n"			\
".previous\n"				\
".section __ex_table,\"a\"\n"		\
PPC_LONG_ALIGN "\n"		\
PPC_LONG "1b,3b\n"		\
".previous"				\
: "=r" (err), "=r" (x)			\
: "r" (addr), "i" (-EFAULT), "0" (err))
#define __cacheop_user_asmx(addr, err, op)		\
__asm__ __volatile__(				\
"1:	"op" 0,%1\n"			\
"2:\n"					\
".section .fixup,\"ax\"\n"		\
"3:	li	%0,%3\n"		\
"	b	2b\n"			\
".previous\n"				\
".section __ex_table,\"a\"\n"		\
PPC_LONG_ALIGN "\n"		\
PPC_LONG "1b,3b\n"		\
".previous"				\
: "=r" (err)				\
: "r" (addr), "i" (-EFAULT), "0" (err))
static void __kprobes set_cr0(struct pt_regs *regs, int rd)
static void __kprobes add_with_carry(struct pt_regs *regs, int rd,
unsigned long val1, unsigned long val2,
unsigned long carry_in)
static void __kprobes do_cmp_signed(struct pt_regs *regs, long v1, long v2,
int crfld)
static void __kprobes do_cmp_unsigned(struct pt_regs *regs, unsigned long v1,
unsigned long v2, int crfld)
#define MASK32(mb, me)	((0xffffffffUL >> (mb)) + \
((signed long)-0x80000000L >> (me)) + ((me) >= (mb)))
#define MASK64_L(mb)	(~0UL >> (mb))
#define MASK64_R(me)	((signed long)-0x8000000000000000L >> (me))
#define MASK64(mb, me)	(MASK64_L(mb) + MASK64_R(me) + ((me) >= (mb)))
#define DATA32(x)	(((x) & 0xffffffffUL) | (((x) & 0xffffffffUL) << 32))
#define DATA32(x)	(x)
#define ROTATE(x, n)	((n) ? (((x) << (n)) | ((x) >> (8 * sizeof(long) - (n)))) : (x))
int __kprobes emulate_step(struct pt_regs *regs, unsigned int instr)
