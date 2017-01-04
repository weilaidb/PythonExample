#define __user_swpX_asm(data, addr, res, temp, B)		\
__asm__ __volatile__(					\
"	mov		%2, %1\n"			\
"0:	ldrex"B"	%1, [%3]\n"			\
"1:	strex"B"	%0, %2, [%3]\n"			\
"	cmp		%0, #0\n"			\
"	movne		%0, %4\n"			\
"2:\n"							\
"	.section	 .fixup,\"ax\"\n"		\
"	.align		2\n"				\
"3:	mov		%0, %5\n"			\
"	b		2b\n"				\
"	.previous\n"					\
"	.section	 __ex_table,\"a\"\n"		\
"	.align		3\n"				\
"	.long		0b, 3b\n"			\
"	.long		1b, 3b\n"			\
"	.previous"					\
: "=&r" (res), "+r" (data), "=&r" (temp)		\
: "r" (addr), "i" (-EAGAIN), "i" (-EFAULT)		\
: "cc", "memory")
#define __user_swp_asm(data, addr, res, temp) \
__user_swpX_asm(data, addr, res, temp, "")
#define __user_swpb_asm(data, addr, res, temp) \
__user_swpX_asm(data, addr, res, temp, "b")
#define EXTRACT_REG_NUM(instruction, offset) \
(((instruction) & (0xf << (offset))) >> (offset))
#define RN_OFFSET  16
#define RT_OFFSET  12
#define RT2_OFFSET  0
#define TYPE_SWPB (1 << 22)
static unsigned long swpcounter;
static unsigned long swpbcounter;
static unsigned long abtcounter;
static pid_t         previous_pid;
static int proc_read_status(char *page, char **start, off_t off, int count,
int *eof, void *data)
static void set_segfault(struct pt_regs *regs, unsigned long addr)
static int emulate_swpX(unsigned int address, unsigned int *data,
unsigned int type)
static int swp_handler(struct pt_regs *regs, unsigned int instr)
static struct undef_hook swp_hook = ;
static int __init swp_emulation_init(void)
late_initcall(swp_emulation_init);
