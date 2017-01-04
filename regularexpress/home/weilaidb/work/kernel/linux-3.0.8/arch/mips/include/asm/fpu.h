#define _ASM_FPU_H
struct sigcontext;
struct sigcontext32;
extern void fpu_emulator_init_fpu(void);
extern void _init_fpu(void);
extern void _save_fp(struct task_struct *);
extern void _restore_fp(struct task_struct *);
#define __enable_fpu()							\
do  while (0)
#define __disable_fpu()							\
do  while (0)
#define enable_fpu()							\
do  while (0)
#define disable_fpu()							\
do  while (0)
#define clear_fpu_owner()	clear_thread_flag(TIF_USEDFPU)
static inline int __is_fpu_owner(void)
static inline int is_fpu_owner(void)
static inline void __own_fpu(void)
static inline void own_fpu_inatomic(int restore)
static inline void own_fpu(int restore)
static inline void lose_fpu(int save)
static inline void init_fpu(void)
static inline void save_fp(struct task_struct *tsk)
static inline void restore_fp(struct task_struct *tsk)
static inline fpureg_t *get_fpu_regs(struct task_struct *tsk)
