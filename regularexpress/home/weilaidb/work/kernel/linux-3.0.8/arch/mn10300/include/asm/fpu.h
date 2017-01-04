#define _ASM_FPU_H
extern asmlinkage void fpu_disabled(void);
extern struct task_struct *fpu_state_owner;
#if (THREAD_USING_FPU & ~0xff)
#error THREAD_USING_FPU must be smaller than 0x100.
static inline void set_using_fpu(struct task_struct *tsk)
static inline void clear_using_fpu(struct task_struct *tsk)
#define is_using_fpu(tsk) ((tsk)->thread.fpu_flags & THREAD_USING_FPU)
extern asmlinkage void fpu_kill_state(struct task_struct *);
extern asmlinkage void fpu_exception(struct pt_regs *, enum exception_code);
extern asmlinkage void fpu_init_state(void);
extern asmlinkage void fpu_save(struct fpu_state_struct *);
extern int fpu_setup_sigcontext(struct fpucontext *buf);
extern int fpu_restore_sigcontext(struct fpucontext *buf);
static inline void unlazy_fpu(struct task_struct *tsk)
static inline void exit_fpu(void)
static inline void flush_fpu(void)
extern asmlinkage
void unexpected_fpu_exception(struct pt_regs *, enum exception_code);
#define fpu_exception unexpected_fpu_exception
struct task_struct;
struct fpu_state_struct;
static inline bool is_using_fpu(struct task_struct *tsk)
static inline void set_using_fpu(struct task_struct *tsk)
static inline void clear_using_fpu(struct task_struct *tsk)
static inline void fpu_init_state(void)
static inline void fpu_save(struct fpu_state_struct *s)
static inline void fpu_kill_state(struct task_struct *tsk)
static inline void unlazy_fpu(struct task_struct *tsk)
static inline void exit_fpu(void)
static inline void flush_fpu(void)
static inline int fpu_setup_sigcontext(struct fpucontext *buf)
static inline int fpu_restore_sigcontext(struct fpucontext *buf)
