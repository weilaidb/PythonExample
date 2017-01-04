#define _LINUX_REGSET_H	1
struct task_struct;
struct user_regset;
typedef int user_regset_active_fn(struct task_struct *target,
const struct user_regset *regset);
typedef int user_regset_get_fn(struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
void *kbuf, void __user *ubuf);
typedef int user_regset_set_fn(struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
const void *kbuf, const void __user *ubuf);
typedef int user_regset_writeback_fn(struct task_struct *target,
const struct user_regset *regset,
int immediate);
struct user_regset ;
struct user_regset_view ;
const struct user_regset_view *task_user_regset_view(struct task_struct *tsk);
static inline int user_regset_copyout(unsigned int *pos, unsigned int *count,
void **kbuf,
void __user **ubuf, const void *data,
const int start_pos, const int end_pos)
static inline int user_regset_copyin(unsigned int *pos, unsigned int *count,
const void **kbuf,
const void __user **ubuf, void *data,
const int start_pos, const int end_pos)
static inline int user_regset_copyout_zero(unsigned int *pos,
unsigned int *count,
void **kbuf, void __user **ubuf,
const int start_pos,
const int end_pos)
static inline int user_regset_copyin_ignore(unsigned int *pos,
unsigned int *count,
const void **kbuf,
const void __user **ubuf,
const int start_pos,
const int end_pos)
static inline int copy_regset_to_user(struct task_struct *target,
const struct user_regset_view *view,
unsigned int setno,
unsigned int offset, unsigned int size,
void __user *data)
static inline int copy_regset_from_user(struct task_struct *target,
const struct user_regset_view *view,
unsigned int setno,
unsigned int offset, unsigned int size,
const void __user *data)
