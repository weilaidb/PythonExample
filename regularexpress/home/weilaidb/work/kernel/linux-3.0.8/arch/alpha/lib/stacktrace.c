typedef unsigned int instr;
#define MAJOR_OP	0xfc000000
#define LDA_OP		0x20000000
#define STQ_OP		0xb4000000
#define BR_OP		0xc0000000
#define STK_ALLOC_1	0x23de8000
#define STK_ALLOC_1M	0xffff8000
#define STK_ALLOC_2	0x43c0153e
#define STK_ALLOC_2M	0xffe01fff
#define MEM_REG		0x03e00000
#define MEM_BASE	0x001f0000
#define MEM_OFF		0x0000ffff
#define MEM_OFF_SIGN	0x00008000
#define	BASE_SP		0x001e0000
#define STK_ALLOC_MATCH(INSTR)			\
(((INSTR) & STK_ALLOC_1M) == STK_ALLOC_1	\
|| ((INSTR) & STK_ALLOC_2M) == STK_ALLOC_2)
#define STK_PUSH_MATCH(INSTR) \
(((INSTR) & (MAJOR_OP | MEM_BASE | MEM_OFF_SIGN)) == (STQ_OP | BASE_SP))
#define MEM_OP_OFFSET(INSTR) \
(((long)((INSTR) & MEM_OFF) << 48) >> 48)
#define MEM_OP_REG(INSTR) \
(((INSTR) & MEM_REG) >> 22)
#define BB_END(INSTR)						\
(((instr)(INSTR) >= BR_OP) | ((instr)(INSTR) < LDA_OP) |	\
((((instr)(INSTR) ^ 0x60000000) < 0x20000000) &		\
(((instr)(INSTR) & 0x0c000000) != 0)))
#define IS_KERNEL_TEXT(PC) ((unsigned long)(PC) > START_ADDR)
static char reg_name[][4] = ;
static instr *
display_stored_regs(instr * pro_pc, unsigned char * sp)
static instr *
seek_prologue(instr * pc)
static long
stack_increment(instr * prologue_pc)
void
stacktrace(void)
