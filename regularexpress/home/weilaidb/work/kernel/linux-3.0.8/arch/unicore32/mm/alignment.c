#define CODING_BITS(i)	(i & 0xe0000120)
#define LDST_P_BIT(i)	(i & (1 << 28))
#define LDST_U_BIT(i)	(i & (1 << 27))
#define LDST_W_BIT(i)	(i & (1 << 25))
#define LDST_L_BIT(i)	(i & (1 << 24))
#define LDST_P_EQ_U(i)	((((i) ^ ((i) >> 1)) & (1 << 27)) == 0)
#define LDSTH_I_BIT(i)	(i & (1 << 26))
#define LDM_S_BIT(i)	(i & (1 << 26))
#define LDM_H_BIT(i)	(i & (1 << 6))
#define RN_BITS(i)	((i >> 19) & 31)
#define RD_BITS(i)	((i >> 14) & 31)
#define RM_BITS(i)	(i & 31)
#define REGMASK_BITS(i)	(((i & 0x7fe00) >> 3) | (i & 0x3f))
#define OFFSET_BITS(i)	(i & 0x03fff)
#define SHIFT_BITS(i)	((i >> 9) & 0x1f)
#define SHIFT_TYPE(i)	(i & 0xc0)
#define SHIFT_LSL	0x00
#define SHIFT_LSR	0x40
#define SHIFT_ASR	0x80
#define SHIFT_RORRRX	0xc0
union offset_union ;
#define TYPE_ERROR	0
#define TYPE_FAULT	1
#define TYPE_LDST	2
#define TYPE_DONE	3
#define TYPE_SWAP  4
#define TYPE_COLS  5
#define get8_unaligned_check(val, addr, err)		\
__asm__(					\
"1:	ldb.u	%1, [%2], #1\n"			\
"2:\n"						\
"	.pushsection .fixup,\"ax\"\n"		\
"	.align	2\n"				\
"3:	mov	%0, #1\n"			\
"	b	2b\n"				\
"	.popsection\n"				\
"	.pushsection __ex_table,\"a\"\n"		\
"	.align	3\n"				\
"	.long	1b, 3b\n"			\
"	.popsection\n"				\
: "=r" (err), "=&r" (val), "=r" (addr)		\
: "0" (err), "2" (addr))
#define get8t_unaligned_check(val, addr, err)		\
__asm__(					\
"1:	ldb.u	%1, [%2], #1\n"			\
"2:\n"						\
"	.pushsection .fixup,\"ax\"\n"		\
"	.align	2\n"				\
"3:	mov	%0, #1\n"			\
"	b	2b\n"				\
"	.popsection\n"				\
"	.pushsection __ex_table,\"a\"\n"		\
"	.align	3\n"				\
"	.long	1b, 3b\n"			\
"	.popsection\n"				\
: "=r" (err), "=&r" (val), "=r" (addr)		\
: "0" (err), "2" (addr))
#define get16_unaligned_check(val, addr)			\
do  while (0)
#define put16_unaligned_check(val, addr)			\
do  while (0)
#define __put32_unaligned_check(ins, val, addr)			\
do  while (0)
#define get32_unaligned_check(val, addr)			\
do  while (0)
#define put32_unaligned_check(val, addr)			\
__put32_unaligned_check("stb.u", val, addr)
#define get32t_unaligned_check(val, addr)			\
do  while (0)
#define put32t_unaligned_check(val, addr)			\
__put32_unaligned_check("stb.u", val, addr)
static void
do_alignment_finish_ldst(unsigned long addr, unsigned long instr,
struct pt_regs *regs, union offset_union offset)
static int
do_alignment_ldrhstrh(unsigned long addr, unsigned long instr,
struct pt_regs *regs)
static int
do_alignment_ldrstr(unsigned long addr, unsigned long instr,
struct pt_regs *regs)
static int
do_alignment_ldmstm(unsigned long addr, unsigned long instr,
struct pt_regs *regs)
static int
do_alignment(unsigned long addr, unsigned int error_code, struct pt_regs *regs)
static int __init alignment_init(void)
fs_initcall(alignment_init);
