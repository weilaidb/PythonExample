#define __BAD__ FPU_illegal
#define _d9_d8_ fstp_i
#define _dc_d0_ fcom_st
#define _dc_d8_ fcompst
#define _dd_c8_ fxch_i
#define _de_d0_ fcompst
#define _df_c0_ ffreep
#define _df_c8_ fxch_i
#define _df_d0_ fstp_i
#define _df_d8_ fstp_i
static FUNC const st_instr_table[64] = ;
static FUNC const st_instr_table[64] = ;
#define _NONE_ 0
#define _REG0_ 1
#define _REGI_ 2
#define _REGi_ 0
#define _PUSH_ 3
#define _null_ 4
#define _REGIi 5
#define _REGIp 6
#define _REGIc 0
#define _REGIn 0
static u_char const type_table[64] = ;
static u_char const type_table[64] = ;
u_char emulating = 0;
static int valid_prefix(u_char *Byte, u_char __user ** fpu_eip,
overrides * override);
void math_emulate(struct math_emu_info *info)
static int valid_prefix(u_char *Byte, u_char __user **fpu_eip,
overrides * override)
void math_abort(struct math_emu_info *info, unsigned int signal)
#define S387 ((struct i387_soft_struct *)s387)
#define sstatus_word() \
((S387->swd & ~SW_Top & 0xffff) | ((S387->ftop << SW_Top_Shift) & SW_Top))
int fpregs_soft_set(struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
const void *kbuf, const void __user *ubuf)
int fpregs_soft_get(struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
void *kbuf, void __user *ubuf)
