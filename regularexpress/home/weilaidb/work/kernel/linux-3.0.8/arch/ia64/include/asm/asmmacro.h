#define _ASM_IA64_ASMMACRO_H
#define ENTRY(name)				\
.align 32;				\
.proc name;				\
name:
#define ENTRY_MIN_ALIGN(name)			\
.align 16;				\
.proc name;				\
name:
#define GLOBAL_ENTRY(name)			\
.global name;				\
ENTRY(name)
#define END(name)				\
.endp name
#define ASM_UNW_PRLG_RP			0x8
#define ASM_UNW_PRLG_PFS		0x4
#define ASM_UNW_PRLG_PSP		0x2
#define ASM_UNW_PRLG_PR			0x1
#define ASM_UNW_PRLG_GRSAVE(ninputs)	(32+(ninputs))
.section "__ex_table", "a"
.previous
# define EX(y,x...)				\
.xdata4 "__ex_table", 99f-., y-.;	\
[99:]	x
# define EXCLR(y,x...)				\
.xdata4 "__ex_table", 99f-., y-.+4;	\
[99:]	x
.section "__mca_table", "a"
.previous
# define MCA_RECOVER_RANGE(y)			\
.xdata4 "__mca_table", y-., 99f-.;	\
[99:]
.section ".data..patch.vtop", "a"
.previous
#define	LOAD_PHYSICAL(pr, reg, obj)		\
[1:](pr)movl reg = obj;				\
.xdata4 ".data..patch.vtop", 1b-.
#define DO_MCKINLEY_E9_WORKAROUND
.section ".data..patch.mckinley_e9", "a"
.previous
# define FSYS_RETURN					\
.xdata4 ".data..patch.mckinley_e9", 1f-.;	\
1:;							\
2:
# define FSYS_RETURN	br.ret.sptk.many b6
.section ".data..patch.phys_stack_reg", "a"
.previous
#define LOAD_PHYS_STACK_REG_SIZE(reg)			\
[1:]	adds reg=IA64_NUM_PHYS_STACK_REG*8+8,r0;	\
.xdata4 ".data..patch.phys_stack_reg", 1b-.
# define TEXT_ALIGN(n)	.align n
# define TEXT_ALIGN(n)
# define dv_serialize_data		.serialize.data
# define dv_serialize_instruction	.serialize.instruction
# define dv_serialize_data
# define dv_serialize_instruction
