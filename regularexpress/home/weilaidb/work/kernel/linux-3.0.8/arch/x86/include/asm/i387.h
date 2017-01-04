#define _ASM_X86_I387_H
extern unsigned int sig_xstate_size;
extern void fpu_init(void);
extern void mxcsr_feature_mask_init(void);
extern int init_fpu(struct task_struct *child);
extern asmlinkage void math_state_restore(void);
extern void __math_state_restore(void);
extern int dump_fpu(struct pt_regs *, struct user_i387_struct *);
extern user_regset_active_fn fpregs_active, xfpregs_active;
extern user_regset_get_fn fpregs_get, xfpregs_get, fpregs_soft_get,
xstateregs_get;
extern user_regset_set_fn fpregs_set, xfpregs_set, fpregs_soft_set,
xstateregs_set;
#define xstateregs_active	fpregs_active
extern struct _fpx_sw_bytes fx_sw_reserved;
extern unsigned int sig_xstate_ia32_size;
extern struct _fpx_sw_bytes fx_sw_reserved_ia32;
struct _fpstate_ia32;
struct _xstate_ia32;
extern int save_i387_xstate_ia32(void __user *buf);
extern int restore_i387_xstate_ia32(void __user *buf);
extern void finit_soft_fpu(struct i387_soft_struct *soft);
static inline void finit_soft_fpu(struct i387_soft_struct *soft)
#define X87_FSW_ES (1 << 7)
static __always_inline __pure bool use_xsaveopt(void)
static __always_inline __pure bool use_xsave(void)
static __always_inline __pure bool use_fxsr(void)
extern void __sanitize_i387_state(struct task_struct *);
static inline void sanitize_i387_state(struct task_struct *tsk)
static inline int fxrstor_checking(struct i387_fxsave_struct *fx)
static inline int fxsave_user(struct i387_fxsave_struct __user *fx)
static inline void fpu_fxsave(struct fpu *fpu)
static inline int fxrstor_checking(struct i387_fxsave_struct *fx)
static inline void fpu_fxsave(struct fpu *fpu)
#define safe_address (__per_cpu_offset[0])
#define safe_address (kstat_cpu(0).cpustat.user)
static inline void fpu_save_init(struct fpu *fpu)
static inline void __save_init_fpu(struct task_struct *tsk)
static inline int fpu_fxrstor_checking(struct fpu *fpu)
static inline int fpu_restore_checking(struct fpu *fpu)
static inline int restore_fpu_checking(struct task_struct *tsk)
extern int save_i387_xstate(void __user *buf);
extern int restore_i387_xstate(void __user *buf);
static inline void __unlazy_fpu(struct task_struct *tsk)
static inline void __clear_fpu(struct task_struct *tsk)
static inline void kernel_fpu_begin(void)
static inline void kernel_fpu_end(void)
static inline bool irq_fpu_usable(void)
static inline int irq_ts_save(void)
static inline void irq_ts_restore(int TS_state)
static inline void save_init_fpu(struct task_struct *tsk)
static inline void unlazy_fpu(struct task_struct *tsk)
static inline void clear_fpu(struct task_struct *tsk)
static inline unsigned short get_fpu_cwd(struct task_struct *tsk)
static inline unsigned short get_fpu_swd(struct task_struct *tsk)
static inline unsigned short get_fpu_mxcsr(struct task_struct *tsk)
static bool fpu_allocated(struct fpu *fpu)
static inline int fpu_alloc(struct fpu *fpu)
static inline void fpu_free(struct fpu *fpu)
static inline void fpu_copy(struct fpu *dst, struct fpu *src)
extern void fpu_finit(struct fpu *fpu);
