# include <asm/sigcontext32.h>
# include <asm/user32.h>
# define save_i387_xstate_ia32		save_i387_xstate
# define restore_i387_xstate_ia32	restore_i387_xstate
# define _fpstate_ia32		_fpstate
# define _xstate_ia32		_xstate
# define sig_xstate_ia32_size   sig_xstate_size
# define fx_sw_reserved_ia32	fx_sw_reserved
# define user_i387_ia32_struct	user_i387_struct
# define user32_fxsr_struct	user_fxsr_struct
# define HAVE_HWFP		(boot_cpu_data.hard_math)
# define HAVE_HWFP		1
static unsigned int		mxcsr_feature_mask __read_mostly = 0xffffffffu;
unsigned int xstate_size;
EXPORT_SYMBOL_GPL(xstate_size);
unsigned int sig_xstate_ia32_size = sizeof(struct _fpstate_ia32);
static struct i387_fxsave_struct fx_scratch __cpuinitdata;
void __cpuinit mxcsr_feature_mask_init(void)
static void __cpuinit init_thread_xstate(void)
void __cpuinit fpu_init(void)
void fpu_finit(struct fpu *fpu)
EXPORT_SYMBOL_GPL(fpu_finit);
int init_fpu(struct task_struct *tsk)
EXPORT_SYMBOL_GPL(init_fpu);
int fpregs_active(struct task_struct *target, const struct user_regset *regset)
int xfpregs_active(struct task_struct *target, const struct user_regset *regset)
int xfpregs_get(struct task_struct *target, const struct user_regset *regset,
unsigned int pos, unsigned int count,
void *kbuf, void __user *ubuf)
int xfpregs_set(struct task_struct *target, const struct user_regset *regset,
unsigned int pos, unsigned int count,
const void *kbuf, const void __user *ubuf)
int xstateregs_get(struct task_struct *target, const struct user_regset *regset,
unsigned int pos, unsigned int count,
void *kbuf, void __user *ubuf)
int xstateregs_set(struct task_struct *target, const struct user_regset *regset,
unsigned int pos, unsigned int count,
const void *kbuf, const void __user *ubuf)
#if defined CONFIG_X86_32 || defined CONFIG_IA32_EMULATION
static inline unsigned short twd_i387_to_fxsr(unsigned short twd)
#define FPREG_ADDR(f, n)	((void *)&(f)->st_space + (n) * 16);
#define FP_EXP_TAG_VALID	0
#define FP_EXP_TAG_ZERO		1
#define FP_EXP_TAG_SPECIAL	2
#define FP_EXP_TAG_EMPTY	3
static inline u32 twd_fxsr_to_i387(struct i387_fxsave_struct *fxsave)
static void
convert_from_fxsr(struct user_i387_ia32_struct *env, struct task_struct *tsk)
static void convert_to_fxsr(struct task_struct *tsk,
const struct user_i387_ia32_struct *env)
int fpregs_get(struct task_struct *target, const struct user_regset *regset,
unsigned int pos, unsigned int count,
void *kbuf, void __user *ubuf)
int fpregs_set(struct task_struct *target, const struct user_regset *regset,
unsigned int pos, unsigned int count,
const void *kbuf, const void __user *ubuf)
static inline int save_i387_fsave(struct _fpstate_ia32 __user *buf)
static int save_i387_fxsave(struct _fpstate_ia32 __user *buf)
static int save_i387_xsave(void __user *buf)
int save_i387_xstate_ia32(void __user *buf)
static inline int restore_i387_fsave(struct _fpstate_ia32 __user *buf)
static int restore_i387_fxsave(struct _fpstate_ia32 __user *buf,
unsigned int size)
static int restore_i387_xsave(void __user *buf)
int restore_i387_xstate_ia32(void __user *buf)
int dump_fpu(struct pt_regs *regs, struct user_i387_struct *fpu)
EXPORT_SYMBOL(dump_fpu);
