#define CODING_BITS(i)	(i & 0x0e000000)
#define LDST_I_BIT(i)	(i & (1 << 26))
#define LDST_P_BIT(i)	(i & (1 << 24))
#define LDST_U_BIT(i)	(i & (1 << 23))
#define LDST_W_BIT(i)	(i & (1 << 21))
#define LDST_L_BIT(i)	(i & (1 << 20))
#define LDST_P_EQ_U(i)	((((i) ^ ((i) >> 1)) & (1 << 23)) == 0)
#define LDSTHD_I_BIT(i)	(i & (1 << 22))
#define LDM_S_BIT(i)	(i & (1 << 22))
#define RN_BITS(i)	((i >> 16) & 15)
#define RD_BITS(i)	((i >> 12) & 15)
#define RM_BITS(i)	(i & 15)
#define REGMASK_BITS(i)	(i & 0xffff)
#define OFFSET_BITS(i)	(i & 0x0fff)
#define IS_SHIFT(i)	(i & 0x0ff0)
#define SHIFT_BITS(i)	((i >> 7) & 0x1f)
#define SHIFT_TYPE(i)	(i & 0x60)
#define SHIFT_LSL	0x00
#define SHIFT_LSR	0x20
#define SHIFT_ASR	0x40
#define SHIFT_RORRRX	0x60
#define BAD_INSTR 	0xdeadc0de
#define IS_T32(hi16) \
(((hi16) & 0xe000) == 0xe000 && ((hi16) & 0x1800))
static unsigned long ai_user;
static unsigned long ai_sys;
static unsigned long ai_skipped;
static unsigned long ai_half;
static unsigned long ai_word;
static unsigned long ai_dword;
static unsigned long ai_multi;
static int ai_usermode;
core_param(alignment, ai_usermode, int, 0600);
#define UM_WARN		(1 << 0)
#define UM_FIXUP	(1 << 1)
#define UM_SIGNAL	(1 << 2)
static const char *usermode_action[] = ;
static int alignment_proc_show(struct seq_file *m, void *v)
static int alignment_proc_open(struct inode *inode, struct file *file)
static ssize_t alignment_proc_write(struct file *file, const char __user *buffer,
size_t count, loff_t *pos)
static const struct file_operations alignment_proc_fops = ;
union offset_union ;
#define TYPE_ERROR	0
#define TYPE_FAULT	1
#define TYPE_LDST	2
#define TYPE_DONE	3
#define BE		1
#define FIRST_BYTE_16	"mov	%1, %1, ror #8\n"
#define FIRST_BYTE_32	"mov	%1, %1, ror #24\n"
#define NEXT_BYTE	"ror #24"
#define BE		0
#define FIRST_BYTE_16
#define FIRST_BYTE_32
#define NEXT_BYTE	"lsr #8"
#define __get8_unaligned_check(ins,val,addr,err)	\
__asm__(					\
ARM(	"1:	"ins"	%1, [%2], #1\n"	)		\
THUMB(	"1:	"ins"	%1, [%2]\n"	)		\
THUMB(	"	add	%2, %2, #1\n"	)		\
"2:\n"						\
"	.pushsection .fixup,\"ax\"\n"		\
"	.align	2\n"				\
"3:	mov	%0, #1\n"			\
"	b	2b\n"				\
"	.popsection\n"				\
"	.pushsection __ex_table,\"a\"\n"	\
"	.align	3\n"				\
"	.long	1b, 3b\n"			\
"	.popsection\n"				\
: "=r" (err), "=&r" (val), "=r" (addr)		\
: "0" (err), "2" (addr))
#define __get16_unaligned_check(ins,val,addr)			\
do  while (0)
#define get16_unaligned_check(val,addr) \
__get16_unaligned_check("ldrb",val,addr)
#define get16t_unaligned_check(val,addr) \
__get16_unaligned_check("ldrbt",val,addr)
#define __get32_unaligned_check(ins,val,addr)			\
do  while (0)
#define get32_unaligned_check(val,addr) \
__get32_unaligned_check("ldrb",val,addr)
#define get32t_unaligned_check(val,addr) \
__get32_unaligned_check("ldrbt",val,addr)
#define __put16_unaligned_check(ins,val,addr)			\
do  while (0)
#define put16_unaligned_check(val,addr)  \
__put16_unaligned_check("strb",val,addr)
#define put16t_unaligned_check(val,addr) \
__put16_unaligned_check("strbt",val,addr)
#define __put32_unaligned_check(ins,val,addr)			\
do  while (0)
#define put32_unaligned_check(val,addr) \
__put32_unaligned_check("strb", val, addr)
#define put32t_unaligned_check(val,addr) \
__put32_unaligned_check("strbt", val, addr)
static void
do_alignment_finish_ldst(unsigned long addr, unsigned long instr, struct pt_regs *regs, union offset_union offset)
static int
do_alignment_ldrhstrh(unsigned long addr, unsigned long instr, struct pt_regs *regs)
static int
do_alignment_ldrdstrd(unsigned long addr, unsigned long instr,
struct pt_regs *regs)
static int
do_alignment_ldrstr(unsigned long addr, unsigned long instr, struct pt_regs *regs)
static int
do_alignment_ldmstm(unsigned long addr, unsigned long instr, struct pt_regs *regs)
static unsigned long
thumb2arm(u16 tinstr)
static void *
do_alignment_t32_to_handler(unsigned long *pinstr, struct pt_regs *regs,
union offset_union *poffset)
static int
do_alignment(unsigned long addr, unsigned int fsr, struct pt_regs *regs)
static int __init alignment_init(void)
fs_initcall(alignment_init);
