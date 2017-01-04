#define __ASM_SH_FPU_H
struct task_struct;
static inline void release_fpu(struct pt_regs *regs)
static inline void grab_fpu(struct pt_regs *regs)
extern void save_fpu(struct task_struct *__tsk);
extern void restore_fpu(struct task_struct *__tsk);
extern void fpu_state_restore(struct pt_regs *regs);
extern void __fpu_state_restore(void);
#define save_fpu(tsk)			do  while (0)
#define restore_fpu(tsk)		do  while (0)
#define release_fpu(regs)		do  while (0)
#define grab_fpu(regs)			do  while (0)
#define fpu_state_restore(regs)		do  while (0)
#define __fpu_state_restore(regs)	do  while (0)
struct user_regset;
extern int do_fpu_inst(unsigned short, struct pt_regs *);
extern int init_fpu(struct task_struct *);
extern int fpregs_get(struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
void *kbuf, void __user *ubuf);
static inline void __unlazy_fpu(struct task_struct *tsk, struct pt_regs *regs)
static inline void unlazy_fpu(struct task_struct *tsk, struct pt_regs *regs)
static inline void clear_fpu(struct task_struct *tsk, struct pt_regs *regs)
